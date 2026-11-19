#include "recomp.h"
#include "rec_mod.h"

void f_545724(void) {
  LOAD_REGS();
L_545724: /* 545724: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 545727: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54572c: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 54572f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545730: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 545733: call 0x554df6 */
  esp -= 4; W32(esp, 0x545738u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_545738(); return;
}

void f_545738(void) {
  LOAD_REGS();
L_545738: /* 545738: push 0x56ebd8 */
  { uint32_t v = 0x56ebd8u; esp -= 4; W32(esp, v); }
/* 54573d: push 0x5ab6b0 */
  { uint32_t v = 0x5ab6b0u; esp -= 4; W32(esp, v); }
/* 545742: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x545747u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 545747: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54574a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54574c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54574e: call 0x554df6 */
  esp -= 4; W32(esp, 0x545753u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_545753: guest_badaddr(0x545753); return;
}

void f_545ac0(void) {
  LOAD_REGS();
L_545ac0: /* 545ac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 545ac1: mov ebp, esp */
  ebp = esp;
/* 545ac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 545ac5: push 0x5595a0 */
  { uint32_t v = 0x5595a0u; esp -= 4; W32(esp, v); }
/* 545aca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 545ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545ad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 545ad8: sub esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 545ade: mov eax, dword ptr [0x69f448] */
  eax = R32((uint32_t)(0x69f448u));
/* 545ae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545ae4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545ae5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545ae6: xor edi, edi */
  edi = 0;
/* 545ae8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545aea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 545aed: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 545af0: jne 0x545b09 */
  if (!zf) goto L_545b09;
L_545af2: /* 545af2: push 0x8f3 */
  { uint32_t v = 0x8f3u; esp -= 4; W32(esp, v); }
/* 545af7: push 0x5ab6d8 */
  { uint32_t v = 0x5ab6d8u; esp -= 4; W32(esp, v); }
/* 545afc: push 0x5ab6e4 */
  { uint32_t v = 0x5ab6e4u; esp -= 4; W32(esp, v); }
/* 545b01: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x545b06u); SPILL(); f_4e33a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545b06: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_545b09: /* 545b09: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 545b0c: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545b0e: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 545b11: je 0x545b39 */
  if (zf) goto L_545b39;
L_545b13: /* 545b13: mov esi, dword ptr [0x69ff64] */
  esi = R32((uint32_t)(0x69ff64u));
/* 545b19: mov edx, dword ptr [0x69ff60] */
  edx = R32((uint32_t)(0x69ff60u));
/* 545b1f: xor ecx, ecx */
  ecx = 0;
L_545b21: /* 545b21: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545b23: jge 0x545b39 */
  if ((sf == of)) goto L_545b39;
L_545b25: /* 545b25: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545b27: jne 0x545b39 */
  if (!zf) goto L_545b39;
L_545b29: /* 545b29: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545b2c: cmp dword ptr [eax + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545b2f: jne 0x545b36 */
  if (!zf) goto L_545b36;
L_545b31: /* 545b31: mov edi, eax */
  edi = eax;
/* 545b33: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_545b36: /* 545b36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545b37: jmp 0x545b21 */
  goto L_545b21;
L_545b39: /* 545b39: mov ax, word ptr [0x69f4d0] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x69f4d0u))) & 0xffffu);
/* 545b3f: mov word ptr [ebp - 0x220], ax */
  W16((uint32_t)(ebp + 0xfffffde0u), (eax & 0xffffu));
/* 545b46: xor eax, eax */
  eax = 0;
/* 545b48: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 545b4d: lea edi, [ebp - 0x21e] */
  edi = (uint32_t)(ebp + 0xfffffde2u);
/* 545b53: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 545b55: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 545b57: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545b5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545b5c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 545b60: je 0x545b7b */
  if (zf) goto L_545b7b;
L_545b62: /* 545b62: lea ecx, [ebp - 0x220] */
  ecx = (uint32_t)(ebp + 0xfffffde0u);
/* 545b68: push 0x69f4d4 */
  { uint32_t v = 0x69f4d4u; esp -= 4; W32(esp, v); }
/* 545b6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545b6e: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x545b73u); SPILL(); f_4e27d9(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545b73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545b76: jmp 0x545dcc */
  goto L_545dcc;
L_545b7b: /* 545b7b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545b7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545b80: jne 0x545c3c */
  if (!zf) goto L_545c3c;
L_545b86: /* 545b86: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545b88: jne 0x545ba6 */
  if (!zf) goto L_545ba6;
L_545b8a: /* 545b8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545b8b: push 0x5ab6f8 */
  { uint32_t v = 0x5ab6f8u; esp -= 4; W32(esp, v); }
/* 545b90: push 0x5ab704 */
  { uint32_t v = 0x5ab704u; esp -= 4; W32(esp, v); }
/* 545b95: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545b9au); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545b9a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545b9e: call 0x4e3418 */
  esp -= 4; W32(esp, 0x545ba3u); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545ba3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_545ba6: /* 545ba6: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 545ba9: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545baf: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 545bb2: lea edx, [ebp - 0x220] */
  edx = (uint32_t)(ebp + 0xfffffde0u);
/* 545bb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545bb9: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545bbc: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545bc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545bc1: call 0x4e368e */
  esp -= 4; W32(esp, 0x545bc6u); SPILL(); f_4e368e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545bc6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545bc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545bcb: jne 0x545dcf */
  if (!zf) goto L_545dcf;
L_545bd1: /* 545bd1: test byte ptr [ebp + 0x10], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 545bd5: je 0x545c0a */
  if (zf) goto L_545c0a;
L_545bd7: /* 545bd7: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 545bda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_545be0: /* 545be0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545be2: je 0x545c0a */
  if (zf) goto L_545c0a;
L_545be4: /* 545be4: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545be9: je 0x545bf0 */
  if (zf) goto L_545bf0;
L_545beb: /* 545beb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 545bee: jmp 0x545be0 */
  goto L_545be0;
L_545bf0: /* 545bf0: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 545bf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545bf5: je 0x545c0a */
  if (zf) goto L_545c0a;
L_545bf7: /* 545bf7: xor eax, eax */
  eax = 0;
/* 545bf9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 545bfc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 545c03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 545c04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 545c05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 545c06: mov esp, ebp */
  esp = ebp;
/* 545c08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 545c09: ret  */
  esp += 4; SPILL(); return;
L_545c0a: /* 545c0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545c0c: push 0x5ab730 */
  { uint32_t v = 0x5ab730u; esp -= 4; W32(esp, v); }
/* 545c11: push 0x5ab73c */
  { uint32_t v = 0x5ab73cu; esp -= 4; W32(esp, v); }
/* 545c16: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545c1bu); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545c1b: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 545c1e: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 545c24: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 545c27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545c2a: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 545c2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545c2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545c2f: call 0x4e3418 */
  esp -= 4; W32(esp, 0x545c34u); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545c34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545c37: jmp 0x545dcf */
  goto L_545dcf;
L_545c3c: /* 545c3c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 545c3f: lea edx, [ebp - 0x220] */
  edx = (uint32_t)(ebp + 0xfffffde0u);
/* 545c45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545c46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545c47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545c48: call 0x4e368e */
  esp -= 4; W32(esp, 0x545c4du); SPILL(); f_4e368e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545c4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545c50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545c52: jne 0x545c71 */
  if (!zf) goto L_545c71;
L_545c54: /* 545c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545c55: push 0x5ab75c */
  { uint32_t v = 0x5ab75cu; esp -= 4; W32(esp, v); }
/* 545c5a: push 0x5ab768 */
  { uint32_t v = 0x5ab768u; esp -= 4; W32(esp, v); }
/* 545c5f: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545c64u); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545c64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545c67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545c68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545c69: call 0x4e3418 */
  esp -= 4; W32(esp, 0x545c6eu); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545c6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_545c71: /* 545c71: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 545c76: lea ecx, [ebp - 0x420] */
  ecx = (uint32_t)(ebp + 0xfffffbe0u);
/* 545c7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545c7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545c7e: lea esi, [ebp - 0x420] */
  esi = (uint32_t)(ebp + 0xfffffbe0u);
/* 545c84: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x545c89u); SPILL(); f_4e2be4(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545c89: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545c8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545c90: /* 545c90: push 0x5ab784 */
  { uint32_t v = 0x5ab784u; esp -= 4; W32(esp, v); }
/* 545c95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545c96: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545c9bu); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545c9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545c9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545ca0: je 0x545cc4 */
  if (zf) goto L_545cc4;
L_545ca2: /* 545ca2: push 0x5ab788 */
  { uint32_t v = 0x5ab788u; esp -= 4; W32(esp, v); }
/* 545ca7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545ca8: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545cadu); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545cad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545cb0: push 0x5ab78c */
  { uint32_t v = 0x5ab78cu; esp -= 4; W32(esp, v); }
/* 545cb5: mov esi, eax */
  esi = eax;
/* 545cb7: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545cbcu); SPILL(); f_4e19f1(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545cbc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545cbf: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 545cc2: jmp 0x545c90 */
  goto L_545c90;
L_545cc4: /* 545cc4: push 0x5ab790 */
  { uint32_t v = 0x5ab790u; esp -= 4; W32(esp, v); }
/* 545cc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545cca: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545ccfu); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545ccf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545cd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545cd4: je 0x545ce9 */
  if (zf) goto L_545ce9;
L_545cd6: /* 545cd6: push 0x5ab794 */
  { uint32_t v = 0x5ab794u; esp -= 4; W32(esp, v); }
/* 545cdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545cdc: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545ce1u); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545ce1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545ce4: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 545ce7: jmp 0x545c90 */
  goto L_545c90;
L_545ce9: /* 545ce9: push 0x5ab798 */
  { uint32_t v = 0x5ab798u; esp -= 4; W32(esp, v); }
/* 545cee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545cef: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545cf4u); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545cf4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545cf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545cf9: je 0x545d0e */
  if (zf) goto L_545d0e;
L_545cfb: /* 545cfb: push 0x5ab79c */
  { uint32_t v = 0x5ab79cu; esp -= 4; W32(esp, v); }
/* 545d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545d01: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545d06u); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545d06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545d09: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 545d0c: jmp 0x545c90 */
  goto L_545c90;
L_545d0e: /* 545d0e: push 0x5ab7a0 */
  { uint32_t v = 0x5ab7a0u; esp -= 4; W32(esp, v); }
/* 545d13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545d14: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545d19u); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545d19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545d1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545d1e: je 0x545d33 */
  if (zf) goto L_545d33;
L_545d20: /* 545d20: push 0x5ab7a4 */
  { uint32_t v = 0x5ab7a4u; esp -= 4; W32(esp, v); }
/* 545d25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545d26: call 0x4e2220 */
  esp -= 4; W32(esp, 0x545d2bu); SPILL(); f_4e2220(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545d2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545d2e: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
L_545d33: /* 545d33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545d34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545d36: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x545d3bu); SPILL(); f_4e1cb2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545d3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545d3e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545d40: mov esi, eax */
  esi = eax;
/* 545d42: jne 0x545d91 */
  if (!zf) goto L_545d91;
L_545d44: /* 545d44: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545d46: jne 0x545d65 */
  if (!zf) goto L_545d65;
L_545d48: /* 545d48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545d49: push 0x5ab7a8 */
  { uint32_t v = 0x5ab7a8u; esp -= 4; W32(esp, v); }
/* 545d4e: push 0x5ab7b4 */
  { uint32_t v = 0x5ab7b4u; esp -= 4; W32(esp, v); }
/* 545d53: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545d58u); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545d58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545d5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545d5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545d5d: call 0x4e3418 */
  esp -= 4; W32(esp, 0x545d62u); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545d62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_545d65: /* 545d65: mov edx, dword ptr [0x69ff60] */
  edx = R32((uint32_t)(0x69ff60u));
/* 545d6b: mov ebx, esi */
  ebx = esi;
/* 545d6d: mov esi, dword ptr [0x69ff64] */
  esi = R32((uint32_t)(0x69ff64u));
/* 545d73: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 545d76: xor ecx, ecx */
  ecx = 0;
L_545d78: /* 545d78: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545d7a: jge 0x545dcc */
  if ((sf == of)) goto L_545dcc;
L_545d7c: /* 545d7c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545d7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545d81: jne 0x545dcc */
  if (!zf) goto L_545dcc;
L_545d83: /* 545d83: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545d86: cmp dword ptr [eax + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545d89: jne 0x545d8e */
  if (!zf) goto L_545d8e;
L_545d8b: /* 545d8b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_545d8e: /* 545d8e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545d8f: jmp 0x545d78 */
  goto L_545d78;
L_545d91: /* 545d91: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545d93: je 0x545dcc */
  if (zf) goto L_545dcc;
L_545d95: /* 545d95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545d97: mov ecx, esi */
  ecx = esi;
/* 545d99: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545d9eu); SPILL(); f_4e27a2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545d9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545da0: mov ecx, ebx */
  ecx = ebx;
/* 545da2: mov esi, eax */
  esi = eax;
/* 545da4: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545da9u); SPILL(); f_4e27a2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545da9: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 545daf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545db1: push 0x5ab7d8 */
  { uint32_t v = 0x5ab7d8u; esp -= 4; W32(esp, v); }
/* 545db6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545db7: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545dbcu); SPILL(); f_4e2d4c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545dbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545dbf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 545dc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545dc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545dc4: call 0x4e3d46 */
  esp -= 4; W32(esp, 0x545dc9u); SPILL(); f_4e3d46(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545dc9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_545dcc: /* 545dcc: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
L_545dcf: /* 545dcf: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 545dd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545dd4: je 0x545e0f */
  if (zf) goto L_545e0f;
L_545dd6: /* 545dd6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 545dd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545dd9: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x545ddfu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD(); }
/* 545ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545de1: jne 0x545e0f */
  if (!zf) goto L_545e0f;
L_545de3: /* 545de3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545de4: push 0x5ab820 */
  { uint32_t v = 0x5ab820u; esp -= 4; W32(esp, v); }
/* 545de9: push 0x5ab82c */
  { uint32_t v = 0x5ab82cu; esp -= 4; W32(esp, v); }
/* 545dee: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545df3u); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545df3: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 545df6: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 545dfc: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 545dff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545e02: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 545e05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545e06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545e07: call 0x4e3418 */
  esp -= 4; W32(esp, 0x545e0cu); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545e0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_545e0f: /* 545e0f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545e14: jne 0x545e5a */
  if (!zf) goto L_545e5a;
L_545e16: /* 545e16: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 545e1c: xor eax, eax */
  eax = 0;
/* 545e1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545e20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545e21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545e22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545e24: mov eax, dword ptr [0x69f458] */
  eax = R32((uint32_t)(0x69f458u));
/* 545e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545e2a: push 0x69fa30 */
  { uint32_t v = 0x69fa30u; esp -= 4; W32(esp, v); }
/* 545e2f: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x545e34u); SPILL(); f_4e2b1c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545e34: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545e39: je 0x545e53 */
  if (zf) goto L_545e53;
L_545e3b: /* 545e3b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 545e3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545e3f: lea edx, [ebp - 0x220] */
  edx = (uint32_t)(ebp + 0xfffffde0u);
/* 545e45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545e46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545e47: mov ecx, eax */
  ecx = eax;
/* 545e49: call 0x4e2108 */
  esp -= 4; W32(esp, 0x545e4eu); SPILL(); f_4e2108(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545e4e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 545e51: jmp 0x545e5a */
  goto L_545e5a;
L_545e53: /* 545e53: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_545e5a: /* 545e5a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545e5c: je 0x545ead */
  if (zf) goto L_545ead;
L_545e5e: /* 545e5e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545e61: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 545e64: cmp ecx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545e66: jne 0x545e80 */
  if (!zf) goto L_545e80;
L_545e68: /* 545e68: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 545e6b: cmp edx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545e6e: jne 0x545e80 */
  if (!zf) goto L_545e80;
L_545e70: /* 545e70: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 545e73: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545e76: jne 0x545e80 */
  if (!zf) goto L_545e80;
L_545e78: /* 545e78: mov edx, dword ptr [eax + 0x5c] */
  edx = R32((uint32_t)(eax + 0x5cu));
/* 545e7b: cmp edx, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545e7e: je 0x545ead */
  if (zf) goto L_545ead;
L_545e80: /* 545e80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545e82: push 0x5ab83c */
  { uint32_t v = 0x5ab83cu; esp -= 4; W32(esp, v); }
/* 545e87: push 0x5ab848 */
  { uint32_t v = 0x5ab848u; esp -= 4; W32(esp, v); }
/* 545e8c: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545e91u); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545e91: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 545e94: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 545e9a: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 545e9d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545ea0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 545ea3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545ea4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545ea5: call 0x4e3418 */
  esp -= 4; W32(esp, 0x545eaau); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x545eadu: guest_unwind_done(); RELOAD(); goto L_545ead; } return; } RELOAD();
/* 545eaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_545ead: /* 545ead: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 545eb0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545eb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 545eb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 545eb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 545ebc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 545ebd: mov esp, ebp */
  esp = ebp;
/* 545ebf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 545ec0: ret  */
  esp += 4; SPILL(); return;
}

void f_545ec1(void) {
  LOAD_REGS();
L_545ec1: /* 545ec1: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 545ec6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545ec8: je 0x545f52 */
  if (zf) goto L_545f52;
L_545ece: /* 545ece: mov eax, dword ptr [0x5b2120] */
  eax = R32((uint32_t)(0x5b2120u));
/* 545ed3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545ed5: jne 0x545f52 */
  if (!zf) goto L_545f52;
L_545ed7: /* 545ed7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545eda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545edc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 545edf: je 0x545ee5 */
  if (zf) goto L_545ee5;
L_545ee1: /* 545ee1: mov eax, esi */
  eax = esi;
/* 545ee3: jmp 0x545efb */
  goto L_545efb;
L_545ee5: /* 545ee5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545ee7: je 0x545ef6 */
  if (zf) goto L_545ef6;
L_545ee9: /* 545ee9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545eeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545eed: mov ecx, edi */
  ecx = edi;
/* 545eef: call 0x4e2cde */
  esp -= 4; W32(esp, 0x545ef4u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 545ef4: jmp 0x545efb */
  goto L_545efb;
L_545ef6: /* 545ef6: mov eax, 0x5ab868 */
  eax = 0x5ab868u;
L_545efb: /* 545efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545efe: call 0x4e29a5 */
  esp -= 4; W32(esp, 0x545f03u); SPILL(); f_4e29a5(); if (g_unwind) return; RELOAD();
/* 545f03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545f06: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545f08: jne 0x545f23 */
  if (!zf) goto L_545f23;
L_545f0a: /* 545f0a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545f0c: je 0x545f1e */
  if (zf) goto L_545f1e;
L_545f0e: /* 545f0e: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 545f11: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 545f16: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 545f19: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 545f1c: jmp 0x545f23 */
  goto L_545f23;
L_545f1e: /* 545f1e: mov esi, 0x5ab874 */
  esi = 0x5ab874u;
L_545f23: /* 545f23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545f25: push 0x5ab880 */
  { uint32_t v = 0x5ab880u; esp -= 4; W32(esp, v); }
/* 545f2a: push 0x5ab88c */
  { uint32_t v = 0x5ab88cu; esp -= 4; W32(esp, v); }
/* 545f2f: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545f34u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 545f34: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545f37: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 545f3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545f40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545f42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545f43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545f44: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545f49u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545f49: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545f4c: mov eax, 0x545ead */
  eax = 0x545eadu;
/* 545f51: ret  */
  esp += 4; SPILL(); return;
L_545f52: /* 545f52: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545f55: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545f57: jne 0x545f76 */
  if (!zf) goto L_545f76;
L_545f59: /* 545f59: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 545f5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545f5e: je 0x545f71 */
  if (zf) goto L_545f71;
L_545f60: /* 545f60: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 545f63: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545f69: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 545f6c: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 545f6f: jmp 0x545f76 */
  goto L_545f76;
L_545f71: /* 545f71: mov esi, 0x5ab8a4 */
  esi = 0x5ab8a4u;
L_545f76: /* 545f76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545f78: push 0x5ab8b0 */
  { uint32_t v = 0x5ab8b0u; esp -= 4; W32(esp, v); }
/* 545f7d: push 0x5ab8bc */
  { uint32_t v = 0x5ab8bcu; esp -= 4; W32(esp, v); }
/* 545f82: call 0x4e1613 */
  esp -= 4; W32(esp, 0x545f87u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 545f87: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545f8a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 545f8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545f90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545f91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545f92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545f93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545f94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545f95: call 0x4e455c */
  esp -= 4; W32(esp, 0x545f9au); SPILL(); f_4e455c(); if (g_unwind) return; RELOAD();
/* 545f9a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545f9d: mov eax, 0x545ead */
  eax = 0x545eadu;
/* 545fa2: ret  */
  esp += 4; SPILL(); return;
}

void f_545fa3(void) {
  LOAD_REGS();
L_545fa3: /* 545fa3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 545fa6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 545fab: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 545fae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545faf: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 545fb2: call 0x554df6 */
  esp -= 4; W32(esp, 0x545fb7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_545fb7(); return;
}

void f_545fb7(void) {
  LOAD_REGS();
L_545fb7: /* 545fb7: push 0x56ec18 */
  { uint32_t v = 0x56ec18u; esp -= 4; W32(esp, v); }
/* 545fbc: push 0x5ab8d4 */
  { uint32_t v = 0x5ab8d4u; esp -= 4; W32(esp, v); }
/* 545fc1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x545fc6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 545fc6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545fc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545fcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545fcd: call 0x554df6 */
  esp -= 4; W32(esp, 0x545fd2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_545fd2: guest_badaddr(0x545fd2); return;
}

void f_546130(void) {
  LOAD_REGS();
L_546130: /* 546130: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 546131: mov ebp, esp */
  ebp = esp;
/* 546133: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 546135: push 0x5595b8 */
  { uint32_t v = 0x5595b8u; esp -= 4; W32(esp, v); }
/* 54613a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 546140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546141: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 546148: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54614b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54614e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54614f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546150: xor esi, esi */
  esi = 0;
/* 546152: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546154: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546155: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 546158: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 54615b: jne 0x546174 */
  if (!zf) goto L_546174;
L_54615d: /* 54615d: push 0x9ac */
  { uint32_t v = 0x9acu; esp -= 4; W32(esp, v); }
/* 546162: push 0x5ab994 */
  { uint32_t v = 0x5ab994u; esp -= 4; W32(esp, v); }
/* 546167: push 0x5ab9a0 */
  { uint32_t v = 0x5ab9a0u; esp -= 4; W32(esp, v); }
/* 54616c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x546171u); SPILL(); f_4e33a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 546171: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546174: /* 546174: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546177: jne 0x546190 */
  if (!zf) goto L_546190;
L_546179: /* 546179: push 0x9ad */
  { uint32_t v = 0x9adu; esp -= 4; W32(esp, v); }
/* 54617e: push 0x5ab9ac */
  { uint32_t v = 0x5ab9acu; esp -= 4; W32(esp, v); }
/* 546183: push 0x5ab9b8 */
  { uint32_t v = 0x5ab9b8u; esp -= 4; W32(esp, v); }
/* 546188: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54618du); SPILL(); f_4e33a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 54618d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546190: /* 546190: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 546193: call 0x4e3d50 */
  esp -= 4; W32(esp, 0x546198u); SPILL(); f_4e3d50(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 546198: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54619a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54619c: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 54619f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5461a0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 5461a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5461a4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5461a8: call 0x4e3341 */
  esp -= 4; W32(esp, 0x5461adu); SPILL(); f_4e3341(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 5461ad: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 5461b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5461b3: mov eax, edi */
  eax = edi;
L_5461b5: /* 5461b5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5461b7: je 0x5461c4 */
  if (zf) goto L_5461c4;
L_5461b9: /* 5461b9: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 5461bc: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5461be: je 0x5461c4 */
  if (zf) goto L_5461c4;
L_5461c0: /* 5461c0: mov eax, ecx */
  eax = ecx;
/* 5461c2: jmp 0x5461b5 */
  goto L_5461b5;
L_5461c4: /* 5461c4: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 5461c7: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5461ca: jne 0x5461e7 */
  if (!zf) goto L_5461e7;
L_5461cc: /* 5461cc: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 5461cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5461d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5461d2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 5461d5: mov ecx, ebx */
  ecx = ebx;
/* 5461d7: or ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 5461da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5461db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5461dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5461dd: call 0x4e43b8 */
  esp -= 4; W32(esp, 0x5461e2u); SPILL(); f_4e43b8(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 5461e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5461e5: mov esi, eax */
  esi = eax;
L_5461e7: /* 5461e7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5461e9: je 0x54620f */
  if (zf) goto L_54620f;
L_5461eb: /* 5461eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5461ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5461ee: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 5461f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5461f2: mov ecx, esp */
  ecx = esp;
/* 5461f4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 5461f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5461f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5461fa: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5461ffu); SPILL(); f_4e36a7(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 5461ff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 546202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546203: mov ecx, esi */
  ecx = esi;
/* 546205: call 0x4e30ad */
  esp -= 4; W32(esp, 0x54620au); SPILL(); f_4e30ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 54620a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54620d: jmp 0x546212 */
  goto L_546212;
L_54620f: /* 54620f: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_546212: /* 546212: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 546215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546217: jne 0x546278 */
  if (!zf) goto L_546278;
L_546219: /* 546219: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54621c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54621e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54621f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546220: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546221: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x546226u); SPILL(); f_4e3c65(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 546226: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546229: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54622b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54622e: jne 0x546278 */
  if (!zf) goto L_546278;
L_546230: /* 546230: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546232: je 0x546241 */
  if (zf) goto L_546241;
L_546234: /* 546234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546236: mov ecx, edi */
  ecx = edi;
/* 546238: call 0x4e2cde */
  esp -= 4; W32(esp, 0x54623du); SPILL(); f_4e2cde(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 54623d: mov esi, eax */
  esi = eax;
/* 54623f: jmp 0x546246 */
  goto L_546246;
L_546241: /* 546241: mov esi, 0x5ab9c0 */
  esi = 0x5ab9c0u;
L_546246: /* 546246: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546248: push 0x5ab9cc */
  { uint32_t v = 0x5ab9ccu; esp -= 4; W32(esp, v); }
/* 54624d: push 0x5ab9d8 */
  { uint32_t v = 0x5ab9d8u; esp -= 4; W32(esp, v); }
/* 546252: call 0x4e1613 */
  esp -= 4; W32(esp, 0x546257u); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 546257: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 54625a: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 54625d: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546263: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 546266: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546269: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54626a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54626b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54626e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54626f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546270: call 0x4e3418 */
  esp -= 4; W32(esp, 0x546275u); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
/* 546275: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546278: /* 546278: call 0x4e375b */
  esp -= 4; W32(esp, 0x54627du); SPILL(); f_4e375b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x54627du: guest_unwind_done(); RELOAD(); goto L_54627d; } return; } RELOAD();
L_54627d: /* 54627d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 546280: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 546283: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54628a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54628b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54628c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54628d: mov esp, ebp */
  esp = ebp;
/* 54628f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 546290: ret  */
  esp += 4; SPILL(); return;
}

void f_546291(void) {
  LOAD_REGS();
L_546291: /* 546291: call 0x4e375b */
  esp -= 4; W32(esp, 0x546296u); SPILL(); f_4e375b(); if (g_unwind) return; RELOAD();
/* 546296: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 546299: xor edi, edi */
  edi = 0;
/* 54629b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54629d: je 0x54636c */
  if (zf) goto L_54636c;
L_5462a3: /* 5462a3: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 5462a6: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5462a9: jne 0x54635b */
  if (!zf) goto L_54635b;
L_5462af: /* 5462af: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 5462b2: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5462b4: jne 0x54635b */
  if (!zf) goto L_54635b;
L_5462ba: /* 5462ba: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 5462bd: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 5462c0: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 5462c3: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 5462c6: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 5462c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5462ca: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5462cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5462ce: mov ecx, dword ptr [0x69b43c] */
  ecx = R32((uint32_t)(0x69b43cu));
/* 5462d4: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5462d8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5462db: call 0x4e2833 */
  esp -= 4; W32(esp, 0x5462e0u); SPILL(); f_4e2833(); if (g_unwind) return; RELOAD();
/* 5462e0: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 5462e3: xor eax, eax */
  eax = 0;
/* 5462e5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_5462e8: /* 5462e8: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5462eb: jge 0x54634d */
  if ((sf == of)) goto L_54634d;
L_5462ed: /* 5462ed: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5462f0: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 5462f3: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5462f9: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5462fc: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5462ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546300: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546302: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x546307u); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 546307: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 54630a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 54630d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546310: mov esi, eax */
  esi = eax;
/* 546312: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 546315: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546316: or eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54631b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54631c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54631d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54631e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54631f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546320: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 546323: call 0x4e302b */
  esp -= 4; W32(esp, 0x546328u); SPILL(); f_4e302b(); if (g_unwind) return; RELOAD();
/* 546328: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54632b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54632d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 546330: je 0x546344 */
  if (zf) goto L_546344;
L_546332: /* 546332: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546335: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 546339: call 0x4e2892 */
  esp -= 4; W32(esp, 0x54633eu); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 54633e: mov eax, 0x54627d */
  eax = 0x54627du;
/* 546343: ret  */
  esp += 4; SPILL(); return;
L_546344: /* 546344: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546347: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 546348: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54634b: jmp 0x5462e8 */
  goto L_5462e8;
L_54634d: /* 54634d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546350: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 546354: call 0x4e2892 */
  esp -= 4; W32(esp, 0x546359u); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 546359: xor edi, edi */
  edi = 0;
L_54635b: /* 54635b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54635d: je 0x54636c */
  if (zf) goto L_54636c;
L_54635f: /* 54635f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546361: mov ecx, esi */
  ecx = esi;
/* 546363: call 0x4e2cde */
  esp -= 4; W32(esp, 0x546368u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 546368: mov esi, eax */
  esi = eax;
/* 54636a: jmp 0x546371 */
  goto L_546371;
L_54636c: /* 54636c: mov esi, 0x5ab9f8 */
  esi = 0x5ab9f8u;
L_546371: /* 546371: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546372: push 0x5aba04 */
  { uint32_t v = 0x5aba04u; esp -= 4; W32(esp, v); }
/* 546377: push 0x5aba10 */
  { uint32_t v = 0x5aba10u; esp -= 4; W32(esp, v); }
/* 54637c: call 0x4e1613 */
  esp -= 4; W32(esp, 0x546381u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 546381: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546384: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 546387: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54638a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54638b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54638c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 54638f: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 546392: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546393: mov esi, dword ptr [0x69a758] */
  esi = R32((uint32_t)(0x69a758u));
/* 546399: mov edx, dword ptr [esi + edx*4] */
  edx = R32((uint32_t)(esi + edx*4));
/* 54639c: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54639f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5463a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5463a1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 5463a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5463a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5463a6: call 0x4e455c */
  esp -= 4; W32(esp, 0x5463abu); SPILL(); f_4e455c(); if (g_unwind) return; RELOAD();
/* 5463ab: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5463ae: mov eax, 0x54627d */
  eax = 0x54627du;
/* 5463b3: ret  */
  esp += 4; SPILL(); return;
}

void f_5463b4(void) {
  LOAD_REGS();
L_5463b4: /* 5463b4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5463b7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5463bc: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 5463bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5463c0: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 5463c3: call 0x554df6 */
  esp -= 4; W32(esp, 0x5463c8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5463c8(); return;
}

void f_5463c8(void) {
  LOAD_REGS();
L_5463c8: /* 5463c8: push 0x56ec58 */
  { uint32_t v = 0x56ec58u; esp -= 4; W32(esp, v); }
/* 5463cd: push 0x5aba34 */
  { uint32_t v = 0x5aba34u; esp -= 4; W32(esp, v); }
/* 5463d2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5463d7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5463d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5463da: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 5463dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5463df: mov esi, eax */
  esi = eax;
/* 5463e1: jne 0x5463e8 */
  if (!zf) goto L_5463e8;
L_5463e3: /* 5463e3: mov esi, 0x5aba3c */
  esi = 0x5aba3cu;
L_5463e8: /* 5463e8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5463eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5463ed: je 0x5463fa */
  if (zf) goto L_5463fa;
L_5463ef: /* 5463ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5463f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5463f3: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5463f8u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5463f8: jmp 0x5463ff */
  goto L_5463ff;
L_5463fa: /* 5463fa: mov eax, 0x5aba48 */
  eax = 0x5aba48u;
L_5463ff: /* 5463ff: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 546402: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546404: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 546407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54640a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54640c: call 0x4e2cde */
  esp -= 4; W32(esp, 0x546411u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 546411: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546412: push 0x5aba54 */
  { uint32_t v = 0x5aba54u; esp -= 4; W32(esp, v); }
/* 546417: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54641cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54641c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54641f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546423: call 0x554df6 */
  esp -= 4; W32(esp, 0x546428u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_546428: guest_badaddr(0x546428); return;
}

void f_5464f0(void) {
  LOAD_REGS();
L_5464f0: /* 5464f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5464f1: mov ebp, esp */
  ebp = esp;
/* 5464f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5464f5: push 0x5595d0 */
  { uint32_t v = 0x5595d0u; esp -= 4; W32(esp, v); }
/* 5464fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 546500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546501: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 546508: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54650b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54650c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54650d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 546510: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 546514: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546515: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 546518: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54651f: jne 0x546534 */
  if (!zf) goto L_546534;
L_546521: /* 546521: xor eax, eax */
  eax = 0;
/* 546523: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 546526: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54652d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54652e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54652f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 546530: mov esp, ebp */
  esp = ebp;
/* 546532: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 546533: ret  */
  esp += 4; SPILL(); return;
L_546534: /* 546534: call 0x4e3d50 */
  esp -= 4; W32(esp, 0x546539u); SPILL(); f_4e3d50(); if (g_unwind) return; RELOAD();
/* 546539: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 54653c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54653f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546543: mov eax, ebx */
  eax = ebx;
/* 546545: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 546548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546549: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54654a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54654b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 54654f: call 0x4e43b8 */
  esp -= 4; W32(esp, 0x546554u); SPILL(); f_4e43b8(); if (g_unwind) return; RELOAD();
/* 546554: mov esi, eax */
  esi = eax;
/* 546556: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546559: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54655b: je 0x546521 */
  if (zf) goto L_546521;
L_54655d: /* 54655d: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546560: jne 0x546569 */
  if (!zf) goto L_546569;
L_546562: /* 546562: mov ecx, esi */
  ecx = esi;
/* 546564: call 0x4e10e6 */
  esp -= 4; W32(esp, 0x546569u); SPILL(); f_4e10e6(); if (g_unwind) return; RELOAD();
L_546569: /* 546569: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 54656c: call 0x4e375b */
  esp -= 4; W32(esp, 0x546571u); SPILL(); f_4e375b(); if (g_unwind) return; RELOAD();
/* 546571: mov eax, esi */
  eax = esi;
/* 546573: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 546576: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54657d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54657e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54657f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 546580: mov esp, ebp */
  esp = ebp;
/* 546582: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 546583: ret  */
  esp += 4; SPILL(); return;
}

void f_546584(void) {
  LOAD_REGS();
L_546584: /* 546584: call 0x4e375b */
  esp -= 4; W32(esp, 0x546589u); SPILL(); f_4e375b(); if (g_unwind) return; RELOAD();
/* 546589: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54658b: push 0x5abac0 */
  { uint32_t v = 0x5abac0u; esp -= 4; W32(esp, v); }
/* 546590: push 0x5abacc */
  { uint32_t v = 0x5abaccu; esp -= 4; W32(esp, v); }
/* 546595: call 0x4e1613 */
  esp -= 4; W32(esp, 0x54659au); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 54659a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54659d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 5465a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5465a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5465a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5465a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5465a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5465a7: call 0x4e455c */
  esp -= 4; W32(esp, 0x5465acu); SPILL(); f_4e455c(); if (g_unwind) return; RELOAD();
/* 5465ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5465af: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 5465b6: mov eax, 0x5465bc */
  eax = 0x5465bcu;
/* 5465bb: ret  */
  esp += 4; SPILL(); return;
}

void f_5465bc(void) {
  LOAD_REGS();
L_5465bc: /* 5465bc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5465bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5465c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5465c3: mov eax, esi */
  eax = esi;
/* 5465c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5465c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5465cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5465ce: mov esp, ebp */
  esp = ebp;
/* 5465d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5465d1: ret  */
  esp += 4; SPILL(); return;
}

void f_5465d2(void) {
  LOAD_REGS();
L_5465d2: /* 5465d2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5465d5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5465da: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5465dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5465de: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5465e1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5465e6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5465e6(); return;
}

void f_5465e6(void) {
  LOAD_REGS();
L_5465e6: /* 5465e6: push 0x56ec98 */
  { uint32_t v = 0x56ec98u; esp -= 4; W32(esp, v); }
/* 5465eb: push 0x5abaf0 */
  { uint32_t v = 0x5abaf0u; esp -= 4; W32(esp, v); }
/* 5465f0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5465f5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5465f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5465f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5465fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5465fc: call 0x554df6 */
  esp -= 4; W32(esp, 0x546601u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_546601: guest_badaddr(0x546601); return;
}

void f_546660(void) {
  LOAD_REGS();
L_546660: /* 546660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 546662: push 0x5595e8 */
  { uint32_t v = 0x5595e8u; esp -= 4; W32(esp, v); }
/* 546667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54666d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54666e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 546675: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546676: xor eax, eax */
  eax = 0;
/* 546678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546679: mov esi, ecx */
  esi = ecx;
/* 54667b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54667f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 546681: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 546684: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 546687: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 54668b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 54668e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 546695: call 0x4e22b6 */
  esp -= 4; W32(esp, 0x54669au); SPILL(); f_4e22b6(); if (g_unwind) return; RELOAD();
/* 54669a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54669e: mov eax, esi */
  eax = esi;
/* 5466a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5466a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5466a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5466ab: ret  */
  esp += 4; SPILL(); return;
}

void f_5466d0(void) {
  LOAD_REGS();
L_5466d0: /* 5466d0: jmp 0x4e1113 */
  SPILL(); f_4e1113(); return;
}

void f_5466f0(void) {
  LOAD_REGS();
L_5466f0: /* 5466f0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 5466f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5466f8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5466fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5466fd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 546701: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546702: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 546706: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546708: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546709: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 54670e: call 0x4e302b */
  esp -= 4; W32(esp, 0x546713u); SPILL(); f_4e302b(); if (g_unwind) return; RELOAD();
/* 546713: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546716: ret  */
  esp += 4; SPILL(); return;
}

void f_546730(void) {
  LOAD_REGS();
L_546730: /* 546730: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 546731: mov ebp, esp */
  ebp = esp;
/* 546733: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 546735: push 0x559600 */
  { uint32_t v = 0x559600u; esp -= 4; W32(esp, v); }
/* 54673a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 546740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546741: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 546748: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54674b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54674e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54674f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546750: mov esi, ecx */
  esi = ecx;
/* 546752: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 546755: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 546758: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 54675b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 54675e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54675f: xor edi, edi */
  edi = 0;
/* 546761: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 546766: mov dword ptr [esi], 0x56d890 */
  W32((uint32_t)(esi), 0x56d890u);
/* 54676c: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 54676f: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 546772: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 546775: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 546778: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 54677b: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 54677e: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 546781: cmp dword ptr [0x69f444], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f444u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546787: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54678a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 54678d: je 0x5467a3 */
  if (zf) goto L_5467a3;
L_54678f: /* 54678f: push 0x4f */
  { uint32_t v = 0x4fu; esp -= 4; W32(esp, v); }
/* 546791: push 0x5aa064 */
  { uint32_t v = 0x5aa064u; esp -= 4; W32(esp, v); }
/* 546796: push 0x5aa070 */
  { uint32_t v = 0x5aa070u; esp -= 4; W32(esp, v); }
/* 54679b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5467a0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5467a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5467a3: /* 5467a3: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 5467a6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 5467a9: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 5467ac: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 5467af: mov ecx, dword ptr [0x69f454] */
  ecx = R32((uint32_t)(0x69f454u));
/* 5467b5: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 5467b8: cmp dword ptr [0x69f440], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f440u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5467be: mov dword ptr [0x69f454], esi */
  W32((uint32_t)(0x69f454u), esi);
/* 5467c4: je 0x5467d6 */
  if (zf) goto L_5467d6;
L_5467c6: /* 5467c6: cmp dword ptr [esi + 0x24], 0x6a0f20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x6a0f20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5467cd: jne 0x5467d6 */
  if (!zf) goto L_5467d6;
L_5467cf: /* 5467cf: mov ecx, esi */
  ecx = esi;
/* 5467d1: call 0x4e22ca */
  esp -= 4; W32(esp, 0x5467d6u); SPILL(); f_4e22ca(); if (g_unwind) return; RELOAD();
L_5467d6: /* 5467d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5467d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5467da: mov eax, esi */
  eax = esi;
/* 5467dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5467dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5467e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5467e5: mov esp, ebp */
  esp = ebp;
/* 5467e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5467e8: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_5467eb(void) {
  LOAD_REGS();
L_5467eb: /* 5467eb: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 5467ee: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5467f3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5467f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5467f7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5467fa: call 0x554df6 */
  esp -= 4; W32(esp, 0x5467ffu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5467ff(); return;
}

void f_5467ff(void) {
  LOAD_REGS();
L_5467ff: /* 5467ff: push 0x56eccc */
  { uint32_t v = 0x56ecccu; esp -= 4; W32(esp, v); }
/* 546804: push 0x5aa118 */
  { uint32_t v = 0x5aa118u; esp -= 4; W32(esp, v); }
/* 546809: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54680eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54680e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546811: xor edi, edi */
  edi = 0;
/* 546813: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546814: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546815: call 0x554df6 */
  esp -= 4; W32(esp, 0x54681au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54681a: guest_badaddr(0x54681a); return;
}

void f_546860(void) {
  LOAD_REGS();
L_546860: /* 546860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 546861: mov ebp, esp */
  ebp = esp;
/* 546863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 546865: push 0x559610 */
  { uint32_t v = 0x559610u; esp -= 4; W32(esp, v); }
/* 54686a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 546870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 546878: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54687b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54687c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54687d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 546880: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546882: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546883: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 546886: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54688d: jne 0x5468a6 */
  if (!zf) goto L_5468a6;
L_54688f: /* 54688f: push 0x9e2 */
  { uint32_t v = 0x9e2u; esp -= 4; W32(esp, v); }
/* 546894: push 0x5aba70 */
  { uint32_t v = 0x5aba70u; esp -= 4; W32(esp, v); }
/* 546899: push 0x5aba7c */
  { uint32_t v = 0x5aba7cu; esp -= 4; W32(esp, v); }
/* 54689e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5468a3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5468a3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5468a6: /* 5468a6: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 5468a9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 5468ac: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 5468af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5468b0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 5468b3: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 5468b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5468b7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5468ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5468bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5468bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5468bd: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 5468c2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5468c6: call 0x4e302b */
  esp -= 4; W32(esp, 0x5468cbu); SPILL(); f_4e302b(); if (g_unwind) return; RELOAD();
/* 5468cb: mov ebx, eax */
  ebx = eax;
/* 5468cd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5468d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5468d2: je 0x546916 */
  if (zf) goto L_546916;
L_5468d4: /* 5468d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5468d6: je 0x5468e1 */
  if (zf) goto L_5468e1;
L_5468d8: /* 5468d8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5468da: je 0x546916 */
  if (zf) goto L_546916;
L_5468dc: /* 5468dc: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5468df: jmp 0x5468d4 */
  goto L_5468d4;
L_5468e1: /* 5468e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5468e3: mov ecx, esi */
  ecx = esi;
/* 5468e5: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5468eau); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5468ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5468ec: mov ecx, ebx */
  ecx = ebx;
/* 5468ee: mov edi, eax */
  edi = eax;
/* 5468f0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5468f5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5468f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5468f7: push 0x5aba88 */
  { uint32_t v = 0x5aba88u; esp -= 4; W32(esp, v); }
/* 5468fc: push 0x5aba94 */
  { uint32_t v = 0x5aba94u; esp -= 4; W32(esp, v); }
/* 546901: mov esi, eax */
  esi = eax;
/* 546903: call 0x4e1613 */
  esp -= 4; W32(esp, 0x546908u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 546908: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54690b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54690c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54690d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54690e: call 0x4e3418 */
  esp -= 4; W32(esp, 0x546913u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 546913: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546916: /* 546916: mov eax, ebx */
  eax = ebx;
/* 546918: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54691b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 546922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 546923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 546924: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 546925: mov esp, ebp */
  esp = ebp;
/* 546927: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 546928: ret  */
  esp += 4; SPILL(); return;
}

void f_546929(void) {
  LOAD_REGS();
L_546929: /* 546929: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54692c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 54692f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546931: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546932: call 0x4e455c */
  esp -= 4; W32(esp, 0x546937u); SPILL(); f_4e455c(); if (g_unwind) return; RELOAD();
/* 546937: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54693a: mov eax, 0x546940 */
  eax = 0x546940u;
/* 54693f: ret  */
  esp += 4; SPILL(); return;
}

void f_546940(void) {
  LOAD_REGS();
L_546940: /* 546940: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 546943: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 546944: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 546945: xor eax, eax */
  eax = 0;
/* 546947: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54694e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54694f: mov esp, ebp */
  esp = ebp;
/* 546951: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 546952: ret  */
  esp += 4; SPILL(); return;
}

void f_546953(void) {
  LOAD_REGS();
L_546953: /* 546953: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546956: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54695b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54695e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54695f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 546962: call 0x554df6 */
  esp -= 4; W32(esp, 0x546967u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_546967(); return;
}

void f_546967(void) {
  LOAD_REGS();
L_546967: /* 546967: push 0x56ecf4 */
  { uint32_t v = 0x56ecf4u; esp -= 4; W32(esp, v); }
/* 54696c: push 0x5abab8 */
  { uint32_t v = 0x5abab8u; esp -= 4; W32(esp, v); }
/* 546971: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x546976u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 546976: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546979: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54697b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54697d: call 0x554df6 */
  esp -= 4; W32(esp, 0x546982u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_546982: guest_badaddr(0x546982); return;
}

void f_5469e0(void) {
  LOAD_REGS();
L_5469e0: /* 5469e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5469e1: mov ebp, esp */
  ebp = esp;
/* 5469e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5469e5: push 0x55968f */
  { uint32_t v = 0x55968fu; esp -= 4; W32(esp, v); }
/* 5469ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5469f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5469f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5469f8: sub esp, 0x2f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2f4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5469fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5469ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546a00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546a01: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 546a04: xor ebx, ebx */
  ebx = 0;
/* 546a06: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a08: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 546a0b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 546a0e: jne 0x546a27 */
  if (!zf) goto L_546a27;
L_546a10: /* 546a10: push 0xb36 */
  { uint32_t v = 0xb36u; esp -= 4; W32(esp, v); }
/* 546a15: push 0x5abbdc */
  { uint32_t v = 0x5abbdcu; esp -= 4; W32(esp, v); }
/* 546a1a: push 0x5abbe8 */
  { uint32_t v = 0x5abbe8u; esp -= 4; W32(esp, v); }
/* 546a1f: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x546a24u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 546a24: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546a27: /* 546a27: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 546a2a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a2c: jne 0x546a45 */
  if (!zf) goto L_546a45;
L_546a2e: /* 546a2e: push 0xb37 */
  { uint32_t v = 0xb37u; esp -= 4; W32(esp, v); }
/* 546a33: push 0x5abbf0 */
  { uint32_t v = 0x5abbf0u; esp -= 4; W32(esp, v); }
/* 546a38: push 0x5abbfc */
  { uint32_t v = 0x5abbfcu; esp -= 4; W32(esp, v); }
/* 546a3d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x546a42u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 546a42: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546a45: /* 546a45: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 546a47: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 546a49: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a4b: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 546a51: je 0x546aa2 */
  if (zf) goto L_546aa2;
L_546a53: /* 546a53: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
L_546a56: /* 546a56: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a58: je 0x546aa2 */
  if (zf) goto L_546aa2;
L_546a5a: /* 546a5a: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a5f: je 0x546a66 */
  if (zf) goto L_546a66;
L_546a61: /* 546a61: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 546a64: jmp 0x546a56 */
  goto L_546a56;
L_546a66: /* 546a66: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a68: je 0x546aa2 */
  if (zf) goto L_546aa2;
L_546a6a: /* 546a6a: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 546a6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_546a70: /* 546a70: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a72: je 0x546a91 */
  if (zf) goto L_546a91;
L_546a74: /* 546a74: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546a79: je 0x546a80 */
  if (zf) goto L_546a80;
L_546a7b: /* 546a7b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 546a7e: jmp 0x546a70 */
  goto L_546a70;
L_546a80: /* 546a80: mov eax, edi */
  eax = edi;
/* 546a82: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 546a85: mov edi, 1 */
  edi = 0x1u;
/* 546a8a: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 546a8c: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 546a8f: jmp 0x546aa7 */
  goto L_546aa7;
L_546a91: /* 546a91: xor eax, eax */
  eax = 0;
/* 546a93: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 546a96: mov edi, 1 */
  edi = 0x1u;
/* 546a9b: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 546a9d: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 546aa0: jmp 0x546aa7 */
  goto L_546aa7;
L_546aa2: /* 546aa2: mov edi, 1 */
  edi = 0x1u;
L_546aa7: /* 546aa7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 546aac: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 546ab2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546ab3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546ab4: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x546ab9u); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 546ab9: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 546abf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546ac2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546ac3: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x546ac8u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 546ac8: mov edx, dword ptr [0x5abc08] */
  edx = R32((uint32_t)(0x5abc08u));
/* 546ace: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546ad1: mov ecx, eax */
  ecx = eax;
L_546ad3: /* 546ad3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ad5: jle 0x546af3 */
  if ((zf || sf != of)) goto L_546af3;
L_546ad7: /* 546ad7: mov ax, word ptr [ebp + ecx*2 - 0x302] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + ecx*2 + 0xfffffcfeu))) & 0xffffu);
/* 546adf: cmp ax, dx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 546ae2: je 0x546af3 */
  if (zf) goto L_546af3;
L_546ae4: /* 546ae4: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 546ae8: je 0x546af3 */
  if (zf) goto L_546af3;
L_546aea: /* 546aea: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 546aee: je 0x546af3 */
  if (zf) goto L_546af3;
L_546af0: /* 546af0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 546af1: jmp 0x546ad3 */
  goto L_546ad3;
L_546af3: /* 546af3: lea edx, [ebp - 0x300] */
  edx = (uint32_t)(ebp + 0xfffffd00u);
/* 546af9: push 0x5abc0c */
  { uint32_t v = 0x5abc0cu; esp -= 4; W32(esp, v); }
/* 546afe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546aff: mov word ptr [ebp + ecx*2 - 0x300], bx */
  W16((uint32_t)(ebp + ecx*2 + 0xfffffd00u), (ebx & 0xffffu));
/* 546b07: call 0x4e35ad */
  esp -= 4; W32(esp, 0x546b0cu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 546b0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546b0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546b10: push 0x5abc20 */
  { uint32_t v = 0x5abc20u; esp -= 4; W32(esp, v); }
/* 546b15: push 0x5abc2c */
  { uint32_t v = 0x5abc2cu; esp -= 4; W32(esp, v); }
/* 546b1a: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x546b1fu); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 546b1f: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 546b25: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 546b27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546b2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546b2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546b2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546b2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546b2f: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x546b32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546b32: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 546b35: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546b38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 546b39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546b3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546b3b: mov dword ptr [ebp - 0xec], ebx */
  W32((uint32_t)(ebp + 0xffffff14u), ebx);
/* 546b41: call 0x4e3d46 */
  esp -= 4; W32(esp, 0x546b46u); SPILL(); f_4e3d46(); if (g_unwind) return; RELOAD();
/* 546b46: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546b49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546b4c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 546b50: mov dword ptr [ebp - 0x30], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x6a0f20u);
/* 546b57: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 546b5e: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546b63u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546b63: mov esi, 0xfff8ffe7 */
  esi = 0xfff8ffe7u;
/* 546b68: jmp 0x546b70 */
  goto L_546b70;
L_546b70: /* 546b70: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 546b73: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546b79: jge 0x546b91 */
  if ((sf == of)) goto L_546b91;
L_546b7b: /* 546b7b: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546b81: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 546b84: and dword ptr [eax + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 546b87: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546b8a: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546b8fu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546b8f: jmp 0x546b70 */
  goto L_546b70;
L_546b91: /* 546b91: xor ecx, ecx */
  ecx = 0;
L_546b93: /* 546b93: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546b99: jge 0x546bae */
  if ((sf == of)) goto L_546bae;
L_546b9b: /* 546b9b: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546ba1: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 546ba4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546ba6: je 0x546bab */
  if (zf) goto L_546bab;
L_546ba8: /* 546ba8: and dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_546bab: /* 546bab: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 546bac: jmp 0x546b93 */
  goto L_546b93;
L_546bae: /* 546bae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 546bb1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 546bb4: mov dword ptr [ebp - 0x9c], 0x7e */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7eu);
/* 546bbe: mov dword ptr [ebp - 0x98], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x7d0u);
/* 546bc8: mov dword ptr [ebp - 0x94], edi */
  W32((uint32_t)(ebp + 0xffffff6cu), edi);
/* 546bce: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 546bd4: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 546bda: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 546bdd: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 546be0: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 546be3: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 546be6: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 546be9: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 546bec: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 546bef: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 546bf6: mov dword ptr [ebp - 0xa0], 0x56d780 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x56d780u);
/* 546c00: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 546c03: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 546c09: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 546c0f: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c12: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 546c16: je 0x546c28 */
  if (zf) goto L_546c28;
L_546c18: /* 546c18: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 546c1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546c1c: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 546c22: call dword ptr [0x56d798] */
  { uint32_t t = R32((uint32_t)(0x56d798u)); esp -= 4; W32(esp, 0x546c28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_546c28: /* 546c28: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546c2b: mov dword ptr [ebp - 0x30], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x6a0f20u);
/* 546c32: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 546c39: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546c3eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546c3e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 546c41: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 546c47: jmp 0x546c50 */
  goto L_546c50;
L_546c50: /* 546c50: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 546c53: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546c59: jge 0x546ce0 */
  if ((sf == of)) goto L_546ce0;
L_546c5f: /* 546c5f: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
/* 546c62: test dword ptr [eax + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546c65: je 0x546ca1 */
  if (zf) goto L_546ca1;
L_546c67: /* 546c67: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_546c6a: /* 546c6a: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 546c6d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c6f: je 0x546c77 */
  if (zf) goto L_546c77;
L_546c71: /* 546c71: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c73: je 0x546c82 */
  if (zf) goto L_546c82;
L_546c75: /* 546c75: jmp 0x546c6a */
  goto L_546c6a;
L_546c77: /* 546c77: xor eax, eax */
  eax = 0;
/* 546c79: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c7b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 546c7e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c80: je 0x546ca1 */
  if (zf) goto L_546ca1;
L_546c82: /* 546c82: mov edx, dword ptr [esi + ecx*4] */
  edx = R32((uint32_t)(esi + ecx*4));
/* 546c85: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 546c88: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 546c8b: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 546c91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546c92: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 546c98: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x546c9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546c9b: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_546ca1: /* 546ca1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546ca4: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ca9u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ca9: jmp 0x546c50 */
  goto L_546c50;
L_546ce0: /* 546ce0: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 546ce6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546ce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546cea: xor eax, eax */
  eax = 0;
/* 546cec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cee: mov eax, dword ptr [0x69f458] */
  eax = R32((uint32_t)(0x69f458u));
/* 546cf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cf4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 546cf7: push 0x6a1980 */
  { uint32_t v = 0x6a1980u; esp -= 4; W32(esp, v); }
/* 546cfc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 546cff: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546d03: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x546d08u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 546d08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546d0b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546d0d: je 0x546d25 */
  if (zf) goto L_546d25;
L_546d0f: /* 546d0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 546d12: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 546d18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546d19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546d1a: mov ecx, eax */
  ecx = eax;
/* 546d1c: call 0x4e2707 */
  esp -= 4; W32(esp, 0x546d21u); SPILL(); f_4e2707(); if (g_unwind) return; RELOAD();
/* 546d21: mov edi, eax */
  edi = eax;
/* 546d23: jmp 0x546d27 */
  goto L_546d27;
L_546d25: /* 546d25: xor edi, edi */
  edi = 0;
L_546d27: /* 546d27: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546d2a: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 546d2d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546d31: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546d38: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 546d3f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546d44u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546d44: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546d4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_546d50: /* 546d50: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546d53: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546d59: jge 0x546ec0 */
  if ((sf == of)) goto L_546ec0;
L_546d5f: /* 546d5f: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546d62: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546d66: je 0x546e7e */
  if (zf) goto L_546e7e;
L_546d6c: /* 546d6c: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 546d6f: mov ecx, 1 */
  ecx = 0x1u;
/* 546d74: xor edx, edx */
  edx = 0;
/* 546d76: and eax, 0x70000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 546d7b: mov dword ptr [ebp - 0xa0], 0x7e */
  W32((uint32_t)(ebp + 0xffffff60u), 0x7eu);
/* 546d85: mov dword ptr [ebp - 0x9c], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7d0u);
/* 546d8f: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 546d95: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 546d9b: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 546da1: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 546da7: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 546daa: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 546dad: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 546db0: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 546db3: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 546db6: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 546db9: mov dword ptr [ebp - 0x68], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0xffffffffu);
/* 546dc0: mov dword ptr [ebp - 0xa4], 0x56d7f0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x56d7f0u);
/* 546dca: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 546dcd: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 546dd0: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 546dd6: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 546ddc: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* 546ddf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 546de1: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 546de7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546de8: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 546dec: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x546defu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546def: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546df4: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546df7: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546dfa: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 546e00: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 546e03: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 546e06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546e07: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 546e0d: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x546e10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546e10: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e16: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546e19: mov ecx, dword ptr [0x69f458] */
  ecx = R32((uint32_t)(0x69f458u));
L_546e1f: /* 546e1f: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 546e22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e24: je 0x546e2c */
  if (zf) goto L_546e2c;
L_546e26: /* 546e26: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546e28: je 0x546e37 */
  if (zf) goto L_546e37;
L_546e2a: /* 546e2a: jmp 0x546e1f */
  goto L_546e1f;
L_546e2c: /* 546e2c: xor eax, eax */
  eax = 0;
/* 546e2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e30: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 546e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e35: je 0x546e70 */
  if (zf) goto L_546e70;
L_546e37: /* 546e37: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 546e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e3c: mov ecx, esi */
  ecx = esi;
/* 546e3e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546e43u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546e43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e45: push 0x5abc4c */
  { uint32_t v = 0x5abc4cu; esp -= 4; W32(esp, v); }
/* 546e4a: push 0x5abc58 */
  { uint32_t v = 0x5abc58u; esp -= 4; W32(esp, v); }
/* 546e4f: mov esi, eax */
  esi = eax;
/* 546e51: call 0x4e1613 */
  esp -= 4; W32(esp, 0x546e56u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 546e56: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 546e5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546e61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546e62: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546e67u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546e67: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546e70: /* 546e70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546e74: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
L_546e7e: /* 546e7e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546e81: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546e86u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546e86: jmp 0x546d50 */
  goto L_546d50;
L_546ec0: /* 546ec0: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546ec7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 546eca: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 546ece: mov dword ptr [ebp - 0x1c], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x6a0f20u);
/* 546ed5: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 546edc: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ee1u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ee1: mov ebx, 0x70010 */
  ebx = 0x70010u;
/* 546ee6: jmp 0x546ef0 */
  goto L_546ef0;
L_546ef0: /* 546ef0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546ef3: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ef9: jge 0x5470fc */
  if ((sf == of)) goto L_5470fc;
L_546eff: /* 546eff: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f05: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f08: test byte ptr [eax + 0x1c], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f0c: je 0x54708d */
  if (zf) goto L_54708d;
L_546f12: /* 546f12: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f15: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546f1b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546f1e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f21: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f26: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f29: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 546f2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f2e: je 0x546f41 */
  if (zf) goto L_546f41;
L_546f30: /* 546f30: mov eax, ecx */
  eax = ecx;
/* 546f32: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 546f38: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f3b: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 546f3e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_546f41: /* 546f41: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 546f47: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 546f4a: test byte ptr [ecx + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f4e: je 0x54709a */
  if (zf) goto L_54709a;
L_546f54: /* 546f54: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 546f57: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 546f5a: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 546f5f: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 546f62: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f65: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f6b: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f6e: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 546f71: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 546f74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f76: jne 0x546f8f */
  if (!zf) goto L_546f8f;
L_546f78: /* 546f78: push 0xb8a */
  { uint32_t v = 0xb8au; esp -= 4; W32(esp, v); }
/* 546f7d: push 0x5abc80 */
  { uint32_t v = 0x5abc80u; esp -= 4; W32(esp, v); }
/* 546f82: push 0x5abc8c */
  { uint32_t v = 0x5abc8cu; esp -= 4; W32(esp, v); }
/* 546f87: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x546f8cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 546f8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546f8f: /* 546f8f: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f94: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f97: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546f9a: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 546f9d: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546fa0: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546fa6: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546fa9: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546fac: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546fb1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 546fb4: test byte ptr [ecx + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546fb8: jne 0x54708d */
  if (!zf) goto L_54708d;
L_546fbe: /* 546fbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546fc0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546fc5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546fc5: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 546fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546fcc: push 0x5abca4 */
  { uint32_t v = 0x5abca4u; esp -= 4; W32(esp, v); }
/* 546fd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546fd2: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546fd7u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546fd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546fda: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546fe1: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
L_546fe8: /* 546fe8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546feb: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ff0u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ff0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546ff3: cmp ebx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ff9: jge 0x547052 */
  if ((sf == of)) goto L_547052;
L_546ffb: /* 546ffb: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547000: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 547003: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 547006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547008: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 54700e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x547013u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 547013: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 547016: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547018: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 54701c: je 0x547042 */
  if (zf) goto L_547042;
L_54701e: /* 54701e: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547024: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 547027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547029: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54702eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54702f: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 547034: push 0x5abccc */
  { uint32_t v = 0x5abcccu; esp -= 4; W32(esp, v); }
/* 547039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54703a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54703fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54703f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547042: /* 547042: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 547046: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
/* 547050: jmp 0x546fe8 */
  goto L_546fe8;
L_547052: /* 547052: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547058: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 54705b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54705d: mov ecx, esi */
  ecx = esi;
/* 54705f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547064u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547066: push 0x5abcd8 */
  { uint32_t v = 0x5abcd8u; esp -= 4; W32(esp, v); }
/* 54706b: push 0x5abce4 */
  { uint32_t v = 0x5abce4u; esp -= 4; W32(esp, v); }
/* 547070: mov esi, eax */
  esi = eax;
/* 547072: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547077u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547077: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 54707a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54707d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54707e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54707f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547080: call 0x4e3418 */
  esp -= 4; W32(esp, 0x547085u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 547085: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547088: mov ebx, 0x70010 */
  ebx = 0x70010u;
L_54708d: /* 54708d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 547090: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547095u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547095: jmp 0x546ef0 */
  goto L_546ef0;
L_54709a: /* 54709a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54709c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5470a1u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5470a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470a2: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 5470a7: push 0x5abd08 */
  { uint32_t v = 0x5abd08u; esp -= 4; W32(esp, v); }
/* 5470ac: push 0x309 */
  { uint32_t v = 0x309u; esp -= 4; W32(esp, v); }
/* 5470b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470b2: call 0x4e30df */
  esp -= 4; W32(esp, 0x5470b7u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5470b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5470ba: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5470bd: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5470c2u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5470c2: jmp 0x546ef0 */
  goto L_546ef0;
L_5470fc: /* 5470fc: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5470ff: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547101: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547108: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 54710c: je 0x54716a */
  if (zf) goto L_54716a;
L_54710e: /* 54710e: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 547114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547116: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 547119: je 0x547123 */
  if (zf) goto L_547123;
L_54711b: /* 54711b: mov eax, dword ptr [ebx + 0x94] */
  eax = R32((uint32_t)(ebx + 0x94u));
/* 547121: jmp 0x547128 */
  goto L_547128;
L_547123: /* 547123: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_547128: /* 547128: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547129: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54712a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54712b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 547130: push 0x5abd28 */
  { uint32_t v = 0x5abd28u; esp -= 4; W32(esp, v); }
/* 547135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547136: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54713bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54713b: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 54713e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547140: lea edx, [edi + 0x50] */
  edx = (uint32_t)(edi + 0x50u);
/* 547143: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 547145: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 547148: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 54714b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 54714e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 547151: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 547154: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547157: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 54715a: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 54715d: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 547160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547161: mov ecx, esi */
  ecx = esi;
/* 547163: call 0x4e31ac */
  esp -= 4; W32(esp, 0x547168u); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 547168: jmp 0x5471bb */
  goto L_5471bb;
L_54716a: /* 54716a: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 547170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547171: call 0x4e261c */
  esp -= 4; W32(esp, 0x547176u); SPILL(); f_4e261c(); if (g_unwind) return; RELOAD();
/* 547176: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 547178: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 54717b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54717d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 547180: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 547183: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 547186: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 547189: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 54718c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 54718f: xor eax, eax */
  eax = 0;
/* 547191: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547194: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 547197: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 54719a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 54719d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471a0: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 5471a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471a4: mov ecx, esi */
  ecx = esi;
/* 5471a6: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 5471aa: call 0x4e31ac */
  esp -= 4; W32(esp, 0x5471afu); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 5471af: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471b2: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 5471b6: call 0x4e3bd9 */
  esp -= 4; W32(esp, 0x5471bbu); SPILL(); f_4e3bd9(); if (g_unwind) return; RELOAD();
L_5471bb: /* 5471bb: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 5471be: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5471c1: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5471c4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5471c6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5471c9: jle 0x5471e7 */
  if ((zf || sf != of)) goto L_5471e7;
L_5471cb: /* 5471cb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5471ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5471cf: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5471d2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5471d4: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5471d7: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5471db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5471dd: mov ecx, esi */
  ecx = esi;
/* 5471df: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 5471e2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5471e7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5471e7: /* 5471e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5471e9: lea ecx, [eax + ebx*8] */
  ecx = (uint32_t)(eax + ebx*8);
/* 5471ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5471ee: je 0x5471f9 */
  if (zf) goto L_5471f9;
L_5471f0: /* 5471f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f4: call 0x4e19a6 */
  esp -= 4; W32(esp, 0x5471f9u); SPILL(); f_4e19a6(); if (g_unwind) return; RELOAD();
L_5471f9: /* 5471f9: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 5471fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471fd: lea esi, [edi + 0xb4] */
  esi = (uint32_t)(edi + 0xb4u);
/* 547203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547204: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547209u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54720b: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547212: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547215: mov ecx, esi */
  ecx = esi;
/* 547217: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 54721b: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x54721eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54721e: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 547221: xor ecx, ecx */
  ecx = 0;
L_547223: /* 547223: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547229: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54722c: jge 0x54727c */
  if ((sf == of)) goto L_54727c;
L_54722e: /* 54722e: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 547233: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 547236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547238: je 0x547279 */
  if (zf) goto L_547279;
L_54723a: /* 54723a: test byte ptr [eax + 4], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54723e: je 0x547279 */
  if (zf) goto L_547279;
L_547240: /* 547240: mov ebx, dword ptr [edi + 0x70] */
  ebx = R32((uint32_t)(edi + 0x70u));
/* 547243: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547246: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547249: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54724c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54724e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547251: jle 0x54726f */
  if ((zf || sf != of)) goto L_54726f;
L_547253: /* 547253: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547256: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547257: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54725a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54725c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54725f: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 547263: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 547266: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547268: mov ecx, esi */
  ecx = esi;
/* 54726a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54726fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54726f: /* 54726f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547272: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 547274: mov dword ptr [edx + ebx*4], eax */
  W32((uint32_t)(edx + ebx*4), eax);
/* 547277: mov ecx, eax */
  ecx = eax;
L_547279: /* 547279: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54727a: jmp 0x547223 */
  goto L_547223;
L_54727c: /* 54727c: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54727f: xor ecx, ecx */
  ecx = 0;
/* 547281: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547283: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54728a: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 54728e: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547294: je 0x547375 */
  if (zf) goto L_547375;
L_54729a: /* 54729a: xor edx, edx */
  edx = 0;
L_54729c: /* 54729c: cmp edx, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54729f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5472a2: jge 0x547372 */
  if ((sf == of)) goto L_547372;
L_5472a8: /* 5472a8: xor eax, eax */
  eax = 0;
/* 5472aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5472b0: /* 5472b0: cmp eax, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5472b3: jge 0x5472ca */
  if ((sf == of)) goto L_5472ca;
L_5472b5: /* 5472b5: mov esi, dword ptr [edi + 0x6c] */
  esi = R32((uint32_t)(edi + 0x6cu));
/* 5472b8: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 5472bb: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 5472be: cmp esi, dword ptr [ecx + edx*4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472c1: jne 0x5472c7 */
  if (!zf) goto L_5472c7;
L_5472c3: /* 5472c3: mov ecx, eax */
  ecx = eax;
/* 5472c5: jmp 0x5472cd */
  goto L_5472cd;
L_5472c7: /* 5472c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5472c8: jmp 0x5472b0 */
  goto L_5472b0;
L_5472ca: /* 5472ca: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_5472cd: /* 5472cd: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 5472d4: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 5472d7: mov eax, dword ptr [edx + 0x6c] */
  eax = R32((uint32_t)(edx + 0x6cu));
/* 5472da: cmp dword ptr [ebx + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472de: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e0: /* 5472e0: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472e3: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e5: /* 5472e5: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 5472e8: mov edx, dword ptr [eax + ebx] */
  edx = R32((uint32_t)(eax + ebx));
/* 5472eb: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 5472ee: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5472f1: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5472f4: mov dword ptr [eax + ebx], edx */
  W32((uint32_t)(eax + ebx), edx);
/* 5472f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5472fa: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 5472fd: jmp 0x547358 */
  goto L_547358;
L_5472ff: /* 5472ff: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 547302: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547305: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547308: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547309: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54730b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54730e: jle 0x54732c */
  if ((zf || sf != of)) goto L_54732c;
L_547310: /* 547310: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547313: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547314: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547317: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547319: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54731c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 547320: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547322: mov ecx, esi */
  ecx = esi;
/* 547324: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547327: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54732cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54732c: /* 54732c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54732f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547331: jg 0x54734a */
  if ((!zf && sf == of)) goto L_54734a;
L_547333: /* 547333: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547338: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54733d: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547342: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547347u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547347: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54734a: /* 54734a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54734c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54734f: mov eax, ecx */
  eax = ecx;
/* 547351: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547354: mov dword ptr [eax + edx*4 - 4], ecx */
  W32((uint32_t)(eax + edx*4 + 0xfffffffcu), ecx);
L_547358: /* 547358: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 54735b: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 54735e: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547361: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547363: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547366: mov dword ptr [ebx + eax], ecx */
  W32((uint32_t)(ebx + eax), ecx);
/* 547369: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54736c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54736d: jmp 0x54729c */
  goto L_54729c;
L_547372: /* 547372: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
L_547375: /* 547375: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547378: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 54737b: push 0x4e30c1 */
  { uint32_t v = 0x4e30c1u; esp -= 4; W32(esp, v); }
/* 547380: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547382: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547385: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547389: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54738eu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54738e: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547391: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547394: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54739b: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 54739f: mov dword ptr [edi + 0x38], eax */
  W32((uint32_t)(edi + 0x38u), eax);
/* 5473a2: xor esi, esi */
  esi = 0;
L_5473a4: /* 5473a4: cmp esi, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5473a7: jge 0x54740f */
  if ((sf == of)) goto L_54740f;
L_5473a9: /* 5473a9: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473ac: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 5473af: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5473b5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 5473b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473b9: lea eax, [edi + 0xb4] */
  eax = (uint32_t)(edi + 0xb4u);
/* 5473bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473c0: call 0x4e1be0 */
  esp -= 4; W32(esp, 0x5473c5u); SPILL(); f_4e1be0(); if (g_unwind) return; RELOAD();
/* 5473c5: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473c8: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 5473cb: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 5473d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5473d4: mov dword ptr [eax + edx*4], esi */
  W32((uint32_t)(eax + edx*4), esi);
/* 5473d7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5473d8: jmp 0x5473a4 */
  goto L_5473a4;
L_54740f: /* 54740f: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547416: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547419: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 54741d: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 547424: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 54742b: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547430u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
L_547430: /* 547430: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547433: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547439: jge 0x5474de */
  if ((sf == of)) goto L_5474de;
L_54743f: /* 54743f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547445: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547448: test byte ptr [eax + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54744c: je 0x54749c */
  if (zf) goto L_54749c;
L_54744e: /* 54744e: mov ebx, dword ptr [edi + 0x7c] */
  ebx = R32((uint32_t)(edi + 0x7cu));
/* 547451: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 547457: lea esi, [edi + 0x78] */
  esi = (uint32_t)(edi + 0x78u);
/* 54745a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54745d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54745f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547462: jle 0x547480 */
  if ((zf || sf != of)) goto L_547480;
L_547464: /* 547464: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547467: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547468: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54746b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54746d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547470: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547474: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 547476: mov ecx, esi */
  ecx = esi;
/* 547478: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54747b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547480u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547480: /* 547480: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547482: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 547485: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ebx = r;
  }
/* 547487: mov ecx, ebx */
  ecx = ebx;
/* 547489: je 0x54749c */
  if (zf) goto L_54749c;
L_54748b: /* 54748b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547490: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547493: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 547496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547497: call 0x4e442b */
  esp -= 4; W32(esp, 0x54749cu); SPILL(); f_4e442b(); if (g_unwind) return; RELOAD();
L_54749c: /* 54749c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54749f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5474a4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5474a4: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5474a7: jmp 0x547430 */
  goto L_547430;
L_5474de: /* 5474de: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 5474e1: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 5474e4: push 0x4e2c5c */
  { uint32_t v = 0x4e2c5cu; esp -= 4; W32(esp, v); }
/* 5474e9: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 5474eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5474ec: mov esi, 6 */
  esi = 0x6u;
/* 5474f1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 5474f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5474f5: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* 5474f8: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 5474fc: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547502: call 0x4e1785 */
  esp -= 4; W32(esp, 0x547507u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 547507: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54750a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 54750d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547510: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 547514: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 54751b: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 547522: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547527u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547527: jmp 0x547530 */
  goto L_547530;
L_547530: /* 547530: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547533: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547539: jge 0x5475e9 */
  if ((sf == of)) goto L_5475e9;
L_54753f: /* 54753f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547545: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547548: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54754c: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_54754e: /* 54754e: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 547554: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54755a: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547560: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 547563: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547565: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547568: jle 0x547586 */
  if ((zf || sf != of)) goto L_547586;
L_54756a: /* 54756a: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54756d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54756e: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547571: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547573: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547576: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54757a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54757c: mov ecx, esi */
  ecx = esi;
/* 54757e: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547581: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547586u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547586: /* 547586: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547588: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 54758b: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54758e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547590: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_547592: /* 547592: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547598: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54759b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 54759e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54759f: call 0x4e11cc */
  esp -= 4; W32(esp, 0x5475a4u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_5475a4: /* 5475a4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5475a7: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5475acu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5475ac: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5475af: jmp 0x547530 */
  goto L_547530;
L_5475e9: /* 5475e9: xor ecx, ecx */
  ecx = 0;
/* 5475eb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5475ed: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5475f4: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 5475f8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5475fb: je 0x54792d */
  if (zf) goto L_54792d;
L_547601: /* 547601: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547608: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 54760b: call 0x4e2446 */
  esp -= 4; W32(esp, 0x547610u); SPILL(); f_4e2446(); if (g_unwind) return; RELOAD();
/* 547610: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547616: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 54761a: xor eax, eax */
  eax = 0;
/* 54761c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_547620: /* 547620: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547623: jge 0x547628 */
  if ((sf == of)) goto L_547628;
L_547625: /* 547625: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547626: jmp 0x547620 */
  goto L_547620;
L_547628: /* 547628: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 54762b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54762d: mov ecx, esi */
  ecx = esi;
/* 54762f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 547636: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54763bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54763b: xor esi, esi */
  esi = 0;
/* 54763d: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 547640: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 547643: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 547646: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 547649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54764a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54764c: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54764f: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 547653: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x547658u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 547658: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54765b: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 54765e: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547661: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 547664: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 547668: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 54766b: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 547672: call 0x4e22b6 */
  esp -= 4; W32(esp, 0x547677u); SPILL(); f_4e22b6(); if (g_unwind) return; RELOAD();
/* 547677: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
L_54767b: /* 54767b: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54767e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 547681: jge 0x5476a4 */
  if ((sf == of)) goto L_5476a4;
L_547683: /* 547683: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 547686: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 547689: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 54768d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54768f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547694u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547694: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 547697: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547699: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 54769c: call 0x4e3670 */
  esp -= 4; W32(esp, 0x5476a1u); SPILL(); f_4e3670(); if (g_unwind) return; RELOAD();
/* 5476a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5476a2: jmp 0x54767b */
  goto L_54767b;
L_5476a4: /* 5476a4: xor esi, esi */
  esi = 0;
/* 5476a6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 5476a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5476b0: /* 5476b0: cmp esi, dword ptr [ebx + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5476b6: jge 0x547846 */
  if ((sf == of)) goto L_547846;
L_5476bc: /* 5476bc: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 5476bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c3: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5476c8u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5476c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5476ca: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* 5476d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5476d1: mov ecx, ebx */
  ecx = ebx;
/* 5476d3: call 0x4e35fd */
  esp -= 4; W32(esp, 0x5476d8u); SPILL(); f_4e35fd(); if (g_unwind) return; RELOAD();
/* 5476d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476d9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5476dc: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 5476e0: call 0x4e114f */
  esp -= 4; W32(esp, 0x5476e5u); SPILL(); f_4e114f(); if (g_unwind) return; RELOAD();
/* 5476e5: mov esi, eax */
  esi = eax;
/* 5476e7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 5476ea: xor ebx, ebx */
  ebx = 0;
/* 5476ec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5476ee: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 5476f4: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 5476f8: mov dword ptr [ebp - 0xf4], ebx */
  W32((uint32_t)(ebp + 0xffffff0cu), ebx);
/* 5476fe: mov dword ptr [ebp - 0xf0], ebx */
  W32((uint32_t)(ebp + 0xffffff10u), ebx);
/* 547704: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547709u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 547709: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 54770f: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 547713: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x547718u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 547718: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54771a: je 0x5477ea */
  if (zf) goto L_5477ea;
L_547720: /* 547720: mov esi, dword ptr [edi + 0x88] */
  esi = R32((uint32_t)(edi + 0x88u));
/* 547726: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54772c: lea ebx, [edi + 0x84] */
  ebx = (uint32_t)(edi + 0x84u);
/* 547732: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 547735: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547737: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 54773a: jle 0x547758 */
  if ((zf || sf != of)) goto L_547758;
L_54773c: /* 54773c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54773f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547740: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547743: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547745: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547748: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 54774c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54774e: mov ecx, ebx */
  ecx = ebx;
/* 547750: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 547753: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547758u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547758: /* 547758: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54775a: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 54775d: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 547760: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547762: je 0x54777e */
  if (zf) goto L_54777e;
L_547764: /* 547764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 547767: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 547769: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 54776c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54776f: lea esi, [eax + ecx*4] */
  esi = (uint32_t)(eax + ecx*4);
/* 547772: mov ecx, 9 */
  ecx = 0x9u;
/* 547777: mov edi, edx */
  edi = edx;
/* 547779: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 54777b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_54777e: /* 54777e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 547781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547783: jg 0x54779c */
  if ((!zf && sf == of)) goto L_54779c;
L_547785: /* 547785: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 54778a: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54778f: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547794: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547799u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547799: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54779c: /* 54779c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 54779f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5477a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5477a4: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5477a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477a9: mov ecx, dword ptr [edx + ecx*4 - 8] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xfffffff8u));
/* 5477ad: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5477b0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5477b3: cmp ecx, dword ptr [edx + eax*4 + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + eax*4 + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5477b7: je 0x5477d0 */
  if (zf) goto L_5477d0;
L_5477b9: /* 5477b9: push 0xc0d */
  { uint32_t v = 0xc0du; esp -= 4; W32(esp, v); }
/* 5477be: push 0x5abdc0 */
  { uint32_t v = 0x5abdc0u; esp -= 4; W32(esp, v); }
/* 5477c3: push 0x5abdcc */
  { uint32_t v = 0x5abdccu; esp -= 4; W32(esp, v); }
/* 5477c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5477cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5477cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5477d0: /* 5477d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477d2: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 5477d5: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5477d8: mov byte ptr [ecx + eax], 1 */
  W8((uint32_t)(ecx + eax), 0x1u);
/* 5477dc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5477df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5477e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5477e3: mov esi, eax */
  esi = eax;
/* 5477e5: jmp 0x5476b0 */
  goto L_5476b0;
L_5477ea: /* 5477ea: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 5477f0: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 5477f6: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 5477fc: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5477ff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547801: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547804: jle 0x547822 */
  if ((zf || sf != of)) goto L_547822;
L_547806: /* 547806: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547809: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54780a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54780d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54780f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547812: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547816: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547818: mov ecx, esi */
  ecx = esi;
/* 54781a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54781d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547822u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547822: /* 547822: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547824: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 547827: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54782a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54782c: je 0x547835 */
  if (zf) goto L_547835;
L_54782e: /* 54782e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547830: call 0x4e11cc */
  esp -= 4; W32(esp, 0x547835u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_547835: /* 547835: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547838: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54783b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54783c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54783f: mov esi, eax */
  esi = eax;
/* 547841: jmp 0x5476b0 */
  goto L_5476b0;
L_547846: /* 547846: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 547849: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 54784f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547852: xor ebx, ebx */
  ebx = 0;
L_547854: /* 547854: cmp ebx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547857: jge 0x5478c2 */
  if ((sf == of)) goto L_5478c2;
L_547859: /* 547859: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 54785c: cmp byte ptr [ebx + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 547860: jne 0x5478bf */
  if (!zf) goto L_5478bf;
L_547862: /* 547862: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547868: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54786e: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547874: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 547877: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547878: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54787a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54787d: jle 0x54789b */
  if ((zf || sf != of)) goto L_54789b;
L_54787f: /* 54787f: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547882: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547883: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547886: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547888: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54788b: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54788f: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547891: mov ecx, esi */
  ecx = esi;
/* 547893: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547896: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54789bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54789b: /* 54789b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54789e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5478a0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5478a3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 5478a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478a8: je 0x5478bf */
  if (zf) goto L_5478bf;
L_5478aa: /* 5478aa: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5478ad: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 5478b0: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 5478b3: mov ecx, 9 */
  ecx = 0x9u;
/* 5478b8: mov edi, eax */
  edi = eax;
/* 5478ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 5478bc: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_5478bf: /* 5478bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 5478c0: jmp 0x547854 */
  goto L_547854;
L_5478c2: /* 5478c2: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5478c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478c7: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 5478cb: je 0x5478d9 */
  if (zf) goto L_5478d9;
L_5478cd: /* 5478cd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5478d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5478d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478d6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5478d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5478d9: /* 5478d9: xor esi, esi */
  esi = 0;
/* 5478db: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 5478de: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 5478e1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5478e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5478e6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5478e9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 5478ed: call 0x4e2fb8 */
  esp -= 4; W32(esp, 0x5478f2u); SPILL(); f_4e2fb8(); if (g_unwind) return; RELOAD();
/* 5478f2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 5478f5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5478f7: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 5478fb: je 0x547909 */
  if (zf) goto L_547909;
L_5478fd: /* 5478fd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 547903: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547905: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547906: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x547909u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547909: /* 547909: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54790c: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54790f: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547912: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 547915: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 547919: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x54791eu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 54791e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 547921: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 547925: call 0x4e322e */
  esp -= 4; W32(esp, 0x54792au); SPILL(); f_4e322e(); if (g_unwind) return; RELOAD();
/* 54792a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_54792d: /* 54792d: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547933: push 0x4e16d6 */
  { uint32_t v = 0x4e16d6u; esp -= 4; W32(esp, v); }
/* 547938: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54793a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54793c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54793d: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 547940: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547946: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54794a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54794fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54794f: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547955: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547958: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 54795b: mov dword ptr [ebp - 4], 0x26 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 547962: xor eax, eax */
  eax = 0;
L_547964: /* 547964: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54796a: jge 0x54798f */
  if ((sf == of)) goto L_54798f;
L_54796c: /* 54796c: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547972: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547975: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 547979: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54797b: je 0x54798c */
  if (zf) goto L_54798c;
L_54797d: /* 54797d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 547980: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 547986: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 547989: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
L_54798c: /* 54798c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54798d: jmp 0x547964 */
  goto L_547964;
L_54798f: /* 54798f: xor eax, eax */
  eax = 0;
L_547991: /* 547991: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547994: jge 0x5479b6 */
  if ((sf == of)) goto L_5479b6;
L_547996: /* 547996: mov esi, dword ptr [edi + 0x78] */
  esi = R32((uint32_t)(edi + 0x78u));
/* 547999: mov ecx, eax */
  ecx = eax;
/* 54799b: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 54799e: mov ecx, dword ptr [ecx + esi + 0x10] */
  ecx = R32((uint32_t)(ecx + esi + 0x10u));
/* 5479a2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 5479a5: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 5479ab: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 5479ae: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5479b0: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
/* 5479b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5479b4: jmp 0x547991 */
  goto L_547991;
L_5479b6: /* 5479b6: xor eax, eax */
  eax = 0;
/* 5479b8: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5479bf: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 5479c3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5479c6: jmp 0x5479d0 */
  goto L_5479d0;
L_5479d0: /* 5479d0: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5479d6: jge 0x547b70 */
  if ((sf == of)) goto L_547b70;
L_5479dc: /* 5479dc: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 5479df: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 5479e5: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 5479e8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 5479eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479ed: je 0x547b2f */
  if (zf) goto L_547b2f;
L_5479f3: /* 5479f3: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
L_5479f6: /* 5479f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479f8: je 0x547a06 */
  if (zf) goto L_547a06;
L_5479fa: /* 5479fa: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5479ff: je 0x547a35 */
  if (zf) goto L_547a35;
L_547a01: /* 547a01: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a04: jmp 0x5479f6 */
  goto L_5479f6;
L_547a06: /* 547a06: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547a09: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 547a0c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a0f: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 547a15: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 547a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a1a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 547a1c: jne 0x547a35 */
  if (!zf) goto L_547a35;
L_547a1e: /* 547a1e: push 0xc39 */
  { uint32_t v = 0xc39u; esp -= 4; W32(esp, v); }
/* 547a23: push 0x5abe14 */
  { uint32_t v = 0x5abe14u; esp -= 4; W32(esp, v); }
/* 547a28: push 0x5abe20 */
  { uint32_t v = 0x5abe20u; esp -= 4; W32(esp, v); }
/* 547a2d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a32u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a35: /* 547a35: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a38: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 547a3b: jmp 0x547a40 */
  goto L_547a40;
L_547a40: /* 547a40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a42: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a44: /* 547a44: cmp eax, 0x5f0848 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0848u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a49: je 0x547a50 */
  if (zf) goto L_547a50;
L_547a4b: /* 547a4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a4e: jmp 0x547a40 */
  goto L_547a40;
L_547a50: /* 547a50: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a53: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a58: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a5a: /* 547a5a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a5d: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547a63: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a68: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 547a6b: jne 0x547a84 */
  if (!zf) goto L_547a84;
L_547a6d: /* 547a6d: push 0xc41 */
  { uint32_t v = 0xc41u; esp -= 4; W32(esp, v); }
/* 547a72: push 0x5abe38 */
  { uint32_t v = 0x5abe38u; esp -= 4; W32(esp, v); }
/* 547a77: push 0x5abe44 */
  { uint32_t v = 0x5abe44u; esp -= 4; W32(esp, v); }
/* 547a7c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a81u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a81: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a84: /* 547a84: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 547a87: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547a8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 547a8d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a8f: je 0x547af0 */
  if (zf) goto L_547af0;
L_547a91: /* 547a91: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547a94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a96: je 0x547a9e */
  if (zf) goto L_547a9e;
L_547a98: /* 547a98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a9a: je 0x547ac0 */
  if (zf) goto L_547ac0;
L_547a9c: /* 547a9c: jmp 0x547a91 */
  goto L_547a91;
L_547a9e: /* 547a9e: xor eax, eax */
  eax = 0;
/* 547aa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547aa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa7: jne 0x547ac0 */
  if (!zf) goto L_547ac0;
L_547aa9: /* 547aa9: push 0xc48 */
  { uint32_t v = 0xc48u; esp -= 4; W32(esp, v); }
/* 547aae: push 0x5abe5c */
  { uint32_t v = 0x5abe5cu; esp -= 4; W32(esp, v); }
/* 547ab3: push 0x5abe68 */
  { uint32_t v = 0x5abe68u; esp -= 4; W32(esp, v); }
/* 547ab8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547abdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547abd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547ac0: /* 547ac0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547ac3: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547ac6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547ac9: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547acf: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547ad4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547ad7: jg 0x547af0 */
  if ((!zf && sf == of)) goto L_547af0;
L_547ad9: /* 547ad9: push 0xc4a */
  { uint32_t v = 0xc4au; esp -= 4; W32(esp, v); }
/* 547ade: push 0x5abe94 */
  { uint32_t v = 0x5abe94u; esp -= 4; W32(esp, v); }
/* 547ae3: push 0x5abea0 */
  { uint32_t v = 0x5abea0u; esp -= 4; W32(esp, v); }
/* 547ae8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547aedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547af0: /* 547af0: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547af6: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547afc: mov ecx, ebx */
  ecx = ebx;
/* 547afe: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b01: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547b04: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 547b07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547b09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547b0a: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x547b0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b0d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b10: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547b16: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547b19: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547b1c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547b1e: mov ecx, ebx */
  ecx = ebx;
/* 547b20: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547b23: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 547b29: sub eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547b2c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_547b2f: /* 547b2f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547b33: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547b36: jmp 0x5479d0 */
  goto L_5479d0;
L_547b70: /* 547b70: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547b76: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547b7c: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547b83: mov ecx, ebx */
  ecx = ebx;
/* 547b85: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 547b89: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b8c: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* 547b8f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 547b96: jmp 0x547ba0 */
  goto L_547ba0;
L_547ba0: /* 547ba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547ba3: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547ba6: jge 0x547c3f */
  if ((sf == of)) goto L_547c3f;
L_547bac: /* 547bac: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 547baf: mov esi, eax */
  esi = eax;
/* 547bb1: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 547bb4: mov ecx, dword ptr [esi + edx + 0x10] */
  ecx = R32((uint32_t)(esi + edx + 0x10u));
/* 547bb8: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 547bbb: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 547bbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bbf: je 0x547c23 */
  if (zf) goto L_547c23;
L_547bc1: /* 547bc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_547bc4: /* 547bc4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bc9: je 0x547bd1 */
  if (zf) goto L_547bd1;
L_547bcb: /* 547bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547bcd: je 0x547bdc */
  if (zf) goto L_547bdc;
L_547bcf: /* 547bcf: jmp 0x547bc4 */
  goto L_547bc4;
L_547bd1: /* 547bd1: xor eax, eax */
  eax = 0;
/* 547bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bd5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bda: je 0x547bf3 */
  if (zf) goto L_547bf3;
L_547bdc: /* 547bdc: push 0xc5f */
  { uint32_t v = 0xc5fu; esp -= 4; W32(esp, v); }
/* 547be1: push 0x5abec0 */
  { uint32_t v = 0x5abec0u; esp -= 4; W32(esp, v); }
/* 547be6: push 0x5abecc */
  { uint32_t v = 0x5abeccu; esp -= 4; W32(esp, v); }
/* 547beb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547bf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547bf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547bf3: /* 547bf3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 547bf6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547bf9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547bfc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547c02: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547c07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547c0a: jl 0x547c23 */
  if ((sf != of)) goto L_547c23;
L_547c0c: /* 547c0c: push 0xc61 */
  { uint32_t v = 0xc61u; esp -= 4; W32(esp, v); }
/* 547c11: push 0x5abef8 */
  { uint32_t v = 0x5abef8u; esp -= 4; W32(esp, v); }
/* 547c16: push 0x5abf04 */
  { uint32_t v = 0x5abf04u; esp -= 4; W32(esp, v); }
/* 547c1b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547c20u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547c20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547c23: /* 547c23: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547c29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547c2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c2b: call 0x4e1ded */
  esp -= 4; W32(esp, 0x547c30u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 547c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547c33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547c37: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547c3a: jmp 0x547ba0 */
  goto L_547ba0;
L_547c3f: /* 547c3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547c41: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c48: mov ecx, ebx */
  ecx = ebx;
/* 547c4a: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 547c4e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547c51: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 547c54: xor esi, esi */
  esi = 0;
L_547c56: /* 547c56: cmp esi, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547c5c: jge 0x547c77 */
  if ((sf == of)) goto L_547c77;
L_547c5e: /* 547c5e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547c64: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 547c67: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547c6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c6c: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x547c71u); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 547c71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c74: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 547c75: jmp 0x547c56 */
  goto L_547c56;
L_547c77: /* 547c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547c79: push 0x5abf2c */
  { uint32_t v = 0x5abf2cu; esp -= 4; W32(esp, v); }
/* 547c7e: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c85: push 0x5abf38 */
  { uint32_t v = 0x5abf38u; esp -= 4; W32(esp, v); }
/* 547c8a: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 547c8e: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x547c93u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 547c93: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547c9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ca4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x547ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ca7: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547caf: jg 0x547cc8 */
  if ((!zf && sf == of)) goto L_547cc8;
L_547cb1: /* 547cb1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547cb6: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547cbb: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547cc0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cc5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cc8: /* 547cc8: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547ccb: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cce: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 547cd1: mov dword ptr [ecx + eax*8 - 8], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffff8u), edx);
/* 547cd5: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547cda: jg 0x547cf3 */
  if ((!zf && sf == of)) goto L_547cf3;
L_547cdc: /* 547cdc: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547ce1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547ce6: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cf3: /* 547cf3: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cf6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cf9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 547cfc: mov dword ptr [ecx + eax*8 - 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffffcu), edx);
/* 547d00: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 547d02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d04: mov ecx, ebx */
  ecx = ebx;
/* 547d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x547d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547d09: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 547d0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 547d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547d0e: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547d13u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547d13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d16: mov edi, 1 */
  edi = 0x1u;
/* 547d1b: jmp 0x547f04 */
  goto L_547f04;
L_547f04: /* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_546b6a(void) {
  LOAD_REGS();
L_546b6a: /* 546b6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_546b70: /* 546b70: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 546b73: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546b79: jge 0x546b91 */
  if ((sf == of)) goto L_546b91;
L_546b7b: /* 546b7b: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546b81: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 546b84: and dword ptr [eax + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 546b87: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546b8a: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546b8fu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546b8f: jmp 0x546b70 */
  goto L_546b70;
L_546b91: /* 546b91: xor ecx, ecx */
  ecx = 0;
L_546b93: /* 546b93: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546b99: jge 0x546bae */
  if ((sf == of)) goto L_546bae;
L_546b9b: /* 546b9b: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546ba1: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 546ba4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546ba6: je 0x546bab */
  if (zf) goto L_546bab;
L_546ba8: /* 546ba8: and dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_546bab: /* 546bab: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 546bac: jmp 0x546b93 */
  goto L_546b93;
L_546bae: /* 546bae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 546bb1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 546bb4: mov dword ptr [ebp - 0x9c], 0x7e */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7eu);
/* 546bbe: mov dword ptr [ebp - 0x98], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x7d0u);
/* 546bc8: mov dword ptr [ebp - 0x94], edi */
  W32((uint32_t)(ebp + 0xffffff6cu), edi);
/* 546bce: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 546bd4: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 546bda: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 546bdd: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 546be0: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 546be3: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 546be6: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 546be9: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 546bec: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 546bef: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 546bf6: mov dword ptr [ebp - 0xa0], 0x56d780 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x56d780u);
/* 546c00: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 546c03: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 546c09: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 546c0f: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c12: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 546c16: je 0x546c28 */
  if (zf) goto L_546c28;
L_546c18: /* 546c18: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 546c1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546c1c: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 546c22: call dword ptr [0x56d798] */
  { uint32_t t = R32((uint32_t)(0x56d798u)); esp -= 4; W32(esp, 0x546c28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_546c28: /* 546c28: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546c2b: mov dword ptr [ebp - 0x30], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x6a0f20u);
/* 546c32: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 546c39: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546c3eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546c3e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 546c41: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 546c47: jmp 0x546c50 */
  goto L_546c50;
L_546c50: /* 546c50: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 546c53: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546c59: jge 0x546ce0 */
  if ((sf == of)) goto L_546ce0;
L_546c5f: /* 546c5f: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
/* 546c62: test dword ptr [eax + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546c65: je 0x546ca1 */
  if (zf) goto L_546ca1;
L_546c67: /* 546c67: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_546c6a: /* 546c6a: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 546c6d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c6f: je 0x546c77 */
  if (zf) goto L_546c77;
L_546c71: /* 546c71: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c73: je 0x546c82 */
  if (zf) goto L_546c82;
L_546c75: /* 546c75: jmp 0x546c6a */
  goto L_546c6a;
L_546c77: /* 546c77: xor eax, eax */
  eax = 0;
/* 546c79: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c7b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 546c7e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c80: je 0x546ca1 */
  if (zf) goto L_546ca1;
L_546c82: /* 546c82: mov edx, dword ptr [esi + ecx*4] */
  edx = R32((uint32_t)(esi + ecx*4));
/* 546c85: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 546c88: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 546c8b: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 546c91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546c92: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 546c98: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x546c9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546c9b: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_546ca1: /* 546ca1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546ca4: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ca9u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ca9: jmp 0x546c50 */
  goto L_546c50;
L_546ce0: /* 546ce0: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 546ce6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546ce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546cea: xor eax, eax */
  eax = 0;
/* 546cec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cee: mov eax, dword ptr [0x69f458] */
  eax = R32((uint32_t)(0x69f458u));
/* 546cf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cf4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 546cf7: push 0x6a1980 */
  { uint32_t v = 0x6a1980u; esp -= 4; W32(esp, v); }
/* 546cfc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 546cff: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546d03: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x546d08u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 546d08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546d0b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546d0d: je 0x546d25 */
  if (zf) goto L_546d25;
L_546d0f: /* 546d0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 546d12: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 546d18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546d19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546d1a: mov ecx, eax */
  ecx = eax;
/* 546d1c: call 0x4e2707 */
  esp -= 4; W32(esp, 0x546d21u); SPILL(); f_4e2707(); if (g_unwind) return; RELOAD();
/* 546d21: mov edi, eax */
  edi = eax;
/* 546d23: jmp 0x546d27 */
  goto L_546d27;
L_546d25: /* 546d25: xor edi, edi */
  edi = 0;
L_546d27: /* 546d27: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546d2a: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 546d2d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546d31: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546d38: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 546d3f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546d44u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546d44: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546d4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_546d50: /* 546d50: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546d53: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546d59: jge 0x546ec0 */
  if ((sf == of)) goto L_546ec0;
L_546d5f: /* 546d5f: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546d62: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546d66: je 0x546e7e */
  if (zf) goto L_546e7e;
L_546d6c: /* 546d6c: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 546d6f: mov ecx, 1 */
  ecx = 0x1u;
/* 546d74: xor edx, edx */
  edx = 0;
/* 546d76: and eax, 0x70000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 546d7b: mov dword ptr [ebp - 0xa0], 0x7e */
  W32((uint32_t)(ebp + 0xffffff60u), 0x7eu);
/* 546d85: mov dword ptr [ebp - 0x9c], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7d0u);
/* 546d8f: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 546d95: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 546d9b: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 546da1: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 546da7: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 546daa: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 546dad: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 546db0: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 546db3: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 546db6: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 546db9: mov dword ptr [ebp - 0x68], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0xffffffffu);
/* 546dc0: mov dword ptr [ebp - 0xa4], 0x56d7f0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x56d7f0u);
/* 546dca: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 546dcd: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 546dd0: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 546dd6: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 546ddc: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* 546ddf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 546de1: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 546de7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546de8: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 546dec: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x546defu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546def: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546df4: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546df7: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546dfa: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 546e00: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 546e03: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 546e06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546e07: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 546e0d: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x546e10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546e10: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e16: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546e19: mov ecx, dword ptr [0x69f458] */
  ecx = R32((uint32_t)(0x69f458u));
L_546e1f: /* 546e1f: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 546e22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e24: je 0x546e2c */
  if (zf) goto L_546e2c;
L_546e26: /* 546e26: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546e28: je 0x546e37 */
  if (zf) goto L_546e37;
L_546e2a: /* 546e2a: jmp 0x546e1f */
  goto L_546e1f;
L_546e2c: /* 546e2c: xor eax, eax */
  eax = 0;
/* 546e2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e30: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 546e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e35: je 0x546e70 */
  if (zf) goto L_546e70;
L_546e37: /* 546e37: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 546e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e3c: mov ecx, esi */
  ecx = esi;
/* 546e3e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546e43u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546e43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e45: push 0x5abc4c */
  { uint32_t v = 0x5abc4cu; esp -= 4; W32(esp, v); }
/* 546e4a: push 0x5abc58 */
  { uint32_t v = 0x5abc58u; esp -= 4; W32(esp, v); }
/* 546e4f: mov esi, eax */
  esi = eax;
/* 546e51: call 0x4e1613 */
  esp -= 4; W32(esp, 0x546e56u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 546e56: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 546e5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546e61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546e62: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546e67u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546e67: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546e70: /* 546e70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546e74: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
L_546e7e: /* 546e7e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546e81: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546e86u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546e86: jmp 0x546d50 */
  goto L_546d50;
L_546ec0: /* 546ec0: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546ec7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 546eca: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 546ece: mov dword ptr [ebp - 0x1c], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x6a0f20u);
/* 546ed5: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 546edc: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ee1u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ee1: mov ebx, 0x70010 */
  ebx = 0x70010u;
/* 546ee6: jmp 0x546ef0 */
  goto L_546ef0;
L_546ef0: /* 546ef0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546ef3: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ef9: jge 0x5470fc */
  if ((sf == of)) goto L_5470fc;
L_546eff: /* 546eff: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f05: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f08: test byte ptr [eax + 0x1c], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f0c: je 0x54708d */
  if (zf) goto L_54708d;
L_546f12: /* 546f12: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f15: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546f1b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546f1e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f21: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f26: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f29: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 546f2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f2e: je 0x546f41 */
  if (zf) goto L_546f41;
L_546f30: /* 546f30: mov eax, ecx */
  eax = ecx;
/* 546f32: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 546f38: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f3b: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 546f3e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_546f41: /* 546f41: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 546f47: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 546f4a: test byte ptr [ecx + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f4e: je 0x54709a */
  if (zf) goto L_54709a;
L_546f54: /* 546f54: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 546f57: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 546f5a: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 546f5f: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 546f62: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f65: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f6b: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f6e: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 546f71: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 546f74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f76: jne 0x546f8f */
  if (!zf) goto L_546f8f;
L_546f78: /* 546f78: push 0xb8a */
  { uint32_t v = 0xb8au; esp -= 4; W32(esp, v); }
/* 546f7d: push 0x5abc80 */
  { uint32_t v = 0x5abc80u; esp -= 4; W32(esp, v); }
/* 546f82: push 0x5abc8c */
  { uint32_t v = 0x5abc8cu; esp -= 4; W32(esp, v); }
/* 546f87: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x546f8cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 546f8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546f8f: /* 546f8f: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f94: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f97: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546f9a: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 546f9d: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546fa0: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546fa6: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546fa9: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546fac: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546fb1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 546fb4: test byte ptr [ecx + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546fb8: jne 0x54708d */
  if (!zf) goto L_54708d;
L_546fbe: /* 546fbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546fc0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546fc5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546fc5: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 546fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546fcc: push 0x5abca4 */
  { uint32_t v = 0x5abca4u; esp -= 4; W32(esp, v); }
/* 546fd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546fd2: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546fd7u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546fd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546fda: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546fe1: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
L_546fe8: /* 546fe8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546feb: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ff0u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ff0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546ff3: cmp ebx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ff9: jge 0x547052 */
  if ((sf == of)) goto L_547052;
L_546ffb: /* 546ffb: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547000: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 547003: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 547006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547008: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 54700e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x547013u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 547013: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 547016: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547018: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 54701c: je 0x547042 */
  if (zf) goto L_547042;
L_54701e: /* 54701e: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547024: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 547027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547029: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54702eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54702f: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 547034: push 0x5abccc */
  { uint32_t v = 0x5abcccu; esp -= 4; W32(esp, v); }
/* 547039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54703a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54703fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54703f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547042: /* 547042: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 547046: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
/* 547050: jmp 0x546fe8 */
  goto L_546fe8;
L_547052: /* 547052: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547058: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 54705b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54705d: mov ecx, esi */
  ecx = esi;
/* 54705f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547064u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547066: push 0x5abcd8 */
  { uint32_t v = 0x5abcd8u; esp -= 4; W32(esp, v); }
/* 54706b: push 0x5abce4 */
  { uint32_t v = 0x5abce4u; esp -= 4; W32(esp, v); }
/* 547070: mov esi, eax */
  esi = eax;
/* 547072: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547077u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547077: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 54707a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54707d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54707e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54707f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547080: call 0x4e3418 */
  esp -= 4; W32(esp, 0x547085u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 547085: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547088: mov ebx, 0x70010 */
  ebx = 0x70010u;
L_54708d: /* 54708d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 547090: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547095u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547095: jmp 0x546ef0 */
  goto L_546ef0;
L_54709a: /* 54709a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54709c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5470a1u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5470a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470a2: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 5470a7: push 0x5abd08 */
  { uint32_t v = 0x5abd08u; esp -= 4; W32(esp, v); }
/* 5470ac: push 0x309 */
  { uint32_t v = 0x309u; esp -= 4; W32(esp, v); }
/* 5470b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470b2: call 0x4e30df */
  esp -= 4; W32(esp, 0x5470b7u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5470b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5470ba: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5470bd: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5470c2u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5470c2: jmp 0x546ef0 */
  goto L_546ef0;
L_5470fc: /* 5470fc: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5470ff: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547101: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547108: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 54710c: je 0x54716a */
  if (zf) goto L_54716a;
L_54710e: /* 54710e: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 547114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547116: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 547119: je 0x547123 */
  if (zf) goto L_547123;
L_54711b: /* 54711b: mov eax, dword ptr [ebx + 0x94] */
  eax = R32((uint32_t)(ebx + 0x94u));
/* 547121: jmp 0x547128 */
  goto L_547128;
L_547123: /* 547123: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_547128: /* 547128: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547129: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54712a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54712b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 547130: push 0x5abd28 */
  { uint32_t v = 0x5abd28u; esp -= 4; W32(esp, v); }
/* 547135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547136: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54713bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54713b: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 54713e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547140: lea edx, [edi + 0x50] */
  edx = (uint32_t)(edi + 0x50u);
/* 547143: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 547145: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 547148: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 54714b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 54714e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 547151: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 547154: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547157: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 54715a: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 54715d: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 547160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547161: mov ecx, esi */
  ecx = esi;
/* 547163: call 0x4e31ac */
  esp -= 4; W32(esp, 0x547168u); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 547168: jmp 0x5471bb */
  goto L_5471bb;
L_54716a: /* 54716a: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 547170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547171: call 0x4e261c */
  esp -= 4; W32(esp, 0x547176u); SPILL(); f_4e261c(); if (g_unwind) return; RELOAD();
/* 547176: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 547178: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 54717b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54717d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 547180: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 547183: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 547186: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 547189: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 54718c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 54718f: xor eax, eax */
  eax = 0;
/* 547191: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547194: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 547197: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 54719a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 54719d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471a0: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 5471a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471a4: mov ecx, esi */
  ecx = esi;
/* 5471a6: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 5471aa: call 0x4e31ac */
  esp -= 4; W32(esp, 0x5471afu); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 5471af: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471b2: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 5471b6: call 0x4e3bd9 */
  esp -= 4; W32(esp, 0x5471bbu); SPILL(); f_4e3bd9(); if (g_unwind) return; RELOAD();
L_5471bb: /* 5471bb: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 5471be: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5471c1: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5471c4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5471c6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5471c9: jle 0x5471e7 */
  if ((zf || sf != of)) goto L_5471e7;
L_5471cb: /* 5471cb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5471ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5471cf: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5471d2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5471d4: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5471d7: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5471db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5471dd: mov ecx, esi */
  ecx = esi;
/* 5471df: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 5471e2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5471e7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5471e7: /* 5471e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5471e9: lea ecx, [eax + ebx*8] */
  ecx = (uint32_t)(eax + ebx*8);
/* 5471ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5471ee: je 0x5471f9 */
  if (zf) goto L_5471f9;
L_5471f0: /* 5471f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f4: call 0x4e19a6 */
  esp -= 4; W32(esp, 0x5471f9u); SPILL(); f_4e19a6(); if (g_unwind) return; RELOAD();
L_5471f9: /* 5471f9: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 5471fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471fd: lea esi, [edi + 0xb4] */
  esi = (uint32_t)(edi + 0xb4u);
/* 547203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547204: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547209u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54720b: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547212: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547215: mov ecx, esi */
  ecx = esi;
/* 547217: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 54721b: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x54721eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54721e: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 547221: xor ecx, ecx */
  ecx = 0;
L_547223: /* 547223: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547229: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54722c: jge 0x54727c */
  if ((sf == of)) goto L_54727c;
L_54722e: /* 54722e: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 547233: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 547236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547238: je 0x547279 */
  if (zf) goto L_547279;
L_54723a: /* 54723a: test byte ptr [eax + 4], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54723e: je 0x547279 */
  if (zf) goto L_547279;
L_547240: /* 547240: mov ebx, dword ptr [edi + 0x70] */
  ebx = R32((uint32_t)(edi + 0x70u));
/* 547243: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547246: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547249: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54724c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54724e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547251: jle 0x54726f */
  if ((zf || sf != of)) goto L_54726f;
L_547253: /* 547253: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547256: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547257: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54725a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54725c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54725f: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 547263: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 547266: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547268: mov ecx, esi */
  ecx = esi;
/* 54726a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54726fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54726f: /* 54726f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547272: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 547274: mov dword ptr [edx + ebx*4], eax */
  W32((uint32_t)(edx + ebx*4), eax);
/* 547277: mov ecx, eax */
  ecx = eax;
L_547279: /* 547279: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54727a: jmp 0x547223 */
  goto L_547223;
L_54727c: /* 54727c: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54727f: xor ecx, ecx */
  ecx = 0;
/* 547281: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547283: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54728a: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 54728e: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547294: je 0x547375 */
  if (zf) goto L_547375;
L_54729a: /* 54729a: xor edx, edx */
  edx = 0;
L_54729c: /* 54729c: cmp edx, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54729f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5472a2: jge 0x547372 */
  if ((sf == of)) goto L_547372;
L_5472a8: /* 5472a8: xor eax, eax */
  eax = 0;
/* 5472aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5472b0: /* 5472b0: cmp eax, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5472b3: jge 0x5472ca */
  if ((sf == of)) goto L_5472ca;
L_5472b5: /* 5472b5: mov esi, dword ptr [edi + 0x6c] */
  esi = R32((uint32_t)(edi + 0x6cu));
/* 5472b8: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 5472bb: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 5472be: cmp esi, dword ptr [ecx + edx*4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472c1: jne 0x5472c7 */
  if (!zf) goto L_5472c7;
L_5472c3: /* 5472c3: mov ecx, eax */
  ecx = eax;
/* 5472c5: jmp 0x5472cd */
  goto L_5472cd;
L_5472c7: /* 5472c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5472c8: jmp 0x5472b0 */
  goto L_5472b0;
L_5472ca: /* 5472ca: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_5472cd: /* 5472cd: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 5472d4: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 5472d7: mov eax, dword ptr [edx + 0x6c] */
  eax = R32((uint32_t)(edx + 0x6cu));
/* 5472da: cmp dword ptr [ebx + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472de: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e0: /* 5472e0: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472e3: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e5: /* 5472e5: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 5472e8: mov edx, dword ptr [eax + ebx] */
  edx = R32((uint32_t)(eax + ebx));
/* 5472eb: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 5472ee: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5472f1: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5472f4: mov dword ptr [eax + ebx], edx */
  W32((uint32_t)(eax + ebx), edx);
/* 5472f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5472fa: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 5472fd: jmp 0x547358 */
  goto L_547358;
L_5472ff: /* 5472ff: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 547302: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547305: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547308: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547309: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54730b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54730e: jle 0x54732c */
  if ((zf || sf != of)) goto L_54732c;
L_547310: /* 547310: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547313: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547314: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547317: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547319: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54731c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 547320: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547322: mov ecx, esi */
  ecx = esi;
/* 547324: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547327: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54732cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54732c: /* 54732c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54732f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547331: jg 0x54734a */
  if ((!zf && sf == of)) goto L_54734a;
L_547333: /* 547333: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547338: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54733d: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547342: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547347u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547347: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54734a: /* 54734a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54734c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54734f: mov eax, ecx */
  eax = ecx;
/* 547351: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547354: mov dword ptr [eax + edx*4 - 4], ecx */
  W32((uint32_t)(eax + edx*4 + 0xfffffffcu), ecx);
L_547358: /* 547358: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 54735b: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 54735e: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547361: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547363: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547366: mov dword ptr [ebx + eax], ecx */
  W32((uint32_t)(ebx + eax), ecx);
/* 547369: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54736c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54736d: jmp 0x54729c */
  goto L_54729c;
L_547372: /* 547372: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
L_547375: /* 547375: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547378: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 54737b: push 0x4e30c1 */
  { uint32_t v = 0x4e30c1u; esp -= 4; W32(esp, v); }
/* 547380: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547382: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547385: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547389: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54738eu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54738e: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547391: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547394: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54739b: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 54739f: mov dword ptr [edi + 0x38], eax */
  W32((uint32_t)(edi + 0x38u), eax);
/* 5473a2: xor esi, esi */
  esi = 0;
L_5473a4: /* 5473a4: cmp esi, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5473a7: jge 0x54740f */
  if ((sf == of)) goto L_54740f;
L_5473a9: /* 5473a9: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473ac: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 5473af: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5473b5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 5473b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473b9: lea eax, [edi + 0xb4] */
  eax = (uint32_t)(edi + 0xb4u);
/* 5473bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473c0: call 0x4e1be0 */
  esp -= 4; W32(esp, 0x5473c5u); SPILL(); f_4e1be0(); if (g_unwind) return; RELOAD();
/* 5473c5: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473c8: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 5473cb: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 5473d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5473d4: mov dword ptr [eax + edx*4], esi */
  W32((uint32_t)(eax + edx*4), esi);
/* 5473d7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5473d8: jmp 0x5473a4 */
  goto L_5473a4;
L_54740f: /* 54740f: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547416: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547419: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 54741d: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 547424: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 54742b: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547430u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
L_547430: /* 547430: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547433: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547439: jge 0x5474de */
  if ((sf == of)) goto L_5474de;
L_54743f: /* 54743f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547445: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547448: test byte ptr [eax + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54744c: je 0x54749c */
  if (zf) goto L_54749c;
L_54744e: /* 54744e: mov ebx, dword ptr [edi + 0x7c] */
  ebx = R32((uint32_t)(edi + 0x7cu));
/* 547451: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 547457: lea esi, [edi + 0x78] */
  esi = (uint32_t)(edi + 0x78u);
/* 54745a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54745d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54745f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547462: jle 0x547480 */
  if ((zf || sf != of)) goto L_547480;
L_547464: /* 547464: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547467: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547468: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54746b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54746d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547470: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547474: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 547476: mov ecx, esi */
  ecx = esi;
/* 547478: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54747b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547480u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547480: /* 547480: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547482: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 547485: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ebx = r;
  }
/* 547487: mov ecx, ebx */
  ecx = ebx;
/* 547489: je 0x54749c */
  if (zf) goto L_54749c;
L_54748b: /* 54748b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547490: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547493: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 547496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547497: call 0x4e442b */
  esp -= 4; W32(esp, 0x54749cu); SPILL(); f_4e442b(); if (g_unwind) return; RELOAD();
L_54749c: /* 54749c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54749f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5474a4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5474a4: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5474a7: jmp 0x547430 */
  goto L_547430;
L_5474de: /* 5474de: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 5474e1: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 5474e4: push 0x4e2c5c */
  { uint32_t v = 0x4e2c5cu; esp -= 4; W32(esp, v); }
/* 5474e9: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 5474eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5474ec: mov esi, 6 */
  esi = 0x6u;
/* 5474f1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 5474f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5474f5: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* 5474f8: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 5474fc: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547502: call 0x4e1785 */
  esp -= 4; W32(esp, 0x547507u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 547507: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54750a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 54750d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547510: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 547514: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 54751b: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 547522: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547527u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547527: jmp 0x547530 */
  goto L_547530;
L_547530: /* 547530: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547533: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547539: jge 0x5475e9 */
  if ((sf == of)) goto L_5475e9;
L_54753f: /* 54753f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547545: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547548: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54754c: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_54754e: /* 54754e: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 547554: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54755a: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547560: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 547563: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547565: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547568: jle 0x547586 */
  if ((zf || sf != of)) goto L_547586;
L_54756a: /* 54756a: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54756d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54756e: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547571: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547573: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547576: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54757a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54757c: mov ecx, esi */
  ecx = esi;
/* 54757e: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547581: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547586u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547586: /* 547586: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547588: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 54758b: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54758e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547590: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_547592: /* 547592: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547598: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54759b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 54759e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54759f: call 0x4e11cc */
  esp -= 4; W32(esp, 0x5475a4u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_5475a4: /* 5475a4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5475a7: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5475acu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5475ac: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5475af: jmp 0x547530 */
  goto L_547530;
L_5475e9: /* 5475e9: xor ecx, ecx */
  ecx = 0;
/* 5475eb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5475ed: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5475f4: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 5475f8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5475fb: je 0x54792d */
  if (zf) goto L_54792d;
L_547601: /* 547601: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547608: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 54760b: call 0x4e2446 */
  esp -= 4; W32(esp, 0x547610u); SPILL(); f_4e2446(); if (g_unwind) return; RELOAD();
/* 547610: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547616: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 54761a: xor eax, eax */
  eax = 0;
/* 54761c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_547620: /* 547620: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547623: jge 0x547628 */
  if ((sf == of)) goto L_547628;
L_547625: /* 547625: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547626: jmp 0x547620 */
  goto L_547620;
L_547628: /* 547628: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 54762b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54762d: mov ecx, esi */
  ecx = esi;
/* 54762f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 547636: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54763bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54763b: xor esi, esi */
  esi = 0;
/* 54763d: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 547640: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 547643: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 547646: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 547649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54764a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54764c: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54764f: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 547653: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x547658u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 547658: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54765b: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 54765e: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547661: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 547664: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 547668: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 54766b: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 547672: call 0x4e22b6 */
  esp -= 4; W32(esp, 0x547677u); SPILL(); f_4e22b6(); if (g_unwind) return; RELOAD();
/* 547677: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
L_54767b: /* 54767b: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54767e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 547681: jge 0x5476a4 */
  if ((sf == of)) goto L_5476a4;
L_547683: /* 547683: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 547686: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 547689: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 54768d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54768f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547694u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547694: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 547697: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547699: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 54769c: call 0x4e3670 */
  esp -= 4; W32(esp, 0x5476a1u); SPILL(); f_4e3670(); if (g_unwind) return; RELOAD();
/* 5476a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5476a2: jmp 0x54767b */
  goto L_54767b;
L_5476a4: /* 5476a4: xor esi, esi */
  esi = 0;
/* 5476a6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 5476a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5476b0: /* 5476b0: cmp esi, dword ptr [ebx + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5476b6: jge 0x547846 */
  if ((sf == of)) goto L_547846;
L_5476bc: /* 5476bc: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 5476bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c3: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5476c8u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5476c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5476ca: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* 5476d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5476d1: mov ecx, ebx */
  ecx = ebx;
/* 5476d3: call 0x4e35fd */
  esp -= 4; W32(esp, 0x5476d8u); SPILL(); f_4e35fd(); if (g_unwind) return; RELOAD();
/* 5476d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476d9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5476dc: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 5476e0: call 0x4e114f */
  esp -= 4; W32(esp, 0x5476e5u); SPILL(); f_4e114f(); if (g_unwind) return; RELOAD();
/* 5476e5: mov esi, eax */
  esi = eax;
/* 5476e7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 5476ea: xor ebx, ebx */
  ebx = 0;
/* 5476ec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5476ee: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 5476f4: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 5476f8: mov dword ptr [ebp - 0xf4], ebx */
  W32((uint32_t)(ebp + 0xffffff0cu), ebx);
/* 5476fe: mov dword ptr [ebp - 0xf0], ebx */
  W32((uint32_t)(ebp + 0xffffff10u), ebx);
/* 547704: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547709u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 547709: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 54770f: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 547713: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x547718u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 547718: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54771a: je 0x5477ea */
  if (zf) goto L_5477ea;
L_547720: /* 547720: mov esi, dword ptr [edi + 0x88] */
  esi = R32((uint32_t)(edi + 0x88u));
/* 547726: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54772c: lea ebx, [edi + 0x84] */
  ebx = (uint32_t)(edi + 0x84u);
/* 547732: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 547735: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547737: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 54773a: jle 0x547758 */
  if ((zf || sf != of)) goto L_547758;
L_54773c: /* 54773c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54773f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547740: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547743: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547745: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547748: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 54774c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54774e: mov ecx, ebx */
  ecx = ebx;
/* 547750: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 547753: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547758u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547758: /* 547758: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54775a: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 54775d: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 547760: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547762: je 0x54777e */
  if (zf) goto L_54777e;
L_547764: /* 547764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 547767: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 547769: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 54776c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54776f: lea esi, [eax + ecx*4] */
  esi = (uint32_t)(eax + ecx*4);
/* 547772: mov ecx, 9 */
  ecx = 0x9u;
/* 547777: mov edi, edx */
  edi = edx;
/* 547779: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 54777b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_54777e: /* 54777e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 547781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547783: jg 0x54779c */
  if ((!zf && sf == of)) goto L_54779c;
L_547785: /* 547785: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 54778a: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54778f: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547794: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547799u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547799: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54779c: /* 54779c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 54779f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5477a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5477a4: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5477a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477a9: mov ecx, dword ptr [edx + ecx*4 - 8] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xfffffff8u));
/* 5477ad: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5477b0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5477b3: cmp ecx, dword ptr [edx + eax*4 + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + eax*4 + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5477b7: je 0x5477d0 */
  if (zf) goto L_5477d0;
L_5477b9: /* 5477b9: push 0xc0d */
  { uint32_t v = 0xc0du; esp -= 4; W32(esp, v); }
/* 5477be: push 0x5abdc0 */
  { uint32_t v = 0x5abdc0u; esp -= 4; W32(esp, v); }
/* 5477c3: push 0x5abdcc */
  { uint32_t v = 0x5abdccu; esp -= 4; W32(esp, v); }
/* 5477c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5477cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5477cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5477d0: /* 5477d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477d2: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 5477d5: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5477d8: mov byte ptr [ecx + eax], 1 */
  W8((uint32_t)(ecx + eax), 0x1u);
/* 5477dc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5477df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5477e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5477e3: mov esi, eax */
  esi = eax;
/* 5477e5: jmp 0x5476b0 */
  goto L_5476b0;
L_5477ea: /* 5477ea: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 5477f0: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 5477f6: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 5477fc: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5477ff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547801: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547804: jle 0x547822 */
  if ((zf || sf != of)) goto L_547822;
L_547806: /* 547806: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547809: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54780a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54780d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54780f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547812: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547816: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547818: mov ecx, esi */
  ecx = esi;
/* 54781a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54781d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547822u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547822: /* 547822: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547824: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 547827: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54782a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54782c: je 0x547835 */
  if (zf) goto L_547835;
L_54782e: /* 54782e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547830: call 0x4e11cc */
  esp -= 4; W32(esp, 0x547835u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_547835: /* 547835: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547838: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54783b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54783c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54783f: mov esi, eax */
  esi = eax;
/* 547841: jmp 0x5476b0 */
  goto L_5476b0;
L_547846: /* 547846: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 547849: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 54784f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547852: xor ebx, ebx */
  ebx = 0;
L_547854: /* 547854: cmp ebx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547857: jge 0x5478c2 */
  if ((sf == of)) goto L_5478c2;
L_547859: /* 547859: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 54785c: cmp byte ptr [ebx + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 547860: jne 0x5478bf */
  if (!zf) goto L_5478bf;
L_547862: /* 547862: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547868: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54786e: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547874: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 547877: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547878: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54787a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54787d: jle 0x54789b */
  if ((zf || sf != of)) goto L_54789b;
L_54787f: /* 54787f: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547882: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547883: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547886: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547888: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54788b: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54788f: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547891: mov ecx, esi */
  ecx = esi;
/* 547893: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547896: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54789bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54789b: /* 54789b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54789e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5478a0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5478a3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 5478a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478a8: je 0x5478bf */
  if (zf) goto L_5478bf;
L_5478aa: /* 5478aa: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5478ad: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 5478b0: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 5478b3: mov ecx, 9 */
  ecx = 0x9u;
/* 5478b8: mov edi, eax */
  edi = eax;
/* 5478ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 5478bc: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_5478bf: /* 5478bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 5478c0: jmp 0x547854 */
  goto L_547854;
L_5478c2: /* 5478c2: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5478c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478c7: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 5478cb: je 0x5478d9 */
  if (zf) goto L_5478d9;
L_5478cd: /* 5478cd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5478d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5478d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478d6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5478d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5478d9: /* 5478d9: xor esi, esi */
  esi = 0;
/* 5478db: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 5478de: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 5478e1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5478e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5478e6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5478e9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 5478ed: call 0x4e2fb8 */
  esp -= 4; W32(esp, 0x5478f2u); SPILL(); f_4e2fb8(); if (g_unwind) return; RELOAD();
/* 5478f2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 5478f5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5478f7: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 5478fb: je 0x547909 */
  if (zf) goto L_547909;
L_5478fd: /* 5478fd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 547903: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547905: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547906: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x547909u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547909: /* 547909: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54790c: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54790f: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547912: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 547915: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 547919: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x54791eu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 54791e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 547921: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 547925: call 0x4e322e */
  esp -= 4; W32(esp, 0x54792au); SPILL(); f_4e322e(); if (g_unwind) return; RELOAD();
/* 54792a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_54792d: /* 54792d: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547933: push 0x4e16d6 */
  { uint32_t v = 0x4e16d6u; esp -= 4; W32(esp, v); }
/* 547938: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54793a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54793c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54793d: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 547940: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547946: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54794a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54794fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54794f: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547955: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547958: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 54795b: mov dword ptr [ebp - 4], 0x26 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 547962: xor eax, eax */
  eax = 0;
L_547964: /* 547964: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54796a: jge 0x54798f */
  if ((sf == of)) goto L_54798f;
L_54796c: /* 54796c: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547972: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547975: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 547979: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54797b: je 0x54798c */
  if (zf) goto L_54798c;
L_54797d: /* 54797d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 547980: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 547986: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 547989: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
L_54798c: /* 54798c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54798d: jmp 0x547964 */
  goto L_547964;
L_54798f: /* 54798f: xor eax, eax */
  eax = 0;
L_547991: /* 547991: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547994: jge 0x5479b6 */
  if ((sf == of)) goto L_5479b6;
L_547996: /* 547996: mov esi, dword ptr [edi + 0x78] */
  esi = R32((uint32_t)(edi + 0x78u));
/* 547999: mov ecx, eax */
  ecx = eax;
/* 54799b: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 54799e: mov ecx, dword ptr [ecx + esi + 0x10] */
  ecx = R32((uint32_t)(ecx + esi + 0x10u));
/* 5479a2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 5479a5: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 5479ab: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 5479ae: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5479b0: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
/* 5479b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5479b4: jmp 0x547991 */
  goto L_547991;
L_5479b6: /* 5479b6: xor eax, eax */
  eax = 0;
/* 5479b8: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5479bf: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 5479c3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5479c6: jmp 0x5479d0 */
  goto L_5479d0;
L_5479d0: /* 5479d0: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5479d6: jge 0x547b70 */
  if ((sf == of)) goto L_547b70;
L_5479dc: /* 5479dc: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 5479df: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 5479e5: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 5479e8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 5479eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479ed: je 0x547b2f */
  if (zf) goto L_547b2f;
L_5479f3: /* 5479f3: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
L_5479f6: /* 5479f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479f8: je 0x547a06 */
  if (zf) goto L_547a06;
L_5479fa: /* 5479fa: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5479ff: je 0x547a35 */
  if (zf) goto L_547a35;
L_547a01: /* 547a01: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a04: jmp 0x5479f6 */
  goto L_5479f6;
L_547a06: /* 547a06: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547a09: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 547a0c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a0f: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 547a15: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 547a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a1a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 547a1c: jne 0x547a35 */
  if (!zf) goto L_547a35;
L_547a1e: /* 547a1e: push 0xc39 */
  { uint32_t v = 0xc39u; esp -= 4; W32(esp, v); }
/* 547a23: push 0x5abe14 */
  { uint32_t v = 0x5abe14u; esp -= 4; W32(esp, v); }
/* 547a28: push 0x5abe20 */
  { uint32_t v = 0x5abe20u; esp -= 4; W32(esp, v); }
/* 547a2d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a32u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a35: /* 547a35: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a38: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 547a3b: jmp 0x547a40 */
  goto L_547a40;
L_547a40: /* 547a40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a42: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a44: /* 547a44: cmp eax, 0x5f0848 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0848u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a49: je 0x547a50 */
  if (zf) goto L_547a50;
L_547a4b: /* 547a4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a4e: jmp 0x547a40 */
  goto L_547a40;
L_547a50: /* 547a50: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a53: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a58: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a5a: /* 547a5a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a5d: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547a63: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a68: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 547a6b: jne 0x547a84 */
  if (!zf) goto L_547a84;
L_547a6d: /* 547a6d: push 0xc41 */
  { uint32_t v = 0xc41u; esp -= 4; W32(esp, v); }
/* 547a72: push 0x5abe38 */
  { uint32_t v = 0x5abe38u; esp -= 4; W32(esp, v); }
/* 547a77: push 0x5abe44 */
  { uint32_t v = 0x5abe44u; esp -= 4; W32(esp, v); }
/* 547a7c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a81u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a81: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a84: /* 547a84: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 547a87: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547a8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 547a8d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a8f: je 0x547af0 */
  if (zf) goto L_547af0;
L_547a91: /* 547a91: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547a94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a96: je 0x547a9e */
  if (zf) goto L_547a9e;
L_547a98: /* 547a98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a9a: je 0x547ac0 */
  if (zf) goto L_547ac0;
L_547a9c: /* 547a9c: jmp 0x547a91 */
  goto L_547a91;
L_547a9e: /* 547a9e: xor eax, eax */
  eax = 0;
/* 547aa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547aa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa7: jne 0x547ac0 */
  if (!zf) goto L_547ac0;
L_547aa9: /* 547aa9: push 0xc48 */
  { uint32_t v = 0xc48u; esp -= 4; W32(esp, v); }
/* 547aae: push 0x5abe5c */
  { uint32_t v = 0x5abe5cu; esp -= 4; W32(esp, v); }
/* 547ab3: push 0x5abe68 */
  { uint32_t v = 0x5abe68u; esp -= 4; W32(esp, v); }
/* 547ab8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547abdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547abd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547ac0: /* 547ac0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547ac3: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547ac6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547ac9: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547acf: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547ad4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547ad7: jg 0x547af0 */
  if ((!zf && sf == of)) goto L_547af0;
L_547ad9: /* 547ad9: push 0xc4a */
  { uint32_t v = 0xc4au; esp -= 4; W32(esp, v); }
/* 547ade: push 0x5abe94 */
  { uint32_t v = 0x5abe94u; esp -= 4; W32(esp, v); }
/* 547ae3: push 0x5abea0 */
  { uint32_t v = 0x5abea0u; esp -= 4; W32(esp, v); }
/* 547ae8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547aedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547af0: /* 547af0: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547af6: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547afc: mov ecx, ebx */
  ecx = ebx;
/* 547afe: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b01: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547b04: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 547b07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547b09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547b0a: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x547b0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b0d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b10: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547b16: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547b19: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547b1c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547b1e: mov ecx, ebx */
  ecx = ebx;
/* 547b20: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547b23: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 547b29: sub eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547b2c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_547b2f: /* 547b2f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547b33: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547b36: jmp 0x5479d0 */
  goto L_5479d0;
L_547b70: /* 547b70: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547b76: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547b7c: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547b83: mov ecx, ebx */
  ecx = ebx;
/* 547b85: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 547b89: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b8c: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* 547b8f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 547b96: jmp 0x547ba0 */
  goto L_547ba0;
L_547ba0: /* 547ba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547ba3: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547ba6: jge 0x547c3f */
  if ((sf == of)) goto L_547c3f;
L_547bac: /* 547bac: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 547baf: mov esi, eax */
  esi = eax;
/* 547bb1: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 547bb4: mov ecx, dword ptr [esi + edx + 0x10] */
  ecx = R32((uint32_t)(esi + edx + 0x10u));
/* 547bb8: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 547bbb: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 547bbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bbf: je 0x547c23 */
  if (zf) goto L_547c23;
L_547bc1: /* 547bc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_547bc4: /* 547bc4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bc9: je 0x547bd1 */
  if (zf) goto L_547bd1;
L_547bcb: /* 547bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547bcd: je 0x547bdc */
  if (zf) goto L_547bdc;
L_547bcf: /* 547bcf: jmp 0x547bc4 */
  goto L_547bc4;
L_547bd1: /* 547bd1: xor eax, eax */
  eax = 0;
/* 547bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bd5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bda: je 0x547bf3 */
  if (zf) goto L_547bf3;
L_547bdc: /* 547bdc: push 0xc5f */
  { uint32_t v = 0xc5fu; esp -= 4; W32(esp, v); }
/* 547be1: push 0x5abec0 */
  { uint32_t v = 0x5abec0u; esp -= 4; W32(esp, v); }
/* 547be6: push 0x5abecc */
  { uint32_t v = 0x5abeccu; esp -= 4; W32(esp, v); }
/* 547beb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547bf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547bf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547bf3: /* 547bf3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 547bf6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547bf9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547bfc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547c02: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547c07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547c0a: jl 0x547c23 */
  if ((sf != of)) goto L_547c23;
L_547c0c: /* 547c0c: push 0xc61 */
  { uint32_t v = 0xc61u; esp -= 4; W32(esp, v); }
/* 547c11: push 0x5abef8 */
  { uint32_t v = 0x5abef8u; esp -= 4; W32(esp, v); }
/* 547c16: push 0x5abf04 */
  { uint32_t v = 0x5abf04u; esp -= 4; W32(esp, v); }
/* 547c1b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547c20u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547c20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547c23: /* 547c23: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547c29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547c2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c2b: call 0x4e1ded */
  esp -= 4; W32(esp, 0x547c30u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 547c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547c33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547c37: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547c3a: jmp 0x547ba0 */
  goto L_547ba0;
L_547c3f: /* 547c3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547c41: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c48: mov ecx, ebx */
  ecx = ebx;
/* 547c4a: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 547c4e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547c51: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 547c54: xor esi, esi */
  esi = 0;
L_547c56: /* 547c56: cmp esi, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547c5c: jge 0x547c77 */
  if ((sf == of)) goto L_547c77;
L_547c5e: /* 547c5e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547c64: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 547c67: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547c6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c6c: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x547c71u); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 547c71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c74: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 547c75: jmp 0x547c56 */
  goto L_547c56;
L_547c77: /* 547c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547c79: push 0x5abf2c */
  { uint32_t v = 0x5abf2cu; esp -= 4; W32(esp, v); }
/* 547c7e: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c85: push 0x5abf38 */
  { uint32_t v = 0x5abf38u; esp -= 4; W32(esp, v); }
/* 547c8a: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 547c8e: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x547c93u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 547c93: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547c9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ca4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x547ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ca7: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547caf: jg 0x547cc8 */
  if ((!zf && sf == of)) goto L_547cc8;
L_547cb1: /* 547cb1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547cb6: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547cbb: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547cc0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cc5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cc8: /* 547cc8: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547ccb: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cce: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 547cd1: mov dword ptr [ecx + eax*8 - 8], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffff8u), edx);
/* 547cd5: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547cda: jg 0x547cf3 */
  if ((!zf && sf == of)) goto L_547cf3;
L_547cdc: /* 547cdc: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547ce1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547ce6: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cf3: /* 547cf3: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cf6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cf9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 547cfc: mov dword ptr [ecx + eax*8 - 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffffcu), edx);
/* 547d00: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 547d02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d04: mov ecx, ebx */
  ecx = ebx;
/* 547d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x547d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547d09: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 547d0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 547d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547d0e: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547d13u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547d13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d16: mov edi, 1 */
  edi = 0x1u;
/* 547d1b: jmp 0x547f04 */
  goto L_547f04;
L_547f04: /* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_546c49(void) {
  LOAD_REGS();
L_546c49: /* 546c49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_546c50: /* 546c50: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 546c53: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546c59: jge 0x546ce0 */
  if ((sf == of)) goto L_546ce0;
L_546c5f: /* 546c5f: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
/* 546c62: test dword ptr [eax + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546c65: je 0x546ca1 */
  if (zf) goto L_546ca1;
L_546c67: /* 546c67: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_546c6a: /* 546c6a: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 546c6d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c6f: je 0x546c77 */
  if (zf) goto L_546c77;
L_546c71: /* 546c71: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c73: je 0x546c82 */
  if (zf) goto L_546c82;
L_546c75: /* 546c75: jmp 0x546c6a */
  goto L_546c6a;
L_546c77: /* 546c77: xor eax, eax */
  eax = 0;
/* 546c79: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c7b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 546c7e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546c80: je 0x546ca1 */
  if (zf) goto L_546ca1;
L_546c82: /* 546c82: mov edx, dword ptr [esi + ecx*4] */
  edx = R32((uint32_t)(esi + ecx*4));
/* 546c85: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 546c88: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 546c8b: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 546c91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546c92: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 546c98: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x546c9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546c9b: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_546ca1: /* 546ca1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 546ca4: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ca9u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ca9: jmp 0x546c50 */
  goto L_546c50;
L_546ce0: /* 546ce0: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 546ce6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546ce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546cea: xor eax, eax */
  eax = 0;
/* 546cec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cee: mov eax, dword ptr [0x69f458] */
  eax = R32((uint32_t)(0x69f458u));
/* 546cf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cf4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 546cf7: push 0x6a1980 */
  { uint32_t v = 0x6a1980u; esp -= 4; W32(esp, v); }
/* 546cfc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 546cff: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546d03: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x546d08u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 546d08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546d0b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546d0d: je 0x546d25 */
  if (zf) goto L_546d25;
L_546d0f: /* 546d0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 546d12: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 546d18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546d19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546d1a: mov ecx, eax */
  ecx = eax;
/* 546d1c: call 0x4e2707 */
  esp -= 4; W32(esp, 0x546d21u); SPILL(); f_4e2707(); if (g_unwind) return; RELOAD();
/* 546d21: mov edi, eax */
  edi = eax;
/* 546d23: jmp 0x546d27 */
  goto L_546d27;
L_546d25: /* 546d25: xor edi, edi */
  edi = 0;
L_546d27: /* 546d27: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546d2a: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 546d2d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546d31: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546d38: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 546d3f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546d44u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546d44: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546d4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_546d50: /* 546d50: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546d53: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546d59: jge 0x546ec0 */
  if ((sf == of)) goto L_546ec0;
L_546d5f: /* 546d5f: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546d62: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546d66: je 0x546e7e */
  if (zf) goto L_546e7e;
L_546d6c: /* 546d6c: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 546d6f: mov ecx, 1 */
  ecx = 0x1u;
/* 546d74: xor edx, edx */
  edx = 0;
/* 546d76: and eax, 0x70000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 546d7b: mov dword ptr [ebp - 0xa0], 0x7e */
  W32((uint32_t)(ebp + 0xffffff60u), 0x7eu);
/* 546d85: mov dword ptr [ebp - 0x9c], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7d0u);
/* 546d8f: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 546d95: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 546d9b: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 546da1: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 546da7: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 546daa: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 546dad: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 546db0: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 546db3: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 546db6: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 546db9: mov dword ptr [ebp - 0x68], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0xffffffffu);
/* 546dc0: mov dword ptr [ebp - 0xa4], 0x56d7f0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x56d7f0u);
/* 546dca: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 546dcd: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 546dd0: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 546dd6: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 546ddc: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* 546ddf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 546de1: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 546de7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546de8: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 546dec: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x546defu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546def: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546df4: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546df7: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546dfa: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 546e00: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 546e03: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 546e06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546e07: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 546e0d: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x546e10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546e10: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e16: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546e19: mov ecx, dword ptr [0x69f458] */
  ecx = R32((uint32_t)(0x69f458u));
L_546e1f: /* 546e1f: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 546e22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e24: je 0x546e2c */
  if (zf) goto L_546e2c;
L_546e26: /* 546e26: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546e28: je 0x546e37 */
  if (zf) goto L_546e37;
L_546e2a: /* 546e2a: jmp 0x546e1f */
  goto L_546e1f;
L_546e2c: /* 546e2c: xor eax, eax */
  eax = 0;
/* 546e2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e30: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 546e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e35: je 0x546e70 */
  if (zf) goto L_546e70;
L_546e37: /* 546e37: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 546e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e3c: mov ecx, esi */
  ecx = esi;
/* 546e3e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546e43u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546e43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e45: push 0x5abc4c */
  { uint32_t v = 0x5abc4cu; esp -= 4; W32(esp, v); }
/* 546e4a: push 0x5abc58 */
  { uint32_t v = 0x5abc58u; esp -= 4; W32(esp, v); }
/* 546e4f: mov esi, eax */
  esi = eax;
/* 546e51: call 0x4e1613 */
  esp -= 4; W32(esp, 0x546e56u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 546e56: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 546e5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546e61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546e62: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546e67u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546e67: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546e70: /* 546e70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546e74: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
L_546e7e: /* 546e7e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546e81: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546e86u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546e86: jmp 0x546d50 */
  goto L_546d50;
L_546ec0: /* 546ec0: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546ec7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 546eca: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 546ece: mov dword ptr [ebp - 0x1c], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x6a0f20u);
/* 546ed5: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 546edc: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ee1u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ee1: mov ebx, 0x70010 */
  ebx = 0x70010u;
/* 546ee6: jmp 0x546ef0 */
  goto L_546ef0;
L_546ef0: /* 546ef0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546ef3: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ef9: jge 0x5470fc */
  if ((sf == of)) goto L_5470fc;
L_546eff: /* 546eff: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f05: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f08: test byte ptr [eax + 0x1c], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f0c: je 0x54708d */
  if (zf) goto L_54708d;
L_546f12: /* 546f12: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f15: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546f1b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546f1e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f21: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f26: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f29: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 546f2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f2e: je 0x546f41 */
  if (zf) goto L_546f41;
L_546f30: /* 546f30: mov eax, ecx */
  eax = ecx;
/* 546f32: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 546f38: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f3b: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 546f3e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_546f41: /* 546f41: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 546f47: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 546f4a: test byte ptr [ecx + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f4e: je 0x54709a */
  if (zf) goto L_54709a;
L_546f54: /* 546f54: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 546f57: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 546f5a: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 546f5f: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 546f62: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f65: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f6b: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f6e: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 546f71: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 546f74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f76: jne 0x546f8f */
  if (!zf) goto L_546f8f;
L_546f78: /* 546f78: push 0xb8a */
  { uint32_t v = 0xb8au; esp -= 4; W32(esp, v); }
/* 546f7d: push 0x5abc80 */
  { uint32_t v = 0x5abc80u; esp -= 4; W32(esp, v); }
/* 546f82: push 0x5abc8c */
  { uint32_t v = 0x5abc8cu; esp -= 4; W32(esp, v); }
/* 546f87: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x546f8cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 546f8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546f8f: /* 546f8f: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f94: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f97: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546f9a: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 546f9d: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546fa0: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546fa6: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546fa9: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546fac: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546fb1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 546fb4: test byte ptr [ecx + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546fb8: jne 0x54708d */
  if (!zf) goto L_54708d;
L_546fbe: /* 546fbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546fc0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546fc5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546fc5: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 546fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546fcc: push 0x5abca4 */
  { uint32_t v = 0x5abca4u; esp -= 4; W32(esp, v); }
/* 546fd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546fd2: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546fd7u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546fd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546fda: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546fe1: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
L_546fe8: /* 546fe8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546feb: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ff0u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ff0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546ff3: cmp ebx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ff9: jge 0x547052 */
  if ((sf == of)) goto L_547052;
L_546ffb: /* 546ffb: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547000: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 547003: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 547006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547008: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 54700e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x547013u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 547013: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 547016: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547018: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 54701c: je 0x547042 */
  if (zf) goto L_547042;
L_54701e: /* 54701e: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547024: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 547027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547029: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54702eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54702f: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 547034: push 0x5abccc */
  { uint32_t v = 0x5abcccu; esp -= 4; W32(esp, v); }
/* 547039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54703a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54703fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54703f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547042: /* 547042: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 547046: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
/* 547050: jmp 0x546fe8 */
  goto L_546fe8;
L_547052: /* 547052: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547058: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 54705b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54705d: mov ecx, esi */
  ecx = esi;
/* 54705f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547064u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547066: push 0x5abcd8 */
  { uint32_t v = 0x5abcd8u; esp -= 4; W32(esp, v); }
/* 54706b: push 0x5abce4 */
  { uint32_t v = 0x5abce4u; esp -= 4; W32(esp, v); }
/* 547070: mov esi, eax */
  esi = eax;
/* 547072: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547077u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547077: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 54707a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54707d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54707e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54707f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547080: call 0x4e3418 */
  esp -= 4; W32(esp, 0x547085u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 547085: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547088: mov ebx, 0x70010 */
  ebx = 0x70010u;
L_54708d: /* 54708d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 547090: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547095u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547095: jmp 0x546ef0 */
  goto L_546ef0;
L_54709a: /* 54709a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54709c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5470a1u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5470a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470a2: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 5470a7: push 0x5abd08 */
  { uint32_t v = 0x5abd08u; esp -= 4; W32(esp, v); }
/* 5470ac: push 0x309 */
  { uint32_t v = 0x309u; esp -= 4; W32(esp, v); }
/* 5470b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470b2: call 0x4e30df */
  esp -= 4; W32(esp, 0x5470b7u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5470b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5470ba: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5470bd: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5470c2u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5470c2: jmp 0x546ef0 */
  goto L_546ef0;
L_5470fc: /* 5470fc: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5470ff: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547101: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547108: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 54710c: je 0x54716a */
  if (zf) goto L_54716a;
L_54710e: /* 54710e: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 547114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547116: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 547119: je 0x547123 */
  if (zf) goto L_547123;
L_54711b: /* 54711b: mov eax, dword ptr [ebx + 0x94] */
  eax = R32((uint32_t)(ebx + 0x94u));
/* 547121: jmp 0x547128 */
  goto L_547128;
L_547123: /* 547123: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_547128: /* 547128: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547129: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54712a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54712b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 547130: push 0x5abd28 */
  { uint32_t v = 0x5abd28u; esp -= 4; W32(esp, v); }
/* 547135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547136: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54713bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54713b: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 54713e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547140: lea edx, [edi + 0x50] */
  edx = (uint32_t)(edi + 0x50u);
/* 547143: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 547145: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 547148: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 54714b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 54714e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 547151: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 547154: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547157: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 54715a: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 54715d: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 547160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547161: mov ecx, esi */
  ecx = esi;
/* 547163: call 0x4e31ac */
  esp -= 4; W32(esp, 0x547168u); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 547168: jmp 0x5471bb */
  goto L_5471bb;
L_54716a: /* 54716a: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 547170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547171: call 0x4e261c */
  esp -= 4; W32(esp, 0x547176u); SPILL(); f_4e261c(); if (g_unwind) return; RELOAD();
/* 547176: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 547178: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 54717b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54717d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 547180: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 547183: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 547186: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 547189: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 54718c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 54718f: xor eax, eax */
  eax = 0;
/* 547191: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547194: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 547197: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 54719a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 54719d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471a0: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 5471a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471a4: mov ecx, esi */
  ecx = esi;
/* 5471a6: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 5471aa: call 0x4e31ac */
  esp -= 4; W32(esp, 0x5471afu); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 5471af: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471b2: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 5471b6: call 0x4e3bd9 */
  esp -= 4; W32(esp, 0x5471bbu); SPILL(); f_4e3bd9(); if (g_unwind) return; RELOAD();
L_5471bb: /* 5471bb: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 5471be: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5471c1: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5471c4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5471c6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5471c9: jle 0x5471e7 */
  if ((zf || sf != of)) goto L_5471e7;
L_5471cb: /* 5471cb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5471ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5471cf: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5471d2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5471d4: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5471d7: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5471db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5471dd: mov ecx, esi */
  ecx = esi;
/* 5471df: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 5471e2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5471e7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5471e7: /* 5471e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5471e9: lea ecx, [eax + ebx*8] */
  ecx = (uint32_t)(eax + ebx*8);
/* 5471ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5471ee: je 0x5471f9 */
  if (zf) goto L_5471f9;
L_5471f0: /* 5471f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f4: call 0x4e19a6 */
  esp -= 4; W32(esp, 0x5471f9u); SPILL(); f_4e19a6(); if (g_unwind) return; RELOAD();
L_5471f9: /* 5471f9: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 5471fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471fd: lea esi, [edi + 0xb4] */
  esi = (uint32_t)(edi + 0xb4u);
/* 547203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547204: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547209u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54720b: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547212: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547215: mov ecx, esi */
  ecx = esi;
/* 547217: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 54721b: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x54721eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54721e: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 547221: xor ecx, ecx */
  ecx = 0;
L_547223: /* 547223: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547229: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54722c: jge 0x54727c */
  if ((sf == of)) goto L_54727c;
L_54722e: /* 54722e: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 547233: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 547236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547238: je 0x547279 */
  if (zf) goto L_547279;
L_54723a: /* 54723a: test byte ptr [eax + 4], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54723e: je 0x547279 */
  if (zf) goto L_547279;
L_547240: /* 547240: mov ebx, dword ptr [edi + 0x70] */
  ebx = R32((uint32_t)(edi + 0x70u));
/* 547243: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547246: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547249: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54724c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54724e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547251: jle 0x54726f */
  if ((zf || sf != of)) goto L_54726f;
L_547253: /* 547253: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547256: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547257: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54725a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54725c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54725f: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 547263: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 547266: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547268: mov ecx, esi */
  ecx = esi;
/* 54726a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54726fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54726f: /* 54726f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547272: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 547274: mov dword ptr [edx + ebx*4], eax */
  W32((uint32_t)(edx + ebx*4), eax);
/* 547277: mov ecx, eax */
  ecx = eax;
L_547279: /* 547279: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54727a: jmp 0x547223 */
  goto L_547223;
L_54727c: /* 54727c: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54727f: xor ecx, ecx */
  ecx = 0;
/* 547281: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547283: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54728a: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 54728e: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547294: je 0x547375 */
  if (zf) goto L_547375;
L_54729a: /* 54729a: xor edx, edx */
  edx = 0;
L_54729c: /* 54729c: cmp edx, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54729f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5472a2: jge 0x547372 */
  if ((sf == of)) goto L_547372;
L_5472a8: /* 5472a8: xor eax, eax */
  eax = 0;
/* 5472aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5472b0: /* 5472b0: cmp eax, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5472b3: jge 0x5472ca */
  if ((sf == of)) goto L_5472ca;
L_5472b5: /* 5472b5: mov esi, dword ptr [edi + 0x6c] */
  esi = R32((uint32_t)(edi + 0x6cu));
/* 5472b8: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 5472bb: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 5472be: cmp esi, dword ptr [ecx + edx*4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472c1: jne 0x5472c7 */
  if (!zf) goto L_5472c7;
L_5472c3: /* 5472c3: mov ecx, eax */
  ecx = eax;
/* 5472c5: jmp 0x5472cd */
  goto L_5472cd;
L_5472c7: /* 5472c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5472c8: jmp 0x5472b0 */
  goto L_5472b0;
L_5472ca: /* 5472ca: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_5472cd: /* 5472cd: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 5472d4: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 5472d7: mov eax, dword ptr [edx + 0x6c] */
  eax = R32((uint32_t)(edx + 0x6cu));
/* 5472da: cmp dword ptr [ebx + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472de: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e0: /* 5472e0: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472e3: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e5: /* 5472e5: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 5472e8: mov edx, dword ptr [eax + ebx] */
  edx = R32((uint32_t)(eax + ebx));
/* 5472eb: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 5472ee: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5472f1: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5472f4: mov dword ptr [eax + ebx], edx */
  W32((uint32_t)(eax + ebx), edx);
/* 5472f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5472fa: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 5472fd: jmp 0x547358 */
  goto L_547358;
L_5472ff: /* 5472ff: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 547302: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547305: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547308: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547309: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54730b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54730e: jle 0x54732c */
  if ((zf || sf != of)) goto L_54732c;
L_547310: /* 547310: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547313: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547314: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547317: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547319: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54731c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 547320: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547322: mov ecx, esi */
  ecx = esi;
/* 547324: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547327: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54732cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54732c: /* 54732c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54732f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547331: jg 0x54734a */
  if ((!zf && sf == of)) goto L_54734a;
L_547333: /* 547333: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547338: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54733d: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547342: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547347u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547347: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54734a: /* 54734a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54734c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54734f: mov eax, ecx */
  eax = ecx;
/* 547351: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547354: mov dword ptr [eax + edx*4 - 4], ecx */
  W32((uint32_t)(eax + edx*4 + 0xfffffffcu), ecx);
L_547358: /* 547358: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 54735b: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 54735e: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547361: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547363: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547366: mov dword ptr [ebx + eax], ecx */
  W32((uint32_t)(ebx + eax), ecx);
/* 547369: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54736c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54736d: jmp 0x54729c */
  goto L_54729c;
L_547372: /* 547372: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
L_547375: /* 547375: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547378: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 54737b: push 0x4e30c1 */
  { uint32_t v = 0x4e30c1u; esp -= 4; W32(esp, v); }
/* 547380: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547382: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547385: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547389: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54738eu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54738e: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547391: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547394: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54739b: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 54739f: mov dword ptr [edi + 0x38], eax */
  W32((uint32_t)(edi + 0x38u), eax);
/* 5473a2: xor esi, esi */
  esi = 0;
L_5473a4: /* 5473a4: cmp esi, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5473a7: jge 0x54740f */
  if ((sf == of)) goto L_54740f;
L_5473a9: /* 5473a9: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473ac: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 5473af: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5473b5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 5473b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473b9: lea eax, [edi + 0xb4] */
  eax = (uint32_t)(edi + 0xb4u);
/* 5473bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473c0: call 0x4e1be0 */
  esp -= 4; W32(esp, 0x5473c5u); SPILL(); f_4e1be0(); if (g_unwind) return; RELOAD();
/* 5473c5: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473c8: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 5473cb: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 5473d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5473d4: mov dword ptr [eax + edx*4], esi */
  W32((uint32_t)(eax + edx*4), esi);
/* 5473d7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5473d8: jmp 0x5473a4 */
  goto L_5473a4;
L_54740f: /* 54740f: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547416: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547419: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 54741d: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 547424: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 54742b: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547430u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
L_547430: /* 547430: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547433: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547439: jge 0x5474de */
  if ((sf == of)) goto L_5474de;
L_54743f: /* 54743f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547445: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547448: test byte ptr [eax + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54744c: je 0x54749c */
  if (zf) goto L_54749c;
L_54744e: /* 54744e: mov ebx, dword ptr [edi + 0x7c] */
  ebx = R32((uint32_t)(edi + 0x7cu));
/* 547451: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 547457: lea esi, [edi + 0x78] */
  esi = (uint32_t)(edi + 0x78u);
/* 54745a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54745d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54745f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547462: jle 0x547480 */
  if ((zf || sf != of)) goto L_547480;
L_547464: /* 547464: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547467: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547468: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54746b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54746d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547470: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547474: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 547476: mov ecx, esi */
  ecx = esi;
/* 547478: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54747b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547480u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547480: /* 547480: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547482: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 547485: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ebx = r;
  }
/* 547487: mov ecx, ebx */
  ecx = ebx;
/* 547489: je 0x54749c */
  if (zf) goto L_54749c;
L_54748b: /* 54748b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547490: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547493: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 547496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547497: call 0x4e442b */
  esp -= 4; W32(esp, 0x54749cu); SPILL(); f_4e442b(); if (g_unwind) return; RELOAD();
L_54749c: /* 54749c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54749f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5474a4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5474a4: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5474a7: jmp 0x547430 */
  goto L_547430;
L_5474de: /* 5474de: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 5474e1: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 5474e4: push 0x4e2c5c */
  { uint32_t v = 0x4e2c5cu; esp -= 4; W32(esp, v); }
/* 5474e9: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 5474eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5474ec: mov esi, 6 */
  esi = 0x6u;
/* 5474f1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 5474f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5474f5: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* 5474f8: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 5474fc: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547502: call 0x4e1785 */
  esp -= 4; W32(esp, 0x547507u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 547507: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54750a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 54750d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547510: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 547514: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 54751b: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 547522: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547527u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547527: jmp 0x547530 */
  goto L_547530;
L_547530: /* 547530: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547533: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547539: jge 0x5475e9 */
  if ((sf == of)) goto L_5475e9;
L_54753f: /* 54753f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547545: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547548: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54754c: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_54754e: /* 54754e: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 547554: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54755a: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547560: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 547563: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547565: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547568: jle 0x547586 */
  if ((zf || sf != of)) goto L_547586;
L_54756a: /* 54756a: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54756d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54756e: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547571: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547573: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547576: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54757a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54757c: mov ecx, esi */
  ecx = esi;
/* 54757e: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547581: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547586u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547586: /* 547586: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547588: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 54758b: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54758e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547590: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_547592: /* 547592: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547598: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54759b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 54759e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54759f: call 0x4e11cc */
  esp -= 4; W32(esp, 0x5475a4u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_5475a4: /* 5475a4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5475a7: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5475acu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5475ac: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5475af: jmp 0x547530 */
  goto L_547530;
L_5475e9: /* 5475e9: xor ecx, ecx */
  ecx = 0;
/* 5475eb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5475ed: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5475f4: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 5475f8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5475fb: je 0x54792d */
  if (zf) goto L_54792d;
L_547601: /* 547601: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547608: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 54760b: call 0x4e2446 */
  esp -= 4; W32(esp, 0x547610u); SPILL(); f_4e2446(); if (g_unwind) return; RELOAD();
/* 547610: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547616: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 54761a: xor eax, eax */
  eax = 0;
/* 54761c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_547620: /* 547620: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547623: jge 0x547628 */
  if ((sf == of)) goto L_547628;
L_547625: /* 547625: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547626: jmp 0x547620 */
  goto L_547620;
L_547628: /* 547628: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 54762b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54762d: mov ecx, esi */
  ecx = esi;
/* 54762f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 547636: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54763bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54763b: xor esi, esi */
  esi = 0;
/* 54763d: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 547640: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 547643: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 547646: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 547649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54764a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54764c: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54764f: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 547653: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x547658u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 547658: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54765b: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 54765e: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547661: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 547664: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 547668: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 54766b: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 547672: call 0x4e22b6 */
  esp -= 4; W32(esp, 0x547677u); SPILL(); f_4e22b6(); if (g_unwind) return; RELOAD();
/* 547677: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
L_54767b: /* 54767b: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54767e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 547681: jge 0x5476a4 */
  if ((sf == of)) goto L_5476a4;
L_547683: /* 547683: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 547686: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 547689: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 54768d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54768f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547694u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547694: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 547697: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547699: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 54769c: call 0x4e3670 */
  esp -= 4; W32(esp, 0x5476a1u); SPILL(); f_4e3670(); if (g_unwind) return; RELOAD();
/* 5476a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5476a2: jmp 0x54767b */
  goto L_54767b;
L_5476a4: /* 5476a4: xor esi, esi */
  esi = 0;
/* 5476a6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 5476a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5476b0: /* 5476b0: cmp esi, dword ptr [ebx + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5476b6: jge 0x547846 */
  if ((sf == of)) goto L_547846;
L_5476bc: /* 5476bc: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 5476bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c3: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5476c8u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5476c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5476ca: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* 5476d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5476d1: mov ecx, ebx */
  ecx = ebx;
/* 5476d3: call 0x4e35fd */
  esp -= 4; W32(esp, 0x5476d8u); SPILL(); f_4e35fd(); if (g_unwind) return; RELOAD();
/* 5476d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476d9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5476dc: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 5476e0: call 0x4e114f */
  esp -= 4; W32(esp, 0x5476e5u); SPILL(); f_4e114f(); if (g_unwind) return; RELOAD();
/* 5476e5: mov esi, eax */
  esi = eax;
/* 5476e7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 5476ea: xor ebx, ebx */
  ebx = 0;
/* 5476ec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5476ee: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 5476f4: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 5476f8: mov dword ptr [ebp - 0xf4], ebx */
  W32((uint32_t)(ebp + 0xffffff0cu), ebx);
/* 5476fe: mov dword ptr [ebp - 0xf0], ebx */
  W32((uint32_t)(ebp + 0xffffff10u), ebx);
/* 547704: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547709u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 547709: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 54770f: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 547713: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x547718u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 547718: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54771a: je 0x5477ea */
  if (zf) goto L_5477ea;
L_547720: /* 547720: mov esi, dword ptr [edi + 0x88] */
  esi = R32((uint32_t)(edi + 0x88u));
/* 547726: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54772c: lea ebx, [edi + 0x84] */
  ebx = (uint32_t)(edi + 0x84u);
/* 547732: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 547735: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547737: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 54773a: jle 0x547758 */
  if ((zf || sf != of)) goto L_547758;
L_54773c: /* 54773c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54773f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547740: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547743: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547745: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547748: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 54774c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54774e: mov ecx, ebx */
  ecx = ebx;
/* 547750: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 547753: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547758u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547758: /* 547758: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54775a: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 54775d: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 547760: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547762: je 0x54777e */
  if (zf) goto L_54777e;
L_547764: /* 547764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 547767: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 547769: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 54776c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54776f: lea esi, [eax + ecx*4] */
  esi = (uint32_t)(eax + ecx*4);
/* 547772: mov ecx, 9 */
  ecx = 0x9u;
/* 547777: mov edi, edx */
  edi = edx;
/* 547779: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 54777b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_54777e: /* 54777e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 547781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547783: jg 0x54779c */
  if ((!zf && sf == of)) goto L_54779c;
L_547785: /* 547785: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 54778a: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54778f: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547794: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547799u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547799: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54779c: /* 54779c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 54779f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5477a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5477a4: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5477a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477a9: mov ecx, dword ptr [edx + ecx*4 - 8] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xfffffff8u));
/* 5477ad: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5477b0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5477b3: cmp ecx, dword ptr [edx + eax*4 + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + eax*4 + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5477b7: je 0x5477d0 */
  if (zf) goto L_5477d0;
L_5477b9: /* 5477b9: push 0xc0d */
  { uint32_t v = 0xc0du; esp -= 4; W32(esp, v); }
/* 5477be: push 0x5abdc0 */
  { uint32_t v = 0x5abdc0u; esp -= 4; W32(esp, v); }
/* 5477c3: push 0x5abdcc */
  { uint32_t v = 0x5abdccu; esp -= 4; W32(esp, v); }
/* 5477c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5477cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5477cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5477d0: /* 5477d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477d2: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 5477d5: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5477d8: mov byte ptr [ecx + eax], 1 */
  W8((uint32_t)(ecx + eax), 0x1u);
/* 5477dc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5477df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5477e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5477e3: mov esi, eax */
  esi = eax;
/* 5477e5: jmp 0x5476b0 */
  goto L_5476b0;
L_5477ea: /* 5477ea: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 5477f0: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 5477f6: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 5477fc: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5477ff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547801: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547804: jle 0x547822 */
  if ((zf || sf != of)) goto L_547822;
L_547806: /* 547806: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547809: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54780a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54780d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54780f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547812: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547816: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547818: mov ecx, esi */
  ecx = esi;
/* 54781a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54781d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547822u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547822: /* 547822: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547824: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 547827: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54782a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54782c: je 0x547835 */
  if (zf) goto L_547835;
L_54782e: /* 54782e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547830: call 0x4e11cc */
  esp -= 4; W32(esp, 0x547835u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_547835: /* 547835: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547838: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54783b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54783c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54783f: mov esi, eax */
  esi = eax;
/* 547841: jmp 0x5476b0 */
  goto L_5476b0;
L_547846: /* 547846: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 547849: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 54784f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547852: xor ebx, ebx */
  ebx = 0;
L_547854: /* 547854: cmp ebx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547857: jge 0x5478c2 */
  if ((sf == of)) goto L_5478c2;
L_547859: /* 547859: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 54785c: cmp byte ptr [ebx + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 547860: jne 0x5478bf */
  if (!zf) goto L_5478bf;
L_547862: /* 547862: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547868: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54786e: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547874: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 547877: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547878: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54787a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54787d: jle 0x54789b */
  if ((zf || sf != of)) goto L_54789b;
L_54787f: /* 54787f: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547882: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547883: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547886: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547888: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54788b: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54788f: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547891: mov ecx, esi */
  ecx = esi;
/* 547893: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547896: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54789bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54789b: /* 54789b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54789e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5478a0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5478a3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 5478a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478a8: je 0x5478bf */
  if (zf) goto L_5478bf;
L_5478aa: /* 5478aa: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5478ad: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 5478b0: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 5478b3: mov ecx, 9 */
  ecx = 0x9u;
/* 5478b8: mov edi, eax */
  edi = eax;
/* 5478ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 5478bc: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_5478bf: /* 5478bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 5478c0: jmp 0x547854 */
  goto L_547854;
L_5478c2: /* 5478c2: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5478c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478c7: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 5478cb: je 0x5478d9 */
  if (zf) goto L_5478d9;
L_5478cd: /* 5478cd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5478d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5478d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478d6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5478d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5478d9: /* 5478d9: xor esi, esi */
  esi = 0;
/* 5478db: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 5478de: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 5478e1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5478e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5478e6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5478e9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 5478ed: call 0x4e2fb8 */
  esp -= 4; W32(esp, 0x5478f2u); SPILL(); f_4e2fb8(); if (g_unwind) return; RELOAD();
/* 5478f2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 5478f5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5478f7: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 5478fb: je 0x547909 */
  if (zf) goto L_547909;
L_5478fd: /* 5478fd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 547903: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547905: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547906: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x547909u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547909: /* 547909: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54790c: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54790f: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547912: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 547915: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 547919: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x54791eu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 54791e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 547921: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 547925: call 0x4e322e */
  esp -= 4; W32(esp, 0x54792au); SPILL(); f_4e322e(); if (g_unwind) return; RELOAD();
/* 54792a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_54792d: /* 54792d: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547933: push 0x4e16d6 */
  { uint32_t v = 0x4e16d6u; esp -= 4; W32(esp, v); }
/* 547938: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54793a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54793c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54793d: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 547940: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547946: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54794a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54794fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54794f: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547955: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547958: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 54795b: mov dword ptr [ebp - 4], 0x26 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 547962: xor eax, eax */
  eax = 0;
L_547964: /* 547964: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54796a: jge 0x54798f */
  if ((sf == of)) goto L_54798f;
L_54796c: /* 54796c: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547972: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547975: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 547979: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54797b: je 0x54798c */
  if (zf) goto L_54798c;
L_54797d: /* 54797d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 547980: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 547986: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 547989: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
L_54798c: /* 54798c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54798d: jmp 0x547964 */
  goto L_547964;
L_54798f: /* 54798f: xor eax, eax */
  eax = 0;
L_547991: /* 547991: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547994: jge 0x5479b6 */
  if ((sf == of)) goto L_5479b6;
L_547996: /* 547996: mov esi, dword ptr [edi + 0x78] */
  esi = R32((uint32_t)(edi + 0x78u));
/* 547999: mov ecx, eax */
  ecx = eax;
/* 54799b: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 54799e: mov ecx, dword ptr [ecx + esi + 0x10] */
  ecx = R32((uint32_t)(ecx + esi + 0x10u));
/* 5479a2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 5479a5: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 5479ab: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 5479ae: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5479b0: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
/* 5479b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5479b4: jmp 0x547991 */
  goto L_547991;
L_5479b6: /* 5479b6: xor eax, eax */
  eax = 0;
/* 5479b8: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5479bf: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 5479c3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5479c6: jmp 0x5479d0 */
  goto L_5479d0;
L_5479d0: /* 5479d0: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5479d6: jge 0x547b70 */
  if ((sf == of)) goto L_547b70;
L_5479dc: /* 5479dc: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 5479df: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 5479e5: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 5479e8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 5479eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479ed: je 0x547b2f */
  if (zf) goto L_547b2f;
L_5479f3: /* 5479f3: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
L_5479f6: /* 5479f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479f8: je 0x547a06 */
  if (zf) goto L_547a06;
L_5479fa: /* 5479fa: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5479ff: je 0x547a35 */
  if (zf) goto L_547a35;
L_547a01: /* 547a01: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a04: jmp 0x5479f6 */
  goto L_5479f6;
L_547a06: /* 547a06: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547a09: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 547a0c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a0f: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 547a15: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 547a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a1a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 547a1c: jne 0x547a35 */
  if (!zf) goto L_547a35;
L_547a1e: /* 547a1e: push 0xc39 */
  { uint32_t v = 0xc39u; esp -= 4; W32(esp, v); }
/* 547a23: push 0x5abe14 */
  { uint32_t v = 0x5abe14u; esp -= 4; W32(esp, v); }
/* 547a28: push 0x5abe20 */
  { uint32_t v = 0x5abe20u; esp -= 4; W32(esp, v); }
/* 547a2d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a32u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a35: /* 547a35: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a38: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 547a3b: jmp 0x547a40 */
  goto L_547a40;
L_547a40: /* 547a40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a42: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a44: /* 547a44: cmp eax, 0x5f0848 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0848u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a49: je 0x547a50 */
  if (zf) goto L_547a50;
L_547a4b: /* 547a4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a4e: jmp 0x547a40 */
  goto L_547a40;
L_547a50: /* 547a50: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a53: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a58: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a5a: /* 547a5a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a5d: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547a63: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a68: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 547a6b: jne 0x547a84 */
  if (!zf) goto L_547a84;
L_547a6d: /* 547a6d: push 0xc41 */
  { uint32_t v = 0xc41u; esp -= 4; W32(esp, v); }
/* 547a72: push 0x5abe38 */
  { uint32_t v = 0x5abe38u; esp -= 4; W32(esp, v); }
/* 547a77: push 0x5abe44 */
  { uint32_t v = 0x5abe44u; esp -= 4; W32(esp, v); }
/* 547a7c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a81u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a81: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a84: /* 547a84: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 547a87: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547a8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 547a8d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a8f: je 0x547af0 */
  if (zf) goto L_547af0;
L_547a91: /* 547a91: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547a94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a96: je 0x547a9e */
  if (zf) goto L_547a9e;
L_547a98: /* 547a98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a9a: je 0x547ac0 */
  if (zf) goto L_547ac0;
L_547a9c: /* 547a9c: jmp 0x547a91 */
  goto L_547a91;
L_547a9e: /* 547a9e: xor eax, eax */
  eax = 0;
/* 547aa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547aa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa7: jne 0x547ac0 */
  if (!zf) goto L_547ac0;
L_547aa9: /* 547aa9: push 0xc48 */
  { uint32_t v = 0xc48u; esp -= 4; W32(esp, v); }
/* 547aae: push 0x5abe5c */
  { uint32_t v = 0x5abe5cu; esp -= 4; W32(esp, v); }
/* 547ab3: push 0x5abe68 */
  { uint32_t v = 0x5abe68u; esp -= 4; W32(esp, v); }
/* 547ab8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547abdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547abd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547ac0: /* 547ac0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547ac3: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547ac6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547ac9: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547acf: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547ad4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547ad7: jg 0x547af0 */
  if ((!zf && sf == of)) goto L_547af0;
L_547ad9: /* 547ad9: push 0xc4a */
  { uint32_t v = 0xc4au; esp -= 4; W32(esp, v); }
/* 547ade: push 0x5abe94 */
  { uint32_t v = 0x5abe94u; esp -= 4; W32(esp, v); }
/* 547ae3: push 0x5abea0 */
  { uint32_t v = 0x5abea0u; esp -= 4; W32(esp, v); }
/* 547ae8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547aedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547af0: /* 547af0: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547af6: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547afc: mov ecx, ebx */
  ecx = ebx;
/* 547afe: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b01: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547b04: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 547b07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547b09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547b0a: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x547b0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b0d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b10: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547b16: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547b19: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547b1c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547b1e: mov ecx, ebx */
  ecx = ebx;
/* 547b20: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547b23: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 547b29: sub eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547b2c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_547b2f: /* 547b2f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547b33: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547b36: jmp 0x5479d0 */
  goto L_5479d0;
L_547b70: /* 547b70: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547b76: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547b7c: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547b83: mov ecx, ebx */
  ecx = ebx;
/* 547b85: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 547b89: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b8c: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* 547b8f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 547b96: jmp 0x547ba0 */
  goto L_547ba0;
L_547ba0: /* 547ba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547ba3: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547ba6: jge 0x547c3f */
  if ((sf == of)) goto L_547c3f;
L_547bac: /* 547bac: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 547baf: mov esi, eax */
  esi = eax;
/* 547bb1: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 547bb4: mov ecx, dword ptr [esi + edx + 0x10] */
  ecx = R32((uint32_t)(esi + edx + 0x10u));
/* 547bb8: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 547bbb: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 547bbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bbf: je 0x547c23 */
  if (zf) goto L_547c23;
L_547bc1: /* 547bc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_547bc4: /* 547bc4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bc9: je 0x547bd1 */
  if (zf) goto L_547bd1;
L_547bcb: /* 547bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547bcd: je 0x547bdc */
  if (zf) goto L_547bdc;
L_547bcf: /* 547bcf: jmp 0x547bc4 */
  goto L_547bc4;
L_547bd1: /* 547bd1: xor eax, eax */
  eax = 0;
/* 547bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bd5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bda: je 0x547bf3 */
  if (zf) goto L_547bf3;
L_547bdc: /* 547bdc: push 0xc5f */
  { uint32_t v = 0xc5fu; esp -= 4; W32(esp, v); }
/* 547be1: push 0x5abec0 */
  { uint32_t v = 0x5abec0u; esp -= 4; W32(esp, v); }
/* 547be6: push 0x5abecc */
  { uint32_t v = 0x5abeccu; esp -= 4; W32(esp, v); }
/* 547beb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547bf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547bf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547bf3: /* 547bf3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 547bf6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547bf9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547bfc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547c02: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547c07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547c0a: jl 0x547c23 */
  if ((sf != of)) goto L_547c23;
L_547c0c: /* 547c0c: push 0xc61 */
  { uint32_t v = 0xc61u; esp -= 4; W32(esp, v); }
/* 547c11: push 0x5abef8 */
  { uint32_t v = 0x5abef8u; esp -= 4; W32(esp, v); }
/* 547c16: push 0x5abf04 */
  { uint32_t v = 0x5abf04u; esp -= 4; W32(esp, v); }
/* 547c1b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547c20u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547c20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547c23: /* 547c23: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547c29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547c2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c2b: call 0x4e1ded */
  esp -= 4; W32(esp, 0x547c30u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 547c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547c33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547c37: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547c3a: jmp 0x547ba0 */
  goto L_547ba0;
L_547c3f: /* 547c3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547c41: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c48: mov ecx, ebx */
  ecx = ebx;
/* 547c4a: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 547c4e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547c51: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 547c54: xor esi, esi */
  esi = 0;
L_547c56: /* 547c56: cmp esi, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547c5c: jge 0x547c77 */
  if ((sf == of)) goto L_547c77;
L_547c5e: /* 547c5e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547c64: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 547c67: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547c6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c6c: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x547c71u); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 547c71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c74: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 547c75: jmp 0x547c56 */
  goto L_547c56;
L_547c77: /* 547c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547c79: push 0x5abf2c */
  { uint32_t v = 0x5abf2cu; esp -= 4; W32(esp, v); }
/* 547c7e: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c85: push 0x5abf38 */
  { uint32_t v = 0x5abf38u; esp -= 4; W32(esp, v); }
/* 547c8a: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 547c8e: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x547c93u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 547c93: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547c9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ca4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x547ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ca7: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547caf: jg 0x547cc8 */
  if ((!zf && sf == of)) goto L_547cc8;
L_547cb1: /* 547cb1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547cb6: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547cbb: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547cc0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cc5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cc8: /* 547cc8: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547ccb: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cce: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 547cd1: mov dword ptr [ecx + eax*8 - 8], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffff8u), edx);
/* 547cd5: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547cda: jg 0x547cf3 */
  if ((!zf && sf == of)) goto L_547cf3;
L_547cdc: /* 547cdc: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547ce1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547ce6: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cf3: /* 547cf3: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cf6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cf9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 547cfc: mov dword ptr [ecx + eax*8 - 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffffcu), edx);
/* 547d00: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 547d02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d04: mov ecx, ebx */
  ecx = ebx;
/* 547d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x547d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547d09: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 547d0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 547d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547d0e: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547d13u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547d13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d16: mov edi, 1 */
  edi = 0x1u;
/* 547d1b: jmp 0x547f04 */
  goto L_547f04;
L_547f04: /* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_546cab(void) {
  LOAD_REGS();
L_546cab: /* 546cab: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546cae: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 546cb3: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 546cb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546cba: mov dword ptr [ebp - 0xdc], eax */
  W32((uint32_t)(ebp + 0xffffff24u), eax);
/* 546cc0: call 0x554df6 */
  esp -= 4; W32(esp, 0x546cc5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_546cc5(); return;
}

void f_546cc5(void) {
  LOAD_REGS();
L_546cc5: /* 546cc5: push 0x56ef0c */
  { uint32_t v = 0x56ef0cu; esp -= 4; W32(esp, v); }
/* 546cca: push 0x5abc44 */
  { uint32_t v = 0x5abc44u; esp -= 4; W32(esp, v); }
/* 546ccf: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x546cd4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 546cd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546cd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546cd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546cdb: call 0x554df6 */
  esp -= 4; W32(esp, 0x546ce0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 546ce0: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 546ce6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ce8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546ce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546cea: xor eax, eax */
  eax = 0;
/* 546cec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 546ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cee: mov eax, dword ptr [0x69f458] */
  eax = R32((uint32_t)(0x69f458u));
/* 546cf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546cf4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 546cf7: push 0x6a1980 */
  { uint32_t v = 0x6a1980u; esp -= 4; W32(esp, v); }
/* 546cfc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 546cff: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546d03: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x546d08u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 546d08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546d0b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546d0d: je 0x546d25 */
  if (zf) goto L_546d25;
L_546d0f: /* 546d0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 546d12: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 546d18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546d19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546d1a: mov ecx, eax */
  ecx = eax;
/* 546d1c: call 0x4e2707 */
  esp -= 4; W32(esp, 0x546d21u); SPILL(); f_4e2707(); if (g_unwind) return; RELOAD();
/* 546d21: mov edi, eax */
  edi = eax;
/* 546d23: jmp 0x546d27 */
  goto L_546d27;
L_546d25: /* 546d25: xor edi, edi */
  edi = 0;
L_546d27: /* 546d27: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546d2a: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 546d2d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546d31: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546d38: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 546d3f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546d44u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546d44: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546d4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_546d50: /* 546d50: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546d53: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546d59: jge 0x546ec0 */
  if ((sf == of)) goto L_546ec0;
L_546d5f: /* 546d5f: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546d62: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546d66: je 0x546e7e */
  if (zf) goto L_546e7e;
L_546d6c: /* 546d6c: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 546d6f: mov ecx, 1 */
  ecx = 0x1u;
/* 546d74: xor edx, edx */
  edx = 0;
/* 546d76: and eax, 0x70000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 546d7b: mov dword ptr [ebp - 0xa0], 0x7e */
  W32((uint32_t)(ebp + 0xffffff60u), 0x7eu);
/* 546d85: mov dword ptr [ebp - 0x9c], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7d0u);
/* 546d8f: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 546d95: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 546d9b: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 546da1: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 546da7: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 546daa: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 546dad: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 546db0: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 546db3: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 546db6: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 546db9: mov dword ptr [ebp - 0x68], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0xffffffffu);
/* 546dc0: mov dword ptr [ebp - 0xa4], 0x56d7f0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x56d7f0u);
/* 546dca: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 546dcd: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 546dd0: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 546dd6: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 546ddc: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* 546ddf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 546de1: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 546de7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546de8: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 546dec: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x546defu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546def: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546df4: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546df7: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546dfa: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 546e00: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 546e03: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 546e06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 546e07: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 546e0d: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x546e10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 546e10: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e16: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 546e19: mov ecx, dword ptr [0x69f458] */
  ecx = R32((uint32_t)(0x69f458u));
L_546e1f: /* 546e1f: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 546e22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e24: je 0x546e2c */
  if (zf) goto L_546e2c;
L_546e26: /* 546e26: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 546e28: je 0x546e37 */
  if (zf) goto L_546e37;
L_546e2a: /* 546e2a: jmp 0x546e1f */
  goto L_546e1f;
L_546e2c: /* 546e2c: xor eax, eax */
  eax = 0;
/* 546e2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e30: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 546e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546e35: je 0x546e70 */
  if (zf) goto L_546e70;
L_546e37: /* 546e37: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 546e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e3c: mov ecx, esi */
  ecx = esi;
/* 546e3e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546e43u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546e43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546e45: push 0x5abc4c */
  { uint32_t v = 0x5abc4cu; esp -= 4; W32(esp, v); }
/* 546e4a: push 0x5abc58 */
  { uint32_t v = 0x5abc58u; esp -= 4; W32(esp, v); }
/* 546e4f: mov esi, eax */
  esi = eax;
/* 546e51: call 0x4e1613 */
  esp -= 4; W32(esp, 0x546e56u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 546e56: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 546e5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 546e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546e61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546e62: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546e67u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546e67: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 546e6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546e70: /* 546e70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 546e74: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
L_546e7e: /* 546e7e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546e81: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546e86u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546e86: jmp 0x546d50 */
  goto L_546d50;
L_546ec0: /* 546ec0: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 546ec7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 546eca: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 546ece: mov dword ptr [ebp - 0x1c], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x6a0f20u);
/* 546ed5: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 546edc: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ee1u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ee1: mov ebx, 0x70010 */
  ebx = 0x70010u;
/* 546ee6: jmp 0x546ef0 */
  goto L_546ef0;
L_546ef0: /* 546ef0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546ef3: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ef9: jge 0x5470fc */
  if ((sf == of)) goto L_5470fc;
L_546eff: /* 546eff: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f05: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f08: test byte ptr [eax + 0x1c], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f0c: je 0x54708d */
  if (zf) goto L_54708d;
L_546f12: /* 546f12: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f15: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546f1b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546f1e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f21: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f26: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f29: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 546f2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f2e: je 0x546f41 */
  if (zf) goto L_546f41;
L_546f30: /* 546f30: mov eax, ecx */
  eax = ecx;
/* 546f32: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 546f38: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546f3b: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 546f3e: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_546f41: /* 546f41: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 546f47: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 546f4a: test byte ptr [ecx + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546f4e: je 0x54709a */
  if (zf) goto L_54709a;
L_546f54: /* 546f54: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 546f57: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 546f5a: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 546f5f: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 546f62: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546f65: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 546f6b: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 546f6e: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 546f71: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 546f74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 546f76: jne 0x546f8f */
  if (!zf) goto L_546f8f;
L_546f78: /* 546f78: push 0xb8a */
  { uint32_t v = 0xb8au; esp -= 4; W32(esp, v); }
/* 546f7d: push 0x5abc80 */
  { uint32_t v = 0x5abc80u; esp -= 4; W32(esp, v); }
/* 546f82: push 0x5abc8c */
  { uint32_t v = 0x5abc8cu; esp -= 4; W32(esp, v); }
/* 546f87: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x546f8cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 546f8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_546f8f: /* 546f8f: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546f94: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 546f97: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 546f9a: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 546f9d: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 546fa0: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 546fa6: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 546fa9: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 546fac: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 546fb1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 546fb4: test byte ptr [ecx + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 546fb8: jne 0x54708d */
  if (!zf) goto L_54708d;
L_546fbe: /* 546fbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546fc0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x546fc5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 546fc5: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 546fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546fcc: push 0x5abca4 */
  { uint32_t v = 0x5abca4u; esp -= 4; W32(esp, v); }
/* 546fd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 546fd2: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x546fd7u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 546fd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546fda: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 546fe1: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
L_546fe8: /* 546fe8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 546feb: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x546ff0u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 546ff0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 546ff3: cmp ebx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 546ff9: jge 0x547052 */
  if ((sf == of)) goto L_547052;
L_546ffb: /* 546ffb: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547000: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 547003: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 547006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547008: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 54700e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x547013u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 547013: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 547016: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547018: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 54701c: je 0x547042 */
  if (zf) goto L_547042;
L_54701e: /* 54701e: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547024: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 547027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547029: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54702eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54702f: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 547034: push 0x5abccc */
  { uint32_t v = 0x5abcccu; esp -= 4; W32(esp, v); }
/* 547039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54703a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54703fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54703f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547042: /* 547042: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 547046: mov dword ptr [ebp - 0xa4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x569110u);
/* 547050: jmp 0x546fe8 */
  goto L_546fe8;
L_547052: /* 547052: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547058: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 54705b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54705d: mov ecx, esi */
  ecx = esi;
/* 54705f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547064u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547066: push 0x5abcd8 */
  { uint32_t v = 0x5abcd8u; esp -= 4; W32(esp, v); }
/* 54706b: push 0x5abce4 */
  { uint32_t v = 0x5abce4u; esp -= 4; W32(esp, v); }
/* 547070: mov esi, eax */
  esi = eax;
/* 547072: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547077u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547077: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 54707a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54707d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54707e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54707f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547080: call 0x4e3418 */
  esp -= 4; W32(esp, 0x547085u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 547085: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547088: mov ebx, 0x70010 */
  ebx = 0x70010u;
L_54708d: /* 54708d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 547090: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547095u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547095: jmp 0x546ef0 */
  goto L_546ef0;
L_54709a: /* 54709a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54709c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5470a1u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5470a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470a2: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 5470a7: push 0x5abd08 */
  { uint32_t v = 0x5abd08u; esp -= 4; W32(esp, v); }
/* 5470ac: push 0x309 */
  { uint32_t v = 0x309u; esp -= 4; W32(esp, v); }
/* 5470b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5470b2: call 0x4e30df */
  esp -= 4; W32(esp, 0x5470b7u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5470b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5470ba: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5470bd: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5470c2u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5470c2: jmp 0x546ef0 */
  goto L_546ef0;
L_5470fc: /* 5470fc: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5470ff: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547101: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547108: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 54710c: je 0x54716a */
  if (zf) goto L_54716a;
L_54710e: /* 54710e: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 547114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547116: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 547119: je 0x547123 */
  if (zf) goto L_547123;
L_54711b: /* 54711b: mov eax, dword ptr [ebx + 0x94] */
  eax = R32((uint32_t)(ebx + 0x94u));
/* 547121: jmp 0x547128 */
  goto L_547128;
L_547123: /* 547123: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_547128: /* 547128: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547129: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54712a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54712b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 547130: push 0x5abd28 */
  { uint32_t v = 0x5abd28u; esp -= 4; W32(esp, v); }
/* 547135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547136: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54713bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54713b: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 54713e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547140: lea edx, [edi + 0x50] */
  edx = (uint32_t)(edi + 0x50u);
/* 547143: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 547145: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 547148: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 54714b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 54714e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 547151: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 547154: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547157: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 54715a: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 54715d: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 547160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547161: mov ecx, esi */
  ecx = esi;
/* 547163: call 0x4e31ac */
  esp -= 4; W32(esp, 0x547168u); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 547168: jmp 0x5471bb */
  goto L_5471bb;
L_54716a: /* 54716a: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 547170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547171: call 0x4e261c */
  esp -= 4; W32(esp, 0x547176u); SPILL(); f_4e261c(); if (g_unwind) return; RELOAD();
/* 547176: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 547178: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 54717b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54717d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 547180: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 547183: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 547186: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 547189: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 54718c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 54718f: xor eax, eax */
  eax = 0;
/* 547191: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547194: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 547197: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 54719a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 54719d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471a0: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 5471a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471a4: mov ecx, esi */
  ecx = esi;
/* 5471a6: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 5471aa: call 0x4e31ac */
  esp -= 4; W32(esp, 0x5471afu); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 5471af: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5471b2: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 5471b6: call 0x4e3bd9 */
  esp -= 4; W32(esp, 0x5471bbu); SPILL(); f_4e3bd9(); if (g_unwind) return; RELOAD();
L_5471bb: /* 5471bb: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 5471be: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5471c1: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5471c4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5471c6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5471c9: jle 0x5471e7 */
  if ((zf || sf != of)) goto L_5471e7;
L_5471cb: /* 5471cb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5471ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5471cf: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5471d2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5471d4: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5471d7: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5471db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5471dd: mov ecx, esi */
  ecx = esi;
/* 5471df: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 5471e2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5471e7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5471e7: /* 5471e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5471e9: lea ecx, [eax + ebx*8] */
  ecx = (uint32_t)(eax + ebx*8);
/* 5471ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5471ee: je 0x5471f9 */
  if (zf) goto L_5471f9;
L_5471f0: /* 5471f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5471f4: call 0x4e19a6 */
  esp -= 4; W32(esp, 0x5471f9u); SPILL(); f_4e19a6(); if (g_unwind) return; RELOAD();
L_5471f9: /* 5471f9: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 5471fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5471fd: lea esi, [edi + 0xb4] */
  esi = (uint32_t)(edi + 0xb4u);
/* 547203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547204: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547209u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54720b: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547212: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547215: mov ecx, esi */
  ecx = esi;
/* 547217: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 54721b: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x54721eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54721e: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 547221: xor ecx, ecx */
  ecx = 0;
L_547223: /* 547223: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547229: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54722c: jge 0x54727c */
  if ((sf == of)) goto L_54727c;
L_54722e: /* 54722e: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 547233: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 547236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547238: je 0x547279 */
  if (zf) goto L_547279;
L_54723a: /* 54723a: test byte ptr [eax + 4], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54723e: je 0x547279 */
  if (zf) goto L_547279;
L_547240: /* 547240: mov ebx, dword ptr [edi + 0x70] */
  ebx = R32((uint32_t)(edi + 0x70u));
/* 547243: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547246: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547249: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54724c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54724e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547251: jle 0x54726f */
  if ((zf || sf != of)) goto L_54726f;
L_547253: /* 547253: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547256: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547257: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54725a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54725c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54725f: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 547263: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 547266: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547268: mov ecx, esi */
  ecx = esi;
/* 54726a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54726fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54726f: /* 54726f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547272: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 547274: mov dword ptr [edx + ebx*4], eax */
  W32((uint32_t)(edx + ebx*4), eax);
/* 547277: mov ecx, eax */
  ecx = eax;
L_547279: /* 547279: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54727a: jmp 0x547223 */
  goto L_547223;
L_54727c: /* 54727c: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54727f: xor ecx, ecx */
  ecx = 0;
/* 547281: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547283: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54728a: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 54728e: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547294: je 0x547375 */
  if (zf) goto L_547375;
L_54729a: /* 54729a: xor edx, edx */
  edx = 0;
L_54729c: /* 54729c: cmp edx, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54729f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5472a2: jge 0x547372 */
  if ((sf == of)) goto L_547372;
L_5472a8: /* 5472a8: xor eax, eax */
  eax = 0;
/* 5472aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5472b0: /* 5472b0: cmp eax, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5472b3: jge 0x5472ca */
  if ((sf == of)) goto L_5472ca;
L_5472b5: /* 5472b5: mov esi, dword ptr [edi + 0x6c] */
  esi = R32((uint32_t)(edi + 0x6cu));
/* 5472b8: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 5472bb: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 5472be: cmp esi, dword ptr [ecx + edx*4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472c1: jne 0x5472c7 */
  if (!zf) goto L_5472c7;
L_5472c3: /* 5472c3: mov ecx, eax */
  ecx = eax;
/* 5472c5: jmp 0x5472cd */
  goto L_5472cd;
L_5472c7: /* 5472c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5472c8: jmp 0x5472b0 */
  goto L_5472b0;
L_5472ca: /* 5472ca: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_5472cd: /* 5472cd: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 5472d4: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 5472d7: mov eax, dword ptr [edx + 0x6c] */
  eax = R32((uint32_t)(edx + 0x6cu));
/* 5472da: cmp dword ptr [ebx + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472de: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e0: /* 5472e0: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5472e3: je 0x5472ff */
  if (zf) goto L_5472ff;
L_5472e5: /* 5472e5: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 5472e8: mov edx, dword ptr [eax + ebx] */
  edx = R32((uint32_t)(eax + ebx));
/* 5472eb: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 5472ee: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5472f1: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5472f4: mov dword ptr [eax + ebx], edx */
  W32((uint32_t)(eax + ebx), edx);
/* 5472f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5472fa: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 5472fd: jmp 0x547358 */
  goto L_547358;
L_5472ff: /* 5472ff: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 547302: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 547305: lea esi, [edi + 0x6c] */
  esi = (uint32_t)(edi + 0x6cu);
/* 547308: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547309: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54730b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54730e: jle 0x54732c */
  if ((zf || sf != of)) goto L_54732c;
L_547310: /* 547310: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547313: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547314: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547317: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547319: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54731c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 547320: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547322: mov ecx, esi */
  ecx = esi;
/* 547324: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547327: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54732cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54732c: /* 54732c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54732f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547331: jg 0x54734a */
  if ((!zf && sf == of)) goto L_54734a;
L_547333: /* 547333: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547338: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54733d: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547342: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547347u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547347: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54734a: /* 54734a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54734c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54734f: mov eax, ecx */
  eax = ecx;
/* 547351: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547354: mov dword ptr [eax + edx*4 - 4], ecx */
  W32((uint32_t)(eax + edx*4 + 0xfffffffcu), ecx);
L_547358: /* 547358: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 54735b: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 54735e: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* 547361: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547363: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547366: mov dword ptr [ebx + eax], ecx */
  W32((uint32_t)(ebx + eax), ecx);
/* 547369: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54736c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54736d: jmp 0x54729c */
  goto L_54729c;
L_547372: /* 547372: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
L_547375: /* 547375: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547378: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 54737b: push 0x4e30c1 */
  { uint32_t v = 0x4e30c1u; esp -= 4; W32(esp, v); }
/* 547380: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547382: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 547384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547385: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547389: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54738eu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54738e: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 547391: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547394: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54739b: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 54739f: mov dword ptr [edi + 0x38], eax */
  W32((uint32_t)(edi + 0x38u), eax);
/* 5473a2: xor esi, esi */
  esi = 0;
L_5473a4: /* 5473a4: cmp esi, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5473a7: jge 0x54740f */
  if ((sf == of)) goto L_54740f;
L_5473a9: /* 5473a9: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473ac: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 5473af: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5473b5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 5473b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473b9: lea eax, [edi + 0xb4] */
  eax = (uint32_t)(edi + 0xb4u);
/* 5473bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5473c0: call 0x4e1be0 */
  esp -= 4; W32(esp, 0x5473c5u); SPILL(); f_4e1be0(); if (g_unwind) return; RELOAD();
/* 5473c5: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5473c8: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 5473cb: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 5473d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5473d4: mov dword ptr [eax + edx*4], esi */
  W32((uint32_t)(eax + edx*4), esi);
/* 5473d7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5473d8: jmp 0x5473a4 */
  goto L_5473a4;
L_54740f: /* 54740f: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547416: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547419: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 54741d: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 547424: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 54742b: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547430u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
L_547430: /* 547430: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547433: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547439: jge 0x5474de */
  if ((sf == of)) goto L_5474de;
L_54743f: /* 54743f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547445: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547448: test byte ptr [eax + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54744c: je 0x54749c */
  if (zf) goto L_54749c;
L_54744e: /* 54744e: mov ebx, dword ptr [edi + 0x7c] */
  ebx = R32((uint32_t)(edi + 0x7cu));
/* 547451: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 547457: lea esi, [edi + 0x78] */
  esi = (uint32_t)(edi + 0x78u);
/* 54745a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 54745d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54745f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547462: jle 0x547480 */
  if ((zf || sf != of)) goto L_547480;
L_547464: /* 547464: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547467: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547468: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54746b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54746d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547470: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547474: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 547476: mov ecx, esi */
  ecx = esi;
/* 547478: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54747b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547480u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547480: /* 547480: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 547482: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 547485: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ebx = r;
  }
/* 547487: mov ecx, ebx */
  ecx = ebx;
/* 547489: je 0x54749c */
  if (zf) goto L_54749c;
L_54748b: /* 54748b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 547490: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547493: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 547496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547497: call 0x4e442b */
  esp -= 4; W32(esp, 0x54749cu); SPILL(); f_4e442b(); if (g_unwind) return; RELOAD();
L_54749c: /* 54749c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54749f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5474a4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5474a4: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5474a7: jmp 0x547430 */
  goto L_547430;
L_5474de: /* 5474de: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 5474e1: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 5474e4: push 0x4e2c5c */
  { uint32_t v = 0x4e2c5cu; esp -= 4; W32(esp, v); }
/* 5474e9: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 5474eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5474ec: mov esi, 6 */
  esi = 0x6u;
/* 5474f1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 5474f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5474f5: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* 5474f8: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 5474fc: mov dword ptr [0x69b438], edi */
  W32((uint32_t)(0x69b438u), edi);
/* 547502: call 0x4e1785 */
  esp -= 4; W32(esp, 0x547507u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 547507: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54750a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 54750d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 547510: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 547514: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 54751b: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 547522: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x547527u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 547527: jmp 0x547530 */
  goto L_547530;
L_547530: /* 547530: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547533: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547539: jge 0x5475e9 */
  if ((sf == of)) goto L_5475e9;
L_54753f: /* 54753f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 547545: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547548: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54754c: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_54754e: /* 54754e: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 547554: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54755a: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547560: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 547563: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547565: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547568: jle 0x547586 */
  if ((zf || sf != of)) goto L_547586;
L_54756a: /* 54756a: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54756d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54756e: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547571: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547573: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547576: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54757a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54757c: mov ecx, esi */
  ecx = esi;
/* 54757e: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547581: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547586u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547586: /* 547586: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547588: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 54758b: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54758e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547590: je 0x5475a4 */
  if (zf) goto L_5475a4;
L_547592: /* 547592: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 547598: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54759b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 54759e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54759f: call 0x4e11cc */
  esp -= 4; W32(esp, 0x5475a4u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_5475a4: /* 5475a4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5475a7: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5475acu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5475ac: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5475af: jmp 0x547530 */
  goto L_547530;
L_5475e9: /* 5475e9: xor ecx, ecx */
  ecx = 0;
/* 5475eb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5475ed: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5475f4: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 5475f8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5475fb: je 0x54792d */
  if (zf) goto L_54792d;
L_547601: /* 547601: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547608: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 54760b: call 0x4e2446 */
  esp -= 4; W32(esp, 0x547610u); SPILL(); f_4e2446(); if (g_unwind) return; RELOAD();
/* 547610: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547616: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 54761a: xor eax, eax */
  eax = 0;
/* 54761c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_547620: /* 547620: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547623: jge 0x547628 */
  if ((sf == of)) goto L_547628;
L_547625: /* 547625: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547626: jmp 0x547620 */
  goto L_547620;
L_547628: /* 547628: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 54762b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54762d: mov ecx, esi */
  ecx = esi;
/* 54762f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 547636: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54763bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54763b: xor esi, esi */
  esi = 0;
/* 54763d: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 547640: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 547643: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 547646: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 547649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54764a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54764c: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54764f: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 547653: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x547658u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 547658: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54765b: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 54765e: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547661: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 547664: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 547668: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 54766b: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 547672: call 0x4e22b6 */
  esp -= 4; W32(esp, 0x547677u); SPILL(); f_4e22b6(); if (g_unwind) return; RELOAD();
/* 547677: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
L_54767b: /* 54767b: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54767e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 547681: jge 0x5476a4 */
  if ((sf == of)) goto L_5476a4;
L_547683: /* 547683: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 547686: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 547689: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 54768d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54768f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x547694u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 547694: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 547697: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547699: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 54769c: call 0x4e3670 */
  esp -= 4; W32(esp, 0x5476a1u); SPILL(); f_4e3670(); if (g_unwind) return; RELOAD();
/* 5476a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5476a2: jmp 0x54767b */
  goto L_54767b;
L_5476a4: /* 5476a4: xor esi, esi */
  esi = 0;
/* 5476a6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 5476a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5476b0: /* 5476b0: cmp esi, dword ptr [ebx + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5476b6: jge 0x547846 */
  if ((sf == of)) goto L_547846;
L_5476bc: /* 5476bc: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 5476bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5476c3: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5476c8u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5476c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5476ca: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* 5476d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5476d1: mov ecx, ebx */
  ecx = ebx;
/* 5476d3: call 0x4e35fd */
  esp -= 4; W32(esp, 0x5476d8u); SPILL(); f_4e35fd(); if (g_unwind) return; RELOAD();
/* 5476d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5476d9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5476dc: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 5476e0: call 0x4e114f */
  esp -= 4; W32(esp, 0x5476e5u); SPILL(); f_4e114f(); if (g_unwind) return; RELOAD();
/* 5476e5: mov esi, eax */
  esi = eax;
/* 5476e7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 5476ea: xor ebx, ebx */
  ebx = 0;
/* 5476ec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5476ee: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 5476f4: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 5476f8: mov dword ptr [ebp - 0xf4], ebx */
  W32((uint32_t)(ebp + 0xffffff0cu), ebx);
/* 5476fe: mov dword ptr [ebp - 0xf0], ebx */
  W32((uint32_t)(ebp + 0xffffff10u), ebx);
/* 547704: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547709u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 547709: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 54770f: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 547713: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x547718u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 547718: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54771a: je 0x5477ea */
  if (zf) goto L_5477ea;
L_547720: /* 547720: mov esi, dword ptr [edi + 0x88] */
  esi = R32((uint32_t)(edi + 0x88u));
/* 547726: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54772c: lea ebx, [edi + 0x84] */
  ebx = (uint32_t)(edi + 0x84u);
/* 547732: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 547735: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547737: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 54773a: jle 0x547758 */
  if ((zf || sf != of)) goto L_547758;
L_54773c: /* 54773c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54773f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547740: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547743: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547745: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547748: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 54774c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54774e: mov ecx, ebx */
  ecx = ebx;
/* 547750: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 547753: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547758u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547758: /* 547758: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54775a: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 54775d: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 547760: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547762: je 0x54777e */
  if (zf) goto L_54777e;
L_547764: /* 547764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 547767: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 547769: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 54776c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54776f: lea esi, [eax + ecx*4] */
  esi = (uint32_t)(eax + ecx*4);
/* 547772: mov ecx, 9 */
  ecx = 0x9u;
/* 547777: mov edi, edx */
  edi = edx;
/* 547779: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 54777b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_54777e: /* 54777e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 547781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547783: jg 0x54779c */
  if ((!zf && sf == of)) goto L_54779c;
L_547785: /* 547785: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 54778a: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 54778f: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547794: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547799u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547799: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54779c: /* 54779c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 54779f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5477a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5477a4: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5477a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477a9: mov ecx, dword ptr [edx + ecx*4 - 8] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xfffffff8u));
/* 5477ad: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5477b0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5477b3: cmp ecx, dword ptr [edx + eax*4 + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + eax*4 + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5477b7: je 0x5477d0 */
  if (zf) goto L_5477d0;
L_5477b9: /* 5477b9: push 0xc0d */
  { uint32_t v = 0xc0du; esp -= 4; W32(esp, v); }
/* 5477be: push 0x5abdc0 */
  { uint32_t v = 0x5abdc0u; esp -= 4; W32(esp, v); }
/* 5477c3: push 0x5abdcc */
  { uint32_t v = 0x5abdccu; esp -= 4; W32(esp, v); }
/* 5477c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5477cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5477cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5477d0: /* 5477d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5477d2: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 5477d5: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 5477d8: mov byte ptr [ecx + eax], 1 */
  W8((uint32_t)(ecx + eax), 0x1u);
/* 5477dc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5477df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5477e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5477e3: mov esi, eax */
  esi = eax;
/* 5477e5: jmp 0x5476b0 */
  goto L_5476b0;
L_5477ea: /* 5477ea: mov ebx, dword ptr [edi + 0x88] */
  ebx = R32((uint32_t)(edi + 0x88u));
/* 5477f0: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 5477f6: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 5477fc: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5477ff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547801: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 547804: jle 0x547822 */
  if ((zf || sf != of)) goto L_547822;
L_547806: /* 547806: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547809: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54780a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54780d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54780f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 547812: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 547816: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547818: mov ecx, esi */
  ecx = esi;
/* 54781a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54781d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x547822u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_547822: /* 547822: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 547824: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 547827: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 54782a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54782c: je 0x547835 */
  if (zf) goto L_547835;
L_54782e: /* 54782e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547830: call 0x4e11cc */
  esp -= 4; W32(esp, 0x547835u); SPILL(); f_4e11cc(); if (g_unwind) return; RELOAD();
L_547835: /* 547835: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547838: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 54783b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54783c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54783f: mov esi, eax */
  esi = eax;
/* 547841: jmp 0x5476b0 */
  goto L_5476b0;
L_547846: /* 547846: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 547849: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 54784f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547852: xor ebx, ebx */
  ebx = 0;
L_547854: /* 547854: cmp ebx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547857: jge 0x5478c2 */
  if ((sf == of)) goto L_5478c2;
L_547859: /* 547859: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 54785c: cmp byte ptr [ebx + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 547860: jne 0x5478bf */
  if (!zf) goto L_5478bf;
L_547862: /* 547862: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 547868: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 54786e: lea esi, [edi + 0x84] */
  esi = (uint32_t)(edi + 0x84u);
/* 547874: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 547877: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 547878: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54787a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54787d: jle 0x54789b */
  if ((zf || sf != of)) goto L_54789b;
L_54787f: /* 54787f: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 547882: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 547883: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 547886: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 547888: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54788b: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54788f: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 547891: mov ecx, esi */
  ecx = esi;
/* 547893: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 547896: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54789bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54789b: /* 54789b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54789e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5478a0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5478a3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 5478a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478a8: je 0x5478bf */
  if (zf) goto L_5478bf;
L_5478aa: /* 5478aa: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5478ad: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 5478b0: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 5478b3: mov ecx, 9 */
  ecx = 0x9u;
/* 5478b8: mov edi, eax */
  edi = eax;
/* 5478ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 5478bc: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_5478bf: /* 5478bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 5478c0: jmp 0x547854 */
  goto L_547854;
L_5478c2: /* 5478c2: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5478c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5478c7: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 5478cb: je 0x5478d9 */
  if (zf) goto L_5478d9;
L_5478cd: /* 5478cd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5478d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5478d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478d6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5478d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5478d9: /* 5478d9: xor esi, esi */
  esi = 0;
/* 5478db: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 5478de: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 5478e1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5478e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5478e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5478e6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5478e9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 5478ed: call 0x4e2fb8 */
  esp -= 4; W32(esp, 0x5478f2u); SPILL(); f_4e2fb8(); if (g_unwind) return; RELOAD();
/* 5478f2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 5478f5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5478f7: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 5478fb: je 0x547909 */
  if (zf) goto L_547909;
L_5478fd: /* 5478fd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 547903: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547905: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547906: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x547909u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547909: /* 547909: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 54790c: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 54790f: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 547912: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 547915: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 547919: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x54791eu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 54791e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 547921: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 547925: call 0x4e322e */
  esp -= 4; W32(esp, 0x54792au); SPILL(); f_4e322e(); if (g_unwind) return; RELOAD();
/* 54792a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_54792d: /* 54792d: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547933: push 0x4e16d6 */
  { uint32_t v = 0x4e16d6u; esp -= 4; W32(esp, v); }
/* 547938: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54793a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 54793c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54793d: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 547940: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547946: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54794a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54794fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54794f: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 547955: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547958: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 54795b: mov dword ptr [ebp - 4], 0x26 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 547962: xor eax, eax */
  eax = 0;
L_547964: /* 547964: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54796a: jge 0x54798f */
  if ((sf == of)) goto L_54798f;
L_54796c: /* 54796c: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547972: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547975: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 547979: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54797b: je 0x54798c */
  if (zf) goto L_54798c;
L_54797d: /* 54797d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 547980: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 547986: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 547989: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
L_54798c: /* 54798c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54798d: jmp 0x547964 */
  goto L_547964;
L_54798f: /* 54798f: xor eax, eax */
  eax = 0;
L_547991: /* 547991: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547994: jge 0x5479b6 */
  if ((sf == of)) goto L_5479b6;
L_547996: /* 547996: mov esi, dword ptr [edi + 0x78] */
  esi = R32((uint32_t)(edi + 0x78u));
/* 547999: mov ecx, eax */
  ecx = eax;
/* 54799b: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 54799e: mov ecx, dword ptr [ecx + esi + 0x10] */
  ecx = R32((uint32_t)(ecx + esi + 0x10u));
/* 5479a2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 5479a5: mov esi, dword ptr [edi + 0xf8] */
  esi = R32((uint32_t)(edi + 0xf8u));
/* 5479ab: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 5479ae: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5479b0: mov dword ptr [esi + ecx*4], edx */
  W32((uint32_t)(esi + ecx*4), edx);
/* 5479b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5479b4: jmp 0x547991 */
  goto L_547991;
L_5479b6: /* 5479b6: xor eax, eax */
  eax = 0;
/* 5479b8: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5479bf: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 5479c3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5479c6: jmp 0x5479d0 */
  goto L_5479d0;
L_5479d0: /* 5479d0: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5479d6: jge 0x547b70 */
  if ((sf == of)) goto L_547b70;
L_5479dc: /* 5479dc: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 5479df: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 5479e5: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 5479e8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 5479eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479ed: je 0x547b2f */
  if (zf) goto L_547b2f;
L_5479f3: /* 5479f3: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
L_5479f6: /* 5479f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479f8: je 0x547a06 */
  if (zf) goto L_547a06;
L_5479fa: /* 5479fa: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5479ff: je 0x547a35 */
  if (zf) goto L_547a35;
L_547a01: /* 547a01: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a04: jmp 0x5479f6 */
  goto L_5479f6;
L_547a06: /* 547a06: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547a09: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 547a0c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a0f: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 547a15: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 547a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a1a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 547a1c: jne 0x547a35 */
  if (!zf) goto L_547a35;
L_547a1e: /* 547a1e: push 0xc39 */
  { uint32_t v = 0xc39u; esp -= 4; W32(esp, v); }
/* 547a23: push 0x5abe14 */
  { uint32_t v = 0x5abe14u; esp -= 4; W32(esp, v); }
/* 547a28: push 0x5abe20 */
  { uint32_t v = 0x5abe20u; esp -= 4; W32(esp, v); }
/* 547a2d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a32u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a35: /* 547a35: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a38: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 547a3b: jmp 0x547a40 */
  goto L_547a40;
L_547a40: /* 547a40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a42: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a44: /* 547a44: cmp eax, 0x5f0848 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0848u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a49: je 0x547a50 */
  if (zf) goto L_547a50;
L_547a4b: /* 547a4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a4e: jmp 0x547a40 */
  goto L_547a40;
L_547a50: /* 547a50: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a53: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a58: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a5a: /* 547a5a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a5d: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547a63: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a68: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 547a6b: jne 0x547a84 */
  if (!zf) goto L_547a84;
L_547a6d: /* 547a6d: push 0xc41 */
  { uint32_t v = 0xc41u; esp -= 4; W32(esp, v); }
/* 547a72: push 0x5abe38 */
  { uint32_t v = 0x5abe38u; esp -= 4; W32(esp, v); }
/* 547a77: push 0x5abe44 */
  { uint32_t v = 0x5abe44u; esp -= 4; W32(esp, v); }
/* 547a7c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a81u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a81: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a84: /* 547a84: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 547a87: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547a8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 547a8d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a8f: je 0x547af0 */
  if (zf) goto L_547af0;
L_547a91: /* 547a91: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547a94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a96: je 0x547a9e */
  if (zf) goto L_547a9e;
L_547a98: /* 547a98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a9a: je 0x547ac0 */
  if (zf) goto L_547ac0;
L_547a9c: /* 547a9c: jmp 0x547a91 */
  goto L_547a91;
L_547a9e: /* 547a9e: xor eax, eax */
  eax = 0;
/* 547aa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547aa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa7: jne 0x547ac0 */
  if (!zf) goto L_547ac0;
L_547aa9: /* 547aa9: push 0xc48 */
  { uint32_t v = 0xc48u; esp -= 4; W32(esp, v); }
/* 547aae: push 0x5abe5c */
  { uint32_t v = 0x5abe5cu; esp -= 4; W32(esp, v); }
/* 547ab3: push 0x5abe68 */
  { uint32_t v = 0x5abe68u; esp -= 4; W32(esp, v); }
/* 547ab8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547abdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547abd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547ac0: /* 547ac0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547ac3: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547ac6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547ac9: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547acf: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547ad4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547ad7: jg 0x547af0 */
  if ((!zf && sf == of)) goto L_547af0;
L_547ad9: /* 547ad9: push 0xc4a */
  { uint32_t v = 0xc4au; esp -= 4; W32(esp, v); }
/* 547ade: push 0x5abe94 */
  { uint32_t v = 0x5abe94u; esp -= 4; W32(esp, v); }
/* 547ae3: push 0x5abea0 */
  { uint32_t v = 0x5abea0u; esp -= 4; W32(esp, v); }
/* 547ae8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547aedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547af0: /* 547af0: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547af6: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547afc: mov ecx, ebx */
  ecx = ebx;
/* 547afe: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b01: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547b04: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 547b07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547b09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547b0a: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x547b0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b0d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b10: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547b16: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547b19: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547b1c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547b1e: mov ecx, ebx */
  ecx = ebx;
/* 547b20: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547b23: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 547b29: sub eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547b2c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_547b2f: /* 547b2f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547b33: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547b36: jmp 0x5479d0 */
  goto L_5479d0;
L_547b70: /* 547b70: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547b76: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547b7c: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547b83: mov ecx, ebx */
  ecx = ebx;
/* 547b85: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 547b89: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b8c: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* 547b8f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 547b96: jmp 0x547ba0 */
  goto L_547ba0;
L_547ba0: /* 547ba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547ba3: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547ba6: jge 0x547c3f */
  if ((sf == of)) goto L_547c3f;
L_547bac: /* 547bac: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 547baf: mov esi, eax */
  esi = eax;
/* 547bb1: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 547bb4: mov ecx, dword ptr [esi + edx + 0x10] */
  ecx = R32((uint32_t)(esi + edx + 0x10u));
/* 547bb8: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 547bbb: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 547bbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bbf: je 0x547c23 */
  if (zf) goto L_547c23;
L_547bc1: /* 547bc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_547bc4: /* 547bc4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bc9: je 0x547bd1 */
  if (zf) goto L_547bd1;
L_547bcb: /* 547bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547bcd: je 0x547bdc */
  if (zf) goto L_547bdc;
L_547bcf: /* 547bcf: jmp 0x547bc4 */
  goto L_547bc4;
L_547bd1: /* 547bd1: xor eax, eax */
  eax = 0;
/* 547bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bd5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bda: je 0x547bf3 */
  if (zf) goto L_547bf3;
L_547bdc: /* 547bdc: push 0xc5f */
  { uint32_t v = 0xc5fu; esp -= 4; W32(esp, v); }
/* 547be1: push 0x5abec0 */
  { uint32_t v = 0x5abec0u; esp -= 4; W32(esp, v); }
/* 547be6: push 0x5abecc */
  { uint32_t v = 0x5abeccu; esp -= 4; W32(esp, v); }
/* 547beb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547bf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547bf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547bf3: /* 547bf3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 547bf6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547bf9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547bfc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547c02: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547c07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547c0a: jl 0x547c23 */
  if ((sf != of)) goto L_547c23;
L_547c0c: /* 547c0c: push 0xc61 */
  { uint32_t v = 0xc61u; esp -= 4; W32(esp, v); }
/* 547c11: push 0x5abef8 */
  { uint32_t v = 0x5abef8u; esp -= 4; W32(esp, v); }
/* 547c16: push 0x5abf04 */
  { uint32_t v = 0x5abf04u; esp -= 4; W32(esp, v); }
/* 547c1b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547c20u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547c20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547c23: /* 547c23: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547c29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547c2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c2b: call 0x4e1ded */
  esp -= 4; W32(esp, 0x547c30u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 547c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547c33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547c37: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547c3a: jmp 0x547ba0 */
  goto L_547ba0;
L_547c3f: /* 547c3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547c41: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c48: mov ecx, ebx */
  ecx = ebx;
/* 547c4a: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 547c4e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547c51: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 547c54: xor esi, esi */
  esi = 0;
L_547c56: /* 547c56: cmp esi, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547c5c: jge 0x547c77 */
  if ((sf == of)) goto L_547c77;
L_547c5e: /* 547c5e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547c64: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 547c67: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547c6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c6c: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x547c71u); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 547c71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c74: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 547c75: jmp 0x547c56 */
  goto L_547c56;
L_547c77: /* 547c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547c79: push 0x5abf2c */
  { uint32_t v = 0x5abf2cu; esp -= 4; W32(esp, v); }
/* 547c7e: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c85: push 0x5abf38 */
  { uint32_t v = 0x5abf38u; esp -= 4; W32(esp, v); }
/* 547c8a: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 547c8e: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x547c93u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 547c93: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547c9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ca4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x547ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ca7: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547caf: jg 0x547cc8 */
  if ((!zf && sf == of)) goto L_547cc8;
L_547cb1: /* 547cb1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547cb6: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547cbb: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547cc0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cc5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cc8: /* 547cc8: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547ccb: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cce: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 547cd1: mov dword ptr [ecx + eax*8 - 8], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffff8u), edx);
/* 547cd5: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547cda: jg 0x547cf3 */
  if ((!zf && sf == of)) goto L_547cf3;
L_547cdc: /* 547cdc: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547ce1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547ce6: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cf3: /* 547cf3: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cf6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cf9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 547cfc: mov dword ptr [ecx + eax*8 - 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffffcu), edx);
/* 547d00: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 547d02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d04: mov ecx, ebx */
  ecx = ebx;
/* 547d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x547d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547d09: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 547d0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 547d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547d0e: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547d13u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547d13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d16: mov edi, 1 */
  edi = 0x1u;
/* 547d1b: jmp 0x547f04 */
  goto L_547f04;
L_547f04: /* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}
