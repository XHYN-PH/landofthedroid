#include "recomp.h"
#include "rec_mod.h"

void f_546e8b(void) {
  LOAD_REGS();
L_546e8b: /* 546e8b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 546e8e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 546e93: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 546e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 546e9a: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 546ea0: call 0x554df6 */
  esp -= 4; W32(esp, 0x546ea5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_546ea5(); return;
}

void f_546ea5(void) {
  LOAD_REGS();
L_546ea5: /* 546ea5: push 0x56eef0 */
  { uint32_t v = 0x56eef0u; esp -= 4; W32(esp, v); }
/* 546eaa: push 0x5abc78 */
  { uint32_t v = 0x5abc78u; esp -= 4; W32(esp, v); }
/* 546eaf: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x546eb4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 546eb4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 546eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546eb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 546ebb: call 0x554df6 */
  esp -= 4; W32(esp, 0x546ec0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 546ec0: mov dword ptr [ebp - 4], 6 */
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

void f_546ee8(void) {
  LOAD_REGS();
L_546ee8: /* 546ee8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 546eef: nop  */
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

void f_5470c7(void) {
  LOAD_REGS();
L_5470c7: /* 5470c7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5470ca: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5470cf: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* 5470d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5470d6: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 5470dc: call 0x554df6 */
  esp -= 4; W32(esp, 0x5470e1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5470e1(); return;
}

void f_5470e1(void) {
  LOAD_REGS();
L_5470e1: /* 5470e1: push 0x56eed4 */
  { uint32_t v = 0x56eed4u; esp -= 4; W32(esp, v); }
/* 5470e6: push 0x5abd1c */
  { uint32_t v = 0x5abd1cu; esp -= 4; W32(esp, v); }
/* 5470eb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5470f0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5470f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5470f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5470f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5470f7: call 0x554df6 */
  esp -= 4; W32(esp, 0x5470fcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5470fc: mov ebx, dword ptr [ebp + 0x1c] */
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

void f_5473da(void) {
  LOAD_REGS();
L_5473da: /* 5473da: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5473dd: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5473e2: lea edx, [ebp - 0xd8] */
  edx = (uint32_t)(ebp + 0xffffff28u);
/* 5473e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5473e9: mov dword ptr [ebp - 0xd8], ecx */
  W32((uint32_t)(ebp + 0xffffff28u), ecx);
/* 5473ef: call 0x554df6 */
  esp -= 4; W32(esp, 0x5473f4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5473f4(); return;
}

void f_5473f4(void) {
  LOAD_REGS();
L_5473f4: /* 5473f4: push 0x56eebc */
  { uint32_t v = 0x56eebcu; esp -= 4; W32(esp, v); }
/* 5473f9: push 0x5abda0 */
  { uint32_t v = 0x5abda0u; esp -= 4; W32(esp, v); }
/* 5473fe: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547403u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547403: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547406: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54740a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54740fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54740f: mov dword ptr [ebp - 4], 6 */
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

void f_5474a9(void) {
  LOAD_REGS();
L_5474a9: /* 5474a9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5474ac: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5474b1: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 5474b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5474b8: mov dword ptr [ebp - 0xe0], eax */
  W32((uint32_t)(ebp + 0xffffff20u), eax);
/* 5474be: call 0x554df6 */
  esp -= 4; W32(esp, 0x5474c3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5474c3(); return;
}

void f_5474c3(void) {
  LOAD_REGS();
L_5474c3: /* 5474c3: push 0x56ee98 */
  { uint32_t v = 0x56ee98u; esp -= 4; W32(esp, v); }
/* 5474c8: push 0x5abda8 */
  { uint32_t v = 0x5abda8u; esp -= 4; W32(esp, v); }
/* 5474cd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5474d2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5474d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5474d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5474d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5474d9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5474deu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5474de: mov eax, dword ptr [edi + 0x7c] */
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

void f_547529(void) {
  LOAD_REGS();
L_547529: /* 547529: lea esp, [esp] */
  esp = (uint32_t)(esp);
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

void f_5475b4(void) {
  LOAD_REGS();
L_5475b4: /* 5475b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5475b7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5475bc: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 5475c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5475c3: mov dword ptr [ebp - 0xe8], ecx */
  W32((uint32_t)(ebp + 0xffffff18u), ecx);
/* 5475c9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5475ceu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5475ce(); return;
}

void f_5475ce(void) {
  LOAD_REGS();
L_5475ce: /* 5475ce: push 0x56ee78 */
  { uint32_t v = 0x56ee78u; esp -= 4; W32(esp, v); }
/* 5475d3: push 0x5abdb8 */
  { uint32_t v = 0x5abdb8u; esp -= 4; W32(esp, v); }
/* 5475d8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5475ddu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5475dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5475e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5475e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5475e4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5475e9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5475e9: xor ecx, ecx */
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

void f_5479c8(void) {
  LOAD_REGS();
L_5479c8: /* 5479c8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 5479cf: nop  */
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
