#include "recomp.h"
#include "rec_mod.h"

void f_9836b0(void) {
  LOAD_REGS();
L_9836b0: /* 9836b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9836b1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 9836b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9836b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9836b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9836b9: mov edi, ebx */
  edi = ebx;
/* 9836bb: jne 0x9836ec */
  if (!zf) goto L_9836ec;
L_9836bd: /* 9836bd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9836c1: mov ecx, dword ptr [eax + 0x101c] */
  ecx = R32((uint32_t)(eax + 0x101cu));
/* 9836c7: mov edx, dword ptr [eax + 0x1018] */
  edx = R32((uint32_t)(eax + 0x1018u));
/* 9836cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9836ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9836cf: add eax, 0x1028 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9836d4: push 0xb03d60 */
  { uint32_t v = 0xb03d60u; esp -= 4; W32(esp, v); }
/* 9836d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9836da: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9836e0u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9836e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9836e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9836e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9836e5: mov eax, 4 */
  eax = 0x4u;
/* 9836ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9836eb: ret  */
  esp += 4; SPILL(); return;
L_9836ec: /* 9836ec: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_9836f0: /* 9836f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9836f1: call 0x983840 */
  esp -= 4; W32(esp, 0x9836f6u); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 9836f6: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 9836fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9836ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983701: jne 0x983735 */
  if (!zf) goto L_983735;
L_983703: /* 983703: cmp al, 0x3c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983705: je 0x983735 */
  if (zf) goto L_983735;
L_983707: /* 983707: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 983709: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98370a: cmp al, 0x3e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98370c: je 0x9837ab */
  if (zf) goto L_9837ab;
L_983712: /* 983712: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 983716: lea ecx, [ebx + eax - 1] */
  ecx = (uint32_t)(ebx + eax + 0xffffffffu);
/* 98371a: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98371c: je 0x9837d7 */
  if (zf) goto L_9837d7;
L_983722: /* 983722: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983723: call 0x983840 */
  esp -= 4; W32(esp, 0x983728u); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983728: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 98372e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983731: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983733: je 0x983703 */
  if (zf) goto L_983703;
L_983735: /* 983735: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983736: call 0x983840 */
  esp -= 4; W32(esp, 0x98373bu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 98373b: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 983741: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983744: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983746: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* 98374a: jne 0x983803 */
  if (!zf) goto L_983803;
L_983750: /* 983750: cmp al, 0x21 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983752: jne 0x983818 */
  if (!zf) goto L_983818;
L_983758: /* 983758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983759: call 0x983840 */
  esp -= 4; W32(esp, 0x98375eu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 98375e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_983761: /* 983761: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983762: call 0x983840 */
  esp -= 4; W32(esp, 0x983767u); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983767: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 98376d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983770: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983772: jne 0x983778 */
  if (!zf) goto L_983778;
L_983774: /* 983774: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983776: jne 0x983761 */
  if (!zf) goto L_983761;
L_983778: /* 983778: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983779: call 0x983840 */
  esp -= 4; W32(esp, 0x98377eu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 98377e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983781: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983783: jne 0x983761 */
  if (!zf) goto L_983761;
L_983785: /* 983785: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983786: call 0x983840 */
  esp -= 4; W32(esp, 0x98378bu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 98378b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98378e: cmp al, 0x3e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983790: je 0x9836f0 */
  if (zf) goto L_9836f0;
L_983796: /* 983796: mov edx, dword ptr [esi + 0x101c] */
  edx = R32((uint32_t)(esi + 0x101cu));
/* 98379c: mov eax, dword ptr [esi + 0x1018] */
  eax = R32((uint32_t)(esi + 0x1018u));
/* 9837a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9837a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9837a4: push 0xb03d28 */
  { uint32_t v = 0xb03d28u; esp -= 4; W32(esp, v); }
/* 9837a9: jmp 0x9837be */
  goto L_9837be;
L_9837ab: /* 9837ab: mov edx, dword ptr [esi + 0x101c] */
  edx = R32((uint32_t)(esi + 0x101cu));
/* 9837b1: mov eax, dword ptr [esi + 0x1018] */
  eax = R32((uint32_t)(esi + 0x1018u));
/* 9837b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9837b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9837b9: push 0xb03d00 */
  { uint32_t v = 0xb03d00u; esp -= 4; W32(esp, v); }
L_9837be: /* 9837be: add esi, 0x1028 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9837c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9837c5: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9837cbu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9837cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9837ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9837cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9837d0: mov eax, 1 */
  eax = 0x1u;
/* 9837d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9837d6: ret  */
  esp += 4; SPILL(); return;
L_9837d7: /* 9837d7: mov ecx, dword ptr [esi + 0x101c] */
  ecx = R32((uint32_t)(esi + 0x101cu));
/* 9837dd: mov edx, dword ptr [esi + 0x1018] */
  edx = R32((uint32_t)(esi + 0x1018u));
/* 9837e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9837e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9837e5: push 0xb03cb8 */
  { uint32_t v = 0xb03cb8u; esp -= 4; W32(esp, v); }
/* 9837ea: add esi, 0x1028 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9837f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9837f1: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9837f7u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9837f7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9837fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9837fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9837fc: mov eax, 4 */
  eax = 0x4u;
/* 983801: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983802: ret  */
  esp += 4; SPILL(); return;
L_983803: /* 983803: mov eax, dword ptr [esi + 0x101c] */
  eax = R32((uint32_t)(esi + 0x101cu));
/* 983809: mov ecx, dword ptr [esi + 0x1018] */
  ecx = R32((uint32_t)(esi + 0x1018u));
/* 98380f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983810: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983811: push 0xb03c88 */
  { uint32_t v = 0xb03c88u; esp -= 4; W32(esp, v); }
/* 983816: jmp 0x9837be */
  goto L_9837be;
L_983818: /* 983818: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98381c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98381d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98381e: call 0x9838e0 */
  esp -= 4; W32(esp, 0x983823u); SPILL(); f_9838e0(); if (g_unwind) return; RELOAD();
/* 983823: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 983825: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983826: call 0x9838e0 */
  esp -= 4; W32(esp, 0x98382bu); SPILL(); f_9838e0(); if (g_unwind) return; RELOAD();
/* 98382b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98382e: mov byte ptr [edi], 0 */
  W8((uint32_t)(edi), 0x0u);
/* 983831: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983832: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983833: xor eax, eax */
  eax = 0;
/* 983835: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983836: ret  */
  esp += 4; SPILL(); return;
}

void f_983840(void) {
  LOAD_REGS();
L_983840: /* 983840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983841: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 983845: mov eax, dword ptr [esi + 0x1020] */
  eax = R32((uint32_t)(esi + 0x1020u));
/* 98384b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98384d: je 0x983853 */
  if (zf) goto L_983853;
L_98384f: /* 98384f: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 983851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983852: ret  */
  esp += 4; SPILL(); return;
L_983853: /* 983853: mov eax, dword ptr [esi + 0x1010] */
  eax = R32((uint32_t)(esi + 0x1010u));
/* 983859: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98385b: je 0x98386d */
  if (zf) goto L_98386d;
L_98385d: /* 98385d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98385e: mov dword ptr [esi + 0x1010], eax */
  W32((uint32_t)(esi + 0x1010u), eax);
/* 983864: mov al, byte ptr [eax + esi + 0x1008] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x1008u))) & 0xffu);
/* 98386b: jmp 0x9838c5 */
  goto L_9838c5;
L_98386d: /* 98386d: mov ecx, dword ptr [esi + 0x1000] */
  ecx = R32((uint32_t)(esi + 0x1000u));
/* 983873: cmp ecx, dword ptr [esi + 0x1004] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1004u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 983879: jl 0x9838bb */
  if ((sf != of)) goto L_9838bb;
L_98387b: /* 98387b: mov eax, dword ptr [esi + 0x1014] */
  eax = R32((uint32_t)(esi + 0x1014u));
/* 983881: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983882: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 983887: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 983889: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98388a: mov dword ptr [esi + 0x1000], 1 */
  W32((uint32_t)(esi + 0x1000u), 0x1u);
/* 983894: call 0x9754e0 */
  esp -= 4; W32(esp, 0x983899u); SPILL(); f_9754e0(); if (g_unwind) return; RELOAD();
/* 983899: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98389b: mov dword ptr [esi + 0x1004], eax */
  W32((uint32_t)(esi + 0x1004u), eax);
/* 9838a1: je 0x9838a7 */
  if (zf) goto L_9838a7;
L_9838a3: /* 9838a3: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 9838a5: jmp 0x9838c5 */
  goto L_9838c5;
L_9838a7: /* 9838a7: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 9838a9: mov dword ptr [esi + 0x1020], 1 */
  W32((uint32_t)(esi + 0x1020u), 0x1u);
L_9838b3: /* 9838b3: inc dword ptr [esi + 0x101c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x101cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x101cu), r);
  }
/* 9838b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9838ba: ret  */
  esp += 4; SPILL(); return;
L_9838bb: /* 9838bb: mov al, byte ptr [ecx + esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi))) & 0xffu);
/* 9838be: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9838bf: mov dword ptr [esi + 0x1000], ecx */
  W32((uint32_t)(esi + 0x1000u), ecx);
L_9838c5: /* 9838c5: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9838c7: jne 0x9838b3 */
  if (!zf) goto L_9838b3;
L_9838c9: /* 9838c9: inc dword ptr [esi + 0x1018] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1018u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1018u), r);
  }
/* 9838cf: mov dword ptr [esi + 0x101c], 1 */
  W32((uint32_t)(esi + 0x101cu), 0x1u);
/* 9838d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9838da: ret  */
  esp += 4; SPILL(); return;
}

void f_9838e0(void) {
  LOAD_REGS();
L_9838e0: /* 9838e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9838e4: mov ecx, dword ptr [eax + 0x1010] */
  ecx = R32((uint32_t)(eax + 0x1010u));
/* 9838ea: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9838ed: mov dl, byte ptr [esp + 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 9838f1: jge 0x983900 */
  if ((sf == of)) goto L_983900;
L_9838f3: /* 9838f3: mov byte ptr [ecx + eax + 0x1008], dl */
  W8((uint32_t)(ecx + eax + 0x1008u), (edx & 0xffu));
/* 9838fa: inc dword ptr [eax + 0x1010] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1010u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x1010u), r);
  }
L_983900: /* 983900: mov ecx, dword ptr [eax + 0x1020] */
  ecx = R32((uint32_t)(eax + 0x1020u));
/* 983906: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983908: je 0x983914 */
  if (zf) goto L_983914;
L_98390a: /* 98390a: mov dword ptr [eax + 0x1020], 0 */
  W32((uint32_t)(eax + 0x1020u), 0x0u);
L_983914: /* 983914: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983917: jne 0x98392a */
  if (!zf) goto L_98392a;
L_983919: /* 983919: dec dword ptr [eax + 0x1018] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1018u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x1018u), r);
  }
/* 98391f: mov dword ptr [eax + 0x101c], 0x7fff0000 */
  W32((uint32_t)(eax + 0x101cu), 0x7fff0000u);
/* 983929: ret  */
  esp += 4; SPILL(); return;
L_98392a: /* 98392a: dec dword ptr [eax + 0x101c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x101cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x101cu), r);
  }
/* 983930: ret  */
  esp += 4; SPILL(); return;
}

void f_983940(void) {
  LOAD_REGS();
L_983940: /* 983940: sub esp, 0x840 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x840u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 983946: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983947: mov ebx, dword ptr [esp + 0x854] */
  ebx = R32((uint32_t)(esp + 0x854u));
/* 98394e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98394f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983950: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983951: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 983959: mov dword ptr [esp + 0x1c], 2 */
  W32((uint32_t)(esp + 0x1cu), 0x2u);
/* 983961: xor eax, eax */
  eax = 0;
/* 983963: mov ecx, 6 */
  ecx = 0x6u;
/* 983968: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 98396c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 98396e: mov edi, dword ptr [esp + 0x854] */
  edi = R32((uint32_t)(esp + 0x854u));
/* 983975: mov ebp, dword ptr [edi + 0x400] */
  ebp = R32((uint32_t)(edi + 0x400u));
/* 98397b: mov eax, dword ptr [ebp + 0x1018] */
  eax = R32((uint32_t)(ebp + 0x1018u));
/* 983981: mov ecx, dword ptr [ebp + 0x101c] */
  ecx = R32((uint32_t)(ebp + 0x101cu));
/* 983987: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98398b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98398f: nop  */
L_983990: /* 983990: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 983995: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 983999: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98399a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98399b: call 0x983c70 */
  esp -= 4; W32(esp, 0x9839a0u); SPILL(); f_983c70(); if (g_unwind) return; RELOAD();
/* 9839a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9839a3: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9839a6: je 0x983b7d */
  if (zf) goto L_983b7d;
L_9839ac: /* 9839ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9839ae: jne 0x983b89 */
  if (!zf) goto L_983b89;
L_9839b4: /* 9839b4: mov al, byte ptr [esp + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x38u))) & 0xffu);
/* 9839b8: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9839ba: je 0x983bd4 */
  if (zf) goto L_983bd4;
L_9839c0: /* 9839c0: cmp al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9839c2: je 0x983990 */
  if (zf) goto L_983990;
L_9839c4: /* 9839c4: mov eax, dword ptr [edi + 0x404] */
  eax = R32((uint32_t)(edi + 0x404u));
/* 9839ca: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 9839ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9839cf: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 9839d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9839d2: mov dword ptr [esp + 0x440], ebp */
  W32((uint32_t)(esp + 0x440u), ebp);
/* 9839d9: mov dword ptr [esp + 0x444], eax */
  W32((uint32_t)(esp + 0x444u), eax);
/* 9839e0: call dword ptr [0xcfb0e4] */
  esp -= 4; W32(esp, 0x9839e6u); SPILL(); f_407106(); if (g_unwind) return; /* MSVCR70!strchr */ RELOAD();
/* 9839e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9839e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9839eb: mov dword ptr [esp + 0x440], eax */
  W32((uint32_t)(esp + 0x440u), eax);
/* 9839f2: je 0x983a3e */
  if (zf) goto L_983a3e;
L_9839f4: /* 9839f4: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 9839f7: mov ecx, dword ptr [esp + 0x440] */
  ecx = R32((uint32_t)(esp + 0x440u));
L_9839fe: /* 9839fe: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 983a04: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 983a05: mov dword ptr [esp + 0x440], ecx */
  W32((uint32_t)(esp + 0x440u), ecx);
/* 983a0c: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 983a0f: jle 0x983a29 */
  if ((zf || sf != of)) goto L_983a29;
L_983a11: /* 983a11: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 983a14: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 983a16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983a17: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x983a1du); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 983a1d: mov ecx, dword ptr [esp + 0x448] */
  ecx = R32((uint32_t)(esp + 0x448u));
/* 983a24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983a27: jmp 0x983a3a */
  goto L_983a3a;
L_983a29: /* 983a29: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 983a2c: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 983a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 983a33: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 983a37: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_983a3a: /* 983a3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983a3c: jne 0x9839fe */
  if (!zf) goto L_9839fe;
L_983a3e: /* 983a3e: mov edi, dword ptr [esp + 0x858] */
  edi = R32((uint32_t)(esp + 0x858u));
/* 983a45: cmp dword ptr [edi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 983a49: je 0x983a8e */
  if (zf) goto L_983a8e;
L_983a4b: /* 983a4b: nop  */
/* 983a4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_983a50: /* 983a50: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 983a52: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
L_983a56: /* 983a56: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 983a58: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983a5a: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983a5c: jne 0x983a7a */
  if (!zf) goto L_983a7a;
L_983a5e: /* 983a5e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983a60: je 0x983a76 */
  if (zf) goto L_983a76;
L_983a62: /* 983a62: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 983a65: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983a67: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983a6a: jne 0x983a7a */
  if (!zf) goto L_983a7a;
L_983a6c: /* 983a6c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 983a6f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 983a72: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983a74: jne 0x983a56 */
  if (!zf) goto L_983a56;
L_983a76: /* 983a76: xor eax, eax */
  eax = 0;
/* 983a78: jmp 0x983a7f */
  goto L_983a7f;
L_983a7a: /* 983a7a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 983a7c: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_983a7f: /* 983a7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983a81: je 0x983a8e */
  if (zf) goto L_983a8e;
L_983a83: /* 983a83: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 983a86: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 983a89: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 983a8c: jne 0x983a50 */
  if (!zf) goto L_983a50;
L_983a8e: /* 983a8e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 983a91: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 983a94: je 0x983b5d */
  if (zf) goto L_983b5d;
L_983a9a: /* 983a9a: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 983a9d: je 0x983b49 */
  if (zf) goto L_983b49;
L_983aa3: /* 983aa3: mov esi, dword ptr [esp + 0x85c] */
  esi = R32((uint32_t)(esp + 0x85cu));
/* 983aaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983aab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983aac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 983aad: mov dword ptr [edi + 0x18], 1 */
  W32((uint32_t)(edi + 0x18u), 0x1u);
/* 983ab4: call dword ptr [edi + 8] */
  { uint32_t t = R32((uint32_t)(edi + 0x8u)); esp -= 4; W32(esp, 0x983ab7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 983ab7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983ab9: jne 0x983b89 */
  if (!zf) goto L_983b89;
L_983abf: /* 983abf: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 983ac2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983ac4: je 0x983ad7 */
  if (zf) goto L_983ad7;
L_983ac6: /* 983ac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983ac7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983ac8: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 983acc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983acd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x983acfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 983acf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983ad1: jne 0x983b89 */
  if (!zf) goto L_983b89;
L_983ad7: /* 983ad7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 983adc: lea ecx, [esp + 0x448] */
  ecx = (uint32_t)(esp + 0x448u);
/* 983ae3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983ae4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 983ae5: call 0x983c70 */
  esp -= 4; W32(esp, 0x983aeau); SPILL(); f_983c70(); if (g_unwind) return; RELOAD();
/* 983aea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983aed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983aef: jne 0x983b89 */
  if (!zf) goto L_983b89;
L_983af5: /* 983af5: cmp byte ptr [esp + 0x444], 0x2f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x444u))); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983afd: jne 0x983b96 */
  if (!zf) goto L_983b96;
L_983b03: /* 983b03: lea esi, [esp + 0x38] */
  esi = (uint32_t)(esp + 0x38u);
/* 983b07: lea eax, [esp + 0x445] */
  eax = (uint32_t)(esp + 0x445u);
/* 983b0e: mov edi, edi */
  edi = edi;
L_983b10: /* 983b10: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 983b12: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983b14: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983b16: jne 0x983b34 */
  if (!zf) goto L_983b34;
L_983b18: /* 983b18: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983b1a: je 0x983b30 */
  if (zf) goto L_983b30;
L_983b1c: /* 983b1c: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 983b1f: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983b21: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983b24: jne 0x983b34 */
  if (!zf) goto L_983b34;
L_983b26: /* 983b26: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 983b29: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 983b2c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983b2e: jne 0x983b10 */
  if (!zf) goto L_983b10;
L_983b30: /* 983b30: xor eax, eax */
  eax = 0;
/* 983b32: jmp 0x983b39 */
  goto L_983b39;
L_983b34: /* 983b34: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 983b36: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_983b39: /* 983b39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983b3b: jne 0x983b96 */
  if (!zf) goto L_983b96;
L_983b3d: /* 983b3d: mov edi, dword ptr [esp + 0x854] */
  edi = R32((uint32_t)(esp + 0x854u));
/* 983b44: jmp 0x983990 */
  goto L_983990;
L_983b49: /* 983b49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983b4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 983b4c: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 983b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983b51: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 983b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983b56: call 0x983940 */
  esp -= 4; W32(esp, 0x983b5bu); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 983b5b: jmp 0x983b6d */
  goto L_983b6d;
L_983b5d: /* 983b5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983b5e: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 983b62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983b63: mov dword ptr [edi + 0x18], 1 */
  W32((uint32_t)(edi + 0x18u), 0x1u);
/* 983b6a: call dword ptr [edi + 8] */
  { uint32_t t = R32((uint32_t)(edi + 0x8u)); esp -= 4; W32(esp, 0x983b6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_983b6d: /* 983b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983b6f: jne 0x983b89 */
  if (!zf) goto L_983b89;
L_983b71: /* 983b71: mov edi, dword ptr [esp + 0x854] */
  edi = R32((uint32_t)(esp + 0x854u));
/* 983b78: jmp 0x983990 */
  goto L_983990;
L_983b7d: /* 983b7d: mov ecx, dword ptr [edi + 0x404] */
  ecx = R32((uint32_t)(edi + 0x404u));
/* 983b83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983b85: jne 0x983b89 */
  if (!zf) goto L_983b89;
L_983b87: /* 983b87: xor eax, eax */
  eax = 0;
L_983b89: /* 983b89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983b8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983b8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983b8d: add esp, 0x840 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x840u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983b93: ret 0x10 */
  esp += 20; SPILL(); return;
L_983b96: /* 983b96: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 983b9a: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 983b9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983b9f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 983ba3: lea ecx, [esp + 0x448] */
  ecx = (uint32_t)(esp + 0x448u);
/* 983baa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983bab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983bac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983bad: push 0xb03e08 */
  { uint32_t v = 0xb03e08u; esp -= 4; W32(esp, v); }
L_983bb2: /* 983bb2: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 983bb8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 983bb9: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983bbfu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983bbf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983bc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983bc5: mov eax, 1 */
  eax = 0x1u;
/* 983bca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983bcb: add esp, 0x840 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x840u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983bd1: ret 0x10 */
  esp += 20; SPILL(); return;
L_983bd4: /* 983bd4: mov eax, dword ptr [edi + 0x404] */
  eax = R32((uint32_t)(edi + 0x404u));
/* 983bda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983bdc: jne 0x983c14 */
  if (!zf) goto L_983c14;
L_983bde: /* 983bde: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 983be2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 983be6: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 983bea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983beb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983bec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983bed: push 0xb03dd4 */
  { uint32_t v = 0xb03dd4u; esp -= 4; W32(esp, v); }
/* 983bf2: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 983bf8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 983bf9: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983bffu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983bff: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983c02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983c03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983c04: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983c05: mov eax, 1 */
  eax = 0x1u;
/* 983c0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983c0b: add esp, 0x840 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x840u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983c11: ret 0x10 */
  esp += 20; SPILL(); return;
L_983c14: /* 983c14: mov esi, edi */
  esi = edi;
/* 983c16: lea eax, [esp + 0x39] */
  eax = (uint32_t)(esp + 0x39u);
/* 983c1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_983c20: /* 983c20: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 983c22: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 983c24: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983c26: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983c28: jne 0x983c48 */
  if (!zf) goto L_983c48;
L_983c2a: /* 983c2a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983c2c: je 0x983c44 */
  if (zf) goto L_983c44;
L_983c2e: /* 983c2e: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 983c31: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 983c34: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983c36: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983c38: jne 0x983c48 */
  if (!zf) goto L_983c48;
L_983c3a: /* 983c3a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 983c3d: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 983c40: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983c42: jne 0x983c20 */
  if (!zf) goto L_983c20;
L_983c44: /* 983c44: xor eax, eax */
  eax = 0;
/* 983c46: jmp 0x983c4d */
  goto L_983c4d;
L_983c48: /* 983c48: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 983c4a: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_983c4d: /* 983c4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983c4f: je 0x983b87 */
  if (zf) goto L_983b87;
L_983c55: /* 983c55: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 983c59: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 983c5d: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 983c61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983c62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983c63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983c64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983c65: push 0xb03d94 */
  { uint32_t v = 0xb03d94u; esp -= 4; W32(esp, v); }
/* 983c6a: jmp 0x983bb2 */
  goto L_983bb2;
}

void f_983c70(void) {
  LOAD_REGS();
L_983c70: /* 983c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983c71: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 983c75: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983c77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983c78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983c79: jne 0x983caa */
  if (!zf) goto L_983caa;
L_983c7b: /* 983c7b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 983c7f: mov ecx, dword ptr [eax + 0x101c] */
  ecx = R32((uint32_t)(eax + 0x101cu));
/* 983c85: mov edx, dword ptr [eax + 0x1018] */
  edx = R32((uint32_t)(eax + 0x1018u));
/* 983c8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983c8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983c8d: add eax, 0x1028 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 983c92: push 0xb03d60 */
  { uint32_t v = 0xb03d60u; esp -= 4; W32(esp, v); }
/* 983c97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983c98: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983c9eu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983c9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983ca1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983ca2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983ca3: mov eax, 4 */
  eax = 0x4u;
/* 983ca8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983ca9: ret  */
  esp += 4; SPILL(); return;
L_983caa: /* 983caa: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 983cae: mov edi, edi */
  edi = edi;
L_983cb0: /* 983cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983cb1: call 0x983840 */
  esp -= 4; W32(esp, 0x983cb6u); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983cb6: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 983cbc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983cbf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983cc1: jne 0x983d82 */
  if (!zf) goto L_983d82;
L_983cc7: /* 983cc7: cmp al, 0x3c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983cc9: jne 0x983cb0 */
  if (!zf) goto L_983cb0;
L_983ccb: /* 983ccb: mov eax, ecx */
  eax = ecx;
/* 983ccd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983ccf: jne 0x983d82 */
  if (!zf) goto L_983d82;
L_983cd5: /* 983cd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983cd6: call 0x983840 */
  esp -= 4; W32(esp, 0x983cdbu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983cdb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983cde: cmp al, 0x21 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983ce0: jne 0x983d8b */
  if (!zf) goto L_983d8b;
L_983ce6: /* 983ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983ce7: call 0x983840 */
  esp -= 4; W32(esp, 0x983cecu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983cec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983cef: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983cf1: jne 0x983d62 */
  if (!zf) goto L_983d62;
L_983cf3: /* 983cf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983cf4: call 0x983840 */
  esp -= 4; W32(esp, 0x983cf9u); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983cf9: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 983cff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983d02: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983d04: jne 0x983dfe */
  if (!zf) goto L_983dfe;
L_983d0a: /* 983d0a: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983d0c: jne 0x983cf3 */
  if (!zf) goto L_983cf3;
L_983d0e: /* 983d0e: mov eax, ecx */
  eax = ecx;
/* 983d10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983d12: jne 0x983dfe */
  if (!zf) goto L_983dfe;
L_983d18: /* 983d18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983d19: call 0x983840 */
  esp -= 4; W32(esp, 0x983d1eu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983d1e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983d21: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983d23: jne 0x983cf3 */
  if (!zf) goto L_983cf3;
L_983d25: /* 983d25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983d26: call 0x983840 */
  esp -= 4; W32(esp, 0x983d2bu); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983d2b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983d2e: cmp al, 0x3e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983d30: je 0x983cb0 */
  if (zf) goto L_983cb0;
L_983d36: /* 983d36: mov edx, dword ptr [esi + 0x101c] */
  edx = R32((uint32_t)(esi + 0x101cu));
/* 983d3c: mov eax, dword ptr [esi + 0x1018] */
  eax = R32((uint32_t)(esi + 0x1018u));
/* 983d42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983d44: push 0xb03d28 */
  { uint32_t v = 0xb03d28u; esp -= 4; W32(esp, v); }
L_983d49: /* 983d49: add esi, 0x1028 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 983d4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983d50: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983d56u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983d56: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983d59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983d5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983d5b: mov eax, 1 */
  eax = 0x1u;
/* 983d60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983d61: ret  */
  esp += 4; SPILL(); return;
L_983d62: /* 983d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983d63: call 0x983840 */
  esp -= 4; W32(esp, 0x983d68u); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983d68: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 983d6e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983d71: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983d73: jne 0x983cb0 */
  if (!zf) goto L_983cb0;
L_983d79: /* 983d79: cmp al, 0x3e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983d7b: jne 0x983d62 */
  if (!zf) goto L_983d62;
L_983d7d: /* 983d7d: jmp 0x983cb0 */
  goto L_983cb0;
L_983d82: /* 983d82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983d83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983d84: mov eax, 3 */
  eax = 0x3u;
/* 983d89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983d8a: ret  */
  esp += 4; SPILL(); return;
L_983d8b: /* 983d8b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 983d8f: lea edi, [ebx + ecx - 1] */
  edi = (uint32_t)(ebx + ecx + 0xffffffffu);
L_983d93: /* 983d93: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 983d95: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 983d96: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 983d98: je 0x983dba */
  if (zf) goto L_983dba;
L_983d9a: /* 983d9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983d9b: call 0x983840 */
  esp -= 4; W32(esp, 0x983da0u); SPILL(); f_983840(); if (g_unwind) return; RELOAD();
/* 983da0: mov ecx, dword ptr [esi + 0x1020] */
  ecx = R32((uint32_t)(esi + 0x1020u));
/* 983da6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983da9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983dab: jne 0x983de6 */
  if (!zf) goto L_983de6;
L_983dad: /* 983dad: cmp al, 0x3e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983daf: jne 0x983d93 */
  if (!zf) goto L_983d93;
L_983db1: /* 983db1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983db2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983db3: mov byte ptr [ebx], 0 */
  W8((uint32_t)(ebx), 0x0u);
/* 983db6: xor eax, eax */
  eax = 0;
/* 983db8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983db9: ret  */
  esp += 4; SPILL(); return;
L_983dba: /* 983dba: mov edx, dword ptr [esi + 0x101c] */
  edx = R32((uint32_t)(esi + 0x101cu));
/* 983dc0: mov eax, dword ptr [esi + 0x1018] */
  eax = R32((uint32_t)(esi + 0x1018u));
/* 983dc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983dc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983dc8: push 0xb03e78 */
  { uint32_t v = 0xb03e78u; esp -= 4; W32(esp, v); }
/* 983dcd: add esi, 0x1028 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 983dd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983dd4: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983ddau); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983dda: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983ddd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983dde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983ddf: mov eax, 4 */
  eax = 0x4u;
/* 983de4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983de5: ret  */
  esp += 4; SPILL(); return;
L_983de6: /* 983de6: mov ecx, dword ptr [esi + 0x101c] */
  ecx = R32((uint32_t)(esi + 0x101cu));
/* 983dec: mov edx, dword ptr [esi + 0x1018] */
  edx = R32((uint32_t)(esi + 0x1018u));
/* 983df2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983df3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983df4: push 0xb03c88 */
  { uint32_t v = 0xb03c88u; esp -= 4; W32(esp, v); }
/* 983df9: jmp 0x983d49 */
  goto L_983d49;
L_983dfe: /* 983dfe: mov eax, dword ptr [esi + 0x101c] */
  eax = R32((uint32_t)(esi + 0x101cu));
/* 983e04: mov ecx, dword ptr [esi + 0x1018] */
  ecx = R32((uint32_t)(esi + 0x1018u));
/* 983e0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983e0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983e0c: push 0xb03e48 */
  { uint32_t v = 0xb03e48u; esp -= 4; W32(esp, v); }
/* 983e11: jmp 0x983d49 */
  goto L_983d49;
}

void f_983e20(void) {
  LOAD_REGS();
L_983e20: /* 983e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983e21: push 0x1528 */
  { uint32_t v = 0x1528u; esp -= 4; W32(esp, v); }
/* 983e26: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x983e2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 983e2c: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 983e30: mov dword ptr [eax + 0x1014], edx */
  W32((uint32_t)(eax + 0x1014u), edx);
/* 983e36: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 983e3b: mov dword ptr [eax + 0x1000], ecx */
  W32((uint32_t)(eax + 0x1000u), ecx);
/* 983e41: mov dword ptr [eax + 0x1004], ecx */
  W32((uint32_t)(eax + 0x1004u), ecx);
/* 983e47: xor ecx, ecx */
  ecx = 0;
/* 983e49: mov edx, 1 */
  edx = 0x1u;
/* 983e4e: mov dword ptr [eax + 0x1018], edx */
  W32((uint32_t)(eax + 0x1018u), edx);
/* 983e54: mov dword ptr [eax + 0x101c], edx */
  W32((uint32_t)(eax + 0x101cu), edx);
/* 983e5a: mov dword ptr [eax + 0x1010], ecx */
  W32((uint32_t)(eax + 0x1010u), ecx);
/* 983e60: mov dword ptr [eax + 0x1020], ecx */
  W32((uint32_t)(eax + 0x1020u), ecx);
/* 983e66: mov esi, dword ptr [0xb03ec0] */
  esi = R32((uint32_t)(0xb03ec0u));
/* 983e6c: lea edx, [eax + 0x1028] */
  edx = (uint32_t)(eax + 0x1028u);
/* 983e72: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 983e74: mov esi, dword ptr [0xb03ec4] */
  esi = R32((uint32_t)(0xb03ec4u));
/* 983e7a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 983e7d: mov esi, dword ptr [0xb03ec8] */
  esi = R32((uint32_t)(0xb03ec8u));
/* 983e83: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 983e86: mov esi, dword ptr [0xb03ecc] */
  esi = R32((uint32_t)(0xb03eccu));
/* 983e8c: mov dword ptr [edx + 0xc], esi */
  W32((uint32_t)(edx + 0xcu), esi);
/* 983e8f: mov dword ptr [eax + 0x1024], ecx */
  W32((uint32_t)(eax + 0x1024u), ecx);
/* 983e95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983e96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_983ea0(void) {
  LOAD_REGS();
L_983ea0: /* 983ea0: jmp dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); SPILL(); call_ind(t); return; }
}

void f_983eb0(void) {
  LOAD_REGS();
L_983eb0: /* 983eb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 983eb4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 983eb8: mov dword ptr [ecx + 0x1024], eax */
  W32((uint32_t)(ecx + 0x1024u), eax);
/* 983ebe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_983ed0(void) {
  LOAD_REGS();
L_983ed0: /* 983ed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 983ed4: mov eax, dword ptr [eax + 0x1024] */
  eax = R32((uint32_t)(eax + 0x1024u));
/* 983eda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_983ee0(void) {
  LOAD_REGS();
L_983ee0: /* 983ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 983ee4: add eax, 0x1028 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 983ee9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_983ef0(void) {
  LOAD_REGS();
L_983ef0: /* 983ef0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 983ef4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 983ef8: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 983efc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983efd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983efe: add edx, 0x1028 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 983f04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983f05: call dword ptr [0xcfb058] */
  esp -= 4; W32(esp, 0x983f0bu); SPILL(); f_42b977(); if (g_unwind) return; /* MSVCR70!vsprintf */ RELOAD();
/* 983f0b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983f0e: ret  */
  esp += 4; SPILL(); return;
}

void f_983f10(void) {
  LOAD_REGS();
L_983f10: /* 983f10: sub esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 983f16: mov al, byte ptr [0xcf2eb4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf2eb4u))) & 0xffu);
/* 983f1b: mov edx, dword ptr [esp + 0x418] */
  edx = R32((uint32_t)(esp + 0x418u));
/* 983f22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983f23: mov byte ptr [esp + 4], al */
  W8((uint32_t)(esp + 0x4u), (eax & 0xffu));
/* 983f27: xor eax, eax */
  eax = 0;
/* 983f29: mov ecx, 0xff */
  ecx = 0xffu;
/* 983f2e: lea edi, [esp + 5] */
  edi = (uint32_t)(esp + 0x5u);
/* 983f32: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 983f34: mov ecx, dword ptr [esp + 0x414] */
  ecx = R32((uint32_t)(esp + 0x414u));
/* 983f3b: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 983f3d: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 983f3e: xor eax, eax */
  eax = 0;
/* 983f40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983f41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983f42: mov dword ptr [esp + 0x410], eax */
  W32((uint32_t)(esp + 0x410u), eax);
/* 983f49: mov dword ptr [esp + 0x414], eax */
  W32((uint32_t)(esp + 0x414u), eax);
/* 983f50: mov eax, dword ptr [esp + 0x420] */
  eax = R32((uint32_t)(esp + 0x420u));
/* 983f57: mov dword ptr [esp + 0x40c], ecx */
  W32((uint32_t)(esp + 0x40cu), ecx);
/* 983f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983f5f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 983f63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983f64: call 0x983940 */
  esp -= 4; W32(esp, 0x983f69u); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 983f69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983f6a: add esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983f70: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_983f80(void) {
  LOAD_REGS();
L_983f80: /* 983f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 983f84: mov eax, dword ptr [eax + 0x400] */
  eax = R32((uint32_t)(eax + 0x400u));
/* 983f8a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_983f90(void) {
  LOAD_REGS();
L_983f90: /* 983f90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983f91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 983f92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983f93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983f94: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 983f98: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 983f9a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983f9c: je 0x983fdf */
  if (zf) goto L_983fdf;
L_983f9e: /* 983f9e: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_983fa2: /* 983fa2: mov eax, ebp */
  eax = ebp;
L_983fa4: /* 983fa4: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 983fa6: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 983fa8: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983faa: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983fac: jne 0x983fcc */
  if (!zf) goto L_983fcc;
L_983fae: /* 983fae: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983fb0: je 0x983fc8 */
  if (zf) goto L_983fc8;
L_983fb2: /* 983fb2: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 983fb5: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 983fb8: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 983fba: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 983fbc: jne 0x983fcc */
  if (!zf) goto L_983fcc;
L_983fbe: /* 983fbe: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 983fc1: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 983fc4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983fc6: jne 0x983fa4 */
  if (!zf) goto L_983fa4;
L_983fc8: /* 983fc8: xor eax, eax */
  eax = 0;
/* 983fca: jmp 0x983fd1 */
  goto L_983fd1;
L_983fcc: /* 983fcc: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 983fce: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_983fd1: /* 983fd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983fd3: je 0x983fe8 */
  if (zf) goto L_983fe8;
L_983fd5: /* 983fd5: mov esi, dword ptr [edi + 0x20] */
  esi = R32((uint32_t)(edi + 0x20u));
/* 983fd8: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 983fdb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983fdd: jne 0x983fa2 */
  if (!zf) goto L_983fa2;
L_983fdf: /* 983fdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983fe1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983fe2: xor eax, eax */
  eax = 0;
/* 983fe4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983fe5: ret 8 */
  esp += 12; SPILL(); return;
L_983fe8: /* 983fe8: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 983feb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983fec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983fed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983fef: ret 8 */
  esp += 12; SPILL(); return;
}

void f_984000(void) {
  LOAD_REGS();
L_984000: /* 984000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 984001: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 984005: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 984007: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 98400a: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 98400c: mov edi, ebx */
  edi = ebx;
/* 98400e: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 984010: not ecx */
  ecx = ~ecx;
/* 984012: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984013: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x984019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 984019: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 98401d: mov ecx, ebx */
  ecx = ebx;
/* 98401f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 984021: mov edx, eax */
  edx = eax;
/* 984023: xor ebx, ebx */
  ebx = 0;
L_984025: /* 984025: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 984027: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 984028: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 98402a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98402b: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98402d: jne 0x984025 */
  if (!zf) goto L_984025;
L_98402f: /* 98402f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 984033: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 984034: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 984037: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 98403a: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 98403d: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 984040: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 984043: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 984046: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 984047: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 984048: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_984050(void) {
  LOAD_REGS();
L_984050: /* 984050: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 984054: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 984056: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 984058: je 0x984064 */
  if (zf) goto L_984064;
L_98405a: /* 98405a: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 98405e: jmp dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); SPILL(); call_ind(t); return; }
L_984064: /* 984064: ret 4 */
  esp += 8; SPILL(); return;
}

void f_984070(void) {
  LOAD_REGS();
L_984070: /* 984070: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 984072: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x984078u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 984078: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98407c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98407e: xor ecx, ecx */
  ecx = 0;
/* 984080: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 984083: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 984086: ret 4 */
  esp += 8; SPILL(); return;
}

void f_984090(void) {
  LOAD_REGS();
L_984090: /* 984090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984091: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 984095: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 984098: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98409a: je 0x9840ad */
  if (zf) goto L_9840ad;
L_98409c: /* 98409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9840a0: /* 9840a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9840a1: call 0x984320 */
  esp -= 4; W32(esp, 0x9840a6u); SPILL(); f_984320(); if (g_unwind) return; RELOAD();
/* 9840a6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9840a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9840ab: jne 0x9840a0 */
  if (!zf) goto L_9840a0;
L_9840ad: /* 9840ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9840ae: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9840b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9840b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9840b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9840c0(void) {
  LOAD_REGS();
L_9840c0: /* 9840c0: sub esp, 0x400 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9840c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9840c7: mov esi, dword ptr [esp + 0x408] */
  esi = R32((uint32_t)(esp + 0x408u));
/* 9840ce: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9840d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9840d2: mov edi, dword ptr [esp + 0x410] */
  edi = R32((uint32_t)(esp + 0x410u));
/* 9840d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9840db: jle 0x9840eb */
  if ((zf || sf != of)) goto L_9840eb;
L_9840dd: /* 9840dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9840e0: /* 9840e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9840e1: call 0x984320 */
  esp -= 4; W32(esp, 0x9840e6u); SPILL(); f_984320(); if (g_unwind) return; RELOAD();
/* 9840e6: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9840e9: jg 0x9840e0 */
  if ((!zf && sf == of)) goto L_9840e0;
L_9840eb: /* 9840eb: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9840ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9840f0: je 0x9840f9 */
  if (zf) goto L_9840f9;
L_9840f2: /* 9840f2: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
L_9840f9: /* 9840f9: mov eax, dword ptr [esp + 0x414] */
  eax = R32((uint32_t)(esp + 0x414u));
/* 984100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 984101: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984102: call 0x984270 */
  esp -= 4; W32(esp, 0x984107u); SPILL(); f_984270(); if (g_unwind) return; RELOAD();
/* 984107: mov edx, dword ptr [esp + 0x414] */
  edx = R32((uint32_t)(esp + 0x414u));
/* 98410e: lea ecx, [esp + 0x418] */
  ecx = (uint32_t)(esp + 0x418u);
/* 984115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 984117: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 98411b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98411c: call dword ptr [0xcfb058] */
  esp -= 4; W32(esp, 0x984122u); SPILL(); f_42b977(); if (g_unwind) return; /* MSVCR70!vsprintf */ RELOAD();
/* 984122: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 984125: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 984127: je 0x98412f */
  if (zf) goto L_98412f;
L_984129: /* 984129: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98412a: call 0x9843b0 */
  esp -= 4; W32(esp, 0x98412fu); SPILL(); f_9843b0(); if (g_unwind) return; RELOAD();
L_98412f: /* 98412f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 984131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984132: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984134: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984136: push 0xb03ed4 */
  { uint32_t v = 0xb03ed4u; esp -= 4; W32(esp, v); }
/* 98413b: call 0x975650 */
  esp -= 4; W32(esp, 0x984140u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 984140: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 984142: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 984145: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 984147: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 98414b: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 98414d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98414e: not ecx */
  ecx = ~ecx;
/* 984150: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984152: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 984153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984154: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 984158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 984159: call 0x975650 */
  esp -= 4; W32(esp, 0x98415eu); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 98415e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 984160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984161: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984163: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984165: push 0xb03ed0 */
  { uint32_t v = 0xb03ed0u; esp -= 4; W32(esp, v); }
/* 98416a: call 0x975650 */
  esp -= 4; W32(esp, 0x98416fu); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 98416f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 984172: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 984173: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 984174: add esp, 0x400 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98417a: ret  */
  esp += 4; SPILL(); return;
}

void f_984180(void) {
  LOAD_REGS();
L_984180: /* 984180: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 984184: sub esp, 0x400 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98418a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98418b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98418c: lea eax, [esp + 0x414] */
  eax = (uint32_t)(esp + 0x414u);
/* 984193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 984194: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984195: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 984199: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98419a: call dword ptr [0xcfb058] */
  esp -= 4; W32(esp, 0x9841a0u); SPILL(); f_42b977(); if (g_unwind) return; /* MSVCR70!vsprintf */ RELOAD();
/* 9841a0: mov esi, dword ptr [esp + 0x418] */
  esi = R32((uint32_t)(esp + 0x418u));
/* 9841a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9841a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9841ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9841ad: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9841b0: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9841b2: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* 9841b6: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9841b8: not ecx */
  ecx = ~ecx;
/* 9841ba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9841bc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9841bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9841be: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9841c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9841c3: call 0x975650 */
  esp -= 4; W32(esp, 0x9841c8u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 9841c8: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9841cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9841cc: mov dword ptr [edx + 4], 1 */
  W32((uint32_t)(edx + 0x4u), 0x1u);
/* 9841d3: call 0x984320 */
  esp -= 4; W32(esp, 0x9841d8u); SPILL(); f_984320(); if (g_unwind) return; RELOAD();
/* 9841d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9841d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9841da: add esp, 0x400 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9841e0: ret  */
  esp += 4; SPILL(); return;
}

void f_9841f0(void) {
  LOAD_REGS();
L_9841f0: /* 9841f0: mov eax, 0x1000 */
  eax = 0x1000u;
/* 9841f5: call 0x99cc00 */
  esp -= 4; W32(esp, 0x9841fau); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 9841fa: mov ecx, dword ptr [esp + 0x1008] */
  ecx = R32((uint32_t)(esp + 0x1008u));
/* 984201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984202: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 984203: lea eax, [esp + 0x1014] */
  eax = (uint32_t)(esp + 0x1014u);
/* 98420a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98420b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98420c: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 984210: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 984211: call dword ptr [0xcfb058] */
  esp -= 4; W32(esp, 0x984217u); SPILL(); f_42b977(); if (g_unwind) return; /* MSVCR70!vsprintf */ RELOAD();
/* 984217: mov esi, dword ptr [esp + 0x1018] */
  esi = R32((uint32_t)(esp + 0x1018u));
/* 98421e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 984220: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 984223: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 984224: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984226: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 984228: push 0xb03ee0 */
  { uint32_t v = 0xb03ee0u; esp -= 4; W32(esp, v); }
/* 98422d: call 0x975650 */
  esp -= 4; W32(esp, 0x984232u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 984232: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 984234: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984235: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 984238: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 98423a: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* 98423e: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 984240: not ecx */
  ecx = ~ecx;
/* 984242: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984244: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 984245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984246: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 98424a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98424b: call 0x975650 */
  esp -= 4; W32(esp, 0x984250u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 984250: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 984252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 984253: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984255: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 984257: push 0xb03ed8 */
  { uint32_t v = 0xb03ed8u; esp -= 4; W32(esp, v); }
/* 98425c: call 0x975650 */
  esp -= 4; W32(esp, 0x984261u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 984261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 984262: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 984263: add esp, 0x1000 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 984269: ret  */
  esp += 4; SPILL(); return;
}

void f_984270(void) {
  LOAD_REGS();
L_984270: /* 984270: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 984274: sub esp, 0x400 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98427a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98427b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98427c: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 984281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 984282: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 984286: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984287: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x98428du); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 98428d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 984291: push 0xaf45a8 */
  { uint32_t v = 0xaf45a8u; esp -= 4; W32(esp, v); }
/* 984296: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 984297: call dword ptr [0xcfb128] */
  esp -= 4; W32(esp, 0x98429du); SPILL(); f_430091(); if (g_unwind) return; /* MSVCR70!strtok */ RELOAD();
/* 98429d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9842a0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9842a2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9842a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9842a8: mov esi, eax */
  esi = eax;
/* 9842aa: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9842ad: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9842af: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 9842b3: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9842b5: not ecx */
  ecx = ~ecx;
/* 9842b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9842b8: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9842beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9842be: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9842c0: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 9842c4: mov edx, eax */
  edx = eax;
L_9842c6: /* 9842c6: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9842c8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9842c9: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 9842cb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9842cc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9842ce: jne 0x9842c6 */
  if (!zf) goto L_9842c6;
L_9842d0: /* 9842d0: mov eax, dword ptr [esp + 0x40c] */
  eax = R32((uint32_t)(esp + 0x40cu));
/* 9842d7: mov dword ptr [esi + 4], 2 */
  W32((uint32_t)(esi + 0x4u), 0x2u);
/* 9842de: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9842e1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9842e3: jne 0x9842fd */
  if (!zf) goto L_9842fd;
L_9842e5: /* 9842e5: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 9842e8: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 9842eb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9842ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9842ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9842f0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9842f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9842f4: add esp, 0x400 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9842fa: ret 8 */
  esp += 12; SPILL(); return;
L_9842fd: /* 9842fd: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 984300: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 984303: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 984304: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 984305: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 984308: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98430b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98430c: add esp, 0x400 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 984312: ret 8 */
  esp += 12; SPILL(); return;
}

void f_984320(void) {
  LOAD_REGS();
L_984320: /* 984320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984321: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 984325: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 984328: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98432b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98432d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98432e: jne 0x984336 */
  if (!zf) goto L_984336;
L_984330: /* 984330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984331: call 0x9843b0 */
  esp -= 4; W32(esp, 0x984336u); SPILL(); f_9843b0(); if (g_unwind) return; RELOAD();
L_984336: /* 984336: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 984338: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984339: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98433b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 98433d: push 0xb03ee8 */
  { uint32_t v = 0xb03ee8u; esp -= 4; W32(esp, v); }
/* 984342: call 0x975650 */
  esp -= 4; W32(esp, 0x984347u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 984347: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 98434a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98434c: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98434e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98434f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 984352: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 984354: mov edi, edx */
  edi = edx;
/* 984356: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 984358: not ecx */
  ecx = ~ecx;
/* 98435a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98435c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 98435d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98435e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98435f: call 0x975650 */
  esp -= 4; W32(esp, 0x984364u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 984364: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 984366: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984367: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 984369: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98436b: push 0xb03ed0 */
  { uint32_t v = 0xb03ed0u; esp -= 4; W32(esp, v); }
/* 984370: call 0x975650 */
  esp -= 4; W32(esp, 0x984375u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 984375: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984376: call 0x984380 */
  esp -= 4; W32(esp, 0x98437bu); SPILL(); f_984380(); if (g_unwind) return; RELOAD();
/* 98437b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98437c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98437d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_984380(void) {
  LOAD_REGS();
L_984380: /* 984380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 984381: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 984385: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 984388: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 984389: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 98438c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98438e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98438f: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x984395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 984395: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 984398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 984399: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x98439fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98439f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9843a2: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 9843a5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9843a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9843a7: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9843aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9843ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9843b0(void) {
  LOAD_REGS();
L_9843b0: /* 9843b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9843b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9843b5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9843b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9843b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9843b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9843bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9843bd: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9843c2: call 0x975650 */
  esp -= 4; W32(esp, 0x9843c7u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 9843c7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9843ca: xor edi, edi */
  edi = 0;
/* 9843cc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9843cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9843cf: jle 0x9843eb */
  if ((zf || sf != of)) goto L_9843eb;
L_9843d1: /* 9843d1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9843d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9843d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9843d6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9843d8: push 0xb03eec */
  { uint32_t v = 0xb03eecu; esp -= 4; W32(esp, v); }
/* 9843dd: call 0x975650 */
  esp -= 4; W32(esp, 0x9843e2u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 9843e2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9843e5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9843e6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9843e7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9843e9: jl 0x9843d1 */
  if ((sf != of)) goto L_9843d1;
L_9843eb: /* 9843eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9843ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9843ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9843f0(void) {
  LOAD_REGS();
L_9843f0: /* 9843f0: jmp dword ptr [0xcfa19c] */
  SPILL(); f_4e2955(); return; /* Core!?Add@FArray@@QAEHHH@Z */
}

void f_9843f6(void) {
  LOAD_REGS();
L_9843f6: /* 9843f6: jmp dword ptr [0xcfa1a8] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_9843fc(void) {
  LOAD_REGS();
L_9843fc: /* 9843fc: jmp dword ptr [0xcfa1b4] */
  SPILL(); f_4e415b(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */
}

void f_984402(void) {
  LOAD_REGS();
L_984402: /* 984402: jmp dword ptr [0xcfa1b8] */
  SPILL(); f_4e40e8(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */
}

void f_984408(void) {
  LOAD_REGS();
L_984408: /* 984408: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_98440e(void) {
  LOAD_REGS();
L_98440e: /* 98440e: jmp dword ptr [0xcfa1c0] */
  SPILL(); f_4e38e6(); return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */
}

void f_984414(void) {
  LOAD_REGS();
L_984414: /* 984414: jmp dword ptr [0xcfa1c8] */
  SPILL(); f_4e2d56(); return; /* Core!??0FRotator@@QAE@XZ */
}

void f_98441a(void) {
  LOAD_REGS();
L_98441a: /* 98441a: jmp dword ptr [0xcfa1cc] */
  SPILL(); f_4e433b(); return; /* Core!??0FRotator@@QAE@HHH@Z */
}

void f_984420(void) {
  LOAD_REGS();
L_984420: /* 984420: jmp dword ptr [0xcfa1d0] */
  SPILL(); f_4e2086(); return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */
}

void f_984426(void) {
  LOAD_REGS();
L_984426: /* 984426: jmp dword ptr [0xcfa1d4] */
  SPILL(); f_4e3fc1(); return; /* Core!??0FString@@QAE@ABV0@@Z */
}

void f_98442c(void) {
  LOAD_REGS();
L_98442c: /* 98442c: jmp dword ptr [0xcfa1d8] */
  SPILL(); f_4e119f(); return; /* Core!??9FVector@@QBEHABV0@@Z */
}

void f_984432(void) {
  LOAD_REGS();
L_984432: /* 984432: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_984438(void) {
  LOAD_REGS();
L_984438: /* 984438: jmp dword ptr [0xcfa1e0] */
  SPILL(); f_4e35b2(); return; /* Core!??0FVector@@QAE@XZ */
}

void f_98443e(void) {
  LOAD_REGS();
L_98443e: /* 98443e: jmp dword ptr [0xcfa1e4] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_984444(void) {
  LOAD_REGS();
L_984444: /* 984444: jmp dword ptr [0xcfa1ec] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_98444a(void) {
  LOAD_REGS();
L_98444a: /* 98444a: jmp dword ptr [0xcfa1f0] */
  SPILL(); f_4e2f2c(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */
}

void f_984450(void) {
  LOAD_REGS();
L_984450: /* 984450: jmp dword ptr [0xcfa1f4] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_984456(void) {
  LOAD_REGS();
L_984456: /* 984456: jmp dword ptr [0xcfa1f8] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_98445c(void) {
  LOAD_REGS();
L_98445c: /* 98445c: jmp dword ptr [0xcfa1fc] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_984462(void) {
  LOAD_REGS();
L_984462: /* 984462: jmp dword ptr [0xcfa200] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_984468(void) {
  LOAD_REGS();
L_984468: /* 984468: jmp dword ptr [0xcfa204] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_98446e(void) {
  LOAD_REGS();
L_98446e: /* 98446e: jmp dword ptr [0xcfa208] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_984474(void) {
  LOAD_REGS();
L_984474: /* 984474: jmp dword ptr [0xcfa20c] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_98447a(void) {
  LOAD_REGS();
L_98447a: /* 98447a: jmp dword ptr [0xcfa210] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_984480(void) {
  LOAD_REGS();
L_984480: /* 984480: jmp dword ptr [0xcfa214] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_984486(void) {
  LOAD_REGS();
L_984486: /* 984486: jmp dword ptr [0xcfa218] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_98448c(void) {
  LOAD_REGS();
L_98448c: /* 98448c: jmp dword ptr [0xcfa21c] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_984492(void) {
  LOAD_REGS();
L_984492: /* 984492: jmp dword ptr [0xcfa220] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_984498(void) {
  LOAD_REGS();
L_984498: /* 984498: jmp dword ptr [0xcfa224] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_98449e(void) {
  LOAD_REGS();
L_98449e: /* 98449e: jmp dword ptr [0xcfa228] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_9844a4(void) {
  LOAD_REGS();
L_9844a4: /* 9844a4: jmp dword ptr [0xcfa22c] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_9844aa(void) {
  LOAD_REGS();
L_9844aa: /* 9844aa: jmp dword ptr [0xcfa230] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_9844b0(void) {
  LOAD_REGS();
L_9844b0: /* 9844b0: jmp dword ptr [0xcfa234] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_9844b6(void) {
  LOAD_REGS();
L_9844b6: /* 9844b6: jmp dword ptr [0xcfa238] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_9844bc(void) {
  LOAD_REGS();
L_9844bc: /* 9844bc: jmp dword ptr [0xcfa23c] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_9844c2(void) {
  LOAD_REGS();
L_9844c2: /* 9844c2: jmp dword ptr [0xcfa240] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_9844c8(void) {
  LOAD_REGS();
L_9844c8: /* 9844c8: jmp dword ptr [0xcfa244] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_9844ce(void) {
  LOAD_REGS();
L_9844ce: /* 9844ce: jmp dword ptr [0xcfa248] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_9844d4(void) {
  LOAD_REGS();
L_9844d4: /* 9844d4: jmp dword ptr [0xcfa24c] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_9844da(void) {
  LOAD_REGS();
L_9844da: /* 9844da: jmp dword ptr [0xcfa250] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_9844e0(void) {
  LOAD_REGS();
L_9844e0: /* 9844e0: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9844e6(void) {
  LOAD_REGS();
L_9844e6: /* 9844e6: jmp dword ptr [0xcfa258] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_9844ec(void) {
  LOAD_REGS();
L_9844ec: /* 9844ec: jmp dword ptr [0xcfa25c] */
  SPILL(); f_4e3c92(); return; /* Core!??0FSphere@@QAE@H@Z */
}

void f_9844f2(void) {
  LOAD_REGS();
L_9844f2: /* 9844f2: jmp dword ptr [0xcfa260] */
  SPILL(); f_4e2ffe(); return; /* Core!??0FBox@@QAE@H@Z */
}

void f_9844f8(void) {
  LOAD_REGS();
L_9844f8: /* 9844f8: jmp dword ptr [0xcfa264] */
  SPILL(); f_4e245a(); return; /* Core!??0UObject@@QAE@XZ */
}

void f_9844fe(void) {
  LOAD_REGS();
L_9844fe: /* 9844fe: jmp dword ptr [0xcfa268] */
  SPILL(); f_4e1dac(); return; /* Core!??0FSphere@@QAE@ABV0@@Z */
}

void f_984504(void) {
  LOAD_REGS();
L_984504: /* 984504: jmp dword ptr [0xcfa26c] */
  SPILL(); f_4e1078(); return; /* Core!??0UObject@@QAE@ABV0@@Z */
}

void f_98450a(void) {
  LOAD_REGS();
L_98450a: /* 98450a: jmp dword ptr [0xcfa270] */
  SPILL(); f_4e1c67(); return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */
}

void f_984510(void) {
  LOAD_REGS();
L_984510: /* 984510: jmp dword ptr [0xcfa274] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_984516(void) {
  LOAD_REGS();
L_984516: /* 984516: jmp dword ptr [0xcfa27c] */
  SPILL(); f_4e4165(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */
}

void f_98451c(void) {
  LOAD_REGS();
L_98451c: /* 98451c: jmp dword ptr [0xcfa280] */
  SPILL(); f_4e4160(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */
}

void f_984522(void) {
  LOAD_REGS();
L_984522: /* 984522: jmp dword ptr [0xcfa284] */
  SPILL(); f_4e3143(); return; /* Core!?Ver@FArchive@@QAEHXZ */
}

void f_984528(void) {
  LOAD_REGS();
L_984528: /* 984528: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_98452e(void) {
  LOAD_REGS();
L_98452e: /* 98452e: jmp dword ptr [0xcfa28c] */
  SPILL(); f_4e3dcd(); return; /* Core!??0?$TArray@G@@QAE@XZ */
}

void f_984534(void) {
  LOAD_REGS();
L_984534: /* 984534: jmp dword ptr [0xcfa290] */
  SPILL(); f_4e447b(); return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */
}

void f_98453a(void) {
  LOAD_REGS();
L_98453a: /* 98453a: jmp dword ptr [0xcfa294] */
  SPILL(); f_4e2676(); return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */
}

void f_984540(void) {
  LOAD_REGS();
L_984540: /* 984540: jmp dword ptr [0xcfa298] */
  SPILL(); f_4e44fd(); return; /* Core!?Tick@USubsystem@@UAEXM@Z */
}

void f_984546(void) {
  LOAD_REGS();
L_984546: /* 984546: jmp dword ptr [0xcfa29c] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
}

void f_98454c(void) {
  LOAD_REGS();
L_98454c: /* 98454c: jmp dword ptr [0xcfa2a0] */
  SPILL(); f_4e152d(); return; /* Core!??1USubsystem@@UAE@XZ */
}

void f_984552(void) {
  LOAD_REGS();
L_984552: /* 984552: jmp dword ptr [0xcfa2a4] */
  SPILL(); f_4e22e3(); return; /* Core!??0USubsystem@@IAE@XZ */
}

void f_984558(void) {
  LOAD_REGS();
L_984558: /* 984558: jmp dword ptr [0xcfa2a8] */
  SPILL(); f_4e3887(); return; /* Core!??0USubsystem@@QAE@ABV0@@Z */
}

void f_98455e(void) {
  LOAD_REGS();
L_98455e: /* 98455e: jmp dword ptr [0xcfa2ac] */
  SPILL(); f_4e3409(); return; /* Core!??4USubsystem@@QAEAAV0@ABV0@@Z */
}

void f_984564(void) {
  LOAD_REGS();
L_984564: /* 984564: jmp dword ptr [0xcfa2b0] */
  SPILL(); f_4e2428(); return; /* Core!?appCeilLogTwo@@YAEK@Z */
}

void f_98456a(void) {
  LOAD_REGS();
L_98456a: /* 98456a: jmp dword ptr [0xcfa2b4] */
  SPILL(); f_4e39ae(); return; /* Core!?GetIndex@UObject@@QBEKXZ */
}

void f_984570(void) {
  LOAD_REGS();
L_984570: /* 984570: jmp dword ptr [0xcfa2b8] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_984576(void) {
  LOAD_REGS();
L_984576: /* 984576: jmp dword ptr [0xcfa2bc] */
  SPILL(); f_4e1c08(); return; /* Core!?IsLoading@FArchive@@QAEHXZ */
}

void f_98457c(void) {
  LOAD_REGS();
L_98457c: /* 98457c: jmp dword ptr [0xcfa2c0] */
  SPILL(); f_4e2aea(); return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */
}

void f_984582(void) {
  LOAD_REGS();
L_984582: /* 984582: jmp dword ptr [0xcfa2c4] */
  SPILL(); f_4e29d2(); return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */
}

void f_984588(void) {
  LOAD_REGS();
L_984588: /* 984588: jmp dword ptr [0xcfa2c8] */
  SPILL(); f_4e2ee1(); return; /* Core!??0FName@@QAE@W4EName@@@Z */
}

void f_98458e(void) {
  LOAD_REGS();
L_98458e: /* 98458e: jmp dword ptr [0xcfa2cc] */
  SPILL(); f_4e398b(); return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */
}

void f_984594(void) {
  LOAD_REGS();
L_984594: /* 984594: jmp dword ptr [0xcfa2d0] */
  SPILL(); f_4e1bd1(); return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */
}

void f_98459a(void) {
  LOAD_REGS();
L_98459a: /* 98459a: jmp dword ptr [0xcfa2d4] */
  SPILL(); f_4e4179(); return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */
}

void f_9845a0(void) {
  LOAD_REGS();
L_9845a0: /* 9845a0: jmp dword ptr [0xcfa2d8] */
  SPILL(); f_4e36de(); return; /* Core!??0FQuat@@QAE@XZ */
}

void f_9845a6(void) {
  LOAD_REGS();
L_9845a6: /* 9845a6: jmp dword ptr [0xcfa2dc] */
  SPILL(); f_4e1451(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */
}

void f_9845ac(void) {
  LOAD_REGS();
L_9845ac: /* 9845ac: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9845b2(void) {
  LOAD_REGS();
L_9845b2: /* 9845b2: jmp dword ptr [0xcfa2e4] */
  SPILL(); f_4e2d01(); return; /* Core!??0FString@@QAE@XZ */
}

void f_9845b8(void) {
  LOAD_REGS();
L_9845b8: /* 9845b8: jmp dword ptr [0xcfa2e8] */
  SPILL(); f_4e1d20(); return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */
}

void f_9845be(void) {
  LOAD_REGS();
L_9845be: /* 9845be: jmp dword ptr [0xcfa2ec] */
  SPILL(); f_4e17d0(); return; /* Core!??KFCoords@@QBE?AV0@ABVFScale@@@Z */
}

void f_9845c4(void) {
  LOAD_REGS();
L_9845c4: /* 9845c4: jmp dword ptr [0xcfa2f0] */
  SPILL(); f_4e11b3(); return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */
}

void f_9845ca(void) {
  LOAD_REGS();
L_9845ca: /* 9845ca: jmp dword ptr [0xcfa2f4] */
  SPILL(); f_4e13e3(); return; /* Core!?Orientation@FScale@@QAEMXZ */
}

void f_9845d0(void) {
  LOAD_REGS();
L_9845d0: /* 9845d0: jmp dword ptr [0xcfa2f8] */
  SPILL(); f_4e1c17(); return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */
}

void f_9845d6(void) {
  LOAD_REGS();
L_9845d6: /* 9845d6: jmp dword ptr [0xcfa2fc] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_9845dc(void) {
  LOAD_REGS();
L_9845dc: /* 9845dc: jmp dword ptr [0xcfa300] */
  SPILL(); f_4e3b7a(); return; /* Core!??0FStringNoInit@@QAE@XZ */
}

void f_9845e2(void) {
  LOAD_REGS();
L_9845e2: /* 9845e2: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9845e8(void) {
  LOAD_REGS();
L_9845e8: /* 9845e8: jmp dword ptr [0xcfa308] */
  SPILL(); f_4e3729(); return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */
}

void f_9845ee(void) {
  LOAD_REGS();
L_9845ee: /* 9845ee: jmp dword ptr [0xcfa30c] */
  SPILL(); f_4e132f(); return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */
}

void f_9845f4(void) {
  LOAD_REGS();
L_9845f4: /* 9845f4: jmp dword ptr [0xcfa310] */
  SPILL(); f_4e1fd7(); return; /* Core!??0FRange@@QAE@XZ */
}

void f_9845fa(void) {
  LOAD_REGS();
L_9845fa: /* 9845fa: jmp dword ptr [0xcfa314] */
  SPILL(); f_4e3ba7(); return; /* Core!??0FRangeVector@@QAE@XZ */
}

void f_984600(void) {
  LOAD_REGS();
L_984600: /* 984600: jmp dword ptr [0xcfa318] */
  SPILL(); f_4e3134(); return; /* Core!??1FInterpCurve@@QAE@XZ */
}

void f_984606(void) {
  LOAD_REGS();
L_984606: /* 984606: jmp dword ptr [0xcfa31c] */
  SPILL(); f_4e3adf(); return; /* Core!??0FInterpCurve@@QAE@XZ */
}

void f_98460c(void) {
  LOAD_REGS();
L_98460c: /* 98460c: jmp dword ptr [0xcfa320] */
  SPILL(); f_4e3945(); return; /* Core!??0FInterpCurve@@QAE@ABV0@@Z */
}

void f_984612(void) {
  LOAD_REGS();
L_984612: /* 984612: jmp dword ptr [0xcfa324] */
  SPILL(); f_4e3ca1(); return; /* Core!??4FInterpCurve@@QAEXABV0@@Z */
}

void f_984618(void) {
  LOAD_REGS();
L_984618: /* 984618: jmp dword ptr [0xcfa328] */
  SPILL(); f_4e32ba(); return; /* Core!??0FScriptDelegate@@QAE@XZ */
}

void f_98461e(void) {
  LOAD_REGS();
L_98461e: /* 98461e: jmp dword ptr [0xcfa32c] */
  SPILL(); f_4e3e59(); return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */
}

void f_984624(void) {
  LOAD_REGS();
L_984624: /* 984624: jmp dword ptr [0xcfa330] */
  SPILL(); f_4e43db(); return; /* Core!?Localize@@YAPBGPBG000H@Z */
}

void f_98462a(void) {
  LOAD_REGS();
L_98462a: /* 98462a: jmp dword ptr [0xcfa334] */
  SPILL(); f_4e2351(); return; /* Core!?GetName@UObject@@QBEPBGXZ */
}

void f_984630(void) {
  LOAD_REGS();
L_984630: /* 984630: jmp dword ptr [0xcfa338] */
  SPILL(); f_4e144c(); return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */
}

void f_984636(void) {
  LOAD_REGS();
L_984636: /* 984636: jmp dword ptr [0xcfa33c] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_98463c(void) {
  LOAD_REGS();
L_98463c: /* 98463c: jmp dword ptr [0xcfa340] */
  SPILL(); f_4e26df(); return; /* Core!?appStricmp@@YAHPBG0@Z */
}

void f_984642(void) {
  LOAD_REGS();
L_984642: /* 984642: jmp dword ptr [0xcfa348] */
  SPILL(); f_4e1703(); return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */
}

void f_984648(void) {
  LOAD_REGS();
L_984648: /* 984648: jmp dword ptr [0xcfa34c] */
  SPILL(); f_4e3139(); return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */
}

void f_98464e(void) {
  LOAD_REGS();
L_98464e: /* 98464e: jmp dword ptr [0xcfa354] */
  SPILL(); f_4e4147(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */
}

void f_984654(void) {
  LOAD_REGS();
L_984654: /* 984654: jmp dword ptr [0xcfa358] */
  SPILL(); f_4e3864(); return; /* Core!??0FQuat@@QAE@MMMM@Z */
}

void f_98465a(void) {
  LOAD_REGS();
L_98465a: /* 98465a: jmp dword ptr [0xcfa35c] */
  SPILL(); f_4e39c7(); return; /* Core!?Normalize@FQuat@@QAEHXZ */
}

void f_984660(void) {
  LOAD_REGS();
L_984660: /* 984660: jmp dword ptr [0xcfa360] */
  SPILL(); f_4e2b3a(); return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */
}

void f_984666(void) {
  LOAD_REGS();
L_984666: /* 984666: jmp dword ptr [0xcfa364] */
  SPILL(); f_4e1af5(); return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */
}

void f_98466c(void) {
  LOAD_REGS();
L_98466c: /* 98466c: jmp dword ptr [0xcfa368] */
  SPILL(); f_4e3f12(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAVCBox@@@Z */
}

void f_984672(void) {
  LOAD_REGS();
L_984672: /* 984672: jmp dword ptr [0xcfa36c] */
  SPILL(); f_4e159b(); return; /* Core!??0FPlane@@QAE@XZ */
}

void f_984678(void) {
  LOAD_REGS();
L_984678: /* 984678: jmp dword ptr [0xcfa370] */
  SPILL(); f_4e205e(); return; /* Core!??0FBox@@QAE@XZ */
}

void f_98467e(void) {
  LOAD_REGS();
L_98467e: /* 98467e: jmp dword ptr [0xcfa374] */
  SPILL(); f_4e2d5b(); return; /* Core!??0FArray@@QAE@XZ */
}

void f_984684(void) {
  LOAD_REGS();
L_984684: /* 984684: jmp dword ptr [0xcfa378] */
  SPILL(); f_4e3869(); return; /* Core!??0FArray@@IAE@HH@Z */
}

void f_98468a(void) {
  LOAD_REGS();
L_98468a: /* 98468a: jmp dword ptr [0xcfa37c] */
  SPILL(); f_4e448f(); return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */
}

void f_984690(void) {
  LOAD_REGS();
L_984690: /* 984690: jmp dword ptr [0xcfa380] */
  SPILL(); f_4e3fda(); return; /* Core!?Shrink@FArray@@QAEXH@Z */
}

void f_984696(void) {
  LOAD_REGS();
L_984696: /* 984696: jmp dword ptr [0xcfa384] */
  SPILL(); f_4e44b2(); return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */
}

void f_98469c(void) {
  LOAD_REGS();
L_98469c: /* 98469c: jmp dword ptr [0xcfa388] */
  SPILL(); f_4e1a2d(); return; /* Core!?Insert@FArray@@QAEXHHH@Z */
}

void f_9846a2(void) {
  LOAD_REGS();
L_9846a2: /* 9846a2: jmp dword ptr [0xcfa38c] */
  SPILL(); f_4e2f09(); return; /* Core!?InsertZeroed@FArray@@QAEXHHH@Z */
}

void f_9846a8(void) {
  LOAD_REGS();
L_9846a8: /* 9846a8: jmp dword ptr [0xcfa390] */
  SPILL(); f_4e438b(); return; /* Core!?Remove@FArray@@QAEXHHH@Z */
}

void f_9846ae(void) {
  LOAD_REGS();
L_9846ae: /* 9846ae: jmp dword ptr [0xcfa394] */
  SPILL(); f_4e2d79(); return; /* Core!?Empty@FArray@@QAEXHH@Z */
}

void f_9846b4(void) {
  LOAD_REGS();
L_9846b4: /* 9846b4: jmp dword ptr [0xcfa398] */
  SPILL(); f_4e33b4(); return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */
}

void f_9846ba(void) {
  LOAD_REGS();
L_9846ba: /* 9846ba: jmp dword ptr [0xcfa39c] */
  SPILL(); f_4e1082(); return; /* Core!??0?$TArray@G@@QAE@H@Z */
}

void f_9846c0(void) {
  LOAD_REGS();
L_9846c0: /* 9846c0: jmp dword ptr [0xcfa3a0] */
  SPILL(); f_4e264e(); return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */
}

void f_9846c6(void) {
  LOAD_REGS();
L_9846c6: /* 9846c6: jmp dword ptr [0xcfa3a4] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_9846cc(void) {
  LOAD_REGS();
L_9846cc: /* 9846cc: jmp dword ptr [0xcfa3a8] */
  SPILL(); f_4e27a2(); return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */
}

void f_9846d2(void) {
  LOAD_REGS();
L_9846d2: /* 9846d2: jmp dword ptr [0xcfa3ac] */
  SPILL(); f_4e173f(); return; /* Core!??R?$TArray@G@@QAEAAGH@Z */
}

void f_9846d8(void) {
  LOAD_REGS();
L_9846d8: /* 9846d8: jmp dword ptr [0xcfa3bc] */
  SPILL(); f_4e4390(); return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */
}

void f_9846de(void) {
  LOAD_REGS();
L_9846de: /* 9846de: jmp dword ptr [0xcfa3c0] */
  SPILL(); f_4e180c(); return; /* Core!??YFString@@QAEAAV0@PBG@Z */
}

void f_9846e4(void) {
  LOAD_REGS();
L_9846e4: /* 9846e4: jmp dword ptr [0xcfa3c4] */
  SPILL(); f_4e19f1(); return; /* Core!?appStrlen@@YAHPBG@Z */
}

void f_9846ea(void) {
  LOAD_REGS();
L_9846ea: /* 9846ea: jmp dword ptr [0xcfa3cc] */
  SPILL(); f_4e2612(); return; /* Core!?Len@FString@@QBEHXZ */
}

void f_9846f0(void) {
  LOAD_REGS();
L_9846f0: /* 9846f0: jmp dword ptr [0xcfa3d0] */
  SPILL(); f_4e2149(); return; /* Core!??HFString@@QAE?AV0@PBG@Z */
}

void f_9846f6(void) {
  LOAD_REGS();
L_9846f6: /* 9846f6: jmp dword ptr [0xcfa3d8] */
  SPILL(); f_4e3cd3(); return; /* Core!?appSqrt@@YANN@Z */
}

void f_9846fc(void) {
  LOAD_REGS();
L_9846fc: /* 9846fc: jmp dword ptr [0xcfa3dc] */
  SPILL(); f_4e392c(); return; /* Core!?appFloor@@YAHM@Z */
}

void f_984702(void) {
  LOAD_REGS();
L_984702: /* 984702: jmp dword ptr [0xcfa3e0] */
  SPILL(); f_4e319d(); return; /* Core!??DFPlane@@QBE?AV0@M@Z */
}

void f_984708(void) {
  LOAD_REGS();
L_984708: /* 984708: jmp dword ptr [0xcfa3e4] */
  SPILL(); f_4e2a7c(); return; /* Core!??KFVector@@QBE?AV0@M@Z */
}

void f_98470e(void) {
  LOAD_REGS();
L_98470e: /* 98470e: jmp dword ptr [0xcfa3e8] */
  SPILL(); f_4e255e(); return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */
}

void f_984714(void) {
  LOAD_REGS();
L_984714: /* 984714: jmp dword ptr [0xcfa3ec] */
  SPILL(); f_4e22e8(); return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */
}

void f_98471a(void) {
  LOAD_REGS();
L_98471a: /* 98471a: jmp dword ptr [0xcfa3f0] */
  SPILL(); f_4e29be(); return; /* Core!??8FName@@QBEHABV0@@Z */
}

void f_984720(void) {
  LOAD_REGS();
L_984720: /* 984720: jmp dword ptr [0xcfa3f4] */
  SPILL(); f_4e31cf(); return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */
}

void f_984726(void) {
  LOAD_REGS();
L_984726: /* 984726: jmp dword ptr [0xcfa3f8] */
  SPILL(); f_4e1eec(); return; /* Core!?CountBytes@?$TArray@G@@QAEXAAVFArchive@@@Z */
}

void f_98472c(void) {
  LOAD_REGS();
L_98472c: /* 98472c: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_984732(void) {
  LOAD_REGS();
L_984732: /* 984732: jmp dword ptr [0xcfa400] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_984738(void) {
  LOAD_REGS();
L_984738: /* 984738: jmp dword ptr [0xcfa404] */
  SPILL(); f_4e423c(); return; /* Core!?IsSaving@FArchive@@QAEHXZ */
}

void f_98473e(void) {
  LOAD_REGS();
L_98473e: /* 98473e: jmp dword ptr [0xcfa410] */
  SPILL(); f_4e3e5e(); return; /* Core!??4FString@@QAEAAV0@PBG@Z */
}

void f_984744(void) {
  LOAD_REGS();
L_984744: /* 984744: jmp dword ptr [0xcfa414] */
  SPILL(); f_4e2eaf(); return; /* Core!??6@YAAAVFArchive@@AAV0@AA_K@Z */
}

void f_98474a(void) {
  LOAD_REGS();
L_98474a: /* 98474a: jmp dword ptr [0xcfa418] */
  SPILL(); f_4e2a72(); return; /* Core!?Flush@FOutputDevice@@UAEXXZ */
}

void f_984750(void) {
  LOAD_REGS();
L_984750: /* 984750: jmp dword ptr [0xcfa41c] */
  SPILL(); f_4e3706(); return; /* Core!??0FExec@@QAE@ABV0@@Z */
}

void f_984756(void) {
  LOAD_REGS();
L_984756: /* 984756: jmp dword ptr [0xcfa420] */
  SPILL(); f_4e2090(); return; /* Core!??0FOutputDevice@@QAE@ABV0@@Z */
}

void f_98475c(void) {
  LOAD_REGS();
L_98475c: /* 98475c: jmp dword ptr [0xcfa424] */
  SPILL(); f_4e11b8(); return; /* Core!??4FExec@@QAEAAV0@ABV0@@Z */
}

void f_984762(void) {
  LOAD_REGS();
L_984762: /* 984762: jmp dword ptr [0xcfa428] */
  SPILL(); f_4e3026(); return; /* Core!??4FOutputDevice@@QAEAAV0@ABV0@@Z */
}

void f_984768(void) {
  LOAD_REGS();
L_984768: /* 984768: jmp dword ptr [0xcfa42c] */
  SPILL(); f_4e4101(); return; /* Core!?IsPersistent@FArchive@@QAEHXZ */
}

void f_98476e(void) {
  LOAD_REGS();
L_98476e: /* 98476e: jmp dword ptr [0xcfa430] */
  SPILL(); f_4e14fb(); return; /* Core!?IsTrans@FArchive@@QAEHXZ */
}

void f_984774(void) {
  LOAD_REGS();
L_984774: /* 984774: jmp dword ptr [0xcfa434] */
  SPILL(); f_4e125d(); return; /* Core!??0FCoords@@QAE@XZ */
}

void f_98477a(void) {
  LOAD_REGS();
L_98477a: /* 98477a: jmp dword ptr [0xcfa438] */
  SPILL(); f_4e391d(); return; /* Core!??0FScale@@QAE@XZ */
}

void f_984780(void) {
  LOAD_REGS();
L_984780: /* 984780: jmp dword ptr [0xcfa43c] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_984786(void) {
  LOAD_REGS();
L_984786: /* 984786: jmp dword ptr [0xcfa440] */
  SPILL(); f_4e39b3(); return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */
}

void f_98478c(void) {
  LOAD_REGS();
L_98478c: /* 98478c: jmp dword ptr [0xcfa444] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_984792(void) {
  LOAD_REGS();
L_984792: /* 984792: jmp dword ptr [0xcfa448] */
  SPILL(); f_4e3f3f(); return; /* Core!?StaticConstructor@UObject@@QAEXXZ */
}

void f_984798(void) {
  LOAD_REGS();
L_984798: /* 984798: jmp dword ptr [0xcfa44c] */
  SPILL(); f_4e33af(); return; /* Core!??0FGuid@@QAE@KKKK@Z */
}

void f_98479e(void) {
  LOAD_REGS();
L_98479e: /* 98479e: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9847a4(void) {
  LOAD_REGS();
L_9847a4: /* 9847a4: jmp dword ptr [0xcfa454] */
  SPILL(); f_4e3f26(); return; /* Core!?SupportsPackage@UPackageMap@@UAEHPAVUObject@@@Z */
}

void f_9847aa(void) {
  LOAD_REGS();
L_9847aa: /* 9847aa: jmp dword ptr [0xcfa458] */
  SPILL(); f_4e4327(); return; /* Core!?GetClassNetCache@UPackageMap@@UAEPAVFClassNetCache@@PAVUClass@@@Z */
}

void f_9847b0(void) {
  LOAD_REGS();
L_9847b0: /* 9847b0: jmp dword ptr [0xcfa45c] */
  SPILL(); f_4e40c0(); return; /* Core!?GetMaxObjectIndex@UPackageMap@@UAEHXZ */
}

void f_9847b6(void) {
  LOAD_REGS();
L_9847b6: /* 9847b6: jmp dword ptr [0xcfa460] */
  SPILL(); f_4e24b9(); return; /* Core!?Compute@UPackageMap@@UAEXXZ */
}

void f_9847bc(void) {
  LOAD_REGS();
L_9847bc: /* 9847bc: jmp dword ptr [0xcfa464] */
  SPILL(); f_4e3f85(); return; /* Core!?AddLinker@UPackageMap@@UAEHPAVULinkerLoad@@@Z */
}

void f_9847c2(void) {
  LOAD_REGS();
L_9847c2: /* 9847c2: jmp dword ptr [0xcfa468] */
  SPILL(); f_4e1ff5(); return; /* Core!?IndexToObject@UPackageMap@@UAEPAVUObject@@HH@Z */
}

void f_9847c8(void) {
  LOAD_REGS();
L_9847c8: /* 9847c8: jmp dword ptr [0xcfa46c] */
  SPILL(); f_4e3369(); return; /* Core!?ObjectToIndex@UPackageMap@@UAEHPAVUObject@@@Z */
}

void f_9847ce(void) {
  LOAD_REGS();
L_9847ce: /* 9847ce: jmp dword ptr [0xcfa470] */
  SPILL(); f_4e2531(); return; /* Core!?SerializeName@UPackageMap@@UAEHAAVFArchive@@AAVFName@@@Z */
}

void f_9847d4(void) {
  LOAD_REGS();
L_9847d4: /* 9847d4: jmp dword ptr [0xcfa474] */
  SPILL(); f_4e4223(); return; /* Core!?Serialize@UPackageMap@@UAEXAAVFArchive@@@Z */
}

void f_9847da(void) {
  LOAD_REGS();
L_9847da: /* 9847da: jmp dword ptr [0xcfa478] */
  SPILL(); f_4e1e4c(); return; /* Core!?Destroy@UPackageMap@@UAEXXZ */
}

void f_9847e0(void) {
  LOAD_REGS();
L_9847e0: /* 9847e0: jmp dword ptr [0xcfa47c] */
  SPILL(); f_4e3dff(); return; /* Core!??1UPackageMap@@UAE@XZ */
}

void f_9847e6(void) {
  LOAD_REGS();
L_9847e6: /* 9847e6: jmp dword ptr [0xcfa480] */
  SPILL(); f_4e1f46(); return; /* Core!??0UPackageMap@@QAE@XZ */
}

void f_9847ec(void) {
  LOAD_REGS();
L_9847ec: /* 9847ec: jmp dword ptr [0xcfa484] */
  SPILL(); f_4e1f78(); return; /* Core!??0UPackageMap@@QAE@ABV0@@Z */
}

void f_9847f2(void) {
  LOAD_REGS();
L_9847f2: /* 9847f2: jmp dword ptr [0xcfa488] */
  SPILL(); f_4e190b(); return; /* Core!??4UPackageMap@@QAEAAV0@ABV0@@Z */
}

void f_9847f8(void) {
  LOAD_REGS();
L_9847f8: /* 9847f8: jmp dword ptr [0xcfa48c] */
  SPILL(); f_4e3837(); return; /* Core!??1FBitWriter@@UAE@XZ */
}

void f_9847fe(void) {
  LOAD_REGS();
L_9847fe: /* 9847fe: jmp dword ptr [0xcfa490] */
  SPILL(); f_4e3f4e(); return; /* Core!?GetError@FArchive@@UAEHXZ */
}

void f_984804(void) {
  LOAD_REGS();
L_984804: /* 984804: jmp dword ptr [0xcfa494] */
  SPILL(); f_4e1fb4(); return; /* Core!?Close@FArchive@@UAEHXZ */
}

void f_98480a(void) {
  LOAD_REGS();
L_98480a: /* 98480a: jmp dword ptr [0xcfa498] */
  SPILL(); f_4e23e7(); return; /* Core!?Flush@FArchive@@UAEXXZ */
}

void f_984810(void) {
  LOAD_REGS();
L_984810: /* 984810: jmp dword ptr [0xcfa49c] */
  SPILL(); f_4e1e33(); return; /* Core!?Precache@FArchive@@UAEXH@Z */
}

void f_984816(void) {
  LOAD_REGS();
L_984816: /* 984816: jmp dword ptr [0xcfa4a0] */
  SPILL(); f_4e25db(); return; /* Core!?DetachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
}

void f_98481c(void) {
  LOAD_REGS();
L_98481c: /* 98481c: jmp dword ptr [0xcfa4a4] */
  SPILL(); f_4e41d3(); return; /* Core!?AttachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
}

void f_984822(void) {
  LOAD_REGS();
L_984822: /* 984822: jmp dword ptr [0xcfa4a8] */
  SPILL(); f_4e31b1(); return; /* Core!?Seek@FArchive@@UAEXH@Z */
}

void f_984828(void) {
  LOAD_REGS();
L_984828: /* 984828: jmp dword ptr [0xcfa4ac] */
  SPILL(); f_4e2f04(); return; /* Core!?SetStopper@FArchive@@UAEXH@Z */
}

void f_98482e(void) {
  LOAD_REGS();
L_98482e: /* 98482e: jmp dword ptr [0xcfa4b0] */
  SPILL(); f_4e2289(); return; /* Core!?AtStopper@FArchive@@UAEHXZ */
}

void f_984834(void) {
  LOAD_REGS();
L_984834: /* 984834: jmp dword ptr [0xcfa4b4] */
  SPILL(); f_4e1ab4(); return; /* Core!?AtEnd@FArchive@@UAEHXZ */
}

void f_98483a(void) {
  LOAD_REGS();
L_98483a: /* 98483a: jmp dword ptr [0xcfa4b8] */
  SPILL(); f_4e1cc6(); return; /* Core!?TotalSize@FArchive@@UAEHXZ */
}

void f_984840(void) {
  LOAD_REGS();
L_984840: /* 984840: jmp dword ptr [0xcfa4bc] */
  SPILL(); f_4e4151(); return; /* Core!?Tell@FArchive@@UAEHXZ */
}

void f_984846(void) {
  LOAD_REGS();
L_984846: /* 984846: jmp dword ptr [0xcfa4c0] */
  SPILL(); f_4e33b9(); return; /* Core!?MapObject@FArchive@@UAEHPAVUObject@@@Z */
}

void f_98484c(void) {
  LOAD_REGS();
L_98484c: /* 98484c: jmp dword ptr [0xcfa4c4] */
  SPILL(); f_4e13b1(); return; /* Core!?MapName@FArchive@@UAEHPAVFName@@@Z */
}

void f_984852(void) {
  LOAD_REGS();
L_984852: /* 984852: jmp dword ptr [0xcfa4c8] */
  SPILL(); f_4e10f0(); return; /* Core!?CountBytes@FArchive@@UAEXKK@Z */
}

void f_984858(void) {
  LOAD_REGS();
L_984858: /* 984858: jmp dword ptr [0xcfa4cc] */
  SPILL(); f_4e1118(); return; /* Core!?Preload@FArchive@@UAEXPAVUObject@@@Z */
}

void f_98485e(void) {
  LOAD_REGS();
L_98485e: /* 98485e: jmp dword ptr [0xcfa4d0] */
  SPILL(); f_4e2301(); return; /* Core!?SerializeInt@FBitWriter@@UAEXAAKK@Z */
}

void f_984864(void) {
  LOAD_REGS();
L_984864: /* 984864: jmp dword ptr [0xcfa4d4] */
  SPILL(); f_4e2248(); return; /* Core!?SerializeBits@FBitWriter@@UAEXPAXH@Z */
}

void f_98486a(void) {
  LOAD_REGS();
L_98486a: /* 98486a: jmp dword ptr [0xcfa4d8] */
  SPILL(); f_4e2405(); return; /* Core!?Serialize@FBitWriter@@UAEXPAXH@Z */
}

void f_984870(void) {
  LOAD_REGS();
L_984870: /* 984870: jmp dword ptr [0xcfa4dc] */
  SPILL(); f_4e2ba8(); return; /* Core!??0FBitWriter@@QAE@ABU0@@Z */
}

void f_984876(void) {
  LOAD_REGS();
L_984876: /* 984876: jmp dword ptr [0xcfa4e0] */
  SPILL(); f_4e107d(); return; /* Core!??4FBitWriter@@QAEAAU0@ABU0@@Z */
}

void f_98487c(void) {
  LOAD_REGS();
L_98487c: /* 98487c: jmp dword ptr [0xcfa4e4] */
  SPILL(); f_4e1bf4(); return; /* Core!??1FBitReader@@UAE@XZ */
}

void f_984882(void) {
  LOAD_REGS();
L_984882: /* 984882: jmp dword ptr [0xcfa4e8] */
  SPILL(); f_4e14c9(); return; /* Core!?AtEnd@FBitReader@@UAEHXZ */
}

void f_984888(void) {
  LOAD_REGS();
L_984888: /* 984888: jmp dword ptr [0xcfa4ec] */
  SPILL(); f_4e2f9f(); return; /* Core!?SerializeInt@FBitReader@@UAEXAAKK@Z */
}

void f_98488e(void) {
  LOAD_REGS();
L_98488e: /* 98488e: jmp dword ptr [0xcfa4f0] */
  SPILL(); f_4e417e(); return; /* Core!?SerializeBits@FBitReader@@UAEXPAXH@Z */
}

void f_984894(void) {
  LOAD_REGS();
L_984894: /* 984894: jmp dword ptr [0xcfa4f4] */
  SPILL(); f_4e336e(); return; /* Core!?Serialize@FBitReader@@UAEXPAXH@Z */
}

void f_98489a(void) {
  LOAD_REGS();
L_98489a: /* 98489a: jmp dword ptr [0xcfa4f8] */
  SPILL(); f_4e3170(); return; /* Core!??0FBitReader@@QAE@ABU0@@Z */
}

void f_9848a0(void) {
  LOAD_REGS();
L_9848a0: /* 9848a0: jmp dword ptr [0xcfa4fc] */
  SPILL(); f_4e3323(); return; /* Core!??4FBitReader@@QAEAAU0@ABU0@@Z */
}

void f_9848a6(void) {
  LOAD_REGS();
L_9848a6: /* 9848a6: jmp dword ptr [0xcfa500] */
  SPILL(); f_4e16b3(); return; /* Core!??0FMemCache@@QAE@XZ */
}

void f_9848ac(void) {
  LOAD_REGS();
L_9848ac: /* 9848ac: jmp dword ptr [0xcfa518] */
  SPILL(); f_4e2324(); return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */
}

void f_9848b2(void) {
  LOAD_REGS();
L_9848b2: /* 9848b2: jmp dword ptr [0xcfa51c] */
  SPILL(); f_4e13e8(); return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */
}

void f_9848b8(void) {
  LOAD_REGS();
L_9848b8: /* 9848b8: jmp dword ptr [0xcfa520] */
  SPILL(); f_4e3cc9(); return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */
}

void f_9848be(void) {
  LOAD_REGS();
L_9848be: /* 9848be: jmp dword ptr [0xcfa524] */
  SPILL(); f_4e2757(); return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */
}

void f_9848c4(void) {
  LOAD_REGS();
L_9848c4: /* 9848c4: jmp dword ptr [0xcfa528] */
  SPILL(); f_4e2374(); return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */
}

void f_9848ca(void) {
  LOAD_REGS();
L_9848ca: /* 9848ca: jmp dword ptr [0xcfa52c] */
  SPILL(); f_4e16ef(); return; /* Core!?Pop@FMemMark@@QAEXXZ */
}

void f_9848d0(void) {
  LOAD_REGS();
L_9848d0: /* 9848d0: jmp dword ptr [0xcfa530] */
  SPILL(); f_4e310c(); return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */
}

void f_9848d6(void) {
  LOAD_REGS();
L_9848d6: /* 9848d6: jmp dword ptr [0xcfa534] */
  SPILL(); f_4e12d0(); return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */
}

void f_9848dc(void) {
  LOAD_REGS();
L_9848dc: /* 9848dc: jmp dword ptr [0xcfa53c] */
  SPILL(); f_4e150a(); return; /* Core!?appMemset@@YAXPAXHH@Z */
}

void f_9848e2(void) {
  LOAD_REGS();
L_9848e2: /* 9848e2: jmp dword ptr [0xcfa540] */
  SPILL(); f_4e17e4(); return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */
}

void f_9848e8(void) {
  LOAD_REGS();
L_9848e8: /* 9848e8: jmp dword ptr [0xcfa544] */
  SPILL(); f_4e3d19(); return; /* Core!?GetData@FArray@@QAEPAXXZ */
}

void f_9848ee(void) {
  LOAD_REGS();
L_9848ee: /* 9848ee: jmp dword ptr [0xcfa548] */
  SPILL(); f_4e35e9(); return; /* Core!?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */
}

void f_9848f4(void) {
  LOAD_REGS();
L_9848f4: /* 9848f4: jmp dword ptr [0xcfa54c] */
  SPILL(); f_4e335a(); return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */
}

void f_9848fa(void) {
  LOAD_REGS();
L_9848fa: /* 9848fa: jmp dword ptr [0xcfa550] */
  SPILL(); f_4e280b(); return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */
}

void f_984900(void) {
  LOAD_REGS();
L_984900: /* 984900: jmp dword ptr [0xcfa554] */
  SPILL(); f_4e20e5(); return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */
}

void f_984906(void) {
  LOAD_REGS();
L_984906: /* 984906: jmp dword ptr [0xcfa558] */
  SPILL(); f_4e27ca(); return; /* Core!??9FName@@QBEHABV0@@Z */
}

void f_98490c(void) {
  LOAD_REGS();
L_98490c: /* 98490c: jmp dword ptr [0xcfa55c] */
  SPILL(); f_4e34c2(); return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */
}

void f_984912(void) {
  LOAD_REGS();
L_984912: /* 984912: jmp dword ptr [0xcfa560] */
  SPILL(); f_4e1b09(); return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */
}

void f_984918(void) {
  LOAD_REGS();
L_984918: /* 984918: jmp dword ptr [0xcfa564] */
  SPILL(); f_4e1721(); return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */
}

void f_98491e(void) {
  LOAD_REGS();
L_98491e: /* 98491e: jmp dword ptr [0xcfa568] */
  SPILL(); f_4e1a69(); return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */
}

void f_984924(void) {
  LOAD_REGS();
L_984924: /* 984924: jmp dword ptr [0xcfa56c] */
  SPILL(); f_4e12c6(); return; /* Core!??DFName@@QBEPBGXZ */
}

void f_98492a(void) {
  LOAD_REGS();
L_98492a: /* 98492a: jmp dword ptr [0xcfa570] */
  SPILL(); f_4e19a1(); return; /* Core!??_0FVector@@QAE?AV0@ABV0@@Z */
}

void f_984930(void) {
  LOAD_REGS();
L_984930: /* 984930: jmp dword ptr [0xcfa574] */
  SPILL(); f_4e2b4e(); return; /* Core!?GetRand@FRange@@QBEMXZ */
}

void f_984936(void) {
  LOAD_REGS();
L_984936: /* 984936: jmp dword ptr [0xcfa578] */
  SPILL(); f_4e3b5c(); return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */
}

void f_98493c(void) {
  LOAD_REGS();
L_98493c: /* 98493c: jmp dword ptr [0xcfa57c] */
  SPILL(); f_4e3562(); return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */
}

void f_984942(void) {
  LOAD_REGS();
L_984942: /* 984942: jmp dword ptr [0xcfa580] */
  SPILL(); f_4e10c8(); return; /* Core!?Size@FVector@@QBEMXZ */
}

void f_984948(void) {
  LOAD_REGS();
L_984948: /* 984948: jmp dword ptr [0xcfa584] */
  SPILL(); f_4e3111(); return; /* Core!?SizeSquared@FVector@@QBEMXZ */
}

void f_98494e(void) {
  LOAD_REGS();
L_98494e: /* 98494e: jmp dword ptr [0xcfa588] */
  SPILL(); f_4e420a(); return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */
}

void f_984954(void) {
  LOAD_REGS();
L_984954: /* 984954: jmp dword ptr [0xcfa58c] */
  SPILL(); f_4e1a55(); return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@M0@Z */
}

void f_98495a(void) {
  LOAD_REGS();
L_98495a: /* 98495a: jmp dword ptr [0xcfa590] */
  SPILL(); f_4e1e9c(); return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */
}

void f_984960(void) {
  LOAD_REGS();
L_984960: /* 984960: jmp dword ptr [0xcfa594] */
  SPILL(); f_4e1af0(); return; /* Core!?Determinant@FMatrix@@QBEMXZ */
}

void f_984966(void) {
  LOAD_REGS();
L_984966: /* 984966: jmp dword ptr [0xcfa598] */
  SPILL(); f_4e301c(); return; /* Core!?appCeil@@YAHM@Z */
}

void f_98496c(void) {
  LOAD_REGS();
L_98496c: /* 98496c: jmp dword ptr [0xcfa59c] */
  SPILL(); f_4e3be3(); return; /* Core!??AFVector@@QAEAAMH@Z */
}

void f_984972(void) {
  LOAD_REGS();
L_984972: /* 984972: jmp dword ptr [0xcfa5a0] */
  SPILL(); f_4e3a21(); return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */
}

void f_984978(void) {
  LOAD_REGS();
L_984978: /* 984978: jmp dword ptr [0xcfa5a4] */
  SPILL(); f_4e2be4(); return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */
}

void f_98497e(void) {
  LOAD_REGS();
L_98497e: /* 98497e: jmp dword ptr [0xcfa5a8] */
  SPILL(); f_4e3963(); return; /* Core!?appDebugBreak@@YAXXZ */
}

void f_984984(void) {
  LOAD_REGS();
L_984984: /* 984984: jmp dword ptr [0xcfa5ac] */
  SPILL(); f_4e10cd(); return; /* Core!?appIsDebuggerPresent@@YAHXZ */
}

void f_98498a(void) {
  LOAD_REGS();
L_98498a: /* 98498a: jmp dword ptr [0xcfa5b0] */
  SPILL(); f_4e317f(); return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */
}

void f_984990(void) {
  LOAD_REGS();
L_984990: /* 984990: jmp dword ptr [0xcfa5b4] */
  SPILL(); f_4e35da(); return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */
}

void f_984996(void) {
  LOAD_REGS();
L_984996: /* 984996: jmp dword ptr [0xcfa5b8] */
  SPILL(); f_4e32ec(); return; /* Core!?ParseCommand@@YAHPAPBGPBG@Z */
}

void f_98499c(void) {
  LOAD_REGS();
L_98499c: /* 98499c: jmp dword ptr [0xcfa5bc] */
  SPILL(); f_4e15eb(); return; /* Core!?appClipboardCopy@@YAXPBG@Z */
}

void f_9849a2(void) {
  LOAD_REGS();
L_9849a2: /* 9849a2: jmp dword ptr [0xcfa5c0] */
  SPILL(); f_4e3792(); return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */
}

void f_9849a8(void) {
  LOAD_REGS();
L_9849a8: /* 9849a8: jmp dword ptr [0xcfa5c4] */
  SPILL(); f_4e3d37(); return; /* Core!?IsUniform@FVector@@QAEHXZ */
}

void f_9849ae(void) {
  LOAD_REGS();
L_9849ae: /* 9849ae: jmp dword ptr [0xcfa5c8] */
  SPILL(); f_4e10b9(); return; /* Core!?Normalize@FVector@@QAEHXZ */
}

void f_9849b4(void) {
  LOAD_REGS();
L_9849b4: /* 9849b4: jmp dword ptr [0xcfa5cc] */
  SPILL(); f_4e2a04(); return; /* Core!?SetIdentity@FMatrix@@QAEXXZ */
}

void f_9849ba(void) {
  LOAD_REGS();
L_9849ba: /* 9849ba: jmp dword ptr [0xcfa5d0] */
  SPILL(); f_4e1ba4(); return; /* Core!?Flip@FPlane@@QBE?AV1@XZ */
}

void f_9849c0(void) {
  LOAD_REGS();
L_9849c0: /* 9849c0: jmp dword ptr [0xcfa5d4] */
  SPILL(); f_4e2b03(); return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */
}

void f_9849c6(void) {
  LOAD_REGS();
L_9849c6: /* 9849c6: jmp dword ptr [0xcfa5d8] */
  SPILL(); f_4e15aa(); return; /* Core!?appRound@@YAHM@Z */
}

void f_9849cc(void) {
  LOAD_REGS();
L_9849cc: /* 9849cc: jmp dword ptr [0xcfa5dc] */
  SPILL(); f_4e2ee6(); return; /* Core!?appMsgf@@YA?BHHPBGZZ */
}

void f_9849d2(void) {
  LOAD_REGS();
L_9849d2: /* 9849d2: jmp dword ptr [0xcfa5e0] */
  SPILL(); f_4e2e87(); return; /* Core!??8FVector@@QBEHABV0@@Z */
}

void f_9849d8(void) {
  LOAD_REGS();
L_9849d8: /* 9849d8: jmp dword ptr [0xcfa5e4] */
  SPILL(); f_4e348b(); return; /* Core!??HFBox@@QBE?AV0@ABVFVector@@@Z */
}

void f_9849de(void) {
  LOAD_REGS();
L_9849de: /* 9849de: jmp dword ptr [0xcfa5e8] */
  SPILL(); f_4e3edb(); return; /* Core!?IsZero@FVector@@QBEHXZ */
}

void f_9849e4(void) {
  LOAD_REGS();
L_9849e4: /* 9849e4: jmp dword ptr [0xcfa5ec] */
  SPILL(); f_4e3d0f(); return; /* Core!?appRand@@YAHXZ */
}

void f_9849ea(void) {
  LOAD_REGS();
L_9849ea: /* 9849ea: jmp dword ptr [0xcfa5f0] */
  SPILL(); f_4e276b(); return; /* Core!??9FString@@QBEHABV0@@Z */
}

void f_9849f0(void) {
  LOAD_REGS();
L_9849f0: /* 9849f0: jmp dword ptr [0xcfa5f8] */
  SPILL(); f_4e2252(); return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */
}

void f_9849f6(void) {
  LOAD_REGS();
L_9849f6: /* 9849f6: jmp dword ptr [0xcfa5fc] */
  SPILL(); f_4e374c(); return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */
}

void f_9849fc(void) {
  LOAD_REGS();
L_9849fc: /* 9849fc: jmp dword ptr [0xcfa600] */
  SPILL(); f_4e1ba9(); return; /* Core!?IsValid@UObject@@QAEHXZ */
}

void f_984a02(void) {
  LOAD_REGS();
L_984a02: /* 984a02: jmp dword ptr [0xcfa604] */
  SPILL(); f_4e2077(); return; /* Core!?SetFlags@UObject@@QAEXK@Z */
}

void f_984a08(void) {
  LOAD_REGS();
L_984a08: /* 984a08: jmp dword ptr [0xcfa608] */
  SPILL(); f_4e1d66(); return; /* Core!?LoadLocalized@UObject@@QAEXXZ */
}

void f_984a0e(void) {
  LOAD_REGS();
L_984a0e: /* 984a0e: jmp dword ptr [0xcfa60c] */
  SPILL(); f_4e3332(); return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */
}

void f_984a14(void) {
  LOAD_REGS();
L_984a14: /* 984a14: jmp dword ptr [0xcfa610] */
  SPILL(); f_4e326f(); return; /* Core!?GetCenterAndExtents@FBox@@QBEXAAVFVector@@0@Z */
}

void f_984a1a(void) {
  LOAD_REGS();
L_984a1a: /* 984a1a: jmp dword ptr [0xcfa614] */
  SPILL(); f_4e3e0e(); return; /* Core!?appSin@@YANN@Z */
}

void f_984a20(void) {
  LOAD_REGS();
L_984a20: /* 984a20: jmp dword ptr [0xcfa618] */
  SPILL(); f_4e1cda(); return; /* Core!??9FRotator@@QBEHABV0@@Z */
}

void f_984a26(void) {
  LOAD_REGS();
L_984a26: /* 984a26: jmp dword ptr [0xcfa61c] */
  SPILL(); f_4e3850(); return; /* Core!?StaticClass@USubsystem@@SAPAVUClass@@XZ */
}

void f_984a2c(void) {
  LOAD_REGS();
L_984a2c: /* 984a2c: jmp dword ptr [0xcfa620] */
  SPILL(); f_4e1550(); return; /* Core!?InternalConstructor@UObject@@SAXPAX@Z */
}

void f_984a32(void) {
  LOAD_REGS();
L_984a32: /* 984a32: jmp dword ptr [0xcfa624] */
  SPILL(); f_4e11c2(); return; /* Core!??XFRange@@QAE?AV0@M@Z */
}

void f_984a38(void) {
  LOAD_REGS();
L_984a38: /* 984a38: jmp dword ptr [0xcfa628] */
  SPILL(); f_4e2d47(); return; /* Core!??XFRangeVector@@QAE?AV0@M@Z */
}

void f_984a3e(void) {
  LOAD_REGS();
L_984a3e: /* 984a3e: jmp dword ptr [0xcfa62c] */
  SPILL(); f_4e3f58(); return; /* Core!?appFractional@@YAMM@Z */
}

void f_984a44(void) {
  LOAD_REGS();
L_984a44: /* 984a44: jmp dword ptr [0xcfa630] */
  SPILL(); f_4e2b30(); return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */
}

void f_984a4a(void) {
  LOAD_REGS();
L_984a4a: /* 984a4a: jmp dword ptr [0xcfa634] */
  SPILL(); f_4e1fc3(); return; /* Core!?appFrand@@YAMXZ */
}

void f_984a50(void) {
  LOAD_REGS();
L_984a50: /* 984a50: jmp dword ptr [0xcfa638] */
  SPILL(); f_4e2806(); return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */
}

void f_984a56(void) {
  LOAD_REGS();
L_984a56: /* 984a56: jmp dword ptr [0xcfa63c] */
  SPILL(); f_4e3585(); return; /* Core!?GetMax@FRange@@QBEMXZ */
}

void f_984a5c(void) {
  LOAD_REGS();
L_984a5c: /* 984a5c: jmp dword ptr [0xcfa640] */
  SPILL(); f_4e4133(); return; /* Core!?Size@FRange@@QBEMXZ */
}

void f_984a62(void) {
  LOAD_REGS();
L_984a62: /* 984a62: jmp dword ptr [0xcfa644] */
  SPILL(); f_4e303a(); return; /* Core!?Init@FBox@@QAEXXZ */
}

void f_984a68(void) {
  LOAD_REGS();
L_984a68: /* 984a68: jmp dword ptr [0xcfa648] */
  SPILL(); f_4e27b6(); return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */
}

void f_984a6e(void) {
  LOAD_REGS();
L_984a6e: /* 984a6e: jmp dword ptr [0xcfa64c] */
  SPILL(); f_4e437c(); return; /* Core!?Add@?$TArray@G@@QAEHH@Z */
}

void f_984a74(void) {
  LOAD_REGS();
L_984a74: /* 984a74: jmp dword ptr [0xcfa650] */
  SPILL(); f_4e281a(); return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */
}

void f_984a7a(void) {
  LOAD_REGS();
L_984a7a: /* 984a7a: jmp dword ptr [0xcfa654] */
  SPILL(); f_4e41d8(); return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */
}

void f_984a80(void) {
  LOAD_REGS();
L_984a80: /* 984a80: jmp dword ptr [0xcfa658] */
  SPILL(); f_4e2423(); return; /* Core!?appMD5Init@@YAXPAUFMD5Context@@@Z */
}

void f_984a86(void) {
  LOAD_REGS();
L_984a86: /* 984a86: jmp dword ptr [0xcfa65c] */
  SPILL(); f_4e299b(); return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */
}

void f_984a8c(void) {
  LOAD_REGS();
L_984a8c: /* 984a8c: jmp dword ptr [0xcfa660] */
  SPILL(); f_4e4282(); return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */
}

void f_984a92(void) {
  LOAD_REGS();
L_984a92: /* 984a92: jmp dword ptr [0xcfa664] */
  SPILL(); f_4e28ba(); return; /* Core!?CopyCompleteValue@UByteProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984a98(void) {
  LOAD_REGS();
L_984a98: /* 984a98: jmp dword ptr [0xcfa668] */
  SPILL(); f_4e43bd(); return; /* Core!?CopySingleValue@UByteProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984a9e(void) {
  LOAD_REGS();
L_984a9e: /* 984a9e: jmp dword ptr [0xcfa66c] */
  SPILL(); f_4e3cc4(); return; /* Core!?ImportText@UByteProperty@@UBEPBGPBGPAEH@Z */
}

void f_984aa4(void) {
  LOAD_REGS();
L_984aa4: /* 984aa4: jmp dword ptr [0xcfa670] */
  SPILL(); f_4e14b5(); return; /* Core!?ExportTextItem@UByteProperty@@UBEXPAGPAE1H@Z */
}

void f_984aaa(void) {
  LOAD_REGS();
L_984aaa: /* 984aaa: jmp dword ptr [0xcfa674] */
  SPILL(); f_4e2e82(); return; /* Core!?NetSerializeItem@UByteProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_984ab0(void) {
  LOAD_REGS();
L_984ab0: /* 984ab0: jmp dword ptr [0xcfa678] */
  SPILL(); f_4e3300(); return; /* Core!?SerializeItem@UByteProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_984ab6(void) {
  LOAD_REGS();
L_984ab6: /* 984ab6: jmp dword ptr [0xcfa67c] */
  SPILL(); f_4e3b8e(); return; /* Core!?ExportCppItem@UByteProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_984abc(void) {
  LOAD_REGS();
L_984abc: /* 984abc: jmp dword ptr [0xcfa680] */
  SPILL(); f_4e370b(); return; /* Core!?Identical@UByteProperty@@UBEHPBX0@Z */
}

void f_984ac2(void) {
  LOAD_REGS();
L_984ac2: /* 984ac2: jmp dword ptr [0xcfa684] */
  SPILL(); f_4e3666(); return; /* Core!?Link@UByteProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_984ac8(void) {
  LOAD_REGS();
L_984ac8: /* 984ac8: jmp dword ptr [0xcfa688] */
  SPILL(); f_4e1bea(); return; /* Core!?Serialize@UByteProperty@@UAEXAAVFArchive@@@Z */
}

void f_984ace(void) {
  LOAD_REGS();
L_984ace: /* 984ace: jmp dword ptr [0xcfa68c] */
  SPILL(); f_4e445d(); return; /* Core!?CopyCompleteValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984ad4(void) {
  LOAD_REGS();
L_984ad4: /* 984ad4: jmp dword ptr [0xcfa690] */
  SPILL(); f_4e2b6c(); return; /* Core!?CopySingleValue@UBoolProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984ada(void) {
  LOAD_REGS();
L_984ada: /* 984ada: jmp dword ptr [0xcfa694] */
  SPILL(); f_4e23ab(); return; /* Core!?ImportText@UBoolProperty@@UBEPBGPBGPAEH@Z */
}

void f_984ae0(void) {
  LOAD_REGS();
L_984ae0: /* 984ae0: jmp dword ptr [0xcfa698] */
  SPILL(); f_4e17ad(); return; /* Core!?ExportTextItem@UBoolProperty@@UBEXPAGPAE1H@Z */
}

void f_984ae6(void) {
  LOAD_REGS();
L_984ae6: /* 984ae6: jmp dword ptr [0xcfa69c] */
  SPILL(); f_4e1802(); return; /* Core!?NetSerializeItem@UBoolProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_984aec(void) {
  LOAD_REGS();
L_984aec: /* 984aec: jmp dword ptr [0xcfa6a0] */
  SPILL(); f_4e20f9(); return; /* Core!?SerializeItem@UBoolProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_984af2(void) {
  LOAD_REGS();
L_984af2: /* 984af2: jmp dword ptr [0xcfa6a4] */
  SPILL(); f_4e20cc(); return; /* Core!?ExportCppItem@UBoolProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_984af8(void) {
  LOAD_REGS();
L_984af8: /* 984af8: jmp dword ptr [0xcfa6a8] */
  SPILL(); f_4e3a35(); return; /* Core!?Identical@UBoolProperty@@UBEHPBX0@Z */
}

void f_984afe(void) {
  LOAD_REGS();
L_984afe: /* 984afe: jmp dword ptr [0xcfa6ac] */
  SPILL(); f_4e40cf(); return; /* Core!?Link@UBoolProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_984b04(void) {
  LOAD_REGS();
L_984b04: /* 984b04: jmp dword ptr [0xcfa6b0] */
  SPILL(); f_4e1e51(); return; /* Core!?Serialize@UBoolProperty@@UAEXAAVFArchive@@@Z */
}

void f_984b0a(void) {
  LOAD_REGS();
L_984b0a: /* 984b0a: jmp dword ptr [0xcfa6b4] */
  SPILL(); f_4e40fc(); return; /* Core!?CopyCompleteValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984b10(void) {
  LOAD_REGS();
L_984b10: /* 984b10: jmp dword ptr [0xcfa6b8] */
  SPILL(); f_4e2527(); return; /* Core!?CopySingleValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984b16(void) {
  LOAD_REGS();
L_984b16: /* 984b16: jmp dword ptr [0xcfa6bc] */
  SPILL(); f_4e10d2(); return; /* Core!?ImportText@UFloatProperty@@UBEPBGPBGPAEH@Z */
}

void f_984b1c(void) {
  LOAD_REGS();
L_984b1c: /* 984b1c: jmp dword ptr [0xcfa6c0] */
  SPILL(); f_4e3b2f(); return; /* Core!?ExportTextItem@UFloatProperty@@UBEXPAGPAE1H@Z */
}

void f_984b22(void) {
  LOAD_REGS();
L_984b22: /* 984b22: jmp dword ptr [0xcfa6c4] */
  SPILL(); f_4e359e(); return; /* Core!?NetSerializeItem@UFloatProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_984b28(void) {
  LOAD_REGS();
L_984b28: /* 984b28: jmp dword ptr [0xcfa6c8] */
  SPILL(); f_4e30d0(); return; /* Core!?SerializeItem@UFloatProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_984b2e(void) {
  LOAD_REGS();
L_984b2e: /* 984b2e: jmp dword ptr [0xcfa6cc] */
  SPILL(); f_4e235b(); return; /* Core!?ExportCppItem@UFloatProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_984b34(void) {
  LOAD_REGS();
L_984b34: /* 984b34: jmp dword ptr [0xcfa6d0] */
  SPILL(); f_4e2937(); return; /* Core!?Identical@UFloatProperty@@UBEHPBX0@Z */
}

void f_984b3a(void) {
  LOAD_REGS();
L_984b3a: /* 984b3a: jmp dword ptr [0xcfa6d4] */
  SPILL(); f_4e33c3(); return; /* Core!?Link@UFloatProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_984b40(void) {
  LOAD_REGS();
L_984b40: /* 984b40: jmp dword ptr [0xcfa6d8] */
  SPILL(); f_4e3508(); return; /* Core!?GetID@UProperty@@UBEEXZ */
}

void f_984b46(void) {
  LOAD_REGS();
L_984b46: /* 984b46: jmp dword ptr [0xcfa6dc] */
  SPILL(); f_4e1e1f(); return; /* Core!?Port@UProperty@@UBEHXZ */
}

void f_984b4c(void) {
  LOAD_REGS();
L_984b4c: /* 984b4c: jmp dword ptr [0xcfa6e0] */
  SPILL(); f_4e2fa4(); return; /* Core!?DestroyValue@UProperty@@UBEXPAX@Z */
}

void f_984b52(void) {
  LOAD_REGS();
L_984b52: /* 984b52: jmp dword ptr [0xcfa6e4] */
  SPILL(); f_4e3ff3(); return; /* Core!?CopyCompleteValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984b58(void) {
  LOAD_REGS();
L_984b58: /* 984b58: jmp dword ptr [0xcfa6e8] */
  SPILL(); f_4e2365(); return; /* Core!?CopySingleValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984b5e(void) {
  LOAD_REGS();
L_984b5e: /* 984b5e: jmp dword ptr [0xcfa6ec] */
  SPILL(); f_4e1e88(); return; /* Core!?ExportText@UProperty@@UBEHHPAGPAE1H@Z */
}

void f_984b64(void) {
  LOAD_REGS();
L_984b64: /* 984b64: jmp dword ptr [0xcfa6f0] */
  SPILL(); f_4e1140(); return; /* Core!?ImportText@UIntProperty@@UBEPBGPBGPAEH@Z */
}

void f_984b6a(void) {
  LOAD_REGS();
L_984b6a: /* 984b6a: jmp dword ptr [0xcfa6f4] */
  SPILL(); f_4e35f8(); return; /* Core!?ExportTextItem@UIntProperty@@UBEXPAGPAE1H@Z */
}

void f_984b70(void) {
  LOAD_REGS();
L_984b70: /* 984b70: jmp dword ptr [0xcfa6f8] */
  SPILL(); f_4e23d3(); return; /* Core!?NetSerializeItem@UIntProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_984b76(void) {
  LOAD_REGS();
L_984b76: /* 984b76: jmp dword ptr [0xcfa6fc] */
  SPILL(); f_4e31bb(); return; /* Core!?SerializeItem@UIntProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_984b7c(void) {
  LOAD_REGS();
L_984b7c: /* 984b7c: jmp dword ptr [0xcfa700] */
  SPILL(); f_4e439a(); return; /* Core!?ExportCppItem@UIntProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_984b82(void) {
  LOAD_REGS();
L_984b82: /* 984b82: jmp dword ptr [0xcfa704] */
  SPILL(); f_4e269e(); return; /* Core!?ExportCpp@UProperty@@UBEXAAVFOutputDevice@@HHHH@Z */
}

void f_984b88(void) {
  LOAD_REGS();
L_984b88: /* 984b88: jmp dword ptr [0xcfa708] */
  SPILL(); f_4e118b(); return; /* Core!?Identical@UIntProperty@@UBEHPBX0@Z */
}

void f_984b8e(void) {
  LOAD_REGS();
L_984b8e: /* 984b8e: jmp dword ptr [0xcfa70c] */
  SPILL(); f_4e3279(); return; /* Core!?Link@UIntProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_984b94(void) {
  LOAD_REGS();
L_984b94: /* 984b94: jmp dword ptr [0xcfa710] */
  SPILL(); f_4e34e5(); return; /* Core!?CleanupDestroyed@UProperty@@UBEXPAE@Z */
}

void f_984b9a(void) {
  LOAD_REGS();
L_984b9a: /* 984b9a: jmp dword ptr [0xcfa714] */
  SPILL(); f_4e12fd(); return; /* Core!?Serialize@UProperty@@UAEXAAVFArchive@@@Z */
}

void f_984ba0(void) {
  LOAD_REGS();
L_984ba0: /* 984ba0: jmp dword ptr [0xcfa718] */
  SPILL(); f_4e1023(); return; /* Core!?GetPropertiesSize@UField@@UAEHXZ */
}

void f_984ba6(void) {
  LOAD_REGS();
L_984ba6: /* 984ba6: jmp dword ptr [0xcfa71c] */
  SPILL(); f_4e1901(); return; /* Core!?GetOwnerClass@UField@@UAEPAVUClass@@XZ */
}

void f_984bac(void) {
  LOAD_REGS();
L_984bac: /* 984bac: jmp dword ptr [0xcfa720] */
  SPILL(); f_4e2342(); return; /* Core!?Bind@UField@@UAEXXZ */
}

void f_984bb2(void) {
  LOAD_REGS();
L_984bb2: /* 984bb2: jmp dword ptr [0xcfa724] */
  SPILL(); f_4e1ee7(); return; /* Core!?MergeBools@UField@@UAEHXZ */
}

void f_984bb8(void) {
  LOAD_REGS();
L_984bb8: /* 984bb8: jmp dword ptr [0xcfa728] */
  SPILL(); f_4e36f7(); return; /* Core!?AddCppProperty@UField@@UAEXPAVUProperty@@@Z */
}

void f_984bbe(void) {
  LOAD_REGS();
L_984bbe: /* 984bbe: jmp dword ptr [0xcfa72c] */
  SPILL(); f_4e15f0(); return; /* Core!?Register@UField@@UAEXXZ */
}

void f_984bc4(void) {
  LOAD_REGS();
L_984bc4: /* 984bc4: jmp dword ptr [0xcfa730] */
  SPILL(); f_4e3e13(); return; /* Core!?Serialize@UEnum@@UAEXAAVFArchive@@@Z */
}

void f_984bca(void) {
  LOAD_REGS();
L_984bca: /* 984bca: jmp dword ptr [0xcfa734] */
  SPILL(); f_4e3652(); return; /* Core!?PostLoad@UField@@UAEXXZ */
}

void f_984bd0(void) {
  LOAD_REGS();
L_984bd0: /* 984bd0: jmp dword ptr [0xcfa738] */
  SPILL(); f_4e338c(); return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */
}

void f_984bd6(void) {
  LOAD_REGS();
L_984bd6: /* 984bd6: jmp dword ptr [0xcfa73c] */
  SPILL(); f_4e3fe4(); return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984bdc(void) {
  LOAD_REGS();
L_984bdc: /* 984bdc: jmp dword ptr [0xcfa740] */
  SPILL(); f_4e4278(); return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_984be2(void) {
  LOAD_REGS();
L_984be2: /* 984be2: jmp dword ptr [0xcfa744] */
  SPILL(); f_4e448a(); return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984be8(void) {
  LOAD_REGS();
L_984be8: /* 984be8: jmp dword ptr [0xcfa748] */
  SPILL(); f_4e24be(); return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_984bee(void) {
  LOAD_REGS();
L_984bee: /* 984bee: jmp dword ptr [0xcfa74c] */
  SPILL(); f_4e2829(); return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984bf4(void) {
  LOAD_REGS();
L_984bf4: /* 984bf4: jmp dword ptr [0xcfa750] */
  SPILL(); f_4e29d7(); return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_984bfa(void) {
  LOAD_REGS();
L_984bfa: /* 984bfa: jmp dword ptr [0xcfa754] */
  SPILL(); f_4e2cb1(); return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984c00(void) {
  LOAD_REGS();
L_984c00: /* 984c00: jmp dword ptr [0xcfa758] */
  SPILL(); f_4e3413(); return; /* Core!??0UEnum@@QAE@PAV0@@Z */
}

void f_984c06(void) {
  LOAD_REGS();
L_984c06: /* 984c06: jmp dword ptr [0xcfa75c] */
  SPILL(); f_4e10e1(); return; /* Core!??2UEnum@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984c0c(void) {
  LOAD_REGS();
L_984c0c: /* 984c0c: jmp dword ptr [0xcfa760] */
  SPILL(); f_4e2e69(); return; /* Core!??1UEnum@@UAE@XZ */
}

void f_984c12(void) {
  LOAD_REGS();
L_984c12: /* 984c12: jmp dword ptr [0xcfa764] */
  SPILL(); f_4e2de7(); return; /* Core!??1UByteProperty@@UAE@XZ */
}

void f_984c18(void) {
  LOAD_REGS();
L_984c18: /* 984c18: jmp dword ptr [0xcfa768] */
  SPILL(); f_4e2fd1(); return; /* Core!??1UIntProperty@@UAE@XZ */
}

void f_984c1e(void) {
  LOAD_REGS();
L_984c1e: /* 984c1e: jmp dword ptr [0xcfa76c] */
  SPILL(); f_4e1988(); return; /* Core!??1UBoolProperty@@UAE@XZ */
}

void f_984c24(void) {
  LOAD_REGS();
L_984c24: /* 984c24: jmp dword ptr [0xcfa770] */
  SPILL(); f_4e38a5(); return; /* Core!??1UFloatProperty@@UAE@XZ */
}

void f_984c2a(void) {
  LOAD_REGS();
L_984c2a: /* 984c2a: jmp dword ptr [0xcfa774] */
  SPILL(); f_4e3b84(); return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */
}

void f_984c30(void) {
  LOAD_REGS();
L_984c30: /* 984c30: jmp dword ptr [0xcfa778] */
  SPILL(); f_4e3d69(); return; /* Core!?appAtof@@YAMPBG@Z */
}

void f_984c36(void) {
  LOAD_REGS();
L_984c36: /* 984c36: jmp dword ptr [0xcfa780] */
  SPILL(); f_4e22ed(); return; /* Core!??0FOutputDevice@@QAE@XZ */
}

void f_984c3c(void) {
  LOAD_REGS();
L_984c3c: /* 984c3c: jmp dword ptr [0xcfa784] */
  SPILL(); f_4e1299(); return; /* Core!?StaticImportObject@UFactory@@SAPAVUObject@@PAVULevel@@PAVUClass@@PAV2@VFName@@KPBG2PAV1@4PAVFFeedbackContext@@@Z */
}

void f_984c42(void) {
  LOAD_REGS();
L_984c42: /* 984c42: jmp dword ptr [0xcfa788] */
  SPILL(); f_4e3acb(); return; /* Core!?StaticClass@UTextBuffer@@SAPAVUClass@@XZ */
}

void f_984c48(void) {
  LOAD_REGS();
L_984c48: /* 984c48: jmp dword ptr [0xcfa794] */
  SPILL(); f_4e30df(); return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */
}

void f_984c4e(void) {
  LOAD_REGS();
L_984c4e: /* 984c4e: jmp dword ptr [0xcfa798] */
  SPILL(); f_4e2702(); return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */
}

void f_984c54(void) {
  LOAD_REGS();
L_984c54: /* 984c54: jmp dword ptr [0xcfa79c] */
  SPILL(); f_4e211c(); return; /* Core!?RemoveFromRoot@UObject@@QAEXXZ */
}

void f_984c5a(void) {
  LOAD_REGS();
L_984c5a: /* 984c5a: jmp dword ptr [0xcfa7a0] */
  SPILL(); f_4e3a4e(); return; /* Core!?ParseLine@@YAHPAPBGPAGHH@Z */
}

void f_984c60(void) {
  LOAD_REGS();
L_984c60: /* 984c60: jmp dword ptr [0xcfa7a4] */
  SPILL(); f_4e3ef4(); return; /* Core!?AddToRoot@UObject@@QAEXXZ */
}

void f_984c66(void) {
  LOAD_REGS();
L_984c66: /* 984c66: jmp dword ptr [0xcfa7a8] */
  SPILL(); f_4e3256(); return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */
}

void f_984c6c(void) {
  LOAD_REGS();
L_984c6c: /* 984c6c: jmp dword ptr [0xcfa7ac] */
  SPILL(); f_4e3620(); return; /* Core!?appCreateBitmap@@YAHPBGHHPAKPAVFFileManager@@@Z */
}

void f_984c72(void) {
  LOAD_REGS();
L_984c72: /* 984c72: jmp dword ptr [0xcfa7b0] */
  SPILL(); f_4e161d(); return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */
}

void f_984c78(void) {
  LOAD_REGS();
L_984c78: /* 984c78: jmp dword ptr [0xcfa7b4] */
  SPILL(); f_4e3fe9(); return; /* Core!?appAtoi@@YAHPBG@Z */
}

void f_984c7e(void) {
  LOAD_REGS();
L_984c7e: /* 984c7e: jmp dword ptr [0xcfa7b8] */
  SPILL(); f_4e157d(); return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */
}

void f_984c84(void) {
  LOAD_REGS();
L_984c84: /* 984c84: jmp dword ptr [0xcfa7bc] */
  SPILL(); f_4e3693(); return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */
}

void f_984c8a(void) {
  LOAD_REGS();
L_984c8a: /* 984c8a: jmp dword ptr [0xcfa7c0] */
  SPILL(); f_4e3003(); return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */
}

void f_984c90(void) {
  LOAD_REGS();
L_984c90: /* 984c90: jmp dword ptr [0xcfa7c4] */
  SPILL(); f_4e302b(); return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */
}

void f_984c96(void) {
  LOAD_REGS();
L_984c96: /* 984c96: jmp dword ptr [0xcfa7c8] */
  SPILL(); f_4e42f0(); return; /* Core!?Left@FString@@QBE?AV1@H@Z */
}

void f_984c9c(void) {
  LOAD_REGS();
L_984c9c: /* 984c9c: jmp dword ptr [0xcfa7cc] */
  SPILL(); f_4e3b20(); return; /* Core!??AFString@@QAEAAGH@Z */
}

void f_984ca2(void) {
  LOAD_REGS();
L_984ca2: /* 984ca2: jmp dword ptr [0xcfa7d0] */
  SPILL(); f_4e298c(); return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */
}

void f_984ca8(void) {
  LOAD_REGS();
L_984ca8: /* 984ca8: jmp dword ptr [0xcfa7d4] */
  SPILL(); f_4e3f5d(); return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */
}

void f_984cae(void) {
  LOAD_REGS();
L_984cae: /* 984cae: jmp dword ptr [0xcfa7dc] */
  SPILL(); f_4e30a8(); return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */
}

void f_984cb4(void) {
  LOAD_REGS();
L_984cb4: /* 984cb4: jmp dword ptr [0xcfa7e0] */
  SPILL(); f_4e270c(); return; /* Core!?Describe@FStateFrame@@QAEPBGXZ */
}

void f_984cba(void) {
  LOAD_REGS();
L_984cba: /* 984cba: jmp dword ptr [0xcfa7e4] */
  SPILL(); f_4e1898(); return; /* Core!?ResetConfig@UObject@@SAXPAVUClass@@@Z */
}

void f_984cc0(void) {
  LOAD_REGS();
L_984cc0: /* 984cc0: jmp dword ptr [0xcfa7e8] */
  SPILL(); f_4e2725(); return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */
}

void f_984cc6(void) {
  LOAD_REGS();
L_984cc6: /* 984cc6: jmp dword ptr [0xcfa7ec] */
  SPILL(); f_4e4476(); return; /* Core!??1FPackageFileSummary@@QAE@XZ */
}

void f_984ccc(void) {
  LOAD_REGS();
L_984ccc: /* 984ccc: jmp dword ptr [0xcfa7f0] */
  SPILL(); f_4e39d6(); return; /* Core!?String@FGuid@@QBEPAGXZ */
}

void f_984cd2(void) {
  LOAD_REGS();
L_984cd2: /* 984cd2: jmp dword ptr [0xcfa7f4] */
  SPILL(); f_4e1be0(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAUFNameEntry@@@Z */
}

void f_984cd8(void) {
  LOAD_REGS();
L_984cd8: /* 984cd8: jmp dword ptr [0xcfa7f8] */
  SPILL(); f_4e36a2(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAUFPackageFileSummary@@@Z */
}

void f_984cde(void) {
  LOAD_REGS();
L_984cde: /* 984cde: jmp dword ptr [0xcfad04] */
  SPILL(); f_4e18de(); return; /* Core!??0FPackageFileSummary@@QAE@XZ */
}

void f_984ce4(void) {
  LOAD_REGS();
L_984ce4: /* 984ce4: jmp dword ptr [0xcfa800] */
  SPILL(); f_4e1415(); return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */
}

void f_984cea(void) {
  LOAD_REGS();
L_984cea: /* 984cea: jmp dword ptr [0xcfa804] */
  SPILL(); f_4e26e4(); return; /* Core!??0UCommandlet@@QAE@XZ */
}

void f_984cf0(void) {
  LOAD_REGS();
L_984cf0: /* 984cf0: jmp dword ptr [0xcfa808] */
  SPILL(); f_4e189d(); return; /* Core!??1UCommandlet@@UAE@XZ */
}

void f_984cf6(void) {
  LOAD_REGS();
L_984cf6: /* 984cf6: jmp dword ptr [0xcfa80c] */
  SPILL(); f_4e3387(); return; /* Core!?ParseParam@@YAHPBG0@Z */
}

void f_984cfc(void) {
  LOAD_REGS();
L_984cfc: /* 984cfc: jmp dword ptr [0xcfa810] */
  SPILL(); f_4e2987(); return; /* Core!?appCmdLine@@YAPBGXZ */
}

void f_984d02(void) {
  LOAD_REGS();
L_984d02: /* 984d02: jmp dword ptr [0xcfa818] */
  SPILL(); f_4e3e22(); return; /* Core!?appSleep@@YAXM@Z */
}

void f_984d08(void) {
  LOAD_REGS();
L_984d08: /* 984d08: jmp dword ptr [0xcfa820] */
  SPILL(); f_4e31f2(); return; /* Core!?SetLanguage@UObject@@SAXPBG@Z */
}

void f_984d0e(void) {
  LOAD_REGS();
L_984d0e: /* 984d0e: jmp dword ptr [0xcfa828] */
  SPILL(); f_4e33cd(); return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */
}

void f_984d14(void) {
  LOAD_REGS();
L_984d14: /* 984d14: jmp dword ptr [0xcfa82c] */
  SPILL(); f_4e3648(); return; /* Core!?LoadPackage@UObject@@SAPAV1@PAV1@PBGK@Z */
}

void f_984d1a(void) {
  LOAD_REGS();
L_984d1a: /* 984d1a: jmp dword ptr [0xcfa830] */
  SPILL(); f_4e3bac(); return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */
}

void f_984d20(void) {
  LOAD_REGS();
L_984d20: /* 984d20: jmp dword ptr [0xcfa834] */
  SPILL(); f_4e4192(); return; /* Core!?appStrcmp@@YAHPBG0@Z */
}

void f_984d26(void) {
  LOAD_REGS();
L_984d26: /* 984d26: jmp dword ptr [0xcfa838] */
  SPILL(); f_4e1a0f(); return; /* Core!?Empty@FString@@QAEXXZ */
}

void f_984d2c(void) {
  LOAD_REGS();
L_984d2c: /* 984d2c: jmp dword ptr [0xcfa83c] */
  SPILL(); f_4e3247(); return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */
}

void f_984d32(void) {
  LOAD_REGS();
L_984d32: /* 984d32: jmp dword ptr [0xcfa840] */
  SPILL(); f_4e1d39(); return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */
}

void f_984d38(void) {
  LOAD_REGS();
L_984d38: /* 984d38: jmp dword ptr [0xcfa844] */
  SPILL(); f_4e1cb2(); return; /* Core!?CreatePackage@UObject@@SAPAVUPackage@@PAV1@PBG@Z */
}

void f_984d3e(void) {
  LOAD_REGS();
L_984d3e: /* 984d3e: jmp dword ptr [0xcfa848] */
  SPILL(); f_4e2577(); return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */
}

void f_984d44(void) {
  LOAD_REGS();
L_984d44: /* 984d44: jmp dword ptr [0xcfa84c] */
  SPILL(); f_4e1055(); return; /* Core!?InStr@FString@@QBEHPBGH@Z */
}

void f_984d4a(void) {
  LOAD_REGS();
L_984d4a: /* 984d4a: jmp dword ptr [0xcfa850] */
  SPILL(); f_4e2883(); return; /* Core!?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */
}

void f_984d50(void) {
  LOAD_REGS();
L_984d50: /* 984d50: jmp dword ptr [0xcfa854] */
  SPILL(); f_4e1b2c(); return; /* Core!?appRandInit@@YAXH@Z */
}

void f_984d56(void) {
  LOAD_REGS();
L_984d56: /* 984d56: jmp dword ptr [0xcfa858] */
  SPILL(); f_4e4331(); return; /* Core!?Init@FMemCache@@QAEXHHPAXH@Z */
}

void f_984d5c(void) {
  LOAD_REGS();
L_984d5c: /* 984d5c: jmp dword ptr [0xcfa85c] */
  SPILL(); f_4e3ee0(); return; /* Core!?Init@FMemStack@@QAEXH@Z */
}

void f_984d62(void) {
  LOAD_REGS();
L_984d62: /* 984d62: jmp dword ptr [0xcfa864] */
  SPILL(); f_4e197e(); return; /* Core!?Exec@FMemCache@@QAEHPBGAAVFOutputDevice@@@Z */
}

void f_984d68(void) {
  LOAD_REGS();
L_984d68: /* 984d68: jmp dword ptr [0xcfa868] */
  SPILL(); f_4e1109(); return; /* Core!?StaticExec@UObject@@SAHPBGAAVFOutputDevice@@@Z */
}

void f_984d6e(void) {
  LOAD_REGS();
L_984d6e: /* 984d6e: jmp dword ptr [0xcfa870] */
  SPILL(); f_4e21fd(); return; /* Core!?Exit@FMemCache@@QAEXH@Z */
}

void f_984d74(void) {
  LOAD_REGS();
L_984d74: /* 984d74: jmp dword ptr [0xcfa874] */
  SPILL(); f_4e237e(); return; /* Core!?Exit@FMemStack@@QAEXXZ */
}

void f_984d7a(void) {
  LOAD_REGS();
L_984d7a: /* 984d7a: jmp dword ptr [0xcfa878] */
  SPILL(); f_4e1104(); return; /* Core!?StaticClass@UCommandlet@@SAPAVUClass@@XZ */
}

void f_984d80(void) {
  LOAD_REGS();
L_984d80: /* 984d80: jmp dword ptr [0xcfa87c] */
  SPILL(); f_4e14f1(); return; /* Core!??8FRotator@@QBEHABV0@@Z */
}

void f_984d86(void) {
  LOAD_REGS();
L_984d86: /* 984d86: jmp dword ptr [0xcfa880] */
  SPILL(); f_4e360c(); return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */
}

void f_984d8c(void) {
  LOAD_REGS();
L_984d8c: /* 984d8c: jmp dword ptr [0xcfa884] */
  SPILL(); f_4e2cde(); return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */
}

void f_984d92(void) {
  LOAD_REGS();
L_984d92: /* 984d92: jmp dword ptr [0xcfa888] */
  SPILL(); f_4e24e6(); return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */
}

void f_984d98(void) {
  LOAD_REGS();
L_984d98: /* 984d98: jmp dword ptr [0xcfa88c] */
  SPILL(); f_4e21d5(); return; /* Core!?Intersect@FBox@@QBE_NABV1@@Z */
}

void f_984d9e(void) {
  LOAD_REGS();
L_984d9e: /* 984d9e: jmp dword ptr [0xcfa890] */
  SPILL(); f_4e3ea9(); return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */
}

void f_984da4(void) {
  LOAD_REGS();
L_984da4: /* 984da4: jmp dword ptr [0xcfa894] */
  SPILL(); f_4e44f8(); return; /* Core!?GetExtrema@FBox@@QAEAAVFVector@@H@Z */
}

void f_984daa(void) {
  LOAD_REGS();
L_984daa: /* 984daa: jmp dword ptr [0xcfa898] */
  SPILL(); f_4e18e8(); return; /* Core!?FLineExtentBoxIntersection@@YAHABVFBox@@ABVFVector@@11AAV2@2AAM@Z */
}

void f_984db0(void) {
  LOAD_REGS();
L_984db0: /* 984db0: jmp dword ptr [0xcfa89c] */
  SPILL(); f_4e1807(); return; /* Core!?appCos@@YANN@Z */
}

void f_984db6(void) {
  LOAD_REGS();
L_984db6: /* 984db6: jmp dword ptr [0xcfa8a0] */
  SPILL(); f_4e23dd(); return; /* Core!?Size2D@FVector@@QBEMXZ */
}

void f_984dbc(void) {
  LOAD_REGS();
L_984dbc: /* 984dbc: jmp dword ptr [0xcfa8a4] */
  SPILL(); f_4e3c65(); return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */
}

void f_984dc2(void) {
  LOAD_REGS();
L_984dc2: /* 984dc2: jmp dword ptr [0xcfa8ac] */
  SPILL(); f_4e36bb(); return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */
}

void f_984dc8(void) {
  LOAD_REGS();
L_984dc8: /* 984dc8: jmp dword ptr [0xcfa8b0] */
  SPILL(); f_4e1b04(); return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */
}

void f_984dce(void) {
  LOAD_REGS();
L_984dce: /* 984dce: jmp dword ptr [0xcfa8b4] */
  SPILL(); f_4e4183(); return; /* Core!?appSprintf@@YAHPAGPBGZZ */
}

void f_984dd4(void) {
  LOAD_REGS();
L_984dd4: /* 984dd4: jmp dword ptr [0xcfa8b8] */
  SPILL(); f_4e3b43(); return; /* Core!??8FString@@QBEHABV0@@Z */
}

void f_984dda(void) {
  LOAD_REGS();
L_984dda: /* 984dda: jmp dword ptr [0xcfa8bc] */
  SPILL(); f_4e375b(); return; /* Core!?EndLoad@UObject@@SAXXZ */
}

void f_984de0(void) {
  LOAD_REGS();
L_984de0: /* 984de0: jmp dword ptr [0xcfa8c0] */
  SPILL(); f_4e43b8(); return; /* Core!?GetPackageLinker@UObject@@SAPAVULinkerLoad@@PAV1@PBGKPAVUPackageMap@@PAVFGuid@@@Z */
}

void f_984de6(void) {
  LOAD_REGS();
L_984de6: /* 984de6: jmp dword ptr [0xcfa8c4] */
  SPILL(); f_4e3d50(); return; /* Core!?BeginLoad@UObject@@SAXXZ */
}

void f_984dec(void) {
  LOAD_REGS();
L_984dec: /* 984dec: jmp dword ptr [0xcfa8c8] */
  SPILL(); f_4e1910(); return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */
}

void f_984df2(void) {
  LOAD_REGS();
L_984df2: /* 984df2: jmp dword ptr [0xcfa8cc] */
  SPILL(); f_4e247d(); return; /* Core!?GetLoaderList@UObject@@SA?AV?$TArray@PAVUObject@@@@XZ */
}

void f_984df8(void) {
  LOAD_REGS();
L_984df8: /* 984df8: jmp dword ptr [0xcfa8d0] */
  SPILL(); f_4e2a9f(); return; /* Core!??0FGuid@@QAE@XZ */
}

void f_984dfe(void) {
  LOAD_REGS();
L_984dfe: /* 984dfe: jmp dword ptr [0xcfa8d4] */
  SPILL(); f_4e2a27(); return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */
}

void f_984e04(void) {
  LOAD_REGS();
L_984e04: /* 984e04: jmp dword ptr [0xcfa8d8] */
  SPILL(); f_4e3c9c(); return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */
}

void f_984e0a(void) {
  LOAD_REGS();
L_984e0a: /* 984e0a: jmp dword ptr [0xcfa8dc] */
  SPILL(); f_4e267b(); return; /* Core!?winToANSI@@YAPADPADPBGH@Z */
}

void f_984e10(void) {
  LOAD_REGS();
L_984e10: /* 984e10: jmp dword ptr [0xcfa8e0] */
  SPILL(); f_4e3e36(); return; /* Core!?winGetSizeANSI@@YAHPBG@Z */
}

void f_984e16(void) {
  LOAD_REGS();
L_984e16: /* 984e16: jmp dword ptr [0xcfa8e4] */
  SPILL(); f_4e3d46(); return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */
}

void f_984e1c(void) {
  LOAD_REGS();
L_984e1c: /* 984e1c: jmp dword ptr [0xcfa8e8] */
  SPILL(); f_4e414c(); return; /* Core!??8FString@@QBEHPBG@Z */
}

void f_984e22(void) {
  LOAD_REGS();
L_984e22: /* 984e22: jmp dword ptr [0xcfa8ec] */
  SPILL(); f_4e3201(); return; /* Core!?appRequestExit@@YAXH@Z */
}

void f_984e28(void) {
  LOAD_REGS();
L_984e28: /* 984e28: jmp dword ptr [0xcfa8f0] */
  SPILL(); f_4e1a23(); return; /* Core!?ParseToken@@YA?AVFString@@AAPBGH@Z */
}

void f_984e2e(void) {
  LOAD_REGS();
L_984e2e: /* 984e2e: jmp dword ptr [0xcfa8f4] */
  SPILL(); f_4e31b6(); return; /* Core!?appLaunchURL@@YAXPBG0PAVFString@@@Z */
}

void f_984e34(void) {
  LOAD_REGS();
L_984e34: /* 984e34: jmp dword ptr [0xcfa8fc] */
  SPILL(); f_4e3530(); return; /* Core!??9FString@@QBEHPBG@Z */
}

void f_984e3a(void) {
  LOAD_REGS();
L_984e3a: /* 984e3a: jmp dword ptr [0xcfa900] */
  SPILL(); f_4e27d9(); return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */
}

void f_984e40(void) {
  LOAD_REGS();
L_984e40: /* 984e40: jmp dword ptr [0xcfa904] */
  SPILL(); f_4e1613(); return; /* Core!?LocalizeError@@YAPBGPBG00@Z */
}

void f_984e46(void) {
  LOAD_REGS();
L_984e46: /* 984e46: jmp dword ptr [0xcfa908] */
  SPILL(); f_4e2220(); return; /* Core!?appStrstr@@YAPAGPBG0@Z */
}

void f_984e4c(void) {
  LOAD_REGS();
L_984e4c: /* 984e4c: jmp dword ptr [0xcfa90c] */
  SPILL(); f_4e16e0(); return; /* Core!?appCleanFileCache@@YAXXZ */
}

void f_984e52(void) {
  LOAD_REGS();
L_984e52: /* 984e52: jmp dword ptr [0xcfa910] */
  SPILL(); f_4e2e73(); return; /* Core!?Parse@@YAHPBG0PAGH@Z */
}

void f_984e58(void) {
  LOAD_REGS();
L_984e58: /* 984e58: jmp dword ptr [0xcfa914] */
  SPILL(); f_4e35ad(); return; /* Core!?appStrcat@@YAPAGPAGPBG@Z */
}

void f_984e5e(void) {
  LOAD_REGS();
L_984e5e: /* 984e5e: jmp dword ptr [0xcfa918] */
  SPILL(); f_4e3fa8(); return; /* Core!?CollectGarbage@UObject@@SAXK@Z */
}

void f_984e64(void) {
  LOAD_REGS();
L_984e64: /* 984e64: jmp dword ptr [0xcfa91c] */
  SPILL(); f_4e1834(); return; /* Core!?ClearFlags@UObject@@QAEXK@Z */
}

void f_984e6a(void) {
  LOAD_REGS();
L_984e6a: /* 984e6a: jmp dword ptr [0xcfa920] */
  SPILL(); f_4e2419(); return; /* Core!?appComputerName@@YAPBGXZ */
}

void f_984e70(void) {
  LOAD_REGS();
L_984e70: /* 984e70: jmp dword ptr [0xcfa924] */
  SPILL(); f_4e1555(); return; /* Core!?VerifyLinker@UObject@@SAXPAVULinkerLoad@@@Z */
}

void f_984e76(void) {
  LOAD_REGS();
L_984e76: /* 984e76: jmp dword ptr [0xcfa928] */
  SPILL(); f_4e22c0(); return; /* Core!?GInitRunaway@@YAXXZ */
}

void f_984e7c(void) {
  LOAD_REGS();
L_984e7c: /* 984e7c: jmp dword ptr [0xcfa930] */
  SPILL(); f_4e2a5e(); return; /* Core!?Tick@FMemCache@@QAEXXZ */
}

void f_984e82(void) {
  LOAD_REGS();
L_984e82: /* 984e82: jmp dword ptr [0xcfa934] */
  SPILL(); f_4e163b(); return; /* Core!?StaticTick@UObject@@SAXXZ */
}

void f_984e88(void) {
  LOAD_REGS();
L_984e88: /* 984e88: jmp dword ptr [0xcfa938] */
  SPILL(); f_4e3d00(); return; /* Core!??1FRegistryObjectInfo@@QAE@XZ */
}

void f_984e8e(void) {
  LOAD_REGS();
L_984e8e: /* 984e8e: jmp dword ptr [0xcfa93c] */
  SPILL(); f_4e44d0(); return; /* Core!?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z */
}

void f_984e94(void) {
  LOAD_REGS();
L_984e94: /* 984e94: jmp dword ptr [0xcfa940] */
  SPILL(); f_4e2f90(); return; /* Core!?appStrnicmp@@YAHPBG0H@Z */
}

void f_984e9a(void) {
  LOAD_REGS();
L_984e9a: /* 984e9a: jmp dword ptr [0xcfa944] */
  SPILL(); f_4e174e(); return; /* Core!?Right@FString@@QBE?AV1@H@Z */
}

void f_984ea0(void) {
  LOAD_REGS();
L_984ea0: /* 984ea0: jmp dword ptr [0xcfa948] */
  SPILL(); f_4e16ea(); return; /* Core!?InStr@FString@@QBEHABV1@H@Z */
}

void f_984ea6(void) {
  LOAD_REGS();
L_984ea6: /* 984ea6: jmp dword ptr [0xcfa950] */
  SPILL(); f_4e3c24(); return; /* Core!?appLoadFileToString@@YAHAAVFString@@PBGPAVFFileManager@@@Z */
}

void f_984eac(void) {
  LOAD_REGS();
L_984eac: /* 984eac: jmp dword ptr [0xcfa954] */
  SPILL(); f_4e292d(); return; /* Core!?appStaticString1024@@YAPAGXZ */
}

void f_984eb2(void) {
  LOAD_REGS();
L_984eb2: /* 984eb2: jmp dword ptr [0xcfa958] */
  SPILL(); f_4e1406(); return; /* Core!?appStrupr@@YAPAGPAG@Z */
}

void f_984eb8(void) {
  LOAD_REGS();
L_984eb8: /* 984eb8: jmp dword ptr [0xcfa95c] */
  SPILL(); f_4e2df6(); return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */
}

void f_984ebe(void) {
  LOAD_REGS();
L_984ebe: /* 984ebe: jmp dword ptr [0xcfa960] */
  SPILL(); f_4e2e6e(); return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */
}

void f_984ec4(void) {
  LOAD_REGS();
L_984ec4: /* 984ec4: jmp dword ptr [0xcfa964] */
  SPILL(); f_4e1e06(); return; /* Core!?StaticClass@UEnum@@SAPAVUClass@@XZ */
}

void f_984eca(void) {
  LOAD_REGS();
L_984eca: /* 984eca: jmp dword ptr [0xcfa968] */
  SPILL(); f_4e2856(); return; /* Core!??0FString@@QAE@W4ENoInit@@@Z */
}

void f_984ed0(void) {
  LOAD_REGS();
L_984ed0: /* 984ed0: jmp dword ptr [0xcfa96c] */
  SPILL(); f_4e1159(); return; /* Core!?DestroyValue@UStructProperty@@UBEXPAX@Z */
}

void f_984ed6(void) {
  LOAD_REGS();
L_984ed6: /* 984ed6: jmp dword ptr [0xcfa970] */
  SPILL(); f_4e2e7d(); return; /* Core!?CopySingleValue@UStructProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984edc(void) {
  LOAD_REGS();
L_984edc: /* 984edc: jmp dword ptr [0xcfa974] */
  SPILL(); f_4e1974(); return; /* Core!?ImportText@UStructProperty@@UBEPBGPBGPAEH@Z */
}

void f_984ee2(void) {
  LOAD_REGS();
L_984ee2: /* 984ee2: jmp dword ptr [0xcfa978] */
  SPILL(); f_4e19d8(); return; /* Core!?ExportTextItem@UStructProperty@@UBEXPAGPAE1H@Z */
}

void f_984ee8(void) {
  LOAD_REGS();
L_984ee8: /* 984ee8: jmp dword ptr [0xcfa97c] */
  SPILL(); f_4e1e10(); return; /* Core!?NetSerializeItem@UStructProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_984eee(void) {
  LOAD_REGS();
L_984eee: /* 984eee: jmp dword ptr [0xcfa980] */
  SPILL(); f_4e4520(); return; /* Core!?SerializeItem@UStructProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_984ef4(void) {
  LOAD_REGS();
L_984ef4: /* 984ef4: jmp dword ptr [0xcfa984] */
  SPILL(); f_4e1e6f(); return; /* Core!?ExportCppItem@UStructProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_984efa(void) {
  LOAD_REGS();
L_984efa: /* 984efa: jmp dword ptr [0xcfa988] */
  SPILL(); f_4e4197(); return; /* Core!?Identical@UStructProperty@@UBEHPBX0@Z */
}

void f_984f00(void) {
  LOAD_REGS();
L_984f00: /* 984f00: jmp dword ptr [0xcfa98c] */
  SPILL(); f_4e2522(); return; /* Core!?Link@UStructProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_984f06(void) {
  LOAD_REGS();
L_984f06: /* 984f06: jmp dword ptr [0xcfa990] */
  SPILL(); f_4e1d8e(); return; /* Core!?CleanupDestroyed@UStructProperty@@UBEXPAE@Z */
}

void f_984f0c(void) {
  LOAD_REGS();
L_984f0c: /* 984f0c: jmp dword ptr [0xcfa994] */
  SPILL(); f_4e14ce(); return; /* Core!?Serialize@UStructProperty@@UAEXAAVFArchive@@@Z */
}

void f_984f12(void) {
  LOAD_REGS();
L_984f12: /* 984f12: jmp dword ptr [0xcfa998] */
  SPILL(); f_4e3b70(); return; /* Core!?DestroyValue@UStrProperty@@UBEXPAX@Z */
}

void f_984f18(void) {
  LOAD_REGS();
L_984f18: /* 984f18: jmp dword ptr [0xcfa99c] */
  SPILL(); f_4e3d28(); return; /* Core!?CopySingleValue@UStrProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984f1e(void) {
  LOAD_REGS();
L_984f1e: /* 984f1e: jmp dword ptr [0xcfa9a0] */
  SPILL(); f_4e2bdf(); return; /* Core!?ImportText@UStrProperty@@UBEPBGPBGPAEH@Z */
}

void f_984f24(void) {
  LOAD_REGS();
L_984f24: /* 984f24: jmp dword ptr [0xcfa9a4] */
  SPILL(); f_4e2685(); return; /* Core!?ExportTextItem@UStrProperty@@UBEXPAGPAE1H@Z */
}

void f_984f2a(void) {
  LOAD_REGS();
L_984f2a: /* 984f2a: jmp dword ptr [0xcfa9a8] */
  SPILL(); f_4e3f0d(); return; /* Core!?SerializeItem@UStrProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_984f30(void) {
  LOAD_REGS();
L_984f30: /* 984f30: jmp dword ptr [0xcfa9ac] */
  SPILL(); f_4e139d(); return; /* Core!?ExportCppItem@UStrProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_984f36(void) {
  LOAD_REGS();
L_984f36: /* 984f36: jmp dword ptr [0xcfa9b0] */
  SPILL(); f_4e266c(); return; /* Core!?Identical@UStrProperty@@UBEHPBX0@Z */
}

void f_984f3c(void) {
  LOAD_REGS();
L_984f3c: /* 984f3c: jmp dword ptr [0xcfa9b4] */
  SPILL(); f_4e110e(); return; /* Core!?Link@UStrProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_984f42(void) {
  LOAD_REGS();
L_984f42: /* 984f42: jmp dword ptr [0xcfa9b8] */
  SPILL(); f_4e2923(); return; /* Core!?Serialize@UStrProperty@@UAEXAAVFArchive@@@Z */
}

void f_984f48(void) {
  LOAD_REGS();
L_984f48: /* 984f48: jmp dword ptr [0xcfa9bc] */
  SPILL(); f_4e2e96(); return; /* Core!?CopyCompleteValue@UNameProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984f4e(void) {
  LOAD_REGS();
L_984f4e: /* 984f4e: jmp dword ptr [0xcfa9c0] */
  SPILL(); f_4e24f0(); return; /* Core!?CopySingleValue@UNameProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_984f54(void) {
  LOAD_REGS();
L_984f54: /* 984f54: jmp dword ptr [0xcfa9c4] */
  SPILL(); f_4e25cc(); return; /* Core!?ImportText@UNameProperty@@UBEPBGPBGPAEH@Z */
}

void f_984f5a(void) {
  LOAD_REGS();
L_984f5a: /* 984f5a: jmp dword ptr [0xcfa9c8] */
  SPILL(); f_4e2946(); return; /* Core!?ExportTextItem@UNameProperty@@UBEXPAGPAE1H@Z */
}

void f_984f60(void) {
  LOAD_REGS();
L_984f60: /* 984f60: jmp dword ptr [0xcfa9cc] */
  SPILL(); f_4e106e(); return; /* Core!?NetSerializeItem@UProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_984f66(void) {
  LOAD_REGS();
L_984f66: /* 984f66: jmp dword ptr [0xcfa9d0] */
  SPILL(); f_4e16a9(); return; /* Core!?SerializeItem@UNameProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_984f6c(void) {
  LOAD_REGS();
L_984f6c: /* 984f6c: jmp dword ptr [0xcfa9d4] */
  SPILL(); f_4e12f8(); return; /* Core!?ExportCppItem@UNameProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_984f72(void) {
  LOAD_REGS();
L_984f72: /* 984f72: jmp dword ptr [0xcfa9d8] */
  SPILL(); f_4e30e4(); return; /* Core!?Identical@UNameProperty@@UBEHPBX0@Z */
}

void f_984f78(void) {
  LOAD_REGS();
L_984f78: /* 984f78: jmp dword ptr [0xcfa9dc] */
  SPILL(); f_4e329c(); return; /* Core!?Link@UNameProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_984f7e(void) {
  LOAD_REGS();
L_984f7e: /* 984f7e: jmp dword ptr [0xcfa9e0] */
  SPILL(); f_4e334b(); return; /* Core!?GetNameCPP@UStruct@@UAEPAGXZ */
}

void f_984f84(void) {
  LOAD_REGS();
L_984f84: /* 984f84: jmp dword ptr [0xcfa9e4] */
  SPILL(); f_4e2d6a(); return; /* Core!?SerializeExpr@UStruct@@UAE?AW4EExprToken@@AAHAAVFArchive@@@Z */
}

void f_984f8a(void) {
  LOAD_REGS();
L_984f8a: /* 984f8a: jmp dword ptr [0xcfa9e8] */
  SPILL(); f_4e260d(); return; /* Core!?CleanupDestroyed@UStruct@@UAEXPAE@Z */
}

void f_984f90(void) {
  LOAD_REGS();
L_984f90: /* 984f90: jmp dword ptr [0xcfa9ec] */
  SPILL(); f_4e2338(); return; /* Core!?SerializeTaggedProperties@UStruct@@UAEXAAVFArchive@@PAEPAVUClass@@@Z */
}

void f_984f96(void) {
  LOAD_REGS();
L_984f96: /* 984f96: jmp dword ptr [0xcfa9f0] */
  SPILL(); f_4e1ffa(); return; /* Core!?SerializeBin@UStruct@@UAEXAAVFArchive@@PAEH@Z */
}

void f_984f9c(void) {
  LOAD_REGS();
L_984f9c: /* 984f9c: jmp dword ptr [0xcfa9f4] */
  SPILL(); f_4e175d(); return; /* Core!?Link@UStruct@@UAEXAAVFArchive@@H@Z */
}

void f_984fa2(void) {
  LOAD_REGS();
L_984fa2: /* 984fa2: jmp dword ptr [0xcfa9f8] */
  SPILL(); f_4e1fe6(); return; /* Core!?GetInheritanceSuper@UStruct@@UAEPAV1@XZ */
}

void f_984fa8(void) {
  LOAD_REGS();
L_984fa8: /* 984fa8: jmp dword ptr [0xcfa9fc] */
  SPILL(); f_4e2be9(); return; /* Core!?GetPropertiesSize@UStruct@@UAEHXZ */
}

void f_984fae(void) {
  LOAD_REGS();
L_984fae: /* 984fae: jmp dword ptr [0xcfaa00] */
  SPILL(); f_4e1e24(); return; /* Core!?AddCppProperty@UStruct@@UAEXPAVUProperty@@@Z */
}

void f_984fb4(void) {
  LOAD_REGS();
L_984fb4: /* 984fb4: jmp dword ptr [0xcfaa04] */
  SPILL(); f_4e396d(); return; /* Core!?Register@UStruct@@UAEXXZ */
}

void f_984fba(void) {
  LOAD_REGS();
L_984fba: /* 984fba: jmp dword ptr [0xcfaa08] */
  SPILL(); f_4e3224(); return; /* Core!?Serialize@UStruct@@UAEXAAVFArchive@@@Z */
}

void f_984fc0(void) {
  LOAD_REGS();
L_984fc0: /* 984fc0: jmp dword ptr [0xcfaa0c] */
  SPILL(); f_4e12da(); return; /* Core!?Destroy@UStruct@@UAEXXZ */
}

void f_984fc6(void) {
  LOAD_REGS();
L_984fc6: /* 984fc6: jmp dword ptr [0xcfaa10] */
  SPILL(); f_4e263a(); return; /* Core!?PostLoad@UStruct@@UAEXXZ */
}

void f_984fcc(void) {
  LOAD_REGS();
L_984fcc: /* 984fcc: jmp dword ptr [0xcfaa14] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_984fd2(void) {
  LOAD_REGS();
L_984fd2: /* 984fd2: jmp dword ptr [0xcfaa18] */
  SPILL(); f_4e2743(); return; /* Core!?LoadConfig@UObject@@QAEXHPAVUClass@@PBG@Z */
}

void f_984fd8(void) {
  LOAD_REGS();
L_984fd8: /* 984fd8: jmp dword ptr [0xcfaa1c] */
  SPILL(); f_4e26e9(); return; /* Core!??0UStructProperty@@QAE@W4ECppProperty@@HPBGKPAVUStruct@@@Z */
}

void f_984fde(void) {
  LOAD_REGS();
L_984fde: /* 984fde: jmp dword ptr [0xcfaa20] */
  SPILL(); f_4e17fd(); return; /* Core!??2UStructProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984fe4(void) {
  LOAD_REGS();
L_984fe4: /* 984fe4: jmp dword ptr [0xcfaa24] */
  SPILL(); f_4e44c1(); return; /* Core!??0UStrProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_984fea(void) {
  LOAD_REGS();
L_984fea: /* 984fea: jmp dword ptr [0xcfaa28] */
  SPILL(); f_4e16bd(); return; /* Core!??2UStrProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984ff0(void) {
  LOAD_REGS();
L_984ff0: /* 984ff0: jmp dword ptr [0xcfaa2c] */
  SPILL(); f_4e4273(); return; /* Core!??0UNameProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_984ff6(void) {
  LOAD_REGS();
L_984ff6: /* 984ff6: jmp dword ptr [0xcfaa30] */
  SPILL(); f_4e21df(); return; /* Core!??2UNameProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_984ffc(void) {
  LOAD_REGS();
L_984ffc: /* 984ffc: jmp dword ptr [0xcfaa34] */
  SPILL(); f_4e33eb(); return; /* Core!?SetPropertiesSize@UStruct@@QAEXH@Z */
}

void f_985002(void) {
  LOAD_REGS();
L_985002: /* 985002: jmp dword ptr [0xcfaa38] */
  SPILL(); f_4e15a5(); return; /* Core!??0UStruct@@QAE@PAV0@@Z */
}

void f_985008(void) {
  LOAD_REGS();
L_985008: /* 985008: jmp dword ptr [0xcfaa3c] */
  SPILL(); f_4e3535(); return; /* Core!??2UStruct@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_98500e(void) {
  LOAD_REGS();
L_98500e: /* 98500e: jmp dword ptr [0xcfaa40] */
  SPILL(); f_4e2306(); return; /* Core!??0FArchive@@QAE@XZ */
}

void f_985014(void) {
  LOAD_REGS();
L_985014: /* 985014: jmp dword ptr [0xcfaa44] */
  SPILL(); f_4e337d(); return; /* Core!??1UStruct@@UAE@XZ */
}

void f_98501a(void) {
  LOAD_REGS();
L_98501a: /* 98501a: jmp dword ptr [0xcfaa48] */
  SPILL(); f_4e41dd(); return; /* Core!??1UNameProperty@@UAE@XZ */
}

void f_985020(void) {
  LOAD_REGS();
L_985020: /* 985020: jmp dword ptr [0xcfaa4c] */
  SPILL(); f_4e1712(); return; /* Core!??1UStrProperty@@UAE@XZ */
}

void f_985026(void) {
  LOAD_REGS();
L_985026: /* 985026: jmp dword ptr [0xcfaa50] */
  SPILL(); f_4e44da(); return; /* Core!??1UStructProperty@@UAE@XZ */
}

void f_98502c(void) {
  LOAD_REGS();
L_98502c: /* 98502c: jmp dword ptr [0xcfaa54] */
  SPILL(); f_4e43fe(); return; /* Core!?Parse@@YAHPBG0AAH@Z */
}

void f_985032(void) {
  LOAD_REGS();
L_985032: /* 985032: jmp dword ptr [0xcfaa58] */
  SPILL(); f_4e44a8(); return; /* Core!?Parse@@YAHPBG0AAM@Z */
}

void f_985038(void) {
  LOAD_REGS();
L_985038: /* 985038: jmp dword ptr [0xcfaa5c] */
  SPILL(); f_4e443a(); return; /* Core!?Split@FString@@QBEHABV1@PAV1@1H@Z */
}

void f_98503e(void) {
  LOAD_REGS();
L_98503e: /* 98503e: jmp dword ptr [0xcfaa60] */
  SPILL(); f_4e24af(); return; /* Core!?Create@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@HHH@Z */
}

void f_985044(void) {
  LOAD_REGS();
L_985044: /* 985044: jmp dword ptr [0xcfaa64] */
  SPILL(); f_4e102d(); return; /* Core!?Get@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@H@Z */
}

void f_98504a(void) {
  LOAD_REGS();
L_98504a: /* 98504a: jmp dword ptr [0xcfaa68] */
  SPILL(); f_4e1253(); return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */
}

void f_985050(void) {
  LOAD_REGS();
L_985050: /* 985050: jmp dword ptr [0xcfaa6c] */
  SPILL(); f_4e2ac7(); return; /* Core!?eventEndState@UObject@@QAEXXZ */
}

void f_985056(void) {
  LOAD_REGS();
L_985056: /* 985056: jmp dword ptr [0xcfaa70] */
  SPILL(); f_4e12e9(); return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */
}

void f_98505c(void) {
  LOAD_REGS();
L_98505c: /* 98505c: jmp dword ptr [0xcfaa74] */
  SPILL(); f_4e2d0b(); return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */
}

void f_985062(void) {
  LOAD_REGS();
L_985062: /* 985062: jmp dword ptr [0xcfaa78] */
  SPILL(); f_4e1f14(); return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */
}

void f_985068(void) {
  LOAD_REGS();
L_985068: /* 985068: jmp dword ptr [0xcfaa7c] */
  SPILL(); f_4e1785(); return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */
}

void f_98506e(void) {
  LOAD_REGS();
L_98506e: /* 98506e: jmp dword ptr [0xcfaa84] */
  SPILL(); f_4e1ebf(); return; /* Core!?appTimestamp@@YAPBGXZ */
}

void f_985074(void) {
  LOAD_REGS();
L_985074: /* 985074: jmp dword ptr [0xcfaa88] */
  SPILL(); f_4e3e31(); return; /* Core!?appSystemTime@@YAXAAH0000000@Z */
}

void f_98507a(void) {
  LOAD_REGS();
L_98507a: /* 98507a: jmp dword ptr [0xcfaa8c] */
  SPILL(); f_4e2abd(); return; /* Core!?appPow@@YANNN@Z */
}

void f_985080(void) {
  LOAD_REGS();
L_985080: /* 985080: jmp dword ptr [0xcfaa90] */
  SPILL(); f_4e4057(); return; /* Core!??1FPackageInfo@@QAE@XZ */
}

void f_985086(void) {
  LOAD_REGS();
L_985086: /* 985086: jmp dword ptr [0xcfaa94] */
  SPILL(); f_4e2dfb(); return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */
}

void f_98508c(void) {
  LOAD_REGS();
L_98508c: /* 98508c: jmp dword ptr [0xcfaa98] */
  SPILL(); f_4e1abe(); return; /* Core!?appStrchr@@YAPAGPBGH@Z */
}

void f_985092(void) {
  LOAD_REGS();
L_985092: /* 985092: jmp dword ptr [0xcfaa9c] */
  SPILL(); f_4e37d3(); return; /* Core!?Copy@UPackageMap@@QAEXPAV1@@Z */
}

void f_985098(void) {
  LOAD_REGS();
L_985098: /* 985098: jmp dword ptr [0xcfaaa0] */
  SPILL(); f_4e3c01(); return; /* Core!?Caps@FString@@QBE?AV1@XZ */
}

void f_98509e(void) {
  LOAD_REGS();
L_98509e: /* 98509e: jmp dword ptr [0xcfaaa4] */
  SPILL(); f_4e4237(); return; /* Core!?Locs@FString@@QBE?AV1@XZ */
}

void f_9850a4(void) {
  LOAD_REGS();
L_9850a4: /* 9850a4: jmp dword ptr [0xcfaaa8] */
  SPILL(); f_4e3f35(); return; /* Core!?Parse@@YAHPBG0AAVFGuid@@@Z */
}

void f_9850aa(void) {
  LOAD_REGS();
L_9850aa: /* 9850aa: jmp dword ptr [0xcfaab0] */
  SPILL(); f_4e303f(); return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */
}

void f_9850b0(void) {
  LOAD_REGS();
L_9850b0: /* 9850b0: jmp dword ptr [0xcfaab4] */
  SPILL(); f_4e3553(); return; /* Core!??DFRotator@@QBE?AV0@M@Z */
}

void f_9850b6(void) {
  LOAD_REGS();
L_9850b6: /* 9850b6: jmp dword ptr [0xcfaab8] */
  SPILL(); f_4e3b1b(); return; /* Core!??HFPlane@@QBE?AV0@ABV0@@Z */
}

void f_9850bc(void) {
  LOAD_REGS();
L_9850bc: /* 9850bc: jmp dword ptr [0xcfaabc] */
  SPILL(); f_4e40ed(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAF@Z */
}

void f_9850c2(void) {
  LOAD_REGS();
L_9850c2: /* 9850c2: jmp dword ptr [0xcfaac0] */
  SPILL(); f_4e143d(); return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */
}

void f_9850c8(void) {
  LOAD_REGS();
L_9850c8: /* 9850c8: jmp dword ptr [0xcfaac4] */
  SPILL(); f_4e1f32(); return; /* Core!??0FModelCoords@@QAE@XZ */
}

void f_9850ce(void) {
  LOAD_REGS();
L_9850ce: /* 9850ce: jmp dword ptr [0xcfaac8] */
  SPILL(); f_4e2b35(); return; /* Core!??0FSphere@@QAE@XZ */
}

void f_9850d4(void) {
  LOAD_REGS();
L_9850d4: /* 9850d4: jmp dword ptr [0xcfaacc] */
  SPILL(); f_4e34e0(); return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */
}

void f_9850da(void) {
  LOAD_REGS();
L_9850da: /* 9850da: jmp dword ptr [0xcfaad0] */
  SPILL(); f_4e21da(); return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */
}

void f_9850e0(void) {
  LOAD_REGS();
L_9850e0: /* 9850e0: jmp dword ptr [0xcfaad4] */
  SPILL(); f_4e4174(); return; /* Core!??GFRotator@@QBE?AV0@ABV0@@Z */
}

void f_9850e6(void) {
  LOAD_REGS();
L_9850e6: /* 9850e6: jmp dword ptr [0xcfaad8] */
  SPILL(); f_4e231f(); return; /* Core!?GetMax@FVector@@QBEMXZ */
}

void f_9850ec(void) {
  LOAD_REGS();
L_9850ec: /* 9850ec: jmp dword ptr [0xcfaadc] */
  SPILL(); f_4e2b76(); return; /* Core!?appStrfind@@YAPBGPBG0@Z */
}

void f_9850f2(void) {
  LOAD_REGS();
L_9850f2: /* 9850f2: jmp dword ptr [0xcfaae0] */
  SPILL(); f_4e4089(); return; /* Core!?GetMin@FRange@@QBEMXZ */
}

void f_9850f8(void) {
  LOAD_REGS();
L_9850f8: /* 9850f8: jmp dword ptr [0xcfaae4] */
  SPILL(); f_4e37ba(); return; /* Core!?appSRand@@YAMXZ */
}

void f_9850fe(void) {
  LOAD_REGS();
L_9850fe: /* 9850fe: jmp dword ptr [0xcfaae8] */
  SPILL(); f_4e342c(); return; /* Core!?SinFloat@FGlobalMath@@QAEMM@Z */
}

void f_985104(void) {
  LOAD_REGS();
L_985104: /* 985104: jmp dword ptr [0xcfaaec] */
  SPILL(); f_4e31ed(); return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */
}

void f_98510a(void) {
  LOAD_REGS();
L_98510a: /* 98510a: jmp dword ptr [0xcfaaf0] */
  SPILL(); f_4e31c5(); return; /* Core!?MirrorByVector@FVector@@QBE?AV1@ABV1@@Z */
}

void f_985110(void) {
  LOAD_REGS();
L_985110: /* 985110: jmp dword ptr [0xcfaaf4] */
  SPILL(); f_4e1532(); return; /* Core!?GetCenter@FRange@@QBEMXZ */
}

void f_985116(void) {
  LOAD_REGS();
L_985116: /* 985116: jmp dword ptr [0xcfaaf8] */
  SPILL(); f_4e31ca(); return; /* Core!??HFBox@@QBE?AV0@ABV0@@Z */
}

void f_98511c(void) {
  LOAD_REGS();
L_98511c: /* 98511c: jmp dword ptr [0xcfaafc] */
  SPILL(); f_4e1136(); return; /* Core!??_0FVector@@QAE?AV0@M@Z */
}

void f_985122(void) {
  LOAD_REGS();
L_985122: /* 985122: jmp dword ptr [0xcfab00] */
  SPILL(); f_4e1843(); return; /* Core!?IsZero@FRotator@@QBEHXZ */
}

void f_985128(void) {
  LOAD_REGS();
L_985128: /* 985128: jmp dword ptr [0xcfab04] */
  SPILL(); f_4e2aef(); return; /* Core!??0FExec@@QAE@XZ */
}

void f_98512e(void) {
  LOAD_REGS();
L_98512e: /* 98512e: jmp dword ptr [0xcfab08] */
  SPILL(); f_4e2a3b(); return; /* Core!?appTan@@YANN@Z */
}

void f_985134(void) {
  LOAD_REGS();
L_985134: /* 985134: jmp dword ptr [0xcfab0c] */
  SPILL(); f_4e30f8(); return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */
}

void f_98513a(void) {
  LOAD_REGS();
L_98513a: /* 98513a: jmp dword ptr [0xcfab10] */
  SPILL(); f_4e3346(); return; /* Core!?ParseIntoArray@FString@@QAEHPBGPAV?$TArray@VFString@@@@@Z */
}

void f_985140(void) {
  LOAD_REGS();
L_985140: /* 985140: jmp dword ptr [0xcfab18] */
  SPILL(); f_4e10ff(); return; /* Core!?TransformBy@FSphere@@QBE?AV1@ABVFMatrix@@@Z */
}

void f_985146(void) {
  LOAD_REGS();
L_985146: /* 985146: jmp dword ptr [0xcfab1c] */
  SPILL(); f_4e21c1(); return; /* Core!?GetAbsMax@FVector@@QBEMXZ */
}

void f_98514c(void) {
  LOAD_REGS();
L_98514c: /* 98514c: jmp dword ptr [0xcfab24] */
  SPILL(); f_4e3549(); return; /* Core!?appIsNan@@YAHN@Z */
}

void f_985152(void) {
  LOAD_REGS();
L_985152: /* 985152: jmp dword ptr [0xcfab28] */
  SPILL(); f_4e1587(); return; /* Core!?appFmod@@YANNN@Z */
}

void f_985158(void) {
  LOAD_REGS();
L_985158: /* 985158: jmp dword ptr [0xcfab2c] */
  SPILL(); f_4e2eff(); return; /* Core!?appAtan2@@YANNN@Z */
}

void f_98515e(void) {
  LOAD_REGS();
L_98515e: /* 98515e: jmp dword ptr [0xcfab34] */
  SPILL(); f_4e34f4(); return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */
}

void f_985164(void) {
  LOAD_REGS();
L_985164: /* 985164: jmp dword ptr [0xcfab38] */
  SPILL(); f_4e349f(); return; /* Core!?TransformBy@FPlane@@QBE?AV1@ABVFMatrix@@@Z */
}

void f_98516a(void) {
  LOAD_REGS();
L_98516a: /* 98516a: jmp dword ptr [0xcfab3c] */
  SPILL(); f_4e35bc(); return; /* Core!?GetIndexedObject@UObject@@SAPAV1@H@Z */
}

void f_985170(void) {
  LOAD_REGS();
L_985170: /* 985170: jmp dword ptr [0xcfab40] */
  SPILL(); f_4e37e7(); return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */
}

void f_985176(void) {
  LOAD_REGS();
L_985176: /* 985176: jmp dword ptr [0xcfab44] */
  SPILL(); f_4e3855(); return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */
}

void f_98517c(void) {
  LOAD_REGS();
L_98517c: /* 98517c: jmp dword ptr [0xcfab48] */
  SPILL(); f_4e40ca(); return; /* Core!?appAtan@@YANN@Z */
}

void f_985182(void) {
  LOAD_REGS();
L_985182: /* 985182: jmp dword ptr [0xcfab4c] */
  SPILL(); f_4e24c8(); return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */
}

void f_985188(void) {
  LOAD_REGS();
L_985188: /* 985188: jmp dword ptr [0xcfab50] */
  SPILL(); f_4e39bd(); return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */
}

void f_98518e(void) {
  LOAD_REGS();
L_98518e: /* 98518e: jmp dword ptr [0xcfab54] */
  SPILL(); f_4e2121(); return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */
}

void f_985194(void) {
  LOAD_REGS();
L_985194: /* 985194: jmp dword ptr [0xcfab58] */
  SPILL(); f_4e219e(); return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */
}

void f_98519a(void) {
  LOAD_REGS();
L_98519a: /* 98519a: jmp dword ptr [0xcfab5c] */
  SPILL(); f_4e1f5a(); return; /* Core!?FindArrayProperty@UObject@@QAEHVFString@@PAPAVFArray@@PAH@Z */
}

void f_9851a0(void) {
  LOAD_REGS();
L_9851a0: /* 9851a0: jmp dword ptr [0xcfab60] */
  SPILL(); f_4e1e79(); return; /* Core!?appClipboardPaste@@YA?AVFString@@XZ */
}

void f_9851a6(void) {
  LOAD_REGS();
L_9851a6: /* 9851a6: jmp dword ptr [0xcfab68] */
  SPILL(); f_4e2e1e(); return; /* Core!?ReadWord@FFrame@@QAEHXZ */
}

void f_9851ac(void) {
  LOAD_REGS();
L_9851ac: /* 9851ac: jmp dword ptr [0xcfab6c] */
  SPILL(); f_4e44a3(); return; /* Core!?IsError@FArchive@@QAEHXZ */
}

void f_9851b2(void) {
  LOAD_REGS();
L_9851b2: /* 9851b2: jmp dword ptr [0xcfab70] */
  SPILL(); f_4e1c9e(); return; /* Core!?Matches@UProperty@@QBEHPBX0H@Z */
}

void f_9851b8(void) {
  LOAD_REGS();
L_9851b8: /* 9851b8: jmp dword ptr [0xcfab74] */
  SPILL(); f_4e24eb(); return; /* Core!?WriteBit@FBitWriter@@QAEXE@Z */
}

void f_9851be(void) {
  LOAD_REGS();
L_9851be: /* 9851be: jmp dword ptr [0xcfab78] */
  SPILL(); f_4e33dc(); return; /* Core!?WriteInt@FBitWriter@@QAEXKK@Z */
}

void f_9851c4(void) {
  LOAD_REGS();
L_9851c4: /* 9851c4: jmp dword ptr [0xcfab7c] */
  SPILL(); f_4e3382(); return; /* Core!?GetMaxIndex@FClassNetCache@@QAEHXZ */
}

void f_9851ca(void) {
  LOAD_REGS();
L_9851ca: /* 9851ca: jmp dword ptr [0xcfab80] */
  SPILL(); f_4e3ffd(); return; /* Core!?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */
}

void f_9851d0(void) {
  LOAD_REGS();
L_9851d0: /* 9851d0: jmp dword ptr [0xcfab84] */
  SPILL(); f_4e33e6(); return; /* Core!??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */
}

void f_9851d6(void) {
  LOAD_REGS();
L_9851d6: /* 9851d6: jmp dword ptr [0xcfab88] */
  SPILL(); f_4e1dc5(); return; /* Core!?GetSuperFunction@UFunction@@QBEPAV1@XZ */
}

void f_9851dc(void) {
  LOAD_REGS();
L_9851dc: /* 9851dc: jmp dword ptr [0xcfab8c] */
  SPILL(); f_4e213a(); return; /* Core!?StaticClass@UStruct@@SAPAVUClass@@XZ */
}

void f_9851e2(void) {
  LOAD_REGS();
L_9851e2: /* 9851e2: jmp dword ptr [0xcfab90] */
  SPILL(); f_4e3cd8(); return; /* Core!?FunctionMD5@UStruct@@QAE?AVFString@@XZ */
}

void f_9851e8(void) {
  LOAD_REGS();
L_9851e8: /* 9851e8: jmp dword ptr [0xcfab94] */
  SPILL(); f_4e2653(); return; /* Core!??0FScale@@QAE@ABVFVector@@MW4ESheerAxis@@@Z */
}

void f_9851ee(void) {
  LOAD_REGS();
L_9851ee: /* 9851ee: jmp dword ptr [0xcfab98] */
  SPILL(); f_4e3f99(); return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */
}

void f_9851f4(void) {
  LOAD_REGS();
L_9851f4: /* 9851f4: jmp dword ptr [0xcfab9c] */
  SPILL(); f_4e1212(); return; /* Core!?appAcos@@YANN@Z */
}

void f_9851fa(void) {
  LOAD_REGS();
L_9851fa: /* 9851fa: jmp dword ptr [0xcfaba0] */
  SPILL(); f_4e39f4(); return; /* Core!?StaticClass@UDelegateProperty@@SAPAVUClass@@XZ */
}

void f_985200(void) {
  LOAD_REGS();
L_985200: /* 985200: jmp dword ptr [0xcfaba4] */
  SPILL(); f_4e2d33(); return; /* Core!??XFCoords@@QAEAAV0@ABV0@@Z */
}

void f_985206(void) {
  LOAD_REGS();
L_985206: /* 985206: jmp dword ptr [0xcfaba8] */
  SPILL(); f_4e405c(); return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */
}

void f_98520c(void) {
  LOAD_REGS();
L_98520c: /* 98520c: jmp dword ptr [0xcfabac] */
  SPILL(); f_4e126c(); return; /* Core!?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */
}

void f_985212(void) {
  LOAD_REGS();
L_985212: /* 985212: jmp dword ptr [0xcfabb0] */
  SPILL(); f_4e44bc(); return; /* Core!?PivotInverse@FCoords@@QBE?AV1@XZ */
}

void f_985218(void) {
  LOAD_REGS();
L_985218: /* 985218: jmp dword ptr [0xcfabb4] */
  SPILL(); f_4e2ed2(); return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */
}

void f_98521e(void) {
  LOAD_REGS();
L_98521e: /* 98521e: jmp dword ptr [0xcfabb8] */
  SPILL(); f_4e3198(); return; /* Core!??MFString@@QBEHABV0@@Z */
}

void f_985224(void) {
  LOAD_REGS();
L_985224: /* 985224: jmp dword ptr [0xcfabbc] */
  SPILL(); f_4e1c8a(); return; /* Core!??OFString@@QBEHABV0@@Z */
}

void f_98522a(void) {
  LOAD_REGS();
L_98522a: /* 98522a: jmp dword ptr [0xcfabc4] */
  SPILL(); f_4e1f2d(); return; /* Core!?GetNonParallel@FVector@@QAE?AV1@XZ */
}

void f_985230(void) {
  LOAD_REGS();
L_985230: /* 985230: jmp dword ptr [0xcfabc8] */
  SPILL(); f_4e1a5a(); return; /* Core!?Parse@@YAHPBG0AAVFString@@@Z */
}

void f_985236(void) {
  LOAD_REGS();
L_985236: /* 985236: jmp dword ptr [0xcfabcc] */
  SPILL(); f_4e4381(); return; /* Core!?Parse@@YAHPBG0AAE@Z */
}

void f_98523c(void) {
  LOAD_REGS();
L_98523c: /* 98523c: jmp dword ptr [0xcfabd0] */
  SPILL(); f_4e1cbc(); return; /* Core!?DestroyValue@UArrayProperty@@UBEXPAX@Z */
}

void f_985242(void) {
  LOAD_REGS();
L_985242: /* 985242: jmp dword ptr [0xcfabd4] */
  SPILL(); f_4e3152(); return; /* Core!?CopyCompleteValue@UArrayProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_985248(void) {
  LOAD_REGS();
L_985248: /* 985248: jmp dword ptr [0xcfabd8] */
  SPILL(); f_4e2626(); return; /* Core!?CopySingleValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_98524e(void) {
  LOAD_REGS();
L_98524e: /* 98524e: jmp dword ptr [0xcfabdc] */
  SPILL(); f_4e3166(); return; /* Core!?ImportText@UArrayProperty@@UBEPBGPBGPAEH@Z */
}

void f_985254(void) {
  LOAD_REGS();
L_985254: /* 985254: jmp dword ptr [0xcfabe0] */
  SPILL(); f_4e3085(); return; /* Core!?ExportTextItem@UArrayProperty@@UBEXPAGPAE1H@Z */
}

void f_98525a(void) {
  LOAD_REGS();
L_98525a: /* 98525a: jmp dword ptr [0xcfabe4] */
  SPILL(); f_4e32f6(); return; /* Core!?NetSerializeItem@UArrayProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_985260(void) {
  LOAD_REGS();
L_985260: /* 985260: jmp dword ptr [0xcfabe8] */
  SPILL(); f_4e4039(); return; /* Core!?SerializeItem@UArrayProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_985266(void) {
  LOAD_REGS();
L_985266: /* 985266: jmp dword ptr [0xcfabec] */
  SPILL(); f_4e1c53(); return; /* Core!?ExportCppItem@UArrayProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_98526c(void) {
  LOAD_REGS();
L_98526c: /* 98526c: jmp dword ptr [0xcfabf0] */
  SPILL(); f_4e3422(); return; /* Core!?Identical@UArrayProperty@@UBEHPBX0@Z */
}

void f_985272(void) {
  LOAD_REGS();
L_985272: /* 985272: jmp dword ptr [0xcfabf4] */
  SPILL(); f_4e1d07(); return; /* Core!?Link@UArrayProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_985278(void) {
  LOAD_REGS();
L_985278: /* 985278: jmp dword ptr [0xcfabf8] */
  SPILL(); f_4e1758(); return; /* Core!?CleanupDestroyed@UArrayProperty@@UBEXPAE@Z */
}

void f_98527e(void) {
  LOAD_REGS();
L_98527e: /* 98527e: jmp dword ptr [0xcfabfc] */
  SPILL(); f_4e1956(); return; /* Core!?AddCppProperty@UArrayProperty@@UAEXPAVUProperty@@@Z */
}

void f_985284(void) {
  LOAD_REGS();
L_985284: /* 985284: jmp dword ptr [0xcfac00] */
  SPILL(); f_4e3e2c(); return; /* Core!?Serialize@UArrayProperty@@UAEXAAVFArchive@@@Z */
}

void f_98528a(void) {
  LOAD_REGS();
L_98528a: /* 98528a: jmp dword ptr [0xcfac04] */
  SPILL(); f_4e3698(); return; /* Core!?CopyCompleteValue@UObjectProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_985290(void) {
  LOAD_REGS();
L_985290: /* 985290: jmp dword ptr [0xcfac08] */
  SPILL(); f_4e2f95(); return; /* Core!?CopySingleValue@UObjectProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_985296(void) {
  LOAD_REGS();
L_985296: /* 985296: jmp dword ptr [0xcfac0c] */
  SPILL(); f_4e18c5(); return; /* Core!?ImportText@UObjectProperty@@UBEPBGPBGPAEH@Z */
}

void f_98529c(void) {
  LOAD_REGS();
L_98529c: /* 98529c: jmp dword ptr [0xcfac10] */
  SPILL(); f_4e16db(); return; /* Core!?ExportTextItem@UObjectProperty@@UBEXPAGPAE1H@Z */
}

void f_9852a2(void) {
  LOAD_REGS();
L_9852a2: /* 9852a2: jmp dword ptr [0xcfac14] */
  SPILL(); f_4e19c4(); return; /* Core!?NetSerializeItem@UObjectProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_9852a8(void) {
  LOAD_REGS();
L_9852a8: /* 9852a8: jmp dword ptr [0xcfac18] */
  SPILL(); f_4e3b75(); return; /* Core!?SerializeItem@UObjectProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_9852ae(void) {
  LOAD_REGS();
L_9852ae: /* 9852ae: jmp dword ptr [0xcfac1c] */
  SPILL(); f_4e2a22(); return; /* Core!?ExportCppItem@UObjectProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_9852b4(void) {
  LOAD_REGS();
L_9852b4: /* 9852b4: jmp dword ptr [0xcfac20] */
  SPILL(); f_4e2fcc(); return; /* Core!?Identical@UObjectProperty@@UBEHPBX0@Z */
}

void f_9852ba(void) {
  LOAD_REGS();
L_9852ba: /* 9852ba: jmp dword ptr [0xcfac24] */
  SPILL(); f_4e3724(); return; /* Core!?Link@UObjectProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_9852c0(void) {
  LOAD_REGS();
L_9852c0: /* 9852c0: jmp dword ptr [0xcfac28] */
  SPILL(); f_4e1523(); return; /* Core!?CleanupDestroyed@UObjectProperty@@UBEXPAE@Z */
}

void f_9852c6(void) {
  LOAD_REGS();
L_9852c6: /* 9852c6: jmp dword ptr [0xcfac2c] */
  SPILL(); f_4e2c52(); return; /* Core!?Serialize@UObjectProperty@@UAEXAAVFArchive@@@Z */
}

void f_9852cc(void) {
  LOAD_REGS();
L_9852cc: /* 9852cc: jmp dword ptr [0xcfac30] */
  SPILL(); f_4e26ee(); return; /* Core!??0UArrayProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_9852d2(void) {
  LOAD_REGS();
L_9852d2: /* 9852d2: jmp dword ptr [0xcfac34] */
  SPILL(); f_4e2ea5(); return; /* Core!??2UArrayProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_9852d8(void) {
  LOAD_REGS();
L_9852d8: /* 9852d8: jmp dword ptr [0xcfac38] */
  SPILL(); f_4e15b4(); return; /* Core!??0UObjectProperty@@QAE@W4ECppProperty@@HPBGKPAVUClass@@@Z */
}

void f_9852de(void) {
  LOAD_REGS();
L_9852de: /* 9852de: jmp dword ptr [0xcfac3c] */
  SPILL(); f_4e18ac(); return; /* Core!??2UObjectProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_9852e4(void) {
  LOAD_REGS();
L_9852e4: /* 9852e4: jmp dword ptr [0xcfac40] */
  SPILL(); f_4e286a(); return; /* Core!??1UObjectProperty@@UAE@XZ */
}

void f_9852ea(void) {
  LOAD_REGS();
L_9852ea: /* 9852ea: jmp dword ptr [0xcfac44] */
  SPILL(); f_4e371a(); return; /* Core!??1UArrayProperty@@UAE@XZ */
}

void f_9852f0(void) {
  LOAD_REGS();
L_9852f0: /* 9852f0: jmp dword ptr [0xcfac48] */
  SPILL(); f_4e31a2(); return; /* Core!?LicenseeVer@FArchive@@QAEHXZ */
}

void f_9852f6(void) {
  LOAD_REGS();
L_9852f6: /* 9852f6: jmp dword ptr [0xcfac4c] */
  SPILL(); f_4e3918(); return; /* Core!??_0FCoords@@QAEAAV0@ABVFVector@@@Z */
}

void f_9852fc(void) {
  LOAD_REGS();
L_9852fc: /* 9852fc: jmp dword ptr [0xcfac50] */
  SPILL(); f_4e1c7b(); return; /* Core!?GetSRand@FRangeVector@@QBE?AVFVector@@XZ */
}

void f_985302(void) {
  LOAD_REGS();
L_985302: /* 985302: jmp dword ptr [0xcfac54] */
  SPILL(); f_4e1e29(); return; /* Core!?GetSRand@FRange@@QBEMXZ */
}

void f_985308(void) {
  LOAD_REGS();
L_985308: /* 985308: jmp dword ptr [0xcfac58] */
  SPILL(); f_4e2991(); return; /* Core!?appSRandInit@@YAXH@Z */
}

void f_98530e(void) {
  LOAD_REGS();
L_98530e: /* 98530e: jmp dword ptr [0xcfac5c] */
  SPILL(); f_4e2595(); return; /* Core!?GetMax@FRangeVector@@QBE?AVFVector@@XZ */
}

void f_985314(void) {
  LOAD_REGS();
L_985314: /* 985314: jmp dword ptr [0xcfac60] */
  SPILL(); f_4e3701(); return; /* Core!??KFPlane@@QBE?AV0@M@Z */
}

void f_98531a(void) {
  LOAD_REGS();
L_98531a: /* 98531a: jmp dword ptr [0xcfac64] */
  SPILL(); f_4e2ea0(); return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */
}

void f_985320(void) {
  LOAD_REGS();
L_985320: /* 985320: jmp dword ptr [0xcfac68] */
  SPILL(); f_4e3d32(); return; /* Core!??BFString@@QBEHXZ */
}

void f_985326(void) {
  LOAD_REGS();
L_985326: /* 985326: jmp dword ptr [0xcfac6c] */
  SPILL(); f_4e3238(); return; /* Core!?IsZero@FRange@@QBEHXZ */
}

void f_98532c(void) {
  LOAD_REGS();
L_98532c: /* 98532c: jmp dword ptr [0xcfac70] */
  SPILL(); f_4e1ac8(); return; /* Core!??0FRange@@QAE@MM@Z */
}

void f_985332(void) {
  LOAD_REGS();
L_985332: /* 985332: jmp dword ptr [0xcfac74] */
  SPILL(); f_4e2441(); return; /* Core!??0FBitReader@@QAE@PAEH@Z */
}

void f_985338(void) {
  LOAD_REGS();
L_985338: /* 985338: jmp dword ptr [0xcfac78] */
  SPILL(); f_4e149c(); return; /* Core!??0FBitWriter@@QAE@H@Z */
}

void f_98533e(void) {
  LOAD_REGS();
L_98533e: /* 98533e: jmp dword ptr [0xcfac7c] */
  SPILL(); f_4e2130(); return; /* Core!?SetOverflowed@FBitWriter@@QAEXXZ */
}

void f_985344(void) {
  LOAD_REGS();
L_985344: /* 985344: jmp dword ptr [0xcfac80] */
  SPILL(); f_4e331e(); return; /* Core!?GetFlags@UObject@@QBEKXZ */
}

void f_98534a(void) {
  LOAD_REGS();
L_98534a: /* 98534a: jmp dword ptr [0xcfac84] */
  SPILL(); f_4e19bf(); return; /* Core!??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */
}

void f_985350(void) {
  LOAD_REGS();
L_985350: /* 985350: jmp dword ptr [0xcfac88] */
  SPILL(); f_4e42cd(); return; /* Core!?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */
}

void f_985356(void) {
  LOAD_REGS();
L_985356: /* 985356: jmp dword ptr [0xcfac8c] */
  SPILL(); f_4e21ee(); return; /* Core!?GetData@FBitWriter@@QAEPAEXZ */
}

void f_98535c(void) {
  LOAD_REGS();
L_98535c: /* 98535c: jmp dword ptr [0xcfac90] */
  SPILL(); f_4e30da(); return; /* Core!?GetNumBytes@FBitWriter@@QAEHXZ */
}

void f_985362(void) {
  LOAD_REGS();
L_985362: /* 985362: jmp dword ptr [0xcfac94] */
  SPILL(); f_4e3daa(); return; /* Core!?GetNumBits@FBitWriter@@QAEHXZ */
}

void f_985368(void) {
  LOAD_REGS();
L_985368: /* 985368: jmp dword ptr [0xcfac98] */
  SPILL(); f_4e43a4(); return; /* Core!?GetNumBits@FBitWriterMark@@QAEHXZ */
}

void f_98536e(void) {
  LOAD_REGS();
L_98536e: /* 98536e: jmp dword ptr [0xcfac9c] */
  SPILL(); f_4e1a87(); return; /* Core!?GetData@FBitReader@@QAEPAEXZ */
}

void f_985374(void) {
  LOAD_REGS();
L_985374: /* 985374: jmp dword ptr [0xcfaca0] */
  SPILL(); f_4e2f1d(); return; /* Core!?GetNumBytes@FBitReader@@QAEHXZ */
}

void f_98537a(void) {
  LOAD_REGS();
L_98537a: /* 98537a: jmp dword ptr [0xcfaca4] */
  SPILL(); f_4e2aa9(); return; /* Core!?ExitProperties@UObject@@SAXPAEPAVUClass@@@Z */
}

void f_985380(void) {
  LOAD_REGS();
L_985380: /* 985380: jmp dword ptr [0xcfaca8] */
  SPILL(); f_4e2ab3(); return; /* Core!?GetSize@UProperty@@QBEHXZ */
}

void f_985386(void) {
  LOAD_REGS();
L_985386: /* 985386: jmp dword ptr [0xcfacac] */
  SPILL(); f_4e11c7(); return; /* Core!?InitProperties@UObject@@SAXPAEHPAVUClass@@0HPAV1@2@Z */
}

void f_98538c(void) {
  LOAD_REGS();
L_98538c: /* 98538c: jmp dword ptr [0xcfacb0] */
  SPILL(); f_4e4485(); return; /* Core!?GetRepConditionCount@FClassNetCache@@QAEHXZ */
}

void f_985392(void) {
  LOAD_REGS();
L_985392: /* 985392: jmp dword ptr [0xcfacb4] */
  SPILL(); f_4e1dfc(); return; /* Core!?ReadBit@FBitReader@@QAEEXZ */
}

void f_985398(void) {
  LOAD_REGS();
L_985398: /* 985398: jmp dword ptr [0xcfacb8] */
  SPILL(); f_4e164a(); return; /* Core!?GetFromIndex@FClassNetCache@@QAEPAVFFieldNetCache@@H@Z */
}

void f_98539e(void) {
  LOAD_REGS();
L_98539e: /* 98539e: jmp dword ptr [0xcfacbc] */
  SPILL(); f_4e1230(); return; /* Core!?ReadInt@FBitReader@@QAEKK@Z */
}

void f_9853a4(void) {
  LOAD_REGS();
L_9853a4: /* 9853a4: jmp dword ptr [0xcfacc0] */
  SPILL(); f_4e4561(); return; /* Core!?IsValidIndex@FArray@@QBEHH@Z */
}

void f_9853aa(void) {
  LOAD_REGS();
L_9853aa: /* 9853aa: jmp dword ptr [0xcfacc4] */
  SPILL(); f_4e3b16(); return; /* Core!?IsCriticalError@FArchive@@QAEHXZ */
}

void f_9853b0(void) {
  LOAD_REGS();
L_9853b0: /* 9853b0: jmp dword ptr [0xcfacc8] */
  SPILL(); f_4e1ff0(); return; /* Core!?GetNumBits@FBitReader@@QAEHXZ */
}

void f_9853b6(void) {
  LOAD_REGS();
L_9853b6: /* 9853b6: jmp dword ptr [0xcfaccc] */
  SPILL(); f_4e21d0(); return; /* Core!?SetData@FBitReader@@QAEXAAU1@H@Z */
}

void f_9853bc(void) {
  LOAD_REGS();
L_9853bc: /* 9853bc: jmp dword ptr [0xcfacd0] */
  SPILL(); f_4e35df(); return; /* Core!?GetPosBits@FBitReader@@QAEHXZ */
}

void f_9853c2(void) {
  LOAD_REGS();
L_9853c2: /* 9853c2: jmp dword ptr [0xcfacd4] */
  SPILL(); f_4e23e2(); return; /* Core!??0FBitWriterMark@@QAE@XZ */
}

void f_9853c8(void) {
  LOAD_REGS();
L_9853c8: /* 9853c8: jmp dword ptr [0xcfacd8] */
  SPILL(); f_4e368e(); return; /* Core!?appFindPackageFile@@YAHPBGPBVFGuid@@PAG@Z */
}

void f_9853ce(void) {
  LOAD_REGS();
L_9853ce: /* 9853ce: jmp dword ptr [0xcfacdc] */
  SPILL(); f_4e44cb(); return; /* Core!?Parse@@YAHPBG0AAK@Z */
}

void f_9853d4(void) {
  LOAD_REGS();
L_9853d4: /* 9853d4: jmp dword ptr [0xcface0] */
  SPILL(); f_4e2b12(); return; /* Core!??0FPackageInfo@@QAE@PAVULinkerLoad@@@Z */
}

void f_9853da(void) {
  LOAD_REGS();
L_9853da: /* 9853da: jmp dword ptr [0xcface4] */
  SPILL(); f_4e43cc(); return; /* Core!?CopyLinkers@UPackageMap@@QAEXPAV1@@Z */
}

void f_9853e0(void) {
  LOAD_REGS();
L_9853e0: /* 9853e0: jmp dword ptr [0xcface8] */
  SPILL(); f_4e4539(); return; /* Core!??6FArchive@@UAEAAV0@AAVFName@@@Z */
}

void f_9853e6(void) {
  LOAD_REGS();
L_9853e6: /* 9853e6: jmp dword ptr [0xcfacec] */
  SPILL(); f_4e34b3(); return; /* Core!??6FArchive@@UAEAAV0@AAPAVUObject@@@Z */
}

void f_9853ec(void) {
  LOAD_REGS();
L_9853ec: /* 9853ec: jmp dword ptr [0xcfacf0] */
  SPILL(); f_4e1f64(); return; /* Core!?SerializeInt@FArchive@@UAEXAAKK@Z */
}

void f_9853f2(void) {
  LOAD_REGS();
L_9853f2: /* 9853f2: jmp dword ptr [0xcfacf4] */
  SPILL(); f_4e409d(); return; /* Core!?SerializeBits@FArchive@@UAEXPAXH@Z */
}

void f_9853f8(void) {
  LOAD_REGS();
L_9853f8: /* 9853f8: jmp dword ptr [0xcfacf8] */
  SPILL(); f_4e4264(); return; /* Core!?appCreateTempFilename@@YAXPBGPAG@Z */
}

void f_9853fe(void) {
  LOAD_REGS();
L_9853fe: /* 9853fe: jmp dword ptr [0xcfacfc] */
  SPILL(); f_4e1168(); return; /* Core!??1FBufferReader@@UAE@XZ */
}

void f_985404(void) {
  LOAD_REGS();
L_985404: /* 985404: jmp dword ptr [0xcfad00] */
  SPILL(); f_4e2c39(); return; /* Core!??0FBufferReader@@QAE@ABV?$TArray@E@@@Z */
}

void f_98540a(void) {
  LOAD_REGS();
L_98540a: /* 98540a: jmp dword ptr [0xcfa7fc] */
  SPILL(); f_4e193d(); return; /* Core!??0UStrProperty@@QAE@XZ */
}

void f_985410(void) {
  LOAD_REGS();
L_985410: /* 985410: jmp dword ptr [0xcfa194] */
  SPILL(); f_4e22d9(); return; /* Core!?SerializeObject@UPackageMap@@UAEHAAVFArchive@@PAVUClass@@AAPAVUObject@@@Z */
}

void f_985416(void) {
  LOAD_REGS();
L_985416: /* 985416: jmp dword ptr [0xcfa190] */
  SPILL(); f_4e20b8(); return; /* Core!?CanSerializeObject@UPackageMap@@UAEHPAVUObject@@@Z */
}

void f_98541c(void) {
  LOAD_REGS();
L_98541c: /* 98541c: jmp dword ptr [0xcfa18c] */
  SPILL(); f_4e10af(); return; /* Core!??2UPackageMap@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_985422(void) {
  LOAD_REGS();
L_985422: /* 985422: jmp dword ptr [0xcfa188] */
  SPILL(); f_4e37c4(); return; /* Core!?StaticClass@UPackageMap@@SAPAVUClass@@XZ */
}

void f_985428(void) {
  LOAD_REGS();
L_985428: /* 985428: jmp dword ptr [0xcfa184] */
  SPILL(); f_4e2d83(); return; /* Core!?ParseUBOOL@@YAHPBG0AAH@Z */
}

void f_985430(void) {
  LOAD_REGS();
L_985430: /* 985430: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 985433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985434: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 985438: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985439: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 98543d: mov eax, ebx */
  eax = ebx;
/* 98543f: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 985442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985443: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 985447: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 98544a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98544b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98544c: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x985451u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 985451: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 985455: mov ecx, edi */
  ecx = edi;
/* 985457: imul ecx, dword ptr [esp + 0x38] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x38u)));
  ecx = (uint32_t)r;
  }
/* 98545c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98545f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985460: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 985464: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x985469u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 985469: imul ebp, esi */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(esi);
  ebp = (uint32_t)r;
  }
/* 98546c: lea edx, [ebp*4] */
  edx = (uint32_t)(ebp*4);
/* 985473: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985474: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 985478: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 98547c: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x985481u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 985481: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985484: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985486: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98548a: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 985492: jle 0x985588 */
  if ((zf || sf != of)) goto L_985588;
L_985498: /* 985498: jmp 0x9854a0 */
  goto L_9854a0;
L_98549a: /* 98549a: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 98549e: mov edi, edi */
  edi = edi;
L_9854a0: /* 9854a0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9854a4: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9854a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9854ac: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 9854af: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9854b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9854b5: jle 0x9854ff */
  if ((zf || sf != of)) goto L_9854ff;
L_9854b7: /* 9854b7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9854bb: jmp 0x9854c0 */
  goto L_9854c0;
L_9854c0: /* 9854c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9854c2: mov eax, esi */
  eax = esi;
/* 9854c4: jle 0x9854ea */
  if ((zf || sf != of)) goto L_9854ea;
L_9854c6: /* 9854c6: mov edx, edi */
  edx = edi;
/* 9854c8: jmp 0x9854d0 */
  goto L_9854d0;
L_9854d0: /* 9854d0: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 9854d3: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9854d7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9854da: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9854dc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9854dd: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9854e1: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 9854e4: jne 0x9854d0 */
  if (!zf) goto L_9854d0;
L_9854e6: /* 9854e6: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
L_9854ea: /* 9854ea: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9854ee: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9854f2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9854f4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9854f5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9854f9: jne 0x9854c0 */
  if (!zf) goto L_9854c0;
L_9854fb: /* 9854fb: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_9854ff: /* 9854ff: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 985503: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 985507: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 98550b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98550c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98550d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98550e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98550f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985510: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 985514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985515: call 0x987280 */
  esp -= 4; W32(esp, 0x98551au); SPILL(); f_987280(); if (g_unwind) return; RELOAD();
/* 98551a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98551e: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 985522: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985525: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985527: mov edi, esi */
  edi = esi;
/* 985529: lea esi, [edx + ecx] */
  esi = (uint32_t)(edx + ecx);
/* 98552c: jle 0x985577 */
  if ((zf || sf != of)) goto L_985577;
L_98552e: /* 98552e: mov edi, edi */
  edi = edi;
L_985530: /* 985530: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 985532: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 985535: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98553b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98553d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 985540: jp 0x98554c */
  if (pf) goto L_98554c;
L_985542: /* 985542: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985544: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98554a: jmp 0x985561 */
  goto L_985561;
L_98554c: /* 98554c: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 985552: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 985554: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 985557: jne 0x985561 */
  if (!zf) goto L_985561;
L_985559: /* 985559: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98555b: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_985561: /* 985561: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 985567: call 0x99c958 */
  esp -= 4; W32(esp, 0x98556cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98556c: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 98556e: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 985570: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 985571: jne 0x985530 */
  if (!zf) goto L_985530;
L_985573: /* 985573: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_985577: /* 985577: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 98557b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98557c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98557e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 985582: jl 0x98549a */
  if ((sf != of)) goto L_98549a;
L_985588: /* 985588: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98558c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98558d: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x985592u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 985592: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 985596: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985597: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98559cu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98559c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9855a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9855a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9855a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9855a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9855a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9854bd(void) {
  LOAD_REGS();
  goto L_9854bd;
L_98549a: /* 98549a: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 98549e: mov edi, edi */
  edi = edi;
/* 9854a0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9854a4: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9854a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9854ac: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 9854af: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9854b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9854b5: jle 0x9854ff */
  if ((zf || sf != of)) goto L_9854ff;
L_9854b7: /* 9854b7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9854bb: jmp 0x9854c0 */
  goto L_9854c0;
L_9854bd: /* 9854bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9854c0: /* 9854c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9854c2: mov eax, esi */
  eax = esi;
/* 9854c4: jle 0x9854ea */
  if ((zf || sf != of)) goto L_9854ea;
L_9854c6: /* 9854c6: mov edx, edi */
  edx = edi;
/* 9854c8: jmp 0x9854d0 */
  goto L_9854d0;
L_9854d0: /* 9854d0: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 9854d3: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9854d7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9854da: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9854dc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9854dd: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9854e1: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 9854e4: jne 0x9854d0 */
  if (!zf) goto L_9854d0;
L_9854e6: /* 9854e6: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
L_9854ea: /* 9854ea: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9854ee: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9854f2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9854f4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9854f5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9854f9: jne 0x9854c0 */
  if (!zf) goto L_9854c0;
L_9854fb: /* 9854fb: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_9854ff: /* 9854ff: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 985503: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 985507: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 98550b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98550c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98550d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98550e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98550f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985510: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 985514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985515: call 0x987280 */
  esp -= 4; W32(esp, 0x98551au); SPILL(); f_987280(); if (g_unwind) return; RELOAD();
/* 98551a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98551e: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 985522: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985525: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985527: mov edi, esi */
  edi = esi;
/* 985529: lea esi, [edx + ecx] */
  esi = (uint32_t)(edx + ecx);
/* 98552c: jle 0x985577 */
  if ((zf || sf != of)) goto L_985577;
L_98552e: /* 98552e: mov edi, edi */
  edi = edi;
L_985530: /* 985530: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 985532: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 985535: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98553b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98553d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 985540: jp 0x98554c */
  if (pf) goto L_98554c;
L_985542: /* 985542: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985544: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98554a: jmp 0x985561 */
  goto L_985561;
L_98554c: /* 98554c: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 985552: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 985554: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 985557: jne 0x985561 */
  if (!zf) goto L_985561;
L_985559: /* 985559: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98555b: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_985561: /* 985561: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 985567: call 0x99c958 */
  esp -= 4; W32(esp, 0x98556cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98556c: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 98556e: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 985570: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 985571: jne 0x985530 */
  if (!zf) goto L_985530;
L_985573: /* 985573: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_985577: /* 985577: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 98557b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98557c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98557e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 985582: jl 0x98549a */
  if ((sf != of)) goto L_98549a;
L_985588: /* 985588: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98558c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98558d: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x985592u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 985592: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 985596: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985597: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98559cu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98559c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9855a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9855a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9855a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9855a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9855a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9854ca(void) {
  LOAD_REGS();
  goto L_9854ca;
L_98549a: /* 98549a: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 98549e: mov edi, edi */
  edi = edi;
/* 9854a0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9854a4: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9854a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9854ac: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 9854af: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9854b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9854b5: jle 0x9854ff */
  if ((zf || sf != of)) goto L_9854ff;
L_9854b7: /* 9854b7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9854bb: jmp 0x9854c0 */
  goto L_9854c0;
L_9854c0: /* 9854c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9854c2: mov eax, esi */
  eax = esi;
/* 9854c4: jle 0x9854ea */
  if ((zf || sf != of)) goto L_9854ea;
L_9854c6: /* 9854c6: mov edx, edi */
  edx = edi;
/* 9854c8: jmp 0x9854d0 */
  goto L_9854d0;
L_9854ca: /* 9854ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9854d0: /* 9854d0: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 9854d3: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9854d7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9854da: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9854dc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9854dd: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9854e1: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 9854e4: jne 0x9854d0 */
  if (!zf) goto L_9854d0;
L_9854e6: /* 9854e6: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
L_9854ea: /* 9854ea: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9854ee: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9854f2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9854f4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9854f5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9854f9: jne 0x9854c0 */
  if (!zf) goto L_9854c0;
L_9854fb: /* 9854fb: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_9854ff: /* 9854ff: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 985503: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 985507: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 98550b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98550c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98550d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98550e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98550f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985510: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 985514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985515: call 0x987280 */
  esp -= 4; W32(esp, 0x98551au); SPILL(); f_987280(); if (g_unwind) return; RELOAD();
/* 98551a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98551e: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 985522: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985525: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985527: mov edi, esi */
  edi = esi;
/* 985529: lea esi, [edx + ecx] */
  esi = (uint32_t)(edx + ecx);
/* 98552c: jle 0x985577 */
  if ((zf || sf != of)) goto L_985577;
L_98552e: /* 98552e: mov edi, edi */
  edi = edi;
L_985530: /* 985530: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 985532: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 985535: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98553b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98553d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 985540: jp 0x98554c */
  if (pf) goto L_98554c;
L_985542: /* 985542: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985544: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98554a: jmp 0x985561 */
  goto L_985561;
L_98554c: /* 98554c: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 985552: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 985554: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 985557: jne 0x985561 */
  if (!zf) goto L_985561;
L_985559: /* 985559: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98555b: fld dword ptr [0x9f7c10] */
  { double v = F32((uint32_t)(0x9f7c10u)); FPUSH(v); }
L_985561: /* 985561: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 985567: call 0x99c958 */
  esp -= 4; W32(esp, 0x98556cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98556c: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 98556e: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 985570: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 985571: jne 0x985530 */
  if (!zf) goto L_985530;
L_985573: /* 985573: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_985577: /* 985577: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 98557b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98557c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98557e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 985582: jl 0x98549a */
  if ((sf != of)) goto L_98549a;
L_985588: /* 985588: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98558c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98558d: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x985592u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 985592: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 985596: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985597: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98559cu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98559c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9855a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9855a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9855a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9855a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9855a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9855b0(void) {
  LOAD_REGS();
L_9855b0: /* 9855b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9855b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9855b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9855b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9855ba: call 0x6c8f94 */
  esp -= 4; W32(esp, 0x9855bfu); SPILL(); f_6c8f94(); if (g_unwind) return; RELOAD();
/* 9855bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855c2: ret  */
  esp += 4; SPILL(); return;
}

void f_9855d0(void) {
  LOAD_REGS();
L_9855d0: /* 9855d0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9855d4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9855d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9855d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9855da: call 0x6c9ead */
  esp -= 4; W32(esp, 0x9855dfu); SPILL(); f_6c9ead(); if (g_unwind) return; RELOAD();
/* 9855df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9855e2: ret  */
  esp += 4; SPILL(); return;
}

void f_9855f0(void) {
  LOAD_REGS();
L_9855f0: /* 9855f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9855f1: push 0x23b4 */
  { uint32_t v = 0x23b4u; esp -= 4; W32(esp, v); }
/* 9855f6: call 0x6c242d */
  esp -= 4; W32(esp, 0x9855fbu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9855fb: mov edi, eax */
  edi = eax;
/* 9855fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985600: xor eax, eax */
  eax = 0;
/* 985602: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985604: mov dword ptr [0xcf2fd4], edi */
  W32((uint32_t)(0xcf2fd4u), edi);
/* 98560a: je 0x98570b */
  if (zf) goto L_98570b;
L_985610: /* 985610: mov ecx, 0x8ed */
  ecx = 0x8edu;
/* 985615: push 0x4dc */
  { uint32_t v = 0x4dcu; esp -= 4; W32(esp, v); }
/* 98561a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 98561c: call 0x6c242d */
  esp -= 4; W32(esp, 0x985621u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 985621: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 985627: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 98562a: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 98562f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 985632: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985635: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985637: jne 0x985646 */
  if (!zf) goto L_985646;
L_985639: /* 985639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98563a: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98563fu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98563f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985642: xor eax, eax */
  eax = 0;
/* 985644: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985645: ret  */
  esp += 4; SPILL(); return;
L_985646: /* 985646: xor eax, eax */
  eax = 0;
/* 985648: mov ecx, 0x137 */
  ecx = 0x137u;
/* 98564d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 98564f: mov edx, dword ptr [0xcf2fd4] */
  edx = R32((uint32_t)(0xcf2fd4u));
/* 985655: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985656: call 0x988000 */
  esp -= 4; W32(esp, 0x98565bu); SPILL(); f_988000(); if (g_unwind) return; RELOAD();
/* 98565b: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 985661: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 985664: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985667: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985669: jle 0x9856f5 */
  if ((zf || sf != of)) goto L_9856f5;
L_98566f: /* 98566f: movsx ecx, word ptr [edx + 0x30] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x30u)));
/* 985673: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 985677: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 985679: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 98567f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 985682: movsx ecx, word ptr [edx + 0x2e] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x2eu)));
/* 985686: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 98568a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 98568c: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 985692: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 985695: movsx ecx, word ptr [edx + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x34u)));
/* 985699: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98569d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 98569f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9856a3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9856a5: mov edx, dword ptr [0xcf2fd4] */
  edx = R32((uint32_t)(0xcf2fd4u));
/* 9856ab: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 9856ae: movsx edx, word ptr [eax + 0x30] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x30u)));
/* 9856b2: movsx ecx, word ptr [eax + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 9856b6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9856ba: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 9856bd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9856bf: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 9856c5: mov edx, dword ptr [ecx + 0x2374] */
  edx = R32((uint32_t)(ecx + 0x2374u));
/* 9856cb: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9856cf: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9856d1: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 9856d7: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9856da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9856db: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9856e0u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9856e0: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 9856e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9856e6: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9856ebu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9856eb: mov eax, dword ptr [0xcf2ff0] */
  eax = R32((uint32_t)(0xcf2ff0u));
/* 9856f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9856f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9856f4: ret  */
  esp += 4; SPILL(); return;
L_9856f5: /* 9856f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9856f6: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9856fbu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9856fb: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985701: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x985706u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 985706: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985709: xor eax, eax */
  eax = 0;
L_98570b: /* 98570b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98570c: ret  */
  esp += 4; SPILL(); return;
}

void f_985710(void) {
  LOAD_REGS();
L_985710: /* 985710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 985714: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985717: jae 0x98571c */
  if (!cf) goto L_98571c;
L_985719: /* 985719: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 98571b: ret  */
  esp += 4; SPILL(); return;
L_98571c: /* 98571c: jne 0x985721 */
  if (!zf) goto L_985721;
L_98571e: /* 98571e: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 985720: ret  */
  esp += 4; SPILL(); return;
L_985721: /* 985721: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 985724: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 985726: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 985728: sbb cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98572a: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98572c: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98572e: ret  */
  esp += 4; SPILL(); return;
}

void f_985730(void) {
  LOAD_REGS();
L_985730: /* 985730: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 985734: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985737: jb 0x985745 */
  if (cf) goto L_985745;
L_985739: /* 985739: je 0x985742 */
  if (zf) goto L_985742;
L_98573b: /* 98573b: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 98573e: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985740: jne 0x985745 */
  if (!zf) goto L_985745;
L_985742: /* 985742: mov eax, edx */
  eax = edx;
/* 985744: ret  */
  esp += 4; SPILL(); return;
L_985745: /* 985745: xor ecx, ecx */
  ecx = 0;
L_985747: /* 985747: cmp edx, dword ptr [ecx*4 + 0xb03ef0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb03ef0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98574e: jle 0x985759 */
  if ((zf || sf != of)) goto L_985759;
L_985750: /* 985750: cmp edx, dword ptr [ecx*4 + 0xb03ef4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb03ef4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 985757: jl 0x985763 */
  if ((sf != of)) goto L_985763;
L_985759: /* 985759: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98575a: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98575d: jb 0x985747 */
  if (cf) goto L_985747;
L_98575f: /* 98575f: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_985762: /* 985762: ret  */
  esp += 4; SPILL(); return;
L_985763: /* 985763: mov eax, dword ptr [ecx*4 + 0xb03ef0] */
  eax = R32((uint32_t)(ecx*4 + 0xb03ef0u));
/* 98576a: mov ecx, dword ptr [ecx*4 + 0xb03ef4] */
  ecx = R32((uint32_t)(ecx*4 + 0xb03ef4u));
/* 985771: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985772: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985773: mov esi, edx */
  esi = edx;
/* 985775: mov edi, ecx */
  edi = ecx;
/* 985777: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 985779: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98577b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98577d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98577e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98577f: jg 0x985762 */
  if ((!zf && sf == of)) goto L_985762;
L_985781: /* 985781: mov eax, ecx */
  eax = ecx;
/* 985783: ret  */
  esp += 4; SPILL(); return;
}

void f_985790(void) {
  LOAD_REGS();
L_985790: /* 985790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 985794: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985797: jb 0x9857a2 */
  if (cf) goto L_9857a2;
L_985799: /* 985799: je 0x9857bf */
  if (zf) goto L_9857bf;
L_98579b: /* 98579b: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 98579e: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9857a0: je 0x9857bf */
  if (zf) goto L_9857bf;
L_9857a2: /* 9857a2: xor ecx, ecx */
  ecx = 0;
L_9857a4: /* 9857a4: cmp eax, dword ptr [ecx*4 + 0xb03ef0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb03ef0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9857ab: jle 0x9857b6 */
  if ((zf || sf != of)) goto L_9857b6;
L_9857ad: /* 9857ad: cmp eax, dword ptr [ecx*4 + 0xb03ef4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb03ef4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9857b4: jl 0x9857c0 */
  if ((sf != of)) goto L_9857c0;
L_9857b6: /* 9857b6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9857b7: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9857ba: jb 0x9857a4 */
  if (cf) goto L_9857a4;
L_9857bc: /* 9857bc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_9857bf: /* 9857bf: ret  */
  esp += 4; SPILL(); return;
L_9857c0: /* 9857c0: mov eax, dword ptr [ecx*4 + 0xb03ef4] */
  eax = R32((uint32_t)(ecx*4 + 0xb03ef4u));
/* 9857c7: ret  */
  esp += 4; SPILL(); return;
}

void f_9857d0(void) {
  LOAD_REGS();
L_9857d0: /* 9857d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9857d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9857d7: jb 0x9857e2 */
  if (cf) goto L_9857e2;
L_9857d9: /* 9857d9: je 0x9857ff */
  if (zf) goto L_9857ff;
L_9857db: /* 9857db: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 9857de: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9857e0: je 0x9857ff */
  if (zf) goto L_9857ff;
L_9857e2: /* 9857e2: xor ecx, ecx */
  ecx = 0;
L_9857e4: /* 9857e4: cmp eax, dword ptr [ecx*4 + 0xb03ef0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb03ef0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9857eb: jle 0x9857f6 */
  if ((zf || sf != of)) goto L_9857f6;
L_9857ed: /* 9857ed: cmp eax, dword ptr [ecx*4 + 0xb03ef4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb03ef4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9857f4: jl 0x985800 */
  if ((sf != of)) goto L_985800;
L_9857f6: /* 9857f6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9857f7: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9857fa: jb 0x9857e4 */
  if (cf) goto L_9857e4;
L_9857fc: /* 9857fc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_9857ff: /* 9857ff: ret  */
  esp += 4; SPILL(); return;
L_985800: /* 985800: mov eax, dword ptr [ecx*4 + 0xb03ef0] */
  eax = R32((uint32_t)(ecx*4 + 0xb03ef0u));
/* 985807: ret  */
  esp += 4; SPILL(); return;
}

void f_985810(void) {
  LOAD_REGS();
L_985810: /* 985810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 985814: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985817: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985818: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98581c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98581d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 985821: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985822: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 985826: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 985828: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 98582a: jb 0x985859 */
  if (cf) goto L_985859;
L_98582c: /* 98582c: je 0x985835 */
  if (zf) goto L_985835;
L_98582e: /* 98582e: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 985831: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985833: jne 0x98584d */
  if (!zf) goto L_98584d;
L_985835: /* 985835: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985838: jb 0x98584d */
  if (cf) goto L_98584d;
L_98583a: /* 98583a: je 0x985843 */
  if (zf) goto L_985843;
L_98583c: /* 98583c: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* 98583f: test esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985841: jne 0x98584d */
  if (!zf) goto L_98584d;
L_985843: /* 985843: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 985845: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985846: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 985848: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985849: xor eax, eax */
  eax = 0;
/* 98584b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98584c: ret  */
  esp += 4; SPILL(); return;
L_98584d: /* 98584d: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 985850: je 0x985864 */
  if (zf) goto L_985864;
L_985852: /* 985852: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 985855: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985857: je 0x985864 */
  if (zf) goto L_985864;
L_985859: /* 985859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98585a: call 0x985730 */
  esp -= 4; W32(esp, 0x98585fu); SPILL(); f_985730(); if (g_unwind) return; RELOAD();
/* 98585f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985862: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_985864: /* 985864: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985867: jb 0x985872 */
  if (cf) goto L_985872;
L_985869: /* 985869: je 0x98587d */
  if (zf) goto L_98587d;
L_98586b: /* 98586b: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* 98586e: test esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985870: je 0x98587d */
  if (zf) goto L_98587d;
L_985872: /* 985872: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985873: call 0x985730 */
  esp -= 4; W32(esp, 0x985878u); SPILL(); f_985730(); if (g_unwind) return; RELOAD();
/* 985878: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98587b: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_98587d: /* 98587d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98587e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98587f: mov eax, 1 */
  eax = 0x1u;
/* 985884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 985885: ret  */
  esp += 4; SPILL(); return;
}

void f_985890(void) {
  LOAD_REGS();
L_985890: /* 985890: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 985894: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985897: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98589b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98589c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9858a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9858a1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9858a5: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9858a7: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 9858a9: jb 0x9858d7 */
  if (cf) goto L_9858d7;
L_9858ab: /* 9858ab: je 0x9858b4 */
  if (zf) goto L_9858b4;
L_9858ad: /* 9858ad: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 9858b0: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9858b2: jne 0x9858cb */
  if (!zf) goto L_9858cb;
L_9858b4: /* 9858b4: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9858b7: jb 0x9858cb */
  if (cf) goto L_9858cb;
L_9858b9: /* 9858b9: je 0x9858c2 */
  if (zf) goto L_9858c2;
L_9858bb: /* 9858bb: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 9858be: test edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9858c0: jne 0x9858cb */
  if (!zf) goto L_9858cb;
L_9858c2: /* 9858c2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9858c4: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 9858c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9858c7: xor eax, eax */
  eax = 0;
/* 9858c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9858ca: ret  */
  esp += 4; SPILL(); return;
L_9858cb: /* 9858cb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9858ce: je 0x9858e2 */
  if (zf) goto L_9858e2;
L_9858d0: /* 9858d0: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 9858d3: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9858d5: je 0x9858e2 */
  if (zf) goto L_9858e2;
L_9858d7: /* 9858d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9858d8: call 0x985790 */
  esp -= 4; W32(esp, 0x9858ddu); SPILL(); f_985790(); if (g_unwind) return; RELOAD();
/* 9858dd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9858e0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_9858e2: /* 9858e2: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9858e5: jb 0x9858f0 */
  if (cf) goto L_9858f0;
L_9858e7: /* 9858e7: je 0x9858fb */
  if (zf) goto L_9858fb;
L_9858e9: /* 9858e9: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 9858ec: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9858ee: je 0x9858fb */
  if (zf) goto L_9858fb;
L_9858f0: /* 9858f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9858f1: call 0x985790 */
  esp -= 4; W32(esp, 0x9858f6u); SPILL(); f_985790(); if (g_unwind) return; RELOAD();
/* 9858f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9858f9: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_9858fb: /* 9858fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9858fc: mov eax, 1 */
  eax = 0x1u;
/* 985901: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985902: ret  */
  esp += 4; SPILL(); return;
}

void f_985910(void) {
  LOAD_REGS();
L_985910: /* 985910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 985914: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985917: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98591b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98591c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 985920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985921: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 985925: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 985927: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 985929: jb 0x985957 */
  if (cf) goto L_985957;
L_98592b: /* 98592b: je 0x985934 */
  if (zf) goto L_985934;
L_98592d: /* 98592d: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 985930: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985932: jne 0x98594b */
  if (!zf) goto L_98594b;
L_985934: /* 985934: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985937: jb 0x98594b */
  if (cf) goto L_98594b;
L_985939: /* 985939: je 0x985942 */
  if (zf) goto L_985942;
L_98593b: /* 98593b: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 98593e: test edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985940: jne 0x98594b */
  if (!zf) goto L_98594b;
L_985942: /* 985942: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 985944: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 985946: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985947: xor eax, eax */
  eax = 0;
/* 985949: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98594a: ret  */
  esp += 4; SPILL(); return;
L_98594b: /* 98594b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98594e: je 0x985962 */
  if (zf) goto L_985962;
L_985950: /* 985950: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 985953: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985955: je 0x985962 */
  if (zf) goto L_985962;
L_985957: /* 985957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985958: call 0x9857d0 */
  esp -= 4; W32(esp, 0x98595du); SPILL(); f_9857d0(); if (g_unwind) return; RELOAD();
/* 98595d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985960: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_985962: /* 985962: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985965: jb 0x985970 */
  if (cf) goto L_985970;
L_985967: /* 985967: je 0x98597b */
  if (zf) goto L_98597b;
L_985969: /* 985969: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 98596c: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98596e: je 0x98597b */
  if (zf) goto L_98597b;
L_985970: /* 985970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985971: call 0x9857d0 */
  esp -= 4; W32(esp, 0x985976u); SPILL(); f_9857d0(); if (g_unwind) return; RELOAD();
/* 985976: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985979: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_98597b: /* 98597b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98597c: mov eax, 1 */
  eax = 0x1u;
/* 985981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985982: ret  */
  esp += 4; SPILL(); return;
}

void f_985990(void) {
  LOAD_REGS();
L_985990: /* 985990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 985994: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 985997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985999: jne 0x9859a2 */
  if (!zf) goto L_9859a2;
L_98599b: /* 98599b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98599e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9859a1: ret  */
  esp += 4; SPILL(); return;
L_9859a2: /* 9859a2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9859a6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9859a9: je 0x9859b9 */
  if (zf) goto L_9859b9;
L_9859ab: /* 9859ab: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9859ae: je 0x9859b9 */
  if (zf) goto L_9859b9;
L_9859b0: /* 9859b0: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 9859b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9859b8: ret  */
  esp += 4; SPILL(); return;
L_9859b9: /* 9859b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9859ba: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 9859be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9859bf: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9859c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9859c4: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9859c8: movsx eax, word ptr [esi + 0x32] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi + 0x32u)));
/* 9859cc: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9859cf: jl 0x985a19 */
  if ((sf != of)) goto L_985a19;
L_9859d1: /* 9859d1: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9859d4: jg 0x985a19 */
  if ((!zf && sf == of)) goto L_985a19;
L_9859d6: /* 9859d6: cmp word ptr [esi + 0x30], 0x51 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x30u))); uint16_t b = (uint16_t)(0x51u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9859db: mov edx, ebx */
  edx = ebx;
/* 9859dd: jne 0x9859ed */
  if (!zf) goto L_9859ed;
L_9859df: /* 9859df: mov eax, 0x2aaaaaab */
  eax = 0x2aaaaaabu;
/* 9859e4: imul ebx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 9859e6: mov eax, edx */
  eax = edx;
/* 9859e8: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 9859eb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_9859ed: /* 9859ed: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9859f0: jb 0x985a08 */
  if (cf) goto L_985a08;
L_9859f2: /* 9859f2: je 0x9859fb */
  if (zf) goto L_9859fb;
L_9859f4: /* 9859f4: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 9859f7: test edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9859f9: jne 0x985a08 */
  if (!zf) goto L_985a08;
L_9859fb: /* 9859fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9859fc: call 0x985710 */
  esp -= 4; W32(esp, 0x985a01u); SPILL(); f_985710(); if (g_unwind) return; RELOAD();
/* 985a01: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985a04: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 985a06: jne 0x985a19 */
  if (!zf) goto L_985a19;
L_985a08: /* 985a08: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 985a0b: jne 0x985a19 */
  if (!zf) goto L_985a19;
L_985a0d: /* 985a0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985a0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 985a0f: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 985a14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 985a15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985a18: ret  */
  esp += 4; SPILL(); return;
L_985a19: /* 985a19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985a1a: push 0x23b4 */
  { uint32_t v = 0x23b4u; esp -= 4; W32(esp, v); }
/* 985a1f: call 0x6c242d */
  esp -= 4; W32(esp, 0x985a24u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 985a24: mov edi, eax */
  edi = eax;
/* 985a26: xor eax, eax */
  eax = 0;
/* 985a28: mov dword ptr [0xcf2fd4], edi */
  W32((uint32_t)(0xcf2fd4u), edi);
/* 985a2e: mov ecx, 0x8ed */
  ecx = 0x8edu;
/* 985a33: push 0x4dc */
  { uint32_t v = 0x4dcu; esp -= 4; W32(esp, v); }
/* 985a38: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 985a3a: call 0x6c242d */
  esp -= 4; W32(esp, 0x985a3fu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 985a3f: mov edx, dword ptr [0xcf2fd4] */
  edx = R32((uint32_t)(0xcf2fd4u));
/* 985a45: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 985a48: mov edx, dword ptr [0xcf2fd4] */
  edx = R32((uint32_t)(0xcf2fd4u));
/* 985a4e: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 985a51: xor eax, eax */
  eax = 0;
/* 985a53: mov ecx, 0x137 */
  ecx = 0x137u;
/* 985a58: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 985a5a: mov edi, dword ptr [0xcf2fd4] */
  edi = R32((uint32_t)(0xcf2fd4u));
/* 985a60: add edi, 0x2378 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2378u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 985a66: mov ecx, 0xe */
  ecx = 0xeu;
/* 985a6b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 985a6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985a70: xor esi, esi */
  esi = 0;
/* 985a72: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985a75: jb 0x985a96 */
  if (cf) goto L_985a96;
L_985a77: /* 985a77: je 0x985a80 */
  if (zf) goto L_985a80;
L_985a79: /* 985a79: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 985a7c: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985a7e: jne 0x985a96 */
  if (!zf) goto L_985a96;
L_985a80: /* 985a80: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 985a83: jb 0x985a96 */
  if (cf) goto L_985a96;
L_985a85: /* 985a85: je 0x985ba1 */
  if (zf) goto L_985ba1;
L_985a8b: /* 985a8b: lea ecx, [ebp - 1] */
  ecx = (uint32_t)(ebp + 0xffffffffu);
/* 985a8e: test ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985a90: je 0x985ba1 */
  if (zf) goto L_985ba1;
L_985a96: /* 985a96: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 985a9a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 985a9c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 985a9d: je 0x985b52 */
  if (zf) goto L_985b52;
L_985aa3: /* 985aa3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 985aa4: je 0x985b03 */
  if (zf) goto L_985b03;
L_985aa6: /* 985aa6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 985aa7: jne 0x985ba1 */
  if (!zf) goto L_985ba1;
L_985aad: /* 985aad: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 985ab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985ab2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 985ab6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985ab7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985ab8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985ab9: call 0x985910 */
  esp -= 4; W32(esp, 0x985abeu); SPILL(); f_985910(); if (g_unwind) return; RELOAD();
/* 985abe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 985ac2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 985ac6: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 985aca: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 985ace: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985acf: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 985ad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985ad4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985ad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985ad6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985ad7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985ad8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985ad9: call 0x985430 */
  esp -= 4; W32(esp, 0x985adeu); SPILL(); f_985430(); if (g_unwind) return; RELOAD();
/* 985ade: mov esi, eax */
  esi = eax;
/* 985ae0: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985ae3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985ae5: je 0x985ba5 */
  if (zf) goto L_985ba5;
L_985aeb: /* 985aeb: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 985aef: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 985af3: mov ebx, edi */
  ebx = edi;
/* 985af5: imul edi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edi = (uint32_t)r;
  }
/* 985afa: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 985afe: jmp 0x985ba5 */
  goto L_985ba5;
L_985b03: /* 985b03: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 985b07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985b08: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 985b0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985b0d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985b0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985b0f: call 0x985890 */
  esp -= 4; W32(esp, 0x985b14u); SPILL(); f_985890(); if (g_unwind) return; RELOAD();
/* 985b14: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 985b18: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 985b1c: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 985b20: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 985b24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985b25: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 985b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985b2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985b2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985b2c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985b2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985b2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985b2f: call 0x985430 */
  esp -= 4; W32(esp, 0x985b34u); SPILL(); f_985430(); if (g_unwind) return; RELOAD();
/* 985b34: mov esi, eax */
  esi = eax;
/* 985b36: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985b39: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985b3b: je 0x985ba5 */
  if (zf) goto L_985ba5;
L_985b3d: /* 985b3d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 985b41: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 985b45: mov ebx, edi */
  ebx = edi;
/* 985b47: imul edi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edi = (uint32_t)r;
  }
/* 985b4c: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 985b50: jmp 0x985ba5 */
  goto L_985ba5;
L_985b52: /* 985b52: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 985b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985b57: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 985b5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985b5c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985b5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985b5e: call 0x985810 */
  esp -= 4; W32(esp, 0x985b63u); SPILL(); f_985810(); if (g_unwind) return; RELOAD();
/* 985b63: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 985b67: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 985b6b: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 985b6f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 985b73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985b74: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 985b78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985b79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985b7b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985b7c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985b7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985b7e: call 0x985430 */
  esp -= 4; W32(esp, 0x985b83u); SPILL(); f_985430(); if (g_unwind) return; RELOAD();
/* 985b83: mov esi, eax */
  esi = eax;
/* 985b85: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985b88: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985b8a: je 0x985ba5 */
  if (zf) goto L_985ba5;
L_985b8c: /* 985b8c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 985b90: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 985b94: mov ebx, edi */
  ebx = edi;
/* 985b96: imul edi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edi = (uint32_t)r;
  }
/* 985b9b: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 985b9f: jmp 0x985ba5 */
  goto L_985ba5;
L_985ba1: /* 985ba1: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_985ba5: /* 985ba5: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985baa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 985bad: mov word ptr [ecx + 0x30], bx */
  W16((uint32_t)(ecx + 0x30u), (ebx & 0xffffu));
/* 985bb1: mov edx, dword ptr [0xcf2fd4] */
  edx = R32((uint32_t)(0xcf2fd4u));
/* 985bb7: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 985bba: mov word ptr [eax + 0x2e], bp */
  W16((uint32_t)(eax + 0x2eu), (ebp & 0xffffu));
/* 985bbe: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 985bc4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 985bc7: mov ax, word ptr [esp + 0x30] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x30u))) & 0xffffu);
/* 985bcc: mov word ptr [edx + 0x34], ax */
  W16((uint32_t)(edx + 0x34u), (eax & 0xffffu));
/* 985bd0: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 985bd6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 985bda: mov dword ptr [ecx + 0x2010], edx */
  W32((uint32_t)(ecx + 0x2010u), edx);
/* 985be0: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985be5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 985be8: xor ecx, ecx */
  ecx = 0;
/* 985bea: mov word ptr [edx + 0x346], cx */
  W16((uint32_t)(edx + 0x346u), (ecx & 0xffffu));
/* 985bf1: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985bf6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 985bf9: mov dx, word ptr [eax + 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 985bfd: mov word ptr [eax + 0x34a], dx */
  W16((uint32_t)(eax + 0x34au), (edx & 0xffffu));
/* 985c04: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985c09: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 985c0c: mov word ptr [edx + 0x344], cx */
  W16((uint32_t)(edx + 0x344u), (ecx & 0xffffu));
/* 985c13: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985c18: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 985c1b: mov dx, word ptr [eax + 0x2e] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2eu))) & 0xffffu);
/* 985c1f: mov word ptr [eax + 0x348], dx */
  W16((uint32_t)(eax + 0x348u), (edx & 0xffffu));
/* 985c26: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985c2b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 985c2e: mov dx, word ptr [eax + 0x34] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x34u))) & 0xffffu);
/* 985c32: mov word ptr [eax + 0x350], dx */
  W16((uint32_t)(eax + 0x350u), (edx & 0xffffu));
/* 985c39: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985c3e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 985c41: mov dword ptr [edx + 0x354], edi */
  W32((uint32_t)(edx + 0x354u), edi);
/* 985c47: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985c4c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 985c4f: mov dword ptr [edx + 0x358], 1 */
  W32((uint32_t)(edx + 0x358u), 0x1u);
/* 985c59: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985c5e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 985c61: mov eax, dword ptr [eax + 0x2010] */
  eax = R32((uint32_t)(eax + 0x2010u));
/* 985c67: mov dword ptr [edx + 0x340], eax */
  W32((uint32_t)(edx + 0x340u), eax);
/* 985c6d: mov edx, dword ptr [0xcf2fd4] */
  edx = R32((uint32_t)(0xcf2fd4u));
/* 985c73: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 985c76: mov word ptr [eax + 0x34c], cx */
  W16((uint32_t)(eax + 0x34cu), (ecx & 0xffffu));
/* 985c7d: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 985c83: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 985c86: mov dx, word ptr [eax + 0x34] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x34u))) & 0xffffu);
/* 985c8a: dec dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 985c8c: mov word ptr [eax + 0x34e], dx */
  W16((uint32_t)(eax + 0x34eu), (edx & 0xffffu));
/* 985c93: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 985c97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985c98: mov eax, dword ptr [0xcf2fd4] */
  eax = R32((uint32_t)(0xcf2fd4u));
/* 985c9d: movsx ecx, word ptr [eax + 0x23aa] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x23aau)));
/* 985ca4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985ca5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985ca6: call 0x989320 */
  esp -= 4; W32(esp, 0x985cabu); SPILL(); f_989320(); if (g_unwind) return; RELOAD();
/* 985cab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985cae: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985cb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985cb1: je 0x985cbc */
  if (zf) goto L_985cbc;
L_985cb3: /* 985cb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985cb4: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x985cb9u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 985cb9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_985cbc: /* 985cbc: mov edx, dword ptr [0xcf2fd4] */
  edx = R32((uint32_t)(0xcf2fd4u));
/* 985cc2: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 985cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985cc6: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x985ccbu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 985ccb: mov ecx, dword ptr [0xcf2fd4] */
  ecx = R32((uint32_t)(0xcf2fd4u));
/* 985cd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 985cd2: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x985cd7u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 985cd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985cdb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 985cdc: xor eax, eax */
  eax = 0;
/* 985cde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 985cdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985ce2: ret  */
  esp += 4; SPILL(); return;
}

void f_985cf0(void) {
  LOAD_REGS();
L_985cf0: /* 985cf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985cf1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985cf2: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 985cf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985cf7: lea eax, [ebp*8] */
  eax = (uint32_t)(ebp*8);
/* 985cfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985cff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985d00: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x985d05u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 985d05: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985d08: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985d0a: mov esi, eax */
  esi = eax;
/* 985d0c: jle 0x985d1e */
  if ((zf || sf != of)) goto L_985d1e;
L_985d0e: /* 985d0e: mov ecx, ebp */
  ecx = ebp;
/* 985d10: and ecx, 0x1fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 985d16: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 985d18: xor eax, eax */
  eax = 0;
/* 985d1a: mov edi, esi */
  edi = esi;
/* 985d1c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_985d1e: /* 985d1e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 985d22: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 985d24: mov edx, 2 */
  edx = 0x2u;
/* 985d29: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 985d2f: lea ebx, [ebp - 1] */
  ebx = (uint32_t)(ebp + 0xffffffffu);
/* 985d32: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 985d34: fst qword ptr [eax] */
  WF64((uint32_t)(eax), ST0);
/* 985d36: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 985d39: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 985d3b: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 985d41: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 985d44: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 985d4b: mov dword ptr [esi + 0xc], 0x40000000 */
  W32((uint32_t)(esi + 0xcu), 0x40000000u);
/* 985d52: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985d54: jle 0x985d92 */
  if ((zf || sf != of)) goto L_985d92;
L_985d56: /* 985d56: mov edi, esi */
  edi = esi;
/* 985d58: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 985d5a: add ebx, -2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 985d5d: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 985d60: lea edx, [ebx + 2] */
  edx = (uint32_t)(ebx + 0x2u);
L_985d63: /* 985d63: fld qword ptr [0xa178b8] */
  { double v = F64((uint32_t)(0xa178b8u)); FPUSH(v); }
/* 985d69: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 985d6c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 985d6d: fsub qword ptr [edi + ecx - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(edi + ecx + 0xfffffff0u)));
/* 985d71: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 985d77: fst qword ptr [edi + ecx - 8] */
  WF64((uint32_t)(edi + ecx + 0xfffffff8u), ST0);
/* 985d7b: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 985d7e: fsub qword ptr [ecx - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 985d81: fld qword ptr [0xa178b8] */
  { double v = F64((uint32_t)(0xa178b8u)); FPUSH(v); }
/* 985d87: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 985d89: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 985d8b: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 985d8e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985d90: jne 0x985d63 */
  if (!zf) goto L_985d63;
L_985d92: /* 985d92: fld qword ptr [0xa178b8] */
  { double v = F64((uint32_t)(0xa178b8u)); FPUSH(v); }
/* 985d98: lea ecx, [ebp - 2] */
  ecx = (uint32_t)(ebp + 0xfffffffeu);
/* 985d9b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985d9d: fsub qword ptr [esi + edx*8 - 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + edx*8 + 0xfffffff8u)));
/* 985da1: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 985da7: fst qword ptr [esi + edx*8] */
  WF64((uint32_t)(esi + edx*8), ST0);
/* 985daa: fld qword ptr [eax + edx*8 - 8] */
  { double v = F64((uint32_t)(eax + edx*8 + 0xfffffff8u)); FPUSH(v); }
/* 985dae: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 985db4: fsubr qword ptr [eax + edx*8] */
  ST0 = (F64((uint32_t)(eax + edx*8))) - ST0;
/* 985db7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 985db9: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 985dbf: fsubr qword ptr [0xa14fa0] */
  ST0 = (F64((uint32_t)(0xa14fa0u))) - ST0;
/* 985dc5: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 985dc7: fstp qword ptr [eax + edx*8] */
  WF64((uint32_t)(eax + edx*8), ST0); FPOP();
/* 985dca: jl 0x985de4 */
  if ((sf != of)) goto L_985de4;
L_985dcc: /* 985dcc: mov edi, esi */
  edi = esi;
/* 985dce: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_985dd0: /* 985dd0: lea edx, [eax + ecx*8 + 8] */
  edx = (uint32_t)(eax + ecx*8 + 0x8u);
/* 985dd4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 985dd5: fld qword ptr [edx + edi] */
  { double v = F64((uint32_t)(edx + edi)); FPUSH(v); }
/* 985dd8: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 985dda: fsubr qword ptr [eax + ecx*8 + 8] */
  ST0 = (F64((uint32_t)(eax + ecx*8 + 0x8u))) - ST0;
/* 985dde: fstp qword ptr [eax + ecx*8 + 8] */
  WF64((uint32_t)(eax + ecx*8 + 0x8u), ST0); FPOP();
/* 985de2: jns 0x985dd0 */
  if (!sf) goto L_985dd0;
L_985de4: /* 985de4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985de5: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x985deau); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 985dea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985ded: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985dee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985def: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 985df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 985df1: ret  */
  esp += 4; SPILL(); return;
}

void f_985e00(void) {
  LOAD_REGS();
L_985e00: /* 985e00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 985e03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985e04: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 985e08: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985e09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985e0a: lea eax, [ebx*8] */
  eax = (uint32_t)(ebx*8);
/* 985e11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985e12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985e13: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x985e18u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 985e18: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985e1b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985e1d: mov edx, eax */
  edx = eax;
/* 985e1f: jle 0x985e31 */
  if ((zf || sf != of)) goto L_985e31;
L_985e21: /* 985e21: mov ecx, ebx */
  ecx = ebx;
/* 985e23: and ecx, 0x1fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 985e29: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 985e2b: xor eax, eax */
  eax = 0;
/* 985e2d: mov edi, edx */
  edi = edx;
/* 985e2f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_985e31: /* 985e31: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 985e35: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 985e37: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 985e3b: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 985e41: mov esi, 1 */
  esi = 0x1u;
/* 985e46: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 985e48: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 985e4a: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 985e4e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985e50: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 985e54: fmul qword ptr [edi] */
  ST0 = ST0 * (F64((uint32_t)(edi)));
/* 985e56: fstp qword ptr [edi] */
  WF64((uint32_t)(edi), ST0); FPOP();
/* 985e58: jle 0x985edc */
  if ((zf || sf != of)) goto L_985edc;
L_985e5e: /* 985e5e: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_985e62: /* 985e62: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 985e66: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 985e6a: fmul qword ptr [eax + esi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + esi*8 + 0xfffffff8u)));
/* 985e6e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 985e72: fst qword ptr [edx + esi*8] */
  WF64((uint32_t)(edx + esi*8), ST0);
/* 985e75: fmul qword ptr [ebp + esi*8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + esi*8)));
/* 985e79: fsubr qword ptr [ecx + esi*8] */
  ST0 = (F64((uint32_t)(ecx + esi*8))) - ST0;
/* 985e7c: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 985e82: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 985e84: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 985e87: jnp 0x985ee6 */
  if (!pf) goto L_985ee6;
L_985e89: /* 985e89: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 985e8f: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 985e91: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 985e95: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985e97: fld qword ptr [edi + esi*8 - 8] */
  { double v = F64((uint32_t)(edi + esi*8 + 0xfffffff8u)); FPUSH(v); }
/* 985e9b: fmul qword ptr [ebp + esi*8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + esi*8)));
/* 985e9f: fsubr qword ptr [edi + esi*8] */
  ST0 = (F64((uint32_t)(edi + esi*8))) - ST0;
/* 985ea2: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 985ea6: fstp qword ptr [edi + esi*8] */
  WF64((uint32_t)(edi + esi*8), ST0); FPOP();
/* 985ea9: lea esi, [ebx - 2] */
  esi = (uint32_t)(ebx + 0xfffffffeu);
/* 985eac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985eae: jl 0x985ec8 */
  if ((sf != of)) goto L_985ec8;
L_985eb0: /* 985eb0: mov ecx, edx */
  ecx = edx;
/* 985eb2: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_985eb4: /* 985eb4: lea eax, [edi + esi*8 + 8] */
  eax = (uint32_t)(edi + esi*8 + 0x8u);
/* 985eb8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 985eb9: fld qword ptr [eax + ecx] */
  { double v = F64((uint32_t)(eax + ecx)); FPUSH(v); }
/* 985ebc: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 985ebe: fsubr qword ptr [edi + esi*8 + 8] */
  ST0 = (F64((uint32_t)(edi + esi*8 + 0x8u))) - ST0;
/* 985ec2: fstp qword ptr [edi + esi*8 + 8] */
  WF64((uint32_t)(edi + esi*8 + 0x8u), ST0); FPOP();
/* 985ec6: jns 0x985eb4 */
  if (!sf) goto L_985eb4;
L_985ec8: /* 985ec8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 985eca: je 0x985ed7 */
  if (zf) goto L_985ed7;
L_985ecc: /* 985ecc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 985ecd: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x985ed2u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 985ed2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985ed5: xor edx, edx */
  edx = 0;
L_985ed7: /* 985ed7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 985ed8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 985eda: jl 0x985e62 */
  if ((sf != of)) goto L_985e62;
L_985edc: /* 985edc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985edd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985ede: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 985edf: xor eax, eax */
  eax = 0;
/* 985ee1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 985ee2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985ee5: ret  */
  esp += 4; SPILL(); return;
L_985ee6: /* 985ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985ee7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985ee9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 985eea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 985eeb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 985eee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 985eef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985ef2: ret  */
  esp += 4; SPILL(); return;
}

void f_985f00(void) {
  LOAD_REGS();
L_985f00: /* 985f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 985f01: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 985f05: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 985f08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 985f09: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 985f0d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 985f0f: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 985f15: fst dword ptr [esi] */
  WF32((uint32_t)(esi), ST0);
/* 985f17: je 0x986003 */
  if (zf) goto L_986003;
L_985f1d: /* 985f1d: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 985f20: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 985f23: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 985f25: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 985f2b: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 985f2e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 985f30: je 0x986005 */
  if (zf) goto L_986005;
L_985f36: /* 985f36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985f37: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 985f3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 985f3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 985f40: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x985f45u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 985f45: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985f48: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985f4a: mov ebx, eax */
  ebx = eax;
/* 985f4c: jle 0x985f56 */
  if ((zf || sf != of)) goto L_985f56;
L_985f4e: /* 985f4e: mov ecx, ebp */
  ecx = ebp;
/* 985f50: xor eax, eax */
  eax = 0;
/* 985f52: mov edi, ebx */
  edi = ebx;
/* 985f54: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_985f56: /* 985f56: mov ecx, 2 */
  ecx = 0x2u;
/* 985f5b: lea edi, [ebp - 1] */
  edi = (uint32_t)(ebp + 0xffffffffu);
/* 985f5e: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 985f60: mov dword ptr [ebx + 4], 0x40000000 */
  W32((uint32_t)(ebx + 0x4u), 0x40000000u);
/* 985f67: jle 0x985fa3 */
  if ((zf || sf != of)) goto L_985fa3;
L_985f69: /* 985f69: mov edx, ebx */
  edx = ebx;
/* 985f6b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 985f6d: add edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 985f70: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 985f73: lea ecx, [edi + 2] */
  ecx = (uint32_t)(edi + 0x2u);
L_985f76: /* 985f76: fld dword ptr [edx + eax - 4] */
  { double v = F32((uint32_t)(edx + eax + 0xfffffffcu)); FPUSH(v); }
/* 985f7a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 985f7d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 985f7e: fsubr qword ptr [0xa178b8] */
  ST0 = (F64((uint32_t)(0xa178b8u))) - ST0;
/* 985f84: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 985f8a: fst dword ptr [edx + eax - 4] */
  WF32((uint32_t)(edx + eax + 0xfffffffcu), ST0);
/* 985f8e: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 985f91: fsub dword ptr [eax - 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff8u)));
/* 985f94: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 985f96: fsubr qword ptr [0xa178b8] */
  ST0 = (F64((uint32_t)(0xa178b8u))) - ST0;
/* 985f9c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 985f9e: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 985fa1: jne 0x985f76 */
  if (!zf) goto L_985f76;
L_985fa3: /* 985fa3: fld dword ptr [ebx + ecx*4 - 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 985fa7: lea eax, [ebp - 2] */
  eax = (uint32_t)(ebp + 0xfffffffeu);
/* 985faa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 985fac: fsubr qword ptr [0xa178b8] */
  ST0 = (F64((uint32_t)(0xa178b8u))) - ST0;
/* 985fb2: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 985fb8: fst dword ptr [ebx + ecx*4] */
  WF32((uint32_t)(ebx + ecx*4), ST0);
/* 985fbb: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 985fbf: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 985fc5: fsubr dword ptr [esi + ecx*4] */
  ST0 = (F32((uint32_t)(esi + ecx*4))) - ST0;
/* 985fc8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 985fca: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 985fd0: fsubr qword ptr [0xa14fa0] */
  ST0 = (F64((uint32_t)(0xa14fa0u))) - ST0;
/* 985fd6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 985fd8: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 985fdb: jl 0x985ff5 */
  if ((sf != of)) goto L_985ff5;
L_985fdd: /* 985fdd: mov edx, ebx */
  edx = ebx;
/* 985fdf: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_985fe1: /* 985fe1: lea ecx, [esi + eax*4 + 4] */
  ecx = (uint32_t)(esi + eax*4 + 0x4u);
/* 985fe5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 985fe6: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 985fe9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 985feb: fsubr dword ptr [esi + eax*4 + 4] */
  ST0 = (F32((uint32_t)(esi + eax*4 + 0x4u))) - ST0;
/* 985fef: fstp dword ptr [esi + eax*4 + 4] */
  WF32((uint32_t)(esi + eax*4 + 0x4u), ST0); FPOP();
/* 985ff3: jns 0x985fe1 */
  if (!sf) goto L_985fe1;
L_985ff5: /* 985ff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 985ff6: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x985ffbu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 985ffb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 985ffe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 985fff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986000: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986002: ret  */
  esp += 4; SPILL(); return;
L_986003: /* 986003: fstp st(0) */
  STI(0) = ST0; FPOP();
L_986005: /* 986005: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986006: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986007: ret  */
  esp += 4; SPILL(); return;
}

void f_986010(void) {
  LOAD_REGS();
L_986010: /* 986010: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986011: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 986015: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986017: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 98601e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98601f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 986020: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x986025u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 986025: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986028: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98602a: mov edx, eax */
  edx = eax;
/* 98602c: jle 0x986036 */
  if ((zf || sf != of)) goto L_986036;
L_98602e: /* 98602e: mov ecx, ebx */
  ecx = ebx;
/* 986030: xor eax, eax */
  eax = 0;
/* 986032: mov edi, edx */
  edi = edx;
/* 986034: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_986036: /* 986036: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 98603a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 98603c: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 986040: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 986046: mov esi, 1 */
  esi = 0x1u;
/* 98604b: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98604d: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 98604f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 986053: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986055: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 986059: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 98605b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 98605d: jle 0x9860dd */
  if ((zf || sf != of)) goto L_9860dd;
L_98605f: /* 98605f: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_986063: /* 986063: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 986067: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98606b: fmul dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 98606f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 986073: fst dword ptr [edx + esi*4] */
  WF32((uint32_t)(edx + esi*4), ST0);
/* 986076: fmul dword ptr [ebp + esi*4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + esi*4)));
/* 98607a: fsubr dword ptr [ecx + esi*4] */
  ST0 = (F32((uint32_t)(ecx + esi*4))) - ST0;
/* 98607d: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 986083: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986085: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 986088: jnp 0x9860e4 */
  if (!pf) goto L_9860e4;
L_98608a: /* 98608a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 986090: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 986092: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 986096: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986098: fld dword ptr [edi + esi*4 - 4] */
  { double v = F32((uint32_t)(edi + esi*4 + 0xfffffffcu)); FPUSH(v); }
/* 98609c: fmul dword ptr [ebp + esi*4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + esi*4)));
/* 9860a0: fsubr dword ptr [edi + esi*4] */
  ST0 = (F32((uint32_t)(edi + esi*4))) - ST0;
/* 9860a3: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9860a7: fstp dword ptr [edi + esi*4] */
  WF32((uint32_t)(edi + esi*4), ST0); FPOP();
/* 9860aa: lea esi, [ebx - 2] */
  esi = (uint32_t)(ebx + 0xfffffffeu);
/* 9860ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9860af: jl 0x9860c9 */
  if ((sf != of)) goto L_9860c9;
L_9860b1: /* 9860b1: mov ecx, edx */
  ecx = edx;
/* 9860b3: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_9860b5: /* 9860b5: lea eax, [edi + esi*4 + 4] */
  eax = (uint32_t)(edi + esi*4 + 0x4u);
/* 9860b9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 9860ba: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 9860bd: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9860bf: fsubr dword ptr [edi + esi*4 + 4] */
  ST0 = (F32((uint32_t)(edi + esi*4 + 0x4u))) - ST0;
/* 9860c3: fstp dword ptr [edi + esi*4 + 4] */
  WF32((uint32_t)(edi + esi*4 + 0x4u), ST0); FPOP();
/* 9860c7: jns 0x9860b5 */
  if (!sf) goto L_9860b5;
L_9860c9: /* 9860c9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9860cb: je 0x9860d8 */
  if (zf) goto L_9860d8;
L_9860cd: /* 9860cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9860ce: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9860d3u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9860d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9860d6: xor edx, edx */
  edx = 0;
L_9860d8: /* 9860d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9860d9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9860db: jl 0x986063 */
  if ((sf != of)) goto L_986063;
L_9860dd: /* 9860dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9860de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9860df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9860e0: xor eax, eax */
  eax = 0;
/* 9860e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9860e3: ret  */
  esp += 4; SPILL(); return;
L_9860e4: /* 9860e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9860e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9860e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9860e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9860e9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9860ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9860ed: ret  */
  esp += 4; SPILL(); return;
}

void f_9860f0(void) {
  LOAD_REGS();
L_9860f0: /* 9860f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9860f1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 9860f5: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9860f8: jne 0x98610e */
  if (!zf) goto L_98610e;
L_9860fa: /* 9860fa: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9860fe: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 986100: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 986104: fmul qword ptr [0xa21878] */
  ST0 = ST0 * (F64((uint32_t)(0xa21878u)));
/* 98610a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98610b: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98610d: ret  */
  esp += 4; SPILL(); return;
L_98610e: /* 98610e: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986111: jne 0x986132 */
  if (!zf) goto L_986132;
L_986113: /* 986113: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 986117: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98611a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98611e: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 986124: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986125: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 986127: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 98612d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 98612f: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 986131: ret  */
  esp += 4; SPILL(); return;
L_986132: /* 986132: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 986136: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 986139: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98613a: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 986140: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 986144: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 986146: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986147: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 98614d: mov eax, 1 */
  eax = 0x1u;
/* 986152: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 986155: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986157: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986159: fadd qword ptr [edx + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(edx + 0x10u)));
/* 98615c: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98615e: jle 0x986179 */
  if ((zf || sf != of)) goto L_986179;
L_986160: /* 986160: mov ecx, edx */
  ecx = edx;
L_986162: /* 986162: fld qword ptr [ecx + 0x10] */
  { double v = F64((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 986165: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 986166: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 986168: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98616b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98616d: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986173: fstp qword ptr [esi + eax*8 - 8] */
  WF64((uint32_t)(esi + eax*8 + 0xfffffff8u), ST0); FPOP();
/* 986177: jl 0x986162 */
  if ((sf != of)) goto L_986162;
L_986179: /* 986179: fld qword ptr [edx + ebx*8 - 8] */
  { double v = F64((uint32_t)(edx + ebx*8 + 0xfffffff8u)); FPUSH(v); }
/* 98617d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98617e: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 986184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986185: fld qword ptr [edx + ebx*8 - 0x10] */
  { double v = F64((uint32_t)(edx + ebx*8 + 0xfffffff0u)); FPUSH(v); }
/* 986189: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 98618f: fadd qword ptr [edx + ebx*8 - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(edx + ebx*8 + 0xffffffe8u)));
/* 986193: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986195: fstp qword ptr [esi + ebx*8 - 8] */
  WF64((uint32_t)(esi + ebx*8 + 0xfffffff8u), ST0); FPOP();
/* 986199: call 0x985cf0 */
  esp -= 4; W32(esp, 0x98619eu); SPILL(); f_985cf0(); if (g_unwind) return; RELOAD();
/* 98619e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9861a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9861a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9861a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9861a4: ret  */
  esp += 4; SPILL(); return;
}

void f_9861b0(void) {
  LOAD_REGS();
L_9861b0: /* 9861b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9861b1: mov ebp, esp */
  ebp = esp;
/* 9861b3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9861b6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9861b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9861ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9861bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9861bc: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 9861bf: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 9861c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9861c3: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9861c8u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9861c8: mov ebx, eax */
  ebx = eax;
/* 9861ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9861cb: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 9861cf: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9861d4u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9861d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9861d5: mov esi, eax */
  esi = eax;
/* 9861d7: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9861dcu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9861dc: mov edi, eax */
  edi = eax;
/* 9861de: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9861e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9861e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9861e6: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 9861ea: jle 0x986235 */
  if ((zf || sf != of)) goto L_986235;
L_9861ec: /* 9861ec: mov ecx, ebx */
  ecx = ebx;
/* 9861ee: mov edx, edi */
  edx = edi;
/* 9861f0: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 9861f3: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9861f5: mov eax, esi */
  eax = esi;
/* 9861f7: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9861f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_986200: /* 986200: mov dword ptr [ecx + eax], 0 */
  W32((uint32_t)(ecx + eax), 0x0u);
/* 986207: mov dword ptr [ecx + eax + 4], 0 */
  W32((uint32_t)(ecx + eax + 0x4u), 0x0u);
/* 98620f: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 986215: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 98621c: mov dword ptr [edx + eax], 0 */
  W32((uint32_t)(edx + eax), 0x0u);
/* 986223: mov dword ptr [edx + eax + 4], 0 */
  W32((uint32_t)(edx + eax + 0x4u), 0x0u);
/* 98622b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98622e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 98622f: jne 0x986200 */
  if (!zf) goto L_986200;
L_986231: /* 986231: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
L_986235: /* 986235: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 986238: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98623b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98623e: fsub qword ptr [eax] */
  ST0 = ST0 - (F64((uint32_t)(eax)));
/* 986240: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 986243: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 986245: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98624d: fsub qword ptr [eax + 8] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x8u)));
/* 986250: lea eax, [edx + 8] */
  eax = (uint32_t)(edx + 0x8u);
/* 986253: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 986255: fsub qword ptr [edx] */
  ST0 = ST0 - (F64((uint32_t)(edx)));
/* 986257: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 986259: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 98625c: fsub qword ptr [eax] */
  ST0 = ST0 - (F64((uint32_t)(eax)));
/* 98625e: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 986260: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986262: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 986264: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986266: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 986268: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98626a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98626c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98626e: fstp qword ptr [edi] */
  WF64((uint32_t)(edi), ST0); FPOP();
/* 986270: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 986273: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986275: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986277: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986279: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 98627b: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986281: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 986283: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 986285: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 986287: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 986289: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 98628b: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 98628d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98628f: fstp qword ptr [edi] */
  WF64((uint32_t)(edi), ST0); FPOP();
/* 986291: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 986294: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 986295: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986298: jle 0x98633d */
  if ((zf || sf != of)) goto L_98633d;
L_98629e: /* 98629e: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9862a0: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 9862a4: mov ebx, esi */
  ebx = esi;
/* 9862a6: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9862a8: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 9862ac: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 9862b0: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9862b2: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 9862b6: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 9862b9: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9862bb: mov edi, edx */
  edi = edx;
/* 9862bd: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 9862c0: sub edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9862c3: add edx, -2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9862c6: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 9862ca: lea ebx, [edx + 1] */
  ebx = (uint32_t)(edx + 0x1u);
/* 9862cd: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_9862d1: /* 9862d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9862d3: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 9862d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9862d9: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9862dc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9862de: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9862e1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9862e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9862e4: fld qword ptr [ecx - 0x10] */
  { double v = F64((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* 9862e7: fsub qword ptr [ecx - 0x18] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xffffffe8u)));
/* 9862ea: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 9862ed: fsub qword ptr [ecx - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 9862f0: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 9862f3: fsub qword ptr [eax - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0xfffffff0u)));
/* 9862f6: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 9862f8: fld qword ptr [edi + ecx - 8] */
  { double v = F64((uint32_t)(edi + ecx + 0xfffffff8u)); FPUSH(v); }
/* 9862fc: fsub qword ptr [eax - 8] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0xfffffff8u)));
/* 9862ff: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 986301: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986303: fstp qword ptr [ebx + eax - 8] */
  WF64((uint32_t)(ebx + eax + 0xfffffff8u), ST0); FPOP();
/* 986307: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986309: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 98630d: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 98630f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986311: fstp qword ptr [ebx + eax - 8] */
  WF64((uint32_t)(ebx + eax + 0xfffffff8u), ST0); FPOP();
/* 986315: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 986319: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 98631b: fstp qword ptr [ebx + eax - 8] */
  WF64((uint32_t)(ebx + eax + 0xfffffff8u), ST0); FPOP();
/* 98631f: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 986323: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 986325: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 986327: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 986329: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 98632b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98632d: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986333: fstp qword ptr [ebx + eax - 8] */
  WF64((uint32_t)(ebx + eax + 0xfffffff8u), ST0); FPOP();
/* 986337: jne 0x9862d1 */
  if (!zf) goto L_9862d1;
L_986339: /* 986339: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_98633d: /* 98633d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 986341: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986343: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 986345: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 986348: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98634a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98634c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98634e: fstp qword ptr [ebx + eax*8] */
  WF64((uint32_t)(ebx + eax*8), ST0); FPOP();
/* 986351: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986353: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 986355: fstp qword ptr [esi + eax*8] */
  WF64((uint32_t)(esi + eax*8), ST0); FPOP();
/* 986358: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98635a: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986360: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 986362: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986364: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 986366: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 986368: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98636a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 98636c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 98636e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 986370: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 986372: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 986374: fstp qword ptr [ecx + eax*8] */
  WF64((uint32_t)(ecx + eax*8), ST0); FPOP();
/* 986377: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 98637a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98637b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98637c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98637e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 986382: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986384: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 986385: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986387: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986388: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986389: call 0x985e00 */
  esp -= 4; W32(esp, 0x98638eu); SPILL(); f_985e00(); if (g_unwind) return; RELOAD();
/* 98638e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986391: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986393: mov edi, eax */
  edi = eax;
/* 986395: je 0x9863a0 */
  if (zf) goto L_9863a0;
L_986397: /* 986397: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986398: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98639du); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98639d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9863a0: /* 9863a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9863a1: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9863a6u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9863a6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9863aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9863ab: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9863b0u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9863b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9863b3: mov eax, edi */
  eax = edi;
/* 9863b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9863b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9863b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9863b8: mov esp, ebp */
  esp = ebp;
/* 9863ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9863bb: ret  */
  esp += 4; SPILL(); return;
}

void f_9863c0(void) {
  LOAD_REGS();
L_9863c0: /* 9863c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9863c1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 9863c5: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9863c8: jne 0x9863de */
  if (!zf) goto L_9863de;
L_9863ca: /* 9863ca: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9863ce: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9863d0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9863d4: fmul qword ptr [0xa21878] */
  ST0 = ST0 * (F64((uint32_t)(0xa21878u)));
/* 9863da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9863db: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9863dd: ret  */
  esp += 4; SPILL(); return;
L_9863de: /* 9863de: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9863e1: jne 0x986402 */
  if (!zf) goto L_986402;
L_9863e3: /* 9863e3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9863e7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9863ea: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9863ee: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 9863f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9863f5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9863f7: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 9863fd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9863ff: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 986401: ret  */
  esp += 4; SPILL(); return;
L_986402: /* 986402: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 986406: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 986409: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98640a: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 986410: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 986414: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 986416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986417: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 98641d: mov eax, 1 */
  eax = 0x1u;
/* 986422: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 986425: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986427: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986429: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 98642c: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 98642e: jle 0x986449 */
  if ((zf || sf != of)) goto L_986449;
L_986430: /* 986430: mov ecx, edx */
  ecx = edx;
L_986432: /* 986432: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 986435: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 986436: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 986438: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98643b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98643d: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986443: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 986447: jl 0x986432 */
  if ((sf != of)) goto L_986432;
L_986449: /* 986449: fld dword ptr [edx + ebx*4 - 4] */
  { double v = F32((uint32_t)(edx + ebx*4 + 0xfffffffcu)); FPUSH(v); }
/* 98644d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98644e: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 986454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986455: fld dword ptr [edx + ebx*4 - 8] */
  { double v = F32((uint32_t)(edx + ebx*4 + 0xfffffff8u)); FPUSH(v); }
/* 986459: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 98645f: fadd dword ptr [edx + ebx*4 - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + ebx*4 + 0xfffffff4u)));
/* 986463: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986465: fstp dword ptr [esi + ebx*4 - 4] */
  WF32((uint32_t)(esi + ebx*4 + 0xfffffffcu), ST0); FPOP();
/* 986469: call 0x985f00 */
  esp -= 4; W32(esp, 0x98646eu); SPILL(); f_985f00(); if (g_unwind) return; RELOAD();
/* 98646e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986471: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 986472: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986473: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986474: ret  */
  esp += 4; SPILL(); return;
}

void f_986480(void) {
  LOAD_REGS();
L_986480: /* 986480: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 986483: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986484: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 986488: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986489: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98648a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98648b: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 986492: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986493: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x986498u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 986498: mov ebp, eax */
  ebp = eax;
/* 98649a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98649b: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 98649f: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9864a4u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9864a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9864a5: mov esi, eax */
  esi = eax;
/* 9864a7: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9864acu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9864ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9864af: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9864b1: mov edx, eax */
  edx = eax;
/* 9864b3: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9864b7: jle 0x9864dd */
  if ((zf || sf != of)) goto L_9864dd;
L_9864b9: /* 9864b9: mov ecx, ebp */
  ecx = ebp;
/* 9864bb: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9864bd: mov eax, esi */
  eax = esi;
/* 9864bf: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9864c1: mov edi, ebx */
  edi = ebx;
L_9864c3: /* 9864c3: mov dword ptr [ecx + eax], 0 */
  W32((uint32_t)(ecx + eax), 0x0u);
/* 9864ca: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9864d0: mov dword ptr [edx + eax], 0 */
  W32((uint32_t)(edx + eax), 0x0u);
/* 9864d7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9864da: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9864db: jne 0x9864c3 */
  if (!zf) goto L_9864c3;
L_9864dd: /* 9864dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 9864e1: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 9864e4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9864e8: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 9864ea: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 9864ed: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9864ef: lea eax, [edx + 4] */
  eax = (uint32_t)(edx + 0x4u);
/* 9864f2: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 9864f5: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9864f9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9864fb: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 986503: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 986505: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 986507: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 98650a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 98650c: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 98650e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986510: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 986512: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986514: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 986516: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 986518: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98651a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98651c: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 98651e: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 986522: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986524: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986526: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986528: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 98652a: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 986530: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 986532: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 986534: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 986536: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 986538: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 98653a: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 98653c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98653e: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 986540: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 986544: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 986545: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986548: jle 0x9865e8 */
  if ((zf || sf != of)) goto L_9865e8;
L_98654e: /* 98654e: mov ebx, edx */
  ebx = edx;
/* 986550: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 986552: mov edi, ebp */
  edi = ebp;
/* 986554: mov ebp, esi */
  ebp = esi;
/* 986556: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 986558: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 98655c: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 986560: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 986562: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 986566: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 98656a: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 98656c: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98656e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 986572: add edx, -2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 986575: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 986579: lea ebp, [edx + 1] */
  ebp = (uint32_t)(edx + 0x1u);
/* 98657c: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
L_986580: /* 986580: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986582: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 986586: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986588: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98658b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98658d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 986590: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 986591: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986593: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 986596: fsub dword ptr [ecx - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 986599: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 98659c: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 98659f: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9865a2: fsub dword ptr [eax - 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff8u)));
/* 9865a5: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 9865a7: fld dword ptr [ebx + ecx - 4] */
  { double v = F32((uint32_t)(ebx + ecx + 0xfffffffcu)); FPUSH(v); }
/* 9865ab: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 9865ae: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 9865b0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9865b2: fstp dword ptr [edi + eax - 4] */
  WF32((uint32_t)(edi + eax + 0xfffffffcu), ST0); FPOP();
/* 9865b6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9865b8: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 9865ba: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9865bc: fstp dword ptr [eax + ebp - 4] */
  WF32((uint32_t)(eax + ebp + 0xfffffffcu), ST0); FPOP();
/* 9865c0: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9865c4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9865c6: fstp dword ptr [eax + ebp - 4] */
  WF32((uint32_t)(eax + ebp + 0xfffffffcu), ST0); FPOP();
/* 9865ca: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 9865ce: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9865d0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9865d2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9865d4: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9865d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9865d8: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 9865de: fstp dword ptr [eax + ebp - 4] */
  WF32((uint32_t)(eax + ebp + 0xfffffffcu), ST0); FPOP();
/* 9865e2: jne 0x986580 */
  if (!zf) goto L_986580;
L_9865e4: /* 9865e4: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_9865e8: /* 9865e8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9865ec: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9865ee: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 9865f0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9865f4: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9865f8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9865fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9865fc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9865fe: fstp dword ptr [ebp + eax*4] */
  WF32((uint32_t)(ebp + eax*4), ST0); FPOP();
/* 986602: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986604: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 986606: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 986609: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98660b: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 986611: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 986613: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986615: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 986617: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 986619: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98661b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 98661d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 98661f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 986621: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 986623: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 986625: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 986628: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98662c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98662d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98662e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986631: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986633: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986634: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986636: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986637: call 0x986010 */
  esp -= 4; W32(esp, 0x98663cu); SPILL(); f_986010(); if (g_unwind) return; RELOAD();
/* 98663c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98663f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986641: mov edi, eax */
  edi = eax;
/* 986643: je 0x98664e */
  if (zf) goto L_98664e;
L_986645: /* 986645: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986646: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98664bu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98664b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98664e: /* 98664e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98664f: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986654u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986654: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986655: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98665au); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98665a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98665d: mov eax, edi */
  eax = edi;
/* 98665f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 986660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986661: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986662: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986663: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986666: ret  */
  esp += 4; SPILL(); return;
}

void f_986670(void) {
  LOAD_REGS();
L_986670: /* 986670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986671: mov ebp, esp */
  ebp = esp;
/* 986673: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 986676: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 986679: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98667a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 98667d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98667e: lea eax, [ebx*8] */
  eax = (uint32_t)(ebx*8);
/* 986685: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 986687: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x98668cu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 98668c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98668f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986691: mov esi, eax */
  esi = eax;
/* 986693: jle 0x9866a5 */
  if ((zf || sf != of)) goto L_9866a5;
L_986695: /* 986695: mov ecx, ebx */
  ecx = ebx;
/* 986697: and ecx, 0x1fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98669d: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98669f: xor eax, eax */
  eax = 0;
/* 9866a1: mov edi, esi */
  edi = esi;
/* 9866a3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_9866a5: /* 9866a5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9866a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9866a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9866aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9866ab: call 0x9860f0 */
  esp -= 4; W32(esp, 0x9866b0u); SPILL(); f_9860f0(); if (g_unwind) return; RELOAD();
/* 9866b0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9866b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9866b6: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 9866b9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9866ba: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9866be: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9866c1: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9866c5: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 9866c8: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9866cc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9866d0: xor eax, eax */
  eax = 0;
/* 9866d2: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9866d5: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 9866dd: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9866df: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 9866e7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9866eb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9866ef: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9866f3: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9866f7: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9866fb: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9866ff: jl 0x986900 */
  if ((sf != of)) goto L_986900;
L_986705: /* 986705: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 986708: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98670b: mov dword ptr [esp + 0x1c], 3 */
  W32((uint32_t)(esp + 0x1cu), 0x3u);
/* 986713: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_986717: /* 986717: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986719: je 0x986754 */
  if (zf) goto L_986754;
L_98671b: /* 98671b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98671d: mov ebx, eax */
  ebx = eax;
/* 98671f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986721: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986723: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986725: fld qword ptr [edi + eax*8] */
  { double v = F64((uint32_t)(edi + eax*8)); FPUSH(v); }
/* 986728: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 98672b: fld qword ptr [edi + eax*8 + 8] */
  { double v = F64((uint32_t)(edi + eax*8 + 0x8u)); FPUSH(v); }
/* 98672f: fsub qword ptr [edi + eax*8] */
  ST0 = ST0 - (F64((uint32_t)(edi + eax*8)));
/* 986732: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 986736: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 98673c: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 98673f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986741: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986743: fsub qword ptr [esi + eax*8 + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax*8 + 0x8u)));
/* 986747: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 98674b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 98674d: fsubr qword ptr [esi + eax*8 + 8] */
  ST0 = (F64((uint32_t)(esi + eax*8 + 0x8u))) - ST0;
/* 986751: fadd qword ptr [esi + eax*8] */
  ST0 = ST0 + (F64((uint32_t)(esi + eax*8)));
L_986754: /* 986754: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 986758: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98675c: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 986760: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986762: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 986764: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 986766: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986768: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 98676a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98676c: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 98676e: fstp qword ptr [edx - 0x10] */
  WF64((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 986771: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986773: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 986777: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 986779: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 98677d: call 0x99c958 */
  esp -= 4; W32(esp, 0x986782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 986782: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986784: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 986788: je 0x9867c3 */
  if (zf) goto L_9867c3;
L_98678a: /* 98678a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98678c: mov ebx, eax */
  ebx = eax;
/* 98678e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986790: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986792: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986794: fld qword ptr [edi + eax*8] */
  { double v = F64((uint32_t)(edi + eax*8)); FPUSH(v); }
/* 986797: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 98679a: fld qword ptr [edi + eax*8 + 8] */
  { double v = F64((uint32_t)(edi + eax*8 + 0x8u)); FPUSH(v); }
/* 98679e: fsub qword ptr [edi + eax*8] */
  ST0 = ST0 - (F64((uint32_t)(edi + eax*8)));
/* 9867a1: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 9867a5: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 9867ab: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 9867ae: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9867b0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9867b2: fsub qword ptr [esi + eax*8 + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax*8 + 0x8u)));
/* 9867b6: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9867ba: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9867bc: fsubr qword ptr [esi + eax*8 + 8] */
  ST0 = (F64((uint32_t)(esi + eax*8 + 0x8u))) - ST0;
/* 9867c0: fadd qword ptr [esi + eax*8] */
  ST0 = ST0 + (F64((uint32_t)(esi + eax*8)));
L_9867c3: /* 9867c3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9867c7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9867cb: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 9867cf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9867d1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9867d3: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 9867d5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9867d7: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 9867d9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9867db: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 9867dd: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9867e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9867e2: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9867e6: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 9867e8: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 9867ec: call 0x99c958 */
  esp -= 4; W32(esp, 0x9867f1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9867f1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9867f3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9867f7: je 0x986832 */
  if (zf) goto L_986832;
L_9867f9: /* 9867f9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9867fb: mov ebx, eax */
  ebx = eax;
/* 9867fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9867ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986801: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986803: fld qword ptr [edi + eax*8] */
  { double v = F64((uint32_t)(edi + eax*8)); FPUSH(v); }
/* 986806: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 986809: fld qword ptr [edi + eax*8 + 8] */
  { double v = F64((uint32_t)(edi + eax*8 + 0x8u)); FPUSH(v); }
/* 98680d: fsub qword ptr [edi + eax*8] */
  ST0 = ST0 - (F64((uint32_t)(edi + eax*8)));
/* 986810: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 986814: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 98681a: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 98681d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 98681f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986821: fsub qword ptr [esi + eax*8 + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax*8 + 0x8u)));
/* 986825: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 986829: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 98682b: fsubr qword ptr [esi + eax*8 + 8] */
  ST0 = (F64((uint32_t)(esi + eax*8 + 0x8u))) - ST0;
/* 98682f: fadd qword ptr [esi + eax*8] */
  ST0 = ST0 + (F64((uint32_t)(esi + eax*8)));
L_986832: /* 986832: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 986836: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98683a: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 98683e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986840: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 986842: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 986844: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986846: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 986848: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98684a: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 98684c: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98684e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986850: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 986854: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 986856: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 98685a: call 0x99c958 */
  esp -= 4; W32(esp, 0x98685fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98685f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986861: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 986865: je 0x9868a0 */
  if (zf) goto L_9868a0;
L_986867: /* 986867: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986869: mov ebx, eax */
  ebx = eax;
/* 98686b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98686d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98686f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986871: fld qword ptr [edi + eax*8] */
  { double v = F64((uint32_t)(edi + eax*8)); FPUSH(v); }
/* 986874: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 986877: fld qword ptr [edi + eax*8 + 8] */
  { double v = F64((uint32_t)(edi + eax*8 + 0x8u)); FPUSH(v); }
/* 98687b: fsub qword ptr [edi + eax*8] */
  ST0 = ST0 - (F64((uint32_t)(edi + eax*8)));
/* 98687e: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 986882: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986888: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 98688b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 98688d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 98688f: fsub qword ptr [esi + eax*8 + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax*8 + 0x8u)));
/* 986893: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 986897: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986899: fsubr qword ptr [esi + eax*8 + 8] */
  ST0 = (F64((uint32_t)(esi + eax*8 + 0x8u))) - ST0;
/* 98689d: fadd qword ptr [esi + eax*8] */
  ST0 = ST0 + (F64((uint32_t)(esi + eax*8)));
L_9868a0: /* 9868a0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9868a4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9868a8: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 9868ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9868ae: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9868b0: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 9868b2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9868b4: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 9868b6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9868b8: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 9868ba: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9868bd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9868bf: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9868c3: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 9868c5: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 9868c9: call 0x99c958 */
  esp -= 4; W32(esp, 0x9868ceu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9868ce: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9868d2: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9868d6: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9868d9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9868dc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9868e0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9868e4: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9868e8: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 9868eb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9868ee: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9868f0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9868f4: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9868f8: jl 0x986717 */
  if ((sf != of)) goto L_986717;
L_9868fe: /* 9868fe: mov ecx, edx */
  ecx = edx;
L_986900: /* 986900: cmp dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986904: jge 0x986996 */
  if ((sf == of)) goto L_986996;
L_98690a: /* 98690a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_986910: /* 986910: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986912: je 0x98694d */
  if (zf) goto L_98694d;
L_986914: /* 986914: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986916: mov ebx, eax */
  ebx = eax;
/* 986918: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98691a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98691c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98691e: fld qword ptr [edi + eax*8] */
  { double v = F64((uint32_t)(edi + eax*8)); FPUSH(v); }
/* 986921: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 986924: fld qword ptr [edi + eax*8 + 8] */
  { double v = F64((uint32_t)(edi + eax*8 + 0x8u)); FPUSH(v); }
/* 986928: fsub qword ptr [edi + eax*8] */
  ST0 = ST0 - (F64((uint32_t)(edi + eax*8)));
/* 98692b: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 98692f: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986935: fld qword ptr [esi + eax*8] */
  { double v = F64((uint32_t)(esi + eax*8)); FPUSH(v); }
/* 986938: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 98693a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 98693c: fsub qword ptr [esi + eax*8 + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax*8 + 0x8u)));
/* 986940: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 986944: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986946: fsubr qword ptr [esi + eax*8 + 8] */
  ST0 = (F64((uint32_t)(esi + eax*8 + 0x8u))) - ST0;
/* 98694a: fadd qword ptr [esi + eax*8] */
  ST0 = ST0 + (F64((uint32_t)(esi + eax*8)));
L_98694d: /* 98694d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 986951: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 986954: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 986958: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 98695c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98695e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 986960: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 986962: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986964: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 986966: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986968: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 98696a: fstp qword ptr [eax + ecx*8] */
  WF64((uint32_t)(eax + ecx*8), ST0); FPOP();
/* 98696d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98696f: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 986973: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 986975: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 986979: call 0x99c958 */
  esp -= 4; W32(esp, 0x98697eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98697e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 986982: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 986985: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 986986: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986988: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98698c: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 986990: jl 0x986910 */
  if ((sf != of)) goto L_986910;
L_986996: /* 986996: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986998: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98699a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98699c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98699e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9869a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9869a2: je 0x9869ad */
  if (zf) goto L_9869ad;
L_9869a4: /* 9869a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9869a5: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9869aau); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9869aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9869ad: /* 9869ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9869ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9869af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9869b0: mov esp, ebp */
  esp = ebp;
/* 9869b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9869b3: ret  */
  esp += 4; SPILL(); return;
}

void f_9869c0(void) {
  LOAD_REGS();
L_9869c0: /* 9869c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9869c1: mov ebp, esp */
  ebp = esp;
/* 9869c3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9869c6: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9869c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9869ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9869cb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 9869ce: lea eax, [esi*8] */
  eax = (uint32_t)(esi*8);
/* 9869d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9869d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9869d7: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9869dcu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9869dc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9869df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9869e1: mov ebx, eax */
  ebx = eax;
/* 9869e3: jle 0x9869f5 */
  if ((zf || sf != of)) goto L_9869f5;
L_9869e5: /* 9869e5: mov ecx, esi */
  ecx = esi;
/* 9869e7: and ecx, 0x1fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9869ed: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9869ef: xor eax, eax */
  eax = 0;
/* 9869f1: mov edi, ebx */
  edi = ebx;
/* 9869f3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_9869f5: /* 9869f5: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 9869f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9869f9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9869fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9869fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9869fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9869ff: call 0x9861b0 */
  esp -= 4; W32(esp, 0x986a04u); SPILL(); f_9861b0(); if (g_unwind) return; RELOAD();
/* 986a04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986a07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986a09: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 986a0d: je 0x986a2b */
  if (zf) goto L_986a2b;
L_986a0f: /* 986a0f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986a11: je 0x986b98 */
  if (zf) goto L_986b98;
L_986a17: /* 986a17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986a18: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986a1du); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986a1d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 986a21: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986a24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 986a25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986a26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986a27: mov esp, ebp */
  esp = ebp;
/* 986a29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986a2a: ret  */
  esp += 4; SPILL(); return;
L_986a2b: /* 986a2b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 986a2e: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 986a30: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* 986a32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986a34: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 986a37: jnp 0x986b88 */
  if (!pf) goto L_986b88;
L_986a3d: /* 986a3d: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 986a40: fld qword ptr [edx + eax*8 - 8] */
  { double v = F64((uint32_t)(edx + eax*8 + 0xfffffff8u)); FPUSH(v); }
/* 986a44: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 986a47: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 986a4a: fcomp qword ptr [eax + esi - 8] */
  fpu_com(ST0, F64((uint32_t)(eax + esi + 0xfffffff8u)));
  FPOP();
/* 986a4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986a50: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 986a53: je 0x986b88 */
  if (zf) goto L_986b88;
L_986a59: /* 986a59: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 986a5b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 986a5e: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 986a64: xor ecx, ecx */
  ecx = 0;
/* 986a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986a68: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 986a6c: jle 0x986b72 */
  if ((zf || sf != of)) goto L_986b72;
L_986a72: /* 986a72: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 986a75: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 986a77: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 986a7b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 986a7e: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 986a82: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 986a86: jmp 0x986a90 */
  goto L_986a90;
L_986a90: /* 986a90: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 986a94: fld qword ptr [edx + eax] */
  { double v = F64((uint32_t)(edx + eax)); FPUSH(v); }
/* 986a97: fcom qword ptr [esp + 0x18] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x18u)));
/* 986a9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986a9d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 986aa0: jne 0x986b39 */
  if (!zf) goto L_986b39;
L_986aa6: /* 986aa6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 986aa9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986aab: jge 0x986abf */
  if ((sf == of)) goto L_986abf;
L_986aad: /* 986aad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_986ab0: /* 986ab0: fcom qword ptr [esi + ecx*8] */
  fpu_com(ST0, F64((uint32_t)(esi + ecx*8)));
/* 986ab3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986ab5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 986ab8: jne 0x986abf */
  if (!zf) goto L_986abf;
L_986aba: /* 986aba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 986abb: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986abd: jl 0x986ab0 */
  if ((sf != of)) goto L_986ab0;
L_986abf: /* 986abf: fcom qword ptr [esi + ecx*8] */
  fpu_com(ST0, F64((uint32_t)(esi + ecx*8)));
/* 986ac2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986ac4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 986ac7: jp 0x986aca */
  if (pf) goto L_986aca;
L_986ac9: /* 986ac9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_986aca: /* 986aca: fld qword ptr [esi + ecx*8] */
  { double v = F64((uint32_t)(esi + ecx*8)); FPUSH(v); }
/* 986acd: mov edx, dword ptr [esi + ecx*8 + 8] */
  edx = R32((uint32_t)(esi + ecx*8 + 0x8u));
/* 986ad1: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 986ad5: mov eax, dword ptr [esi + ecx*8 + 0xc] */
  eax = R32((uint32_t)(esi + ecx*8 + 0xcu));
/* 986ad9: fld qword ptr [esi + ecx*8 + 8] */
  { double v = F64((uint32_t)(esi + ecx*8 + 0x8u)); FPUSH(v); }
/* 986add: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 986ae1: fsub qword ptr [esi + ecx*8] */
  ST0 = ST0 - (F64((uint32_t)(esi + ecx*8)));
/* 986ae4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 986ae8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 986aec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 986af2: fld qword ptr [edi + ecx*8 + 8] */
  { double v = F64((uint32_t)(edi + ecx*8 + 0x8u)); FPUSH(v); }
/* 986af6: fsub qword ptr [edi + ecx*8] */
  ST0 = ST0 - (F64((uint32_t)(edi + ecx*8)));
/* 986af9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986afb: fld qword ptr [edi + ecx*8] */
  { double v = F64((uint32_t)(edi + ecx*8)); FPUSH(v); }
/* 986afe: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 986b02: fld qword ptr [ebx + ecx*8] */
  { double v = F64((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 986b05: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 986b09: fld qword ptr [0xa16940] */
  { double v = F64((uint32_t)(0xa16940u)); FPUSH(v); }
/* 986b0f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b11: fld qword ptr [ebx + ecx*8] */
  { double v = F64((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 986b14: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986b16: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986b18: fsub qword ptr [ebx + ecx*8 + 8] */
  ST0 = ST0 - (F64((uint32_t)(ebx + ecx*8 + 0x8u)));
/* 986b1c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 986b1e: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 986b22: fld qword ptr [ebx + ecx*8] */
  { double v = F64((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 986b25: fadd qword ptr [ebx + ecx*8 + 8] */
  ST0 = ST0 + (F64((uint32_t)(ebx + ecx*8 + 0x8u)));
/* 986b29: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 986b2b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986b2d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986b2f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b33: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 986b37: fstp st(0) */
  STI(0) = ST0; FPOP();
L_986b39: /* 986b39: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 986b3d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 986b41: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 986b45: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 986b48: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 986b4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b4e: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 986b52: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b54: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 986b58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b5a: fadd qword ptr [esp + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x40u)));
/* 986b5e: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 986b61: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 986b65: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 986b66: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986b68: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 986b6c: jne 0x986a90 */
  if (!zf) goto L_986a90;
L_986b72: /* 986b72: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986b74: je 0x986b7f */
  if (zf) goto L_986b7f;
L_986b76: /* 986b76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986b77: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986b7cu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986b7c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_986b7f: /* 986b7f: xor eax, eax */
  eax = 0;
/* 986b81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 986b82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986b83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986b84: mov esp, ebp */
  esp = ebp;
/* 986b86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986b87: ret  */
  esp += 4; SPILL(); return;
L_986b88: /* 986b88: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986b8a: je 0x986b95 */
  if (zf) goto L_986b95;
L_986b8c: /* 986b8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986b8d: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986b92u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986b92: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_986b95: /* 986b95: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_986b98: /* 986b98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 986b99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986b9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986b9b: mov esp, ebp */
  esp = ebp;
/* 986b9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986b9e: ret  */
  esp += 4; SPILL(); return;
}

void f_986a88(void) {
  LOAD_REGS();
L_986a88: /* 986a88: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 986a8f: nop  */
L_986a90: /* 986a90: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 986a94: fld qword ptr [edx + eax] */
  { double v = F64((uint32_t)(edx + eax)); FPUSH(v); }
/* 986a97: fcom qword ptr [esp + 0x18] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x18u)));
/* 986a9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986a9d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 986aa0: jne 0x986b39 */
  if (!zf) goto L_986b39;
L_986aa6: /* 986aa6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 986aa9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986aab: jge 0x986abf */
  if ((sf == of)) goto L_986abf;
L_986aad: /* 986aad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_986ab0: /* 986ab0: fcom qword ptr [esi + ecx*8] */
  fpu_com(ST0, F64((uint32_t)(esi + ecx*8)));
/* 986ab3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986ab5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 986ab8: jne 0x986abf */
  if (!zf) goto L_986abf;
L_986aba: /* 986aba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 986abb: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986abd: jl 0x986ab0 */
  if ((sf != of)) goto L_986ab0;
L_986abf: /* 986abf: fcom qword ptr [esi + ecx*8] */
  fpu_com(ST0, F64((uint32_t)(esi + ecx*8)));
/* 986ac2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 986ac4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 986ac7: jp 0x986aca */
  if (pf) goto L_986aca;
L_986ac9: /* 986ac9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_986aca: /* 986aca: fld qword ptr [esi + ecx*8] */
  { double v = F64((uint32_t)(esi + ecx*8)); FPUSH(v); }
/* 986acd: mov edx, dword ptr [esi + ecx*8 + 8] */
  edx = R32((uint32_t)(esi + ecx*8 + 0x8u));
/* 986ad1: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 986ad5: mov eax, dword ptr [esi + ecx*8 + 0xc] */
  eax = R32((uint32_t)(esi + ecx*8 + 0xcu));
/* 986ad9: fld qword ptr [esi + ecx*8 + 8] */
  { double v = F64((uint32_t)(esi + ecx*8 + 0x8u)); FPUSH(v); }
/* 986add: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 986ae1: fsub qword ptr [esi + ecx*8] */
  ST0 = ST0 - (F64((uint32_t)(esi + ecx*8)));
/* 986ae4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 986ae8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 986aec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 986af2: fld qword ptr [edi + ecx*8 + 8] */
  { double v = F64((uint32_t)(edi + ecx*8 + 0x8u)); FPUSH(v); }
/* 986af6: fsub qword ptr [edi + ecx*8] */
  ST0 = ST0 - (F64((uint32_t)(edi + ecx*8)));
/* 986af9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986afb: fld qword ptr [edi + ecx*8] */
  { double v = F64((uint32_t)(edi + ecx*8)); FPUSH(v); }
/* 986afe: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 986b02: fld qword ptr [ebx + ecx*8] */
  { double v = F64((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 986b05: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 986b09: fld qword ptr [0xa16940] */
  { double v = F64((uint32_t)(0xa16940u)); FPUSH(v); }
/* 986b0f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b11: fld qword ptr [ebx + ecx*8] */
  { double v = F64((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 986b14: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986b16: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986b18: fsub qword ptr [ebx + ecx*8 + 8] */
  ST0 = ST0 - (F64((uint32_t)(ebx + ecx*8 + 0x8u)));
/* 986b1c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 986b1e: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 986b22: fld qword ptr [ebx + ecx*8] */
  { double v = F64((uint32_t)(ebx + ecx*8)); FPUSH(v); }
/* 986b25: fadd qword ptr [ebx + ecx*8 + 8] */
  ST0 = ST0 + (F64((uint32_t)(ebx + ecx*8 + 0x8u)));
/* 986b29: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 986b2b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986b2d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986b2f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b33: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 986b37: fstp st(0) */
  STI(0) = ST0; FPOP();
L_986b39: /* 986b39: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 986b3d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 986b41: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 986b45: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 986b48: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 986b4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b4e: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 986b52: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b54: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 986b58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986b5a: fadd qword ptr [esp + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x40u)));
/* 986b5e: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 986b61: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 986b65: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 986b66: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986b68: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 986b6c: jne 0x986a90 */
  if (!zf) goto L_986a90;
L_986b72: /* 986b72: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986b74: je 0x986b7f */
  if (zf) goto L_986b7f;
L_986b76: /* 986b76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986b77: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986b7cu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986b7c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_986b7f: /* 986b7f: xor eax, eax */
  eax = 0;
/* 986b81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 986b82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986b83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986b84: mov esp, ebp */
  esp = ebp;
/* 986b86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986b87: ret  */
  esp += 4; SPILL(); return;
}

void f_986ba0(void) {
  LOAD_REGS();
L_986ba0: /* 986ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986ba1: mov ebp, esp */
  ebp = esp;
/* 986ba3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 986ba6: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 986ba9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986baa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986bab: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 986bae: lea eax, [esi*8] */
  eax = (uint32_t)(esi*8);
/* 986bb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 986bb7: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x986bbcu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 986bbc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 986bbf: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 986bc6: mov edi, eax */
  edi = eax;
/* 986bc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 986bc9: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 986bcd: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x986bd2u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 986bd2: mov ebx, esi */
  ebx = esi;
/* 986bd4: imul ebx, dword ptr [ebp + 0x1c] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x1cu)));
  ebx = (uint32_t)r;
  }
/* 986bd8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 986bdc: lea eax, [ebx*8] */
  eax = (uint32_t)(ebx*8);
/* 986be3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 986be4: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x986be9u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 986be9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986bec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986bee: mov edx, eax */
  edx = eax;
/* 986bf0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 986bf4: jle 0x986c08 */
  if ((zf || sf != of)) goto L_986c08;
L_986bf6: /* 986bf6: mov ecx, esi */
  ecx = esi;
/* 986bf8: and ecx, 0x1fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 986bfe: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 986c00: xor eax, eax */
  eax = 0;
/* 986c02: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 986c04: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
L_986c08: /* 986c08: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 986c0b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986c0d: jle 0x986c23 */
  if ((zf || sf != of)) goto L_986c23;
L_986c0f: /* 986c0f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 986c13: and ecx, 0x1fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 986c19: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 986c1b: xor eax, eax */
  eax = 0;
/* 986c1d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 986c1f: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
L_986c23: /* 986c23: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986c25: jle 0x986c3b */
  if ((zf || sf != of)) goto L_986c3b;
L_986c27: /* 986c27: mov ecx, ebx */
  ecx = ebx;
/* 986c29: and ecx, 0x1fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 986c2f: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 986c31: xor eax, eax */
  eax = 0;
/* 986c33: mov edi, edx */
  edi = edx;
/* 986c35: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 986c37: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
L_986c3b: /* 986c3b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986c3d: jle 0x986c7d */
  if ((zf || sf != of)) goto L_986c7d;
L_986c3f: /* 986c3f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 986c42: mov edi, edx */
  edi = edx;
/* 986c44: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_986c48: /* 986c48: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 986c4b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 986c4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 986c4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986c50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 986c51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986c52: call 0x986670 */
  esp -= 4; W32(esp, 0x986c57u); SPILL(); f_986670(); if (g_unwind) return; RELOAD();
/* 986c57: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 986c5a: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 986c5d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 986c5f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 986c62: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 986c65: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 986c67: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 986c6b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986c6e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 986c6f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 986c73: jne 0x986c48 */
  if (!zf) goto L_986c48;
L_986c75: /* 986c75: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 986c79: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
L_986c7d: /* 986c7d: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 986c80: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986c82: jle 0x986d32 */
  if ((zf || sf != of)) goto L_986d32;
L_986c88: /* 986c88: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 986c8b: mov ecx, edx */
  ecx = edx;
/* 986c8d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 986c8f: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 986c93: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 986c97: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 986c9b: jmp 0x986ca1 */
  goto L_986ca1;
L_986c9d: /* 986c9d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_986ca1: /* 986ca1: xor eax, eax */
  eax = 0;
/* 986ca3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986ca5: jle 0x986cca */
  if ((zf || sf != of)) goto L_986cca;
L_986ca7: /* 986ca7: lea edx, [ebx*8] */
  edx = (uint32_t)(ebx*8);
/* 986cae: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 986cb2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_986cb4: /* 986cb4: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 986cb6: mov dword ptr [edi + eax*8], ebx */
  W32((uint32_t)(edi + eax*8), ebx);
/* 986cb9: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 986cbc: mov dword ptr [edi + eax*8 + 4], ebx */
  W32((uint32_t)(edi + eax*8 + 0x4u), ebx);
/* 986cc0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 986cc1: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 986cc3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986cc5: jl 0x986cb4 */
  if ((sf != of)) goto L_986cb4;
L_986cc7: /* 986cc7: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
L_986cca: /* 986cca: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 986ccd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 986cd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 986cd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 986cd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986cd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986cd5: call 0x986670 */
  esp -= 4; W32(esp, 0x986cdau); SPILL(); f_986670(); if (g_unwind) return; RELOAD();
/* 986cda: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 986cdd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986ce0: xor eax, eax */
  eax = 0;
/* 986ce2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986ce4: jle 0x986d14 */
  if ((zf || sf != of)) goto L_986d14;
L_986ce6: /* 986ce6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 986cea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_986cf0: /* 986cf0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 986cf4: mov ebx, dword ptr [edx + eax*8] */
  ebx = R32((uint32_t)(edx + eax*8));
/* 986cf7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 986cf9: mov edx, dword ptr [edx + eax*8 + 4] */
  edx = R32((uint32_t)(edx + eax*8 + 0x4u));
/* 986cfd: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 986d00: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 986d03: lea edx, [ebx*8] */
  edx = (uint32_t)(ebx*8);
/* 986d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 986d0c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 986d0f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 986d10: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986d12: jl 0x986cf0 */
  if ((sf != of)) goto L_986cf0;
L_986d14: /* 986d14: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 986d18: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 986d1c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 986d1f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 986d20: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 986d24: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 986d28: jne 0x986c9d */
  if (!zf) goto L_986c9d;
L_986d2e: /* 986d2e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
L_986d32: /* 986d32: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986d34: je 0x986d43 */
  if (zf) goto L_986d43;
L_986d36: /* 986d36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986d37: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986d3cu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986d3c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 986d40: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_986d43: /* 986d43: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 986d47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986d49: je 0x986d58 */
  if (zf) goto L_986d58;
L_986d4b: /* 986d4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 986d4c: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986d51u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986d51: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 986d55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_986d58: /* 986d58: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 986d5a: je 0x986d65 */
  if (zf) goto L_986d65;
L_986d5c: /* 986d5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 986d5d: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x986d62u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 986d62: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_986d65: /* 986d65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 986d66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 986d67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 986d68: mov esp, ebp */
  esp = ebp;
/* 986d6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 986d6b: ret  */
  esp += 4; SPILL(); return;
}

void f_986d70(void) {
  LOAD_REGS();
L_986d70: /* 986d70: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 986d73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 986d74: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986d75: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 986d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986d7a: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 986d81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986d82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 986d83: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x986d88u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 986d88: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986d8b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 986d8d: mov esi, eax */
  esi = eax;
/* 986d8f: jle 0x986d99 */
  if ((zf || sf != of)) goto L_986d99;
L_986d91: /* 986d91: mov ecx, ebp */
  ecx = ebp;
/* 986d93: xor eax, eax */
  eax = 0;
/* 986d95: mov edi, esi */
  edi = esi;
/* 986d97: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_986d99: /* 986d99: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 986d9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 986d9e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 986d9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 986da0: call 0x9863c0 */
  esp -= 4; W32(esp, 0x986da5u); SPILL(); f_9863c0(); if (g_unwind) return; RELOAD();
/* 986da5: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 986da9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 986dac: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 986daf: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 986db0: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 986db4: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 986db8: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 986dbb: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 986dbf: xor eax, eax */
  eax = 0;
/* 986dc1: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986dc4: fidiv dword ptr [esp + 0x34] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x34u)));
/* 986dc8: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 986dcc: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 986dd0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 986dd4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 986dda: jl 0x986fee */
  if ((sf != of)) goto L_986fee;
L_986de0: /* 986de0: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 986de4: mov dword ptr [esp + 0x28], 3 */
  W32((uint32_t)(esp + 0x28u), 0x3u);
/* 986dec: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_986def: /* 986def: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986df1: je 0x986e35 */
  if (zf) goto L_986e35;
L_986df3: /* 986df3: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 986df6: mov ebx, eax */
  ebx = eax;
/* 986df8: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 986dfc: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986dff: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 986e03: fld dword ptr [edi + eax*4 + 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0x4u)); FPUSH(v); }
/* 986e07: fsub dword ptr [edi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax*4)));
/* 986e0a: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986e0d: fld dword ptr [esi + eax*4 + 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x4u)); FPUSH(v); }
/* 986e11: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986e13: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986e19: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986e1b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986e1d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986e1f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 986e21: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 986e25: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 986e27: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986e29: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 986e2b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 986e2d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 986e31: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 986e33: fstp st(0) */
  STI(0) = ST0; FPOP();
L_986e35: /* 986e35: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 986e39: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 986e3b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 986e3f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986e41: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 986e45: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986e47: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 986e4b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986e4d: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 986e51: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 986e54: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986e56: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 986e5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986e5c: call 0x99c958 */
  esp -= 4; W32(esp, 0x986e61u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 986e61: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986e63: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 986e67: je 0x986eab */
  if (zf) goto L_986eab;
L_986e69: /* 986e69: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 986e6c: mov ebx, eax */
  ebx = eax;
/* 986e6e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 986e72: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986e75: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 986e79: fld dword ptr [edi + eax*4 + 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0x4u)); FPUSH(v); }
/* 986e7d: fsub dword ptr [edi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax*4)));
/* 986e80: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986e83: fld dword ptr [esi + eax*4 + 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x4u)); FPUSH(v); }
/* 986e87: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986e89: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986e8f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986e91: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986e93: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986e95: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 986e97: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 986e9b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 986e9d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986e9f: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 986ea1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 986ea3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 986ea7: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 986ea9: fstp st(0) */
  STI(0) = ST0; FPOP();
L_986eab: /* 986eab: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 986eaf: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 986eb1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 986eb5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986eb7: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 986ebb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986ebd: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 986ec1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986ec3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 986ec7: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 986eca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986ecc: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 986ed0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986ed2: call 0x99c958 */
  esp -= 4; W32(esp, 0x986ed7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 986ed7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986ed9: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 986edd: je 0x986f21 */
  if (zf) goto L_986f21;
L_986edf: /* 986edf: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 986ee2: mov ebx, eax */
  ebx = eax;
/* 986ee4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 986ee8: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986eeb: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 986eef: fld dword ptr [edi + eax*4 + 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0x4u)); FPUSH(v); }
/* 986ef3: fsub dword ptr [edi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax*4)));
/* 986ef6: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986ef9: fld dword ptr [esi + eax*4 + 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x4u)); FPUSH(v); }
/* 986efd: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986eff: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986f05: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986f07: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986f09: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986f0b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 986f0d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 986f11: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 986f13: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986f15: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 986f17: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 986f19: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 986f1d: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 986f1f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_986f21: /* 986f21: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 986f25: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 986f27: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 986f2b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986f2d: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 986f31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986f33: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 986f37: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986f39: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 986f3d: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 986f40: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986f42: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 986f46: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986f48: call 0x99c958 */
  esp -= 4; W32(esp, 0x986f4du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 986f4d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986f4f: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 986f53: je 0x986f97 */
  if (zf) goto L_986f97;
L_986f55: /* 986f55: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 986f58: mov ebx, eax */
  ebx = eax;
/* 986f5a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 986f5e: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986f61: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 986f65: fld dword ptr [edi + eax*4 + 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0x4u)); FPUSH(v); }
/* 986f69: fsub dword ptr [edi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax*4)));
/* 986f6c: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 986f6f: fld dword ptr [esi + eax*4 + 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x4u)); FPUSH(v); }
/* 986f73: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986f75: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 986f7b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 986f7d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986f7f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 986f81: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 986f83: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 986f87: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 986f89: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 986f8b: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 986f8d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 986f8f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 986f93: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 986f95: fstp st(0) */
  STI(0) = ST0; FPOP();
L_986f97: /* 986f97: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 986f9b: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 986f9d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 986fa1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986fa3: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 986fa7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986fa9: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 986fad: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 986faf: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 986fb3: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 986fb6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 986fb8: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 986fbc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 986fbe: call 0x99c958 */
  esp -= 4; W32(esp, 0x986fc3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 986fc3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 986fc7: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 986fcb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 986fce: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 986fd2: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 986fd6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 986fd9: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 986fdc: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986fde: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 986fe2: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 986fe6: jl 0x986def */
  if ((sf != of)) goto L_986def;
L_986fec: /* 986fec: mov ecx, edx */
  ecx = edx;
L_986fee: /* 986fee: cmp dword ptr [esp + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 986ff2: jge 0x98708b */
  if ((sf == of)) goto L_98708b;
L_986ff8: /* 986ff8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 986ffa: je 0x98703e */
  if (zf) goto L_98703e;
L_986ffc: /* 986ffc: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 986fff: mov ebx, eax */
  ebx = eax;
/* 987001: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 987005: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 987008: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98700c: fld dword ptr [edi + eax*4 + 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0x4u)); FPUSH(v); }
/* 987010: fsub dword ptr [edi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax*4)));
/* 987013: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 987016: fld dword ptr [esi + eax*4 + 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x4u)); FPUSH(v); }
/* 98701a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98701c: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 987022: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 987024: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 987026: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 987028: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 98702a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 98702e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 987030: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 987032: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 987034: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 987036: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 98703a: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 98703c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98703e: /* 98703e: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 987042: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 987046: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98704a: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 98704c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 987050: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 987052: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 987056: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 987058: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 98705c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98705e: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 987062: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* 987065: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 987067: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 98706b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98706d: call 0x99c958 */
  esp -= 4; W32(esp, 0x987072u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 987072: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 987076: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 98707a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98707b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98707d: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 987081: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 987085: jl 0x986ff8 */
  if ((sf != of)) goto L_986ff8;
L_98708b: /* 98708b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98708d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98708f: je 0x98709a */
  if (zf) goto L_98709a;
L_987091: /* 987091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987092: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x987097u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 987097: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98709a: /* 98709a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98709b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98709c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98709d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98709e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9870a1: ret  */
  esp += 4; SPILL(); return;
}

void f_9870b0(void) {
  LOAD_REGS();
L_9870b0: /* 9870b0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9870b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9870b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9870b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9870b6: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9870ba: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 9870c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9870c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9870c3: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9870c8u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9870c8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9870cb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9870cd: mov ebx, eax */
  ebx = eax;
/* 9870cf: jle 0x9870d9 */
  if ((zf || sf != of)) goto L_9870d9;
L_9870d1: /* 9870d1: mov ecx, esi */
  ecx = esi;
/* 9870d3: xor eax, eax */
  eax = 0;
/* 9870d5: mov edi, ebx */
  edi = ebx;
/* 9870d7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_9870d9: /* 9870d9: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 9870dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9870de: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9870e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9870e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9870e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9870e5: call 0x986480 */
  esp -= 4; W32(esp, 0x9870eau); SPILL(); f_986480(); if (g_unwind) return; RELOAD();
/* 9870ea: mov ebp, eax */
  ebp = eax;
/* 9870ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9870ef: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9870f1: je 0x98710a */
  if (zf) goto L_98710a;
L_9870f3: /* 9870f3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9870f5: je 0x987100 */
  if (zf) goto L_987100;
L_9870f7: /* 9870f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9870f8: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9870fdu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9870fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_987100: /* 987100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987102: mov eax, ebp */
  eax = ebp;
/* 987104: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 987105: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 987106: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987109: ret  */
  esp += 4; SPILL(); return;
L_98710a: /* 98710a: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98710e: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 987110: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 987112: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 987114: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 987117: jnp 0x98725d */
  if (!pf) goto L_98725d;
L_98711d: /* 98711d: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 987121: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 987125: fld dword ptr [edx + ebp*4 - 4] */
  { double v = F32((uint32_t)(edx + ebp*4 + 0xfffffffcu)); FPUSH(v); }
/* 987129: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98712c: fcomp dword ptr [eax + esi - 4] */
  fpu_com(ST0, F32((uint32_t)(eax + esi + 0xfffffffcu)));
  FPOP();
/* 987130: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 987132: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 987135: je 0x98725d */
  if (zf) goto L_98725d;
L_98713b: /* 98713b: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 98713d: xor ecx, ecx */
  ecx = 0;
/* 98713f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 987141: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 987147: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 98714b: jle 0x987246 */
  if ((zf || sf != of)) goto L_987246;
L_987151: /* 987151: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 987155: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 987159: mov eax, edx */
  eax = edx;
/* 98715b: sub eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98715f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 987163: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 987167: jmp 0x987170 */
  goto L_987170;
L_987169: /* 987169: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98716d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_987170: /* 987170: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 987174: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 987177: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 98717b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98717d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 987180: jne 0x987211 */
  if (!zf) goto L_987211;
L_987186: /* 987186: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 98718a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98718c: jge 0x98719f */
  if ((sf == of)) goto L_98719f;
L_98718e: /* 98718e: mov edi, edi */
  edi = edi;
L_987190: /* 987190: fcom dword ptr [esi + ecx*4] */
  fpu_com(ST0, F32((uint32_t)(esi + ecx*4)));
/* 987193: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 987195: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 987198: jne 0x98719f */
  if (!zf) goto L_98719f;
L_98719a: /* 98719a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98719b: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98719d: jl 0x987190 */
  if ((sf != of)) goto L_987190;
L_98719f: /* 98719f: fcom dword ptr [esi + ecx*4] */
  fpu_com(ST0, F32((uint32_t)(esi + ecx*4)));
/* 9871a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9871a4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9871a7: jp 0x9871aa */
  if (pf) goto L_9871aa;
L_9871a9: /* 9871a9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9871aa: /* 9871aa: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 9871ad: mov eax, dword ptr [esi + ecx*4 + 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x4u));
/* 9871b1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9871b5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9871b9: fld dword ptr [esi + ecx*4 + 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x4u)); FPUSH(v); }
/* 9871bd: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 9871c0: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 9871c6: fld dword ptr [edi + ecx*4 + 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0x4u)); FPUSH(v); }
/* 9871ca: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 9871cd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9871cf: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 9871d2: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9871d6: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 9871d9: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9871dd: fld qword ptr [0xa16940] */
  { double v = F64((uint32_t)(0xa16940u)); FPUSH(v); }
/* 9871e3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9871e5: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 9871e8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9871ea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9871ec: fsub dword ptr [ebx + ecx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0x4u)));
/* 9871f0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9871f2: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9871f4: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9871f8: fld dword ptr [ebx + ecx*4 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x4u)); FPUSH(v); }
/* 9871fc: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 9871ff: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 987201: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 987203: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 987205: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 987207: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 987209: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 98720b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 98720f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_987211: /* 987211: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 987215: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 987219: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98721d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 987220: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 987221: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 987223: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 987227: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98722b: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 98722f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 987231: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 987235: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 987237: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 98723b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 98723e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 987240: jne 0x987169 */
  if (!zf) goto L_987169;
L_987246: /* 987246: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987248: je 0x987253 */
  if (zf) goto L_987253;
L_98724a: /* 98724a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98724b: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x987250u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 987250: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_987253: /* 987253: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987254: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987255: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 987256: xor eax, eax */
  eax = 0;
/* 987258: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 987259: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98725c: ret  */
  esp += 4; SPILL(); return;
L_98725d: /* 98725d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98725f: je 0x98726a */
  if (zf) goto L_98726a;
L_987261: /* 987261: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 987262: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x987267u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 987267: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98726a: /* 98726a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98726b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98726c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98726d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 987270: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 987271: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987274: ret  */
  esp += 4; SPILL(); return;
}

void f_987280(void) {
  LOAD_REGS();
L_987280: /* 987280: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 987283: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 987284: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 987285: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987286: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98728a: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 987291: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987293: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x987298u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 987298: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 98729c: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 9872a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9872a4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9872a8: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9872adu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9872ad: mov ebx, esi */
  ebx = esi;
/* 9872af: imul ebx, dword ptr [esp + 0x40] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x40u)));
  ebx = (uint32_t)r;
  }
/* 9872b4: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 9872bb: mov edi, eax */
  edi = eax;
/* 9872bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9872be: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 9872c2: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9872c7u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9872c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9872ca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9872cc: mov edx, eax */
  edx = eax;
/* 9872ce: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9872d2: jle 0x9872e2 */
  if ((zf || sf != of)) goto L_9872e2;
L_9872d4: /* 9872d4: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9872d8: mov ecx, esi */
  ecx = esi;
/* 9872da: xor eax, eax */
  eax = 0;
/* 9872dc: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9872de: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_9872e2: /* 9872e2: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9872e4: jle 0x9872f0 */
  if ((zf || sf != of)) goto L_9872f0;
L_9872e6: /* 9872e6: mov ecx, ebp */
  ecx = ebp;
/* 9872e8: xor eax, eax */
  eax = 0;
/* 9872ea: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9872ec: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_9872f0: /* 9872f0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9872f2: jle 0x987300 */
  if ((zf || sf != of)) goto L_987300;
L_9872f4: /* 9872f4: mov ecx, ebx */
  ecx = ebx;
/* 9872f6: xor eax, eax */
  eax = 0;
/* 9872f8: mov edi, edx */
  edi = edx;
/* 9872fa: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9872fc: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_987300: /* 987300: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 987302: jle 0x987345 */
  if ((zf || sf != of)) goto L_987345;
L_987304: /* 987304: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 987308: mov edi, edx */
  edi = edx;
/* 98730a: mov ebp, esi */
  ebp = esi;
/* 98730c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_987310: /* 987310: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 987314: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 987318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98731a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98731b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98731c: call 0x986d70 */
  esp -= 4; W32(esp, 0x987321u); SPILL(); f_986d70(); if (g_unwind) return; RELOAD();
/* 987321: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 987325: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 987328: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98732a: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 98732e: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 987331: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987334: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 987336: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 987337: jne 0x987310 */
  if (!zf) goto L_987310;
L_987339: /* 987339: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 98733d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 987341: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_987345: /* 987345: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 987349: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98734b: jle 0x9873ea */
  if ((zf || sf != of)) goto L_9873ea;
L_987351: /* 987351: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 987355: mov ecx, edx */
  ecx = edx;
/* 987357: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 987359: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98735d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 987361: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 987365: jmp 0x987370 */
  goto L_987370;
L_987367: /* 987367: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98736b: jmp 0x987370 */
  goto L_987370;
L_987370: /* 987370: xor eax, eax */
  eax = 0;
/* 987372: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 987374: jle 0x98739b */
  if ((zf || sf != of)) goto L_98739b;
L_987376: /* 987376: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 98737a: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 987381: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_987383: /* 987383: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 987385: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 987389: mov dword ptr [ebx + eax*4], edi */
  W32((uint32_t)(ebx + eax*4), edi);
/* 98738c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98738d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98738f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 987391: jl 0x987383 */
  if ((sf != of)) goto L_987383;
L_987393: /* 987393: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 987397: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
L_98739b: /* 98739b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98739f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9873a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9873a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9873a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9873a3: call 0x986d70 */
  esp -= 4; W32(esp, 0x9873a8u); SPILL(); f_986d70(); if (g_unwind) return; RELOAD();
/* 9873a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9873ab: xor eax, eax */
  eax = 0;
/* 9873ad: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9873af: jle 0x9873d0 */
  if ((zf || sf != of)) goto L_9873d0;
L_9873b1: /* 9873b1: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9873b5: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 9873bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9873c0: /* 9873c0: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 9873c3: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 9873c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9873c6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9873c8: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9873ca: jl 0x9873c0 */
  if ((sf != of)) goto L_9873c0;
L_9873cc: /* 9873cc: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
L_9873d0: /* 9873d0: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9873d4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9873d8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9873db: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9873dc: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 9873e0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9873e4: jne 0x987367 */
  if (!zf) goto L_987367;
L_9873e6: /* 9873e6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
L_9873ea: /* 9873ea: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9873ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9873f0: je 0x9873ff */
  if (zf) goto L_9873ff;
L_9873f2: /* 9873f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9873f3: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9873f8u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9873f8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9873fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9873ff: /* 9873ff: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987401: je 0x987410 */
  if (zf) goto L_987410;
L_987403: /* 987403: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987404: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x987409u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 987409: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98740d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_987410: /* 987410: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987412: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987413: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987414: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 987415: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 987416: je 0x987421 */
  if (zf) goto L_987421;
L_987418: /* 987418: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987419: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98741eu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98741e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_987421: /* 987421: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987424: ret  */
  esp += 4; SPILL(); return;
}

void f_98736d(void) {
  LOAD_REGS();
  goto L_98736d;
L_987367: /* 987367: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98736b: jmp 0x987370 */
  goto L_987370;
L_98736d: /* 98736d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_987370: /* 987370: xor eax, eax */
  eax = 0;
/* 987372: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 987374: jle 0x98739b */
  if ((zf || sf != of)) goto L_98739b;
L_987376: /* 987376: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 98737a: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 987381: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_987383: /* 987383: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 987385: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 987389: mov dword ptr [ebx + eax*4], edi */
  W32((uint32_t)(ebx + eax*4), edi);
/* 98738c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98738d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98738f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 987391: jl 0x987383 */
  if ((sf != of)) goto L_987383;
L_987393: /* 987393: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 987397: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
L_98739b: /* 98739b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98739f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9873a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9873a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9873a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9873a3: call 0x986d70 */
  esp -= 4; W32(esp, 0x9873a8u); SPILL(); f_986d70(); if (g_unwind) return; RELOAD();
/* 9873a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9873ab: xor eax, eax */
  eax = 0;
/* 9873ad: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9873af: jle 0x9873d0 */
  if ((zf || sf != of)) goto L_9873d0;
L_9873b1: /* 9873b1: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9873b5: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 9873bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9873c0: /* 9873c0: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 9873c3: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 9873c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9873c6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9873c8: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9873ca: jl 0x9873c0 */
  if ((sf != of)) goto L_9873c0;
L_9873cc: /* 9873cc: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
L_9873d0: /* 9873d0: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9873d4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9873d8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9873db: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9873dc: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 9873e0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9873e4: jne 0x987367 */
  if (!zf) goto L_987367;
L_9873e6: /* 9873e6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9873ea: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9873ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9873f0: je 0x9873ff */
  if (zf) goto L_9873ff;
L_9873f2: /* 9873f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9873f3: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9873f8u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9873f8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9873fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9873ff: /* 9873ff: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987401: je 0x987410 */
  if (zf) goto L_987410;
L_987403: /* 987403: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987404: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x987409u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 987409: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98740d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_987410: /* 987410: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987412: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987413: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987414: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 987415: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 987416: je 0x987421 */
  if (zf) goto L_987421;
L_987418: /* 987418: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987419: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98741eu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98741e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_987421: /* 987421: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987424: ret  */
  esp += 4; SPILL(); return;
}

void f_987430(void) {
  LOAD_REGS();
L_987430: /* 987430: mov eax, 0x511 */
  eax = 0x511u;
/* 987435: ret  */
  esp += 4; SPILL(); return;
}

void f_987440(void) {
  LOAD_REGS();
L_987440: /* 987440: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 987444: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 987448: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 98744c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 987450: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 987454: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 987458: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 98745c: mov dword ptr [0xcf2fe0], eax */
  W32((uint32_t)(0xcf2fe0u), eax);
/* 987461: mov dword ptr [0xcf2fe4], ecx */
  W32((uint32_t)(0xcf2fe4u), ecx);
/* 987467: mov dword ptr [0xcf2fe8], edx */
  W32((uint32_t)(0xcf2fe8u), edx);
/* 98746d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98746f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 987473: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 987477: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 987479: fsqrt  */
  ST0 = sqrt(ST0);
/* 98747b: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 987481: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 987483: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 987486: jnp 0x9874bf */
  if (!pf) goto L_9874bf;
L_987488: /* 987488: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 98748e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 987490: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 987493: jnp 0x9874bf */
  if (!pf) goto L_9874bf;
L_987495: /* 987495: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98749b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 98749f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9874a1: fstp dword ptr [0xcf2fe0] */
  WF32((uint32_t)(0xcf2fe0u), ST0); FPOP();
/* 9874a7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9874ab: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9874ad: fstp dword ptr [0xcf2fe4] */
  WF32((uint32_t)(0xcf2fe4u), ST0); FPOP();
/* 9874b3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9874b7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9874b9: fstp dword ptr [0xcf2fe8] */
  WF32((uint32_t)(0xcf2fe8u), ST0); FPOP();
L_9874bf: /* 9874bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9874c1: ret  */
  esp += 4; SPILL(); return;
}

void f_9874d0(void) {
  LOAD_REGS();
L_9874d0: /* 9874d0: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 9874d5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 9874da: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 9874df: call 0x987440 */
  esp -= 4; W32(esp, 0x9874e4u); SPILL(); f_987440(); if (g_unwind) return; RELOAD();
/* 9874e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9874e7: ret  */
  esp += 4; SPILL(); return;
}

void f_9874f0(void) {
  LOAD_REGS();
L_9874f0: /* 9874f0: push 0x3da7ef9e */
  { uint32_t v = 0x3da7ef9eu; esp -= 4; W32(esp, v); }
/* 9874f5: push 0x3f1be76d */
  { uint32_t v = 0x3f1be76du; esp -= 4; W32(esp, v); }
/* 9874fa: push 0x3e9e353f */
  { uint32_t v = 0x3e9e353fu; esp -= 4; W32(esp, v); }
/* 9874ff: call 0x987440 */
  esp -= 4; W32(esp, 0x987504u); SPILL(); f_987440(); if (g_unwind) return; RELOAD();
/* 987504: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987507: ret  */
  esp += 4; SPILL(); return;
}

void f_987510(void) {
  LOAD_REGS();
L_987510: /* 987510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 987511: mov ebp, esp */
  ebp = esp;
/* 987513: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 987516: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98751c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98751d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98751e: xor eax, eax */
  eax = 0;
/* 987520: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987525: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 987529: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 98752b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 98752d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 987530: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 987533: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 987537: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98753a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98753e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 987542: xor eax, eax */
  eax = 0;
/* 987544: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987549: lea edi, [esp + 0x88] */
  edi = (uint32_t)(esp + 0x88u);
/* 987550: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 987552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987553: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 987557: mov esi, 0x7c */
  esi = 0x7cu;
/* 98755c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98755d: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 987561: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 987565: mov dword ptr [esp + 0x14], 0x180e */
  W32((uint32_t)(esp + 0x14u), 0x180eu);
/* 98756d: mov dword ptr [esp + 0x5c], 0x40 */
  W32((uint32_t)(esp + 0x5cu), 0x40u);
/* 987575: mov dword ptr [esp + 0x64], 0x20 */
  W32((uint32_t)(esp + 0x64u), 0x20u);
/* 98757d: mov dword ptr [esp + 0x68], 0xff0000 */
  W32((uint32_t)(esp + 0x68u), 0xff0000u);
/* 987585: mov dword ptr [esp + 0x6c], 0xff00 */
  W32((uint32_t)(esp + 0x6cu), 0xff00u);
/* 98758d: mov dword ptr [esp + 0x70], 0xff */
  W32((uint32_t)(esp + 0x70u), 0xffu);
/* 987595: mov dword ptr [esp + 0x90], esi */
  W32((uint32_t)(esp + 0x90u), esi);
/* 98759c: call 0x98ab30 */
  esp -= 4; W32(esp, 0x9875a1u); SPILL(); f_98ab30(); if (g_unwind) return; RELOAD();
/* 9875a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9875a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9875a4: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 9875a6: call 0x99cf54 */
  esp -= 4; W32(esp, 0x9875abu); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 9875ab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9875ae: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9875b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9875b1: mov esi, eax */
  esi = eax;
/* 9875b3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9875b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9875b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9875b8: push 0xcf2fe0 */
  { uint32_t v = 0xcf2fe0u; esp -= 4; W32(esp, v); }
/* 9875bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9875bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9875c0: lea edx, [esp + 0xb0] */
  edx = (uint32_t)(esp + 0xb0u);
/* 9875c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9875c8: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 9875cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9875ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9875cf: call 0x98abb0 */
  esp -= 4; W32(esp, 0x9875d4u); SPILL(); f_98abb0(); if (g_unwind) return; RELOAD();
/* 9875d4: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9875d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9875d8: mov eax, esi */
  eax = esi;
/* 9875da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9875db: mov esp, ebp */
  esp = ebp;
/* 9875dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9875de: ret  */
  esp += 4; SPILL(); return;
}

void f_9875e0(void) {
  LOAD_REGS();
L_9875e0: /* 9875e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9875e1: mov ebp, esp */
  ebp = esp;
/* 9875e3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9875e6: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9875ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9875ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9875ee: xor eax, eax */
  eax = 0;
/* 9875f0: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 9875f5: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 9875f9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9875fb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9875fd: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 987600: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 987603: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 987607: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98760a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98760e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 987612: xor eax, eax */
  eax = 0;
/* 987614: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987619: lea edi, [esp + 0x88] */
  edi = (uint32_t)(esp + 0x88u);
/* 987620: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 987622: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 987626: mov esi, 0x7c */
  esi = 0x7cu;
/* 98762b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 98762d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98762e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 987632: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 987636: mov dword ptr [esp + 0x14], 0x180e */
  W32((uint32_t)(esp + 0x14u), 0x180eu);
/* 98763e: mov dword ptr [esp + 0x5c], 0x41 */
  W32((uint32_t)(esp + 0x5cu), 0x41u);
/* 987646: mov dword ptr [esp + 0x64], 0x20 */
  W32((uint32_t)(esp + 0x64u), 0x20u);
/* 98764e: mov dword ptr [esp + 0x68], 0xff0000 */
  W32((uint32_t)(esp + 0x68u), 0xff0000u);
/* 987656: mov dword ptr [esp + 0x6c], 0xff00 */
  W32((uint32_t)(esp + 0x6cu), 0xff00u);
/* 98765e: mov dword ptr [esp + 0x70], 0xff */
  W32((uint32_t)(esp + 0x70u), 0xffu);
/* 987666: mov dword ptr [esp + 0x74], 0xff000000 */
  W32((uint32_t)(esp + 0x74u), 0xff000000u);
/* 98766e: mov dword ptr [esp + 0x90], esi */
  W32((uint32_t)(esp + 0x90u), esi);
/* 987675: call 0x98ab30 */
  esp -= 4; W32(esp, 0x98767au); SPILL(); f_98ab30(); if (g_unwind) return; RELOAD();
/* 98767a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98767b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98767d: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 98767f: call 0x99cf54 */
  esp -= 4; W32(esp, 0x987684u); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 987684: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 987687: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 987689: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98768a: mov esi, eax */
  esi = eax;
/* 98768c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98768e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98768f: push 0xcf2fe0 */
  { uint32_t v = 0xcf2fe0u; esp -= 4; W32(esp, v); }
/* 987694: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 987696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987697: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 98769e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98769f: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 9876a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9876a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9876a6: call 0x98abb0 */
  esp -= 4; W32(esp, 0x9876abu); SPILL(); f_98abb0(); if (g_unwind) return; RELOAD();
/* 9876ab: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9876ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9876af: mov eax, esi */
  eax = esi;
/* 9876b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9876b2: mov esp, ebp */
  esp = ebp;
/* 9876b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9876b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9876c0(void) {
  LOAD_REGS();
L_9876c0: /* 9876c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9876c1: mov ebp, esp */
  ebp = esp;
/* 9876c3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9876c6: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9876cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9876cd: xor eax, eax */
  eax = 0;
/* 9876cf: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 9876d4: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 9876d8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9876da: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9876dd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9876e0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9876e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9876e5: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 9876e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9876ea: mov dword ptr [esp + 0x10], 0x7c */
  W32((uint32_t)(esp + 0x10u), 0x7cu);
/* 9876f2: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9876f6: mov dword ptr [esp + 0x14], 6 */
  W32((uint32_t)(esp + 0x14u), 0x6u);
/* 9876fe: call 0x98ab30 */
  esp -= 4; W32(esp, 0x987703u); SPILL(); f_98ab30(); if (g_unwind) return; RELOAD();
/* 987703: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987706: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987707: mov esp, ebp */
  esp = ebp;
/* 987709: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98770a: ret  */
  esp += 4; SPILL(); return;
}

void f_987710(void) {
  LOAD_REGS();
L_987710: /* 987710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 987711: mov ebp, esp */
  ebp = esp;
/* 987713: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 987716: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98771c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98771d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98771e: xor eax, eax */
  eax = 0;
/* 987720: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987725: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 987729: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 98772b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 98772d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 987730: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 987733: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 987737: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98773a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98773e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 987742: xor eax, eax */
  eax = 0;
/* 987744: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987749: lea edi, [esp + 0x88] */
  edi = (uint32_t)(esp + 0x88u);
/* 987750: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 987752: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 987756: mov esi, 0x7c */
  esi = 0x7cu;
/* 98775b: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 987760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987761: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 987765: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 987769: mov dword ptr [esp + 0x14], 0x180e */
  W32((uint32_t)(esp + 0x14u), 0x180eu);
/* 987771: mov dword ptr [esp + 0x5c], 0x41 */
  W32((uint32_t)(esp + 0x5cu), 0x41u);
/* 987779: mov dword ptr [esp + 0x64], 0x20 */
  W32((uint32_t)(esp + 0x64u), 0x20u);
/* 987781: mov dword ptr [esp + 0x68], 0xff0000 */
  W32((uint32_t)(esp + 0x68u), 0xff0000u);
/* 987789: mov dword ptr [esp + 0x6c], 0xff00 */
  W32((uint32_t)(esp + 0x6cu), 0xff00u);
/* 987791: mov dword ptr [esp + 0x70], 0xff */
  W32((uint32_t)(esp + 0x70u), 0xffu);
/* 987799: mov dword ptr [esp + 0x74], 0xff000000 */
  W32((uint32_t)(esp + 0x74u), 0xff000000u);
/* 9877a1: mov dword ptr [esp + 0x90], esi */
  W32((uint32_t)(esp + 0x90u), esi);
/* 9877a8: call 0x98ab30 */
  esp -= 4; W32(esp, 0x9877adu); SPILL(); f_98ab30(); if (g_unwind) return; RELOAD();
/* 9877ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9877ae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9877b0: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 9877b2: call 0x99cf54 */
  esp -= 4; W32(esp, 0x9877b7u); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 9877b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9877ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9877bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9877bd: mov esi, eax */
  esi = eax;
/* 9877bf: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9877c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9877c2: push 0xcf2fe0 */
  { uint32_t v = 0xcf2fe0u; esp -= 4; W32(esp, v); }
/* 9877c7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 9877cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9877cd: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 9877d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9877d5: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 9877d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9877db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9877dc: call 0x98abb0 */
  esp -= 4; W32(esp, 0x9877e1u); SPILL(); f_98abb0(); if (g_unwind) return; RELOAD();
/* 9877e1: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9877e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9877e5: mov eax, esi */
  eax = esi;
/* 9877e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9877e8: mov esp, ebp */
  esp = ebp;
/* 9877ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9877eb: ret  */
  esp += 4; SPILL(); return;
}

void f_9877f0(void) {
  LOAD_REGS();
L_9877f0: /* 9877f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9877f1: mov ebp, esp */
  ebp = esp;
/* 9877f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9877f6: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9877fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9877fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9877fe: xor eax, eax */
  eax = 0;
/* 987800: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987805: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 987809: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 98780b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 98780d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 987810: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 987813: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 987817: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98781a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98781e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 987822: xor eax, eax */
  eax = 0;
/* 987824: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987829: lea edi, [esp + 0x88] */
  edi = (uint32_t)(esp + 0x88u);
/* 987830: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 987832: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 987836: mov esi, 0x7c */
  esi = 0x7cu;
/* 98783b: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 987840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987841: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 987845: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 987849: mov dword ptr [esp + 0x14], 0x180e */
  W32((uint32_t)(esp + 0x14u), 0x180eu);
/* 987851: mov dword ptr [esp + 0x5c], 0x41 */
  W32((uint32_t)(esp + 0x5cu), 0x41u);
/* 987859: mov dword ptr [esp + 0x64], 0x20 */
  W32((uint32_t)(esp + 0x64u), 0x20u);
/* 987861: mov dword ptr [esp + 0x68], 0xff0000 */
  W32((uint32_t)(esp + 0x68u), 0xff0000u);
/* 987869: mov dword ptr [esp + 0x6c], 0xff00 */
  W32((uint32_t)(esp + 0x6cu), 0xff00u);
/* 987871: mov dword ptr [esp + 0x70], 0xff */
  W32((uint32_t)(esp + 0x70u), 0xffu);
/* 987879: mov dword ptr [esp + 0x74], 0xff000000 */
  W32((uint32_t)(esp + 0x74u), 0xff000000u);
/* 987881: mov dword ptr [esp + 0x90], esi */
  W32((uint32_t)(esp + 0x90u), esi);
/* 987888: call 0x98ab30 */
  esp -= 4; W32(esp, 0x98788du); SPILL(); f_98ab30(); if (g_unwind) return; RELOAD();
/* 98788d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98788e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 987890: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 987892: call 0x99cf54 */
  esp -= 4; W32(esp, 0x987897u); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 987897: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98789a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98789c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98789d: mov esi, eax */
  esi = eax;
/* 98789f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9878a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9878a2: push 0xcf2fe0 */
  { uint32_t v = 0xcf2fe0u; esp -= 4; W32(esp, v); }
/* 9878a7: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 9878ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9878ad: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 9878b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9878b5: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 9878b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9878bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9878bc: call 0x98abb0 */
  esp -= 4; W32(esp, 0x9878c1u); SPILL(); f_98abb0(); if (g_unwind) return; RELOAD();
/* 9878c1: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9878c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9878c5: mov eax, esi */
  eax = esi;
/* 9878c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9878c8: mov esp, ebp */
  esp = ebp;
/* 9878ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9878cb: ret  */
  esp += 4; SPILL(); return;
}

void f_9878d0(void) {
  LOAD_REGS();
L_9878d0: /* 9878d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9878d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9878d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9878d3: call 0x9855b0 */
  esp -= 4; W32(esp, 0x9878d8u); SPILL(); f_9855b0(); if (g_unwind) return; RELOAD();
/* 9878d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9878db: ret  */
  esp += 4; SPILL(); return;
}

void f_9878e0(void) {
  LOAD_REGS();
L_9878e0: /* 9878e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9878e1: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 9878e5: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 9878e8: imul esi, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  esi = (uint32_t)r;
  }
/* 9878ed: mov eax, esi */
  eax = esi;
/* 9878ef: imul eax, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 9878f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9878f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9878f7: call 0x99cf54 */
  esp -= 4; W32(esp, 0x9878fcu); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 9878fc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 987900: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987903: mov dword ptr [ecx + 0x14], esi */
  W32((uint32_t)(ecx + 0x14u), esi);
/* 987906: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 987908: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987909: ret  */
  esp += 4; SPILL(); return;
}

void f_987910(void) {
  LOAD_REGS();
L_987910: /* 987910: fld qword ptr [ecx + 0x10] */
  { double v = F64((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 987913: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 987916: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 987918: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98791a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98791c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98791e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 987920: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 987922: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 987924: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 987926: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 987928: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 98792a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98792c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98792e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 987930: fabs  */
  ST0 = fabs(ST0);
/* 987932: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 987938: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98793a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98793d: jne 0x98795c */
  if (!zf) goto L_98795c;
L_98793f: /* 98793f: fsqrt  */
  ST0 = sqrt(ST0);
/* 987941: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 987947: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 987949: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 98794b: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98794d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98794f: fmul qword ptr [ecx + 8] */
  ST0 = ST0 * (F64((uint32_t)(ecx + 0x8u)));
/* 987952: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 987955: fmul qword ptr [ecx + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ecx + 0x10u)));
/* 987958: fstp qword ptr [ecx + 0x10] */
  WF64((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 98795b: ret  */
  esp += 4; SPILL(); return;
L_98795c: /* 98795c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98795e: ret  */
  esp += 4; SPILL(); return;
}

void f_987960(void) {
  LOAD_REGS();
L_987960: /* 987960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 987961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987962: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 987966: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 987968: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987969: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 98796f: fmul qword ptr [0xa219b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b0u)));
/* 987975: call 0x99c958 */
  esp -= 4; W32(esp, 0x98797au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98797a: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98797f: mov ebx, 0xff */
  ebx = 0xffu;
/* 987984: ja 0x987988 */
  if ((!cf && !zf)) goto L_987988;
L_987986: /* 987986: mov ebx, eax */
  ebx = eax;
L_987988: /* 987988: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 98798b: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 987991: fmul qword ptr [0xa219b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b0u)));
/* 987997: call 0x99c958 */
  esp -= 4; W32(esp, 0x98799cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98799c: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9879a1: mov edi, 0xff */
  edi = 0xffu;
/* 9879a6: ja 0x9879aa */
  if ((!cf && !zf)) goto L_9879aa;
L_9879a8: /* 9879a8: mov edi, eax */
  edi = eax;
L_9879aa: /* 9879aa: fld qword ptr [esi + 0x10] */
  { double v = F64((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 9879ad: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 9879b3: fmul qword ptr [0xa219b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b0u)));
/* 9879b9: call 0x99c958 */
  esp -= 4; W32(esp, 0x9879beu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9879be: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9879c3: jbe 0x9879ca */
  if ((cf | zf)) goto L_9879ca;
L_9879c5: /* 9879c5: mov eax, 0xff */
  eax = 0xffu;
L_9879ca: /* 9879ca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9879ce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9879d0: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9879d3: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9879d5: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9879d8: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9879da: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9879dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9879de: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9879e0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9879e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9879e5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9879e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9879e8: ret  */
  esp += 4; SPILL(); return;
}

void f_9879f0(void) {
  LOAD_REGS();
L_9879f0: /* 9879f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9879f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9879f6: movzx edx, byte ptr [eax + 3] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x3u)));
/* 9879fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9879fb: movzx esi, byte ptr [eax + 1] */
  esi = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 9879ff: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 987a03: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 987a07: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 987a0b: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 987a11: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 987a13: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 987a17: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 987a1b: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 987a21: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 987a27: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 987a29: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 987a2d: jge 0x987a35 */
  if ((sf == of)) goto L_987a35;
L_987a2f: /* 987a2f: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_987a35: /* 987a35: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 987a37: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 987a3d: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 987a41: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 987a47: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 987a4a: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 987a4e: jge 0x987a56 */
  if ((sf == of)) goto L_987a56;
L_987a50: /* 987a50: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_987a56: /* 987a56: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 987a5c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 987a60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987a61: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 987a67: fstp qword ptr [eax + 0x10] */
  WF64((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 987a6a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 987a6c: ret  */
  esp += 4; SPILL(); return;
}

void f_987a70(void) {
  LOAD_REGS();
L_987a70: /* 987a70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 987a74: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 987a78: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 987a7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987a7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987a7f: call 0x9855b0 */
  esp -= 4; W32(esp, 0x987a84u); SPILL(); f_9855b0(); if (g_unwind) return; RELOAD();
/* 987a84: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987a87: ret  */
  esp += 4; SPILL(); return;
}

void f_987a90(void) {
  LOAD_REGS();
L_987a90: /* 987a90: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 987a94: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 987a96: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 987a99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 987a9a: mov byte ptr [esp + 0xc], cl */
  W8((uint32_t)(esp + 0xcu), (ecx & 0xffu));
/* 987a9e: mov cl, byte ptr [eax + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 987aa1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 987aa2: mov byte ptr [esp + 0xd], dl */
  W8((uint32_t)(esp + 0xdu), (edx & 0xffu));
/* 987aa6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 987aaa: mov byte ptr [esp + 0xe], cl */
  W8((uint32_t)(esp + 0xeu), (ecx & 0xffu));
/* 987aae: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 987ab1: cmp word ptr [ecx + 0x34], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x34u))); uint16_t b = (uint16_t)(0x4u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 987ab6: jne 0x987ac1 */
  if (!zf) goto L_987ac1;
L_987ab8: /* 987ab8: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 987abb: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
/* 987abf: jmp 0x987ac6 */
  goto L_987ac6;
L_987ac1: /* 987ac1: mov byte ptr [esp + 0xf], 0xff */
  W8((uint32_t)(esp + 0xfu), 0xffu);
L_987ac6: /* 987ac6: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 987aca: add eax, -0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987acd: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 987ad0: ja 0x987b69 */
  if ((!cf && !zf)) goto L_987b69;
L_987ad6: /* 987ad6: jmp dword ptr [eax*4 + 0x987b70] */
  switch (R32((uint32_t)(eax*4 + 0x987b70u))) {
    case 0x987addu: goto L_987add;
    case 0x987afeu: goto L_987afe;
    case 0x987b1fu: goto L_987b1f;
    case 0x987b40u: goto L_987b40;
    case 0x987b61u: goto L_987b61;
    default: guest_badjump(0x987ad6, R32((uint32_t)(eax*4 + 0x987b70u))); return;
  }
L_987add: /* 987add: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 987ae1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 987ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987ae6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987ae7: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 987aeb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987aec: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 987af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987af1: call 0x98cbd0 */
  esp -= 4; W32(esp, 0x987af6u); SPILL(); f_98cbd0(); if (g_unwind) return; RELOAD();
/* 987af6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 987afa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987afd: ret  */
  esp += 4; SPILL(); return;
L_987afe: /* 987afe: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 987b02: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 987b06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987b07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987b08: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 987b0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987b0d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 987b11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987b12: call 0x98c8f0 */
  esp -= 4; W32(esp, 0x987b17u); SPILL(); f_98c8f0(); if (g_unwind) return; RELOAD();
/* 987b17: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 987b1b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987b1e: ret  */
  esp += 4; SPILL(); return;
L_987b1f: /* 987b1f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 987b23: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 987b27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987b28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987b29: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 987b2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987b2e: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 987b32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987b33: call 0x98cad0 */
  esp -= 4; W32(esp, 0x987b38u); SPILL(); f_98cad0(); if (g_unwind) return; RELOAD();
/* 987b38: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 987b3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987b3f: ret  */
  esp += 4; SPILL(); return;
L_987b40: /* 987b40: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 987b44: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 987b48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987b49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987b4a: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 987b4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987b4f: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 987b53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987b54: call 0x98c5e0 */
  esp -= 4; W32(esp, 0x987b59u); SPILL(); f_98c5e0(); if (g_unwind) return; RELOAD();
/* 987b59: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 987b5d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987b60: ret  */
  esp += 4; SPILL(); return;
L_987b61: /* 987b61: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 987b65: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
L_987b69: /* 987b69: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 987b6d: ret  */
  esp += 4; SPILL(); return;
}

void f_987ba0(void) {
  LOAD_REGS();
L_987ba0: /* 987ba0: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 987ba4: jb 0x987baa */
  if (cf) goto L_987baa;
L_987ba6: /* 987ba6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 987ba9: ret  */
  esp += 4; SPILL(); return;
L_987baa: /* 987baa: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 987bad: ret  */
  esp += 4; SPILL(); return;
}

void f_987bb0(void) {
  LOAD_REGS();
L_987bb0: /* 987bb0: mov eax, ecx */
  eax = ecx;
/* 987bb2: ret  */
  esp += 4; SPILL(); return;
}

void f_987bc0(void) {
  LOAD_REGS();
L_987bc0: /* 987bc0: mov eax, ecx */
  eax = ecx;
/* 987bc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_987bd0(void) {
  LOAD_REGS();
L_987bd0: /* 987bd0: mov eax, ecx */
  eax = ecx;
/* 987bd2: ret  */
  esp += 4; SPILL(); return;
}

void f_987be0(void) {
  LOAD_REGS();
L_987be0: /* 987be0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 987be2: ret  */
  esp += 4; SPILL(); return;
}

void f_987bf0(void) {
  LOAD_REGS();
L_987bf0: /* 987bf0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 987bf2: ret  */
  esp += 4; SPILL(); return;
}

void f_987c00(void) {
  LOAD_REGS();
L_987c00: /* 987c00: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 987c03: ret  */
  esp += 4; SPILL(); return;
}

void f_987c10(void) {
  LOAD_REGS();
L_987c10: /* 987c10: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 987c14: jb 0x987c1a */
  if (cf) goto L_987c1a;
L_987c16: /* 987c16: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 987c19: ret  */
  esp += 4; SPILL(); return;
L_987c1a: /* 987c1a: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 987c1d: ret  */
  esp += 4; SPILL(); return;
}

void f_987c20(void) {
  LOAD_REGS();
L_987c20: /* 987c20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 987c24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987c25: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x987c2au); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 987c2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 987c2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_987c30(void) {
  LOAD_REGS();
L_987c30: /* 987c30: mov eax, ecx */
  eax = ecx;
/* 987c32: ret 4 */
  esp += 8; SPILL(); return;
}

void f_987c40(void) {
  LOAD_REGS();
L_987c40: /* 987c40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 987c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987c45: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x987c4au); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 987c4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 987c4b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_987c50(void) {
  LOAD_REGS();
L_987c50: /* 987c50: mov eax, ecx */
  eax = ecx;
/* 987c52: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 987c56: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 987c58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_987c60(void) {
  LOAD_REGS();
L_987c60: /* 987c60: mov eax, ecx */
  eax = ecx;
/* 987c62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 987c66: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 987c68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_987c70(void) {
  LOAD_REGS();
L_987c70: /* 987c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987c71: mov esi, dword ptr [ecx + 0x18] */
  esi = R32((uint32_t)(ecx + 0x18u));
/* 987c74: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 987c77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987c78: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 987c7b: jb 0x987c81 */
  if (cf) goto L_987c81;
L_987c7d: /* 987c7d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 987c7f: jmp 0x987c83 */
  goto L_987c83;
L_987c81: /* 987c81: mov edx, eax */
  edx = eax;
L_987c83: /* 987c83: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 987c87: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 987c89: ja 0x987ca5 */
  if ((!cf && !zf)) goto L_987ca5;
L_987c8b: /* 987c8b: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 987c8e: jb 0x987c92 */
  if (cf) goto L_987c92;
L_987c90: /* 987c90: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_987c92: /* 987c92: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 987c95: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 987c97: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 987c99: jae 0x987ca5 */
  if (!cf) goto L_987ca5;
L_987c9b: /* 987c9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987c9c: mov eax, 1 */
  eax = 0x1u;
/* 987ca1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987ca2: ret 4 */
  esp += 8; SPILL(); return;
L_987ca5: /* 987ca5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987ca6: xor eax, eax */
  eax = 0;
/* 987ca8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987ca9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_987cb0(void) {
  LOAD_REGS();
L_987cb0: /* 987cb0: mov eax, 0x3fffffff */
  eax = 0x3fffffffu;
/* 987cb5: ret  */
  esp += 4; SPILL(); return;
}

void f_987cc0(void) {
  LOAD_REGS();
L_987cc0: /* 987cc0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 987cc3: ret  */
  esp += 4; SPILL(); return;
}

void f_987cd0(void) {
  LOAD_REGS();
L_987cd0: /* 987cd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 987cd4: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 987cdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987cdc: call 0x6c242d */
  esp -= 4; W32(esp, 0x987ce1u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 987ce1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987ce4: ret  */
  esp += 4; SPILL(); return;
}

void f_987cf0(void) {
  LOAD_REGS();
L_987cf0: /* 987cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 987cf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987cf5: call 0x6c242d */
  esp -= 4; W32(esp, 0x987cfau); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 987cfa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987cfd: ret  */
  esp += 4; SPILL(); return;
}

void f_987d00(void) {
  LOAD_REGS();
L_987d00: /* 987d00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987d01: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 987d05: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 987d06: ret  */
  esp += 4; SPILL(); return;
}

void f_987d10(void) {
  LOAD_REGS();
L_987d10: /* 987d10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 987d14: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 987d16: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 987d1a: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 987d1c: ret  */
  esp += 4; SPILL(); return;
}

void f_987d20(void) {
  LOAD_REGS();
L_987d20: /* 987d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 987d24: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_987d27: /* 987d27: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 987d29: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 987d2a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 987d2c: jne 0x987d27 */
  if (!zf) goto L_987d27;
L_987d2e: /* 987d2e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 987d30: ret  */
  esp += 4; SPILL(); return;
}

void f_987d40(void) {
  LOAD_REGS();
L_987d40: /* 987d40: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 987d44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987d45: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 987d49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987d4a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 987d4e: mov eax, ecx */
  eax = ecx;
/* 987d50: mov edx, edi */
  edx = edi;
/* 987d52: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 987d55: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 987d57: mov ecx, eax */
  ecx = eax;
/* 987d59: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 987d5c: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 987d5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987d5f: mov eax, edx */
  eax = edx;
/* 987d61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987d62: ret  */
  esp += 4; SPILL(); return;
}

void f_987d70(void) {
  LOAD_REGS();
L_987d70: /* 987d70: jmp 0x99d01a */
  SPILL(); hle_memcpy(); return;
}

void f_987d80(void) {
  LOAD_REGS();
L_987d80: /* 987d80: ret  */
  esp += 4; SPILL(); return;
}

void f_987d90(void) {
  LOAD_REGS();
L_987d90: /* 987d90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 987d91: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 987d95: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 987d98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 987d99: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 987d9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987d9e: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 987da2: movzx edx, byte ptr [esi] */
  edx = (uint32_t)(R8((uint32_t)(esi)));
/* 987da5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987da7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987da8: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 987dac: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 987daf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987db1: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 987db4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987db6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 987db7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 987dba: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987dbc: movzx edx, byte ptr [esi + 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 987dc0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 987dc3: mov byte ptr [esp + 0xc], al */
  W8((uint32_t)(esp + 0xcu), (eax & 0xffu));
/* 987dc7: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 987dcb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987dcd: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* 987dd1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987dd3: movzx edx, byte ptr [ebx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 987dd7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987dd9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 987dda: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 987ddd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987ddf: movzx edx, byte ptr [esi + 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x2u)));
/* 987de3: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 987de6: mov byte ptr [esp + 0xd], al */
  W8((uint32_t)(esp + 0xdu), (eax & 0xffu));
/* 987dea: movzx eax, byte ptr [ecx + 2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 987dee: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987df0: movzx edx, byte ptr [edi + 2] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* 987df4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987df6: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 987dfa: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987dfc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 987dfd: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 987e00: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987e02: movzx edx, byte ptr [edi + 3] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x3u)));
/* 987e06: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 987e09: mov byte ptr [esp + 0xe], al */
  W8((uint32_t)(esp + 0xeu), (eax & 0xffu));
/* 987e0d: movzx eax, byte ptr [ecx + 3] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x3u)));
/* 987e11: movzx ecx, byte ptr [esi + 3] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x3u)));
/* 987e15: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987e17: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 987e1b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987e1d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987e1f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 987e20: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 987e23: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987e25: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 987e29: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 987e2c: mov byte ptr [esp + 0xf], al */
  W8((uint32_t)(esp + 0xfu), (eax & 0xffu));
/* 987e30: mov al, byte ptr [edx + 0x2384] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2384u))) & 0xffu);
/* 987e36: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 987e38: je 0x987e4d */
  if (zf) goto L_987e4d;
L_987e3a: /* 987e3a: cmp byte ptr [esp + 0xf], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0xfu))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 987e3f: setb al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 987e42: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 987e44: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 987e49: mov byte ptr [esp + 0xf], al */
  W8((uint32_t)(esp + 0xfu), (eax & 0xffu));
L_987e4d: /* 987e4d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 987e51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987e52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 987e53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 987e54: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 987e55: ret  */
  esp += 4; SPILL(); return;
}

void f_987e60(void) {
  LOAD_REGS();
L_987e60: /* 987e60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 987e64: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 987e68: xor eax, eax */
  eax = 0;
/* 987e6a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 987e6c: jg 0x987e70 */
  if ((!zf && sf == of)) goto L_987e70;
L_987e6e: /* 987e6e: mov ecx, edx */
  ecx = edx;
L_987e70: /* 987e70: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987e72: je 0x987e7b */
  if (zf) goto L_987e7b;
L_987e74: /* 987e74: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 987e76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 987e77: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987e79: jne 0x987e74 */
  if (!zf) goto L_987e74;
L_987e7b: /* 987e7b: ret  */
  esp += 4; SPILL(); return;
}

void f_987e80(void) {
  LOAD_REGS();
L_987e80: /* 987e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 987e81: mov ebp, esp */
  ebp = esp;
/* 987e83: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 987e86: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 987e8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 987e8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 987e8e: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 987e90: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 987e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 987e95: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 987e97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987e98: mov dword ptr [esp + 0x18], 0x20534444 */
  W32((uint32_t)(esp + 0x18u), 0x20534444u);
/* 987ea0: call 0x9855b0 */
  esp -= 4; W32(esp, 0x987ea5u); SPILL(); f_9855b0(); if (g_unwind) return; RELOAD();
/* 987ea5: xor eax, eax */
  eax = 0;
/* 987ea7: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 987eac: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 987eb0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 987eb2: mov di, word ptr [esi + 0x237e] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x237eu))) & 0xffffu);
/* 987eb9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987ebc: cmp di, 0x21 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x21u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 987ec0: mov dword ptr [esp + 0x10], 0x7c */
  W32((uint32_t)(esp + 0x10u), 0x7cu);
/* 987ec8: mov dword ptr [esp + 0x14], 0x81007 */
  W32((uint32_t)(esp + 0x14u), 0x81007u);
/* 987ed0: je 0x987eda */
  if (zf) goto L_987eda;
L_987ed2: /* 987ed2: mov dword ptr [esp + 0x14], 0xa1007 */
  W32((uint32_t)(esp + 0x14u), 0xa1007u);
L_987eda: /* 987eda: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 987edd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 987ee0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 987ee3: neg bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 987ee5: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 987ee9: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 987eed: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 987eef: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 987ef1: cmp word ptr [esi + 0x23a8], 0x51 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x23a8u))); uint16_t b = (uint16_t)(0x51u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 987ef9: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 987efc: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 987f00: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 987f04: jne 0x987f0e */
  if (!zf) goto L_987f0e;
L_987f06: /* 987f06: or dword ptr [esp + 0x7c], 0xfe00 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu))); uint32_t b = (uint32_t)(0xfe00u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0x7cu), r);
  }
L_987f0e: /* 987f0e: mov dl, byte ptr [0xcf3074] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3074u))) & 0xffu);
/* 987f14: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 987f16: je 0x987f22 */
  if (zf) goto L_987f22;
L_987f18: /* 987f18: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 987f20: jmp 0x987f62 */
  goto L_987f62;
L_987f22: /* 987f22: xor edx, edx */
  edx = 0;
/* 987f24: cmp di, 0x1f */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 987f28: jne 0x987f4d */
  if (!zf) goto L_987f4d;
L_987f2a: /* 987f2a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 987f2c: movsx ebx, word ptr [esi + 0x2380] */
  ebx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi + 0x2380u)));
/* 987f33: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 987f37: jle 0x987f3b */
  if ((zf || sf != of)) goto L_987f3b;
L_987f39: /* 987f39: mov eax, ecx */
  eax = ecx;
L_987f3b: /* 987f3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987f3d: je 0x987f47 */
  if (zf) goto L_987f47;
L_987f3f: /* 987f3f: nop  */
L_987f40: /* 987f40: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 987f42: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 987f43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987f45: jne 0x987f40 */
  if (!zf) goto L_987f40;
L_987f47: /* 987f47: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 987f49: jbe 0x987f62 */
  if ((cf | zf)) goto L_987f62;
L_987f4b: /* 987f4b: jmp 0x987f5e */
  goto L_987f5e;
L_987f4d: /* 987f4d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 987f4f: jle 0x987f53 */
  if ((zf || sf != of)) goto L_987f53;
L_987f51: /* 987f51: mov eax, ecx */
  eax = ecx;
L_987f53: /* 987f53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987f55: je 0x987f5e */
  if (zf) goto L_987f5e;
L_987f57: /* 987f57: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 987f59: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 987f5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 987f5c: jne 0x987f57 */
  if (!zf) goto L_987f57;
L_987f5e: /* 987f5e: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
L_987f62: /* 987f62: mov al, byte ptr [0xcf3075] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3075u))) & 0xffu);
/* 987f67: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 987f69: mov dword ptr [esp + 0x58], 0x20 */
  W32((uint32_t)(esp + 0x58u), 0x20u);
/* 987f71: mov dword ptr [esp + 0x5c], 4 */
  W32((uint32_t)(esp + 0x5cu), 0x4u);
/* 987f79: je 0x987f9a */
  if (zf) goto L_987f9a;
L_987f7b: /* 987f7b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 987f7e: xor eax, eax */
  eax = 0;
/* 987f80: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 987f86: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 987f89: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 987f8a: and eax, 0xfe000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfe000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 987f8f: add eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 987f94: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 987f98: jmp 0x987fa2 */
  goto L_987fa2;
L_987f9a: /* 987f9a: mov dword ptr [esp + 0x60], 0x31545844 */
  W32((uint32_t)(esp + 0x60u), 0x31545844u);
L_987fa2: /* 987fa2: xor ecx, ecx */
  ecx = 0;
/* 987fa4: cmp di, 0x21 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x21u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 987fa8: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 987fab: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 987faf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 987fb0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 987fb3: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 987fb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 987fb6: mov dword ptr [esp + 0x8c], 0x58534444 */
  W32((uint32_t)(esp + 0x8cu), 0x58534444u);
/* 987fc1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 987fc2: and ecx, 0xffbffff8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffbffff8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 987fc8: add ecx, 0x401008 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x401008u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 987fce: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 987fd5: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
/* 987fdc: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 987fe3: call 0x9855b0 */
  esp -= 4; W32(esp, 0x987fe8u); SPILL(); f_9855b0(); if (g_unwind) return; RELOAD();
/* 987fe8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 987feb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 987fec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 987fed: mov esp, ebp */
  esp = ebp;
/* 987fef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 987ff0: ret  */
  esp += 4; SPILL(); return;
}

void f_988000(void) {
  LOAD_REGS();
L_988000: /* 988000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988001: mov ebp, esp */
  ebp = esp;
/* 988003: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 988006: sub esp, 0x5bc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5bcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98800c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98800d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98800e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 988011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988012: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 988016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988017: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 988019: mov ebx, 1 */
  ebx = 0x1u;
/* 98801e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98801f: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 988023: call 0x9855d0 */
  esp -= 4; W32(esp, 0x988028u); SPILL(); f_9855d0(); if (g_unwind) return; RELOAD();
/* 988028: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 98802c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98802f: cmp eax, 0x20534444 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20534444u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988034: je 0x98804b */
  if (zf) goto L_98804b;
L_988036: /* 988036: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 988038: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98803a: je 0x988041 */
  if (zf) goto L_988041;
L_98803c: /* 98803c: mov word ptr [esi], 0x88db */
  W16((uint32_t)(esi), 0x88dbu);
L_988041: /* 988041: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 988044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988045: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988046: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988047: mov esp, ebp */
  esp = ebp;
/* 988049: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98804a: ret  */
  esp += 4; SPILL(); return;
L_98804b: /* 98804b: xor eax, eax */
  eax = 0;
/* 98804d: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 988052: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* 988056: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 988058: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 98805c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98805d: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 98805f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988060: call 0x9855d0 */
  esp -= 4; W32(esp, 0x988065u); SPILL(); f_9855d0(); if (g_unwind) return; RELOAD();
/* 988065: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 988069: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98806c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98806e: jne 0x98807d */
  if (!zf) goto L_98807d;
L_988070: /* 988070: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 988074: mov byte ptr [0xcf3074], 1 */
  W8((uint32_t)(0xcf3074u), 0x1u);
/* 98807b: jmp 0x9880a3 */
  goto L_9880a3;
L_98807d: /* 98807d: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 988081: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 988085: xor ecx, ecx */
  ecx = 0;
/* 988087: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 988089: mov byte ptr [0xcf3074], 0 */
  W8((uint32_t)(0xcf3074u), 0x0u);
/* 988090: jg 0x988094 */
  if ((!zf && sf == of)) goto L_988094;
L_988092: /* 988092: mov eax, edx */
  eax = edx;
L_988094: /* 988094: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988096: je 0x98809f */
  if (zf) goto L_98809f;
L_988098: /* 988098: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98809a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98809b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98809d: jne 0x988098 */
  if (!zf) goto L_988098;
L_98809f: /* 98809f: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
L_9880a3: /* 9880a3: test dword ptr [esp + 0x4c], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9880ab: mov ebx, 1 */
  ebx = 0x1u;
/* 9880b0: mov byte ptr [esi + 0x237c], 0 */
  W8((uint32_t)(esi + 0x237cu), 0x0u);
/* 9880b7: je 0x9880fd */
  if (zf) goto L_9880fd;
L_9880b9: /* 9880b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9880bb: jbe 0x9880fd */
  if ((cf | zf)) goto L_9880fd;
L_9880bd: /* 9880bd: mov al, byte ptr [esi + 0x2371] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2371u))) & 0xffu);
/* 9880c3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9880c5: je 0x9880fd */
  if (zf) goto L_9880fd;
L_9880c7: /* 9880c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9880c8: push 0xa21a40 */
  { uint32_t v = 0xa21a40u; esp -= 4; W32(esp, v); }
/* 9880cd: call 0x98d050 */
  esp -= 4; W32(esp, 0x9880d2u); SPILL(); f_98d050(); if (g_unwind) return; RELOAD();
/* 9880d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9880d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9880d7: je 0x9880fd */
  if (zf) goto L_9880fd;
L_9880d9: /* 9880d9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9880db: push 0xa21a34 */
  { uint32_t v = 0xa21a34u; esp -= 4; W32(esp, v); }
/* 9880e0: push 0xa219c0 */
  { uint32_t v = 0xa219c0u; esp -= 4; W32(esp, v); }
/* 9880e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9880e7: call dword ptr [0xcfb1c4] */
  esp -= 4; W32(esp, 0x9880edu); SPILL(); call_ind(R32(0xcfb1c4u)); if (g_unwind) return; /* USER32!MessageBoxA */ RELOAD();
/* 9880ed: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9880f0: jne 0x9880fd */
  if (!zf) goto L_9880fd;
L_9880f2: /* 9880f2: mov byte ptr [esi + 0x237c], bl */
  W8((uint32_t)(esi + 0x237cu), (ebx & 0xffu));
/* 9880f8: mov ebx, 2 */
  ebx = 0x2u;
L_9880fd: /* 9880fd: mov eax, dword ptr [esp + 0xb4] */
  eax = R32((uint32_t)(esp + 0xb4u));
/* 988104: test ah, 0xfe */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988107: je 0x988121 */
  if (zf) goto L_988121;
L_988109: /* 988109: mov bl, byte ptr [esi + 0x237c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x237cu))) & 0xffu);
/* 98810f: neg bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 988111: mov dword ptr [esp + 0x1c], 6 */
  W32((uint32_t)(esp + 0x1cu), 0x6u);
/* 988119: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 98811b: and ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98811e: add ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_988121: /* 988121: test dword ptr [esp + 0x4c], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988129: je 0x988135 */
  if (zf) goto L_988135;
L_98812b: /* 98812b: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 98812f: mov ebx, eax */
  ebx = eax;
/* 988131: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_988135: /* 988135: mov byte ptr [0xcf3076], 1 */
  W8((uint32_t)(0xcf3076u), 0x1u);
/* 98813c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 98813f: mov word ptr [edx + 0x34], 4 */
  W16((uint32_t)(edx + 0x34u), 0x4u);
/* 988145: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 98814c: cmp eax, 0x31545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x31545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988151: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* 988156: mov ecx, 3 */
  ecx = 0x3u;
/* 98815b: jne 0x988167 */
  if (!zf) goto L_988167;
L_98815d: /* 98815d: mov byte ptr [esp + 0x13], 1 */
  W8((uint32_t)(esp + 0x13u), 0x1u);
/* 988162: jmp 0x9882bd */
  goto L_9882bd;
L_988167: /* 988167: cmp eax, 0x32545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98816c: jne 0x988178 */
  if (!zf) goto L_988178;
L_98816e: /* 98816e: mov byte ptr [esp + 0x13], 1 */
  W8((uint32_t)(esp + 0x13u), 0x1u);
/* 988173: jmp 0x9882bd */
  goto L_9882bd;
L_988178: /* 988178: cmp eax, 0x33545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98817d: jne 0x988189 */
  if (!zf) goto L_988189;
L_98817f: /* 98817f: mov byte ptr [esp + 0x13], 1 */
  W8((uint32_t)(esp + 0x13u), 0x1u);
/* 988184: jmp 0x9882bd */
  goto L_9882bd;
L_988189: /* 988189: cmp eax, 0x34545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98818e: jne 0x98819a */
  if (!zf) goto L_98819a;
L_988190: /* 988190: mov byte ptr [esp + 0x13], 1 */
  W8((uint32_t)(esp + 0x13u), 0x1u);
/* 988195: jmp 0x9882bd */
  goto L_9882bd;
L_98819a: /* 98819a: cmp eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98819f: jne 0x9881ab */
  if (!zf) goto L_9881ab;
L_9881a1: /* 9881a1: mov byte ptr [esp + 0x13], 1 */
  W8((uint32_t)(esp + 0x13u), 0x1u);
/* 9881a6: jmp 0x9882bd */
  goto L_9882bd;
L_9881ab: /* 9881ab: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 9881b2: cmp eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9881b5: jne 0x9881e2 */
  if (!zf) goto L_9881e2;
L_9881b7: /* 9881b7: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 9881be: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9881c1: jne 0x988278 */
  if (!zf) goto L_988278;
L_9881c7: /* 9881c7: cmp dword ptr [esp + 0xac], 0xff000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xacu))); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9881d2: jne 0x988041 */
  if (!zf) goto L_988041;
L_9881d8: /* 9881d8: mov eax, 0x15 */
  eax = 0x15u;
/* 9881dd: jmp 0x9882bd */
  goto L_9882bd;
L_9881e2: /* 9881e2: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9881e5: jne 0x9882a8 */
  if (!zf) goto L_9882a8;
L_9881eb: /* 9881eb: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 9881f2: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9881f5: jne 0x98820f */
  if (!zf) goto L_98820f;
L_9881f7: /* 9881f7: mov byte ptr [0xcf3076], 0 */
  W8((uint32_t)(0xcf3076u), 0x0u);
/* 9881fe: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 988201: mov eax, 0x14 */
  eax = 0x14u;
/* 988206: mov word ptr [edx + 0x34], cx */
  W16((uint32_t)(edx + 0x34u), (ecx & 0xffffu));
/* 98820a: jmp 0x9882bd */
  goto L_9882bd;
L_98820f: /* 98820f: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988212: jne 0x98822c */
  if (!zf) goto L_98822c;
L_988214: /* 988214: mov byte ptr [0xcf3076], 0 */
  W8((uint32_t)(0xcf3076u), 0x0u);
/* 98821b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 98821e: mov eax, 0x16 */
  eax = 0x16u;
/* 988223: mov word ptr [edx + 0x34], cx */
  W16((uint32_t)(edx + 0x34u), (ecx & 0xffffu));
/* 988227: jmp 0x9882bd */
  goto L_9882bd;
L_98822c: /* 98822c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98822f: jne 0x988041 */
  if (!zf) goto L_988041;
L_988235: /* 988235: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 98823c: cmp eax, 0x3e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988241: jne 0x988258 */
  if (!zf) goto L_988258;
L_988243: /* 988243: mov byte ptr [0xcf3076], 0 */
  W8((uint32_t)(0xcf3076u), 0x0u);
/* 98824a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 98824d: mov eax, 0x18 */
  eax = 0x18u;
/* 988252: mov word ptr [edx + 0x34], cx */
  W16((uint32_t)(edx + 0x34u), (ecx & 0xffffu));
/* 988256: jmp 0x9882bd */
  goto L_9882bd;
L_988258: /* 988258: cmp eax, 0x7e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98825d: jne 0x988041 */
  if (!zf) goto L_988041;
L_988263: /* 988263: mov byte ptr [0xcf3076], 0 */
  W8((uint32_t)(0xcf3076u), 0x0u);
/* 98826a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 98826d: mov eax, 0x17 */
  eax = 0x17u;
/* 988272: mov word ptr [edx + 0x34], cx */
  W16((uint32_t)(edx + 0x34u), (ecx & 0xffffu));
/* 988276: jmp 0x9882bd */
  goto L_9882bd;
L_988278: /* 988278: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98827b: jne 0x988041 */
  if (!zf) goto L_988041;
L_988281: /* 988281: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 988288: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98828d: jne 0x988296 */
  if (!zf) goto L_988296;
L_98828f: /* 98828f: mov eax, 0x19 */
  eax = 0x19u;
/* 988294: jmp 0x9882bd */
  goto L_9882bd;
L_988296: /* 988296: cmp eax, 0xf000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98829b: jne 0x988041 */
  if (!zf) goto L_988041;
L_9882a1: /* 9882a1: mov eax, 0x1a */
  eax = 0x1au;
/* 9882a6: jmp 0x9882bd */
  goto L_9882bd;
L_9882a8: /* 9882a8: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9882ab: jne 0x988041 */
  if (!zf) goto L_988041;
L_9882b1: /* 9882b1: mov eax, 0x29 */
  eax = 0x29u;
/* 9882b6: mov byte ptr [0xcf3076], 0 */
  W8((uint32_t)(0xcf3076u), 0x0u);
L_9882bd: /* 9882bd: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9882c0: mov di, word ptr [esp + 0x50] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x50u))) & 0xffffu);
/* 9882c5: mov word ptr [edx + 0x2e], di */
  W16((uint32_t)(edx + 0x2eu), (edi & 0xffffu));
/* 9882c9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 9882cc: mov edx, ebx */
  edx = ebx;
/* 9882ce: imul edx, dword ptr [esp + 0x54] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x54u)));
  edx = (uint32_t)r;
  }
/* 9882d3: mov word ptr [edi + 0x30], dx */
  W16((uint32_t)(edi + 0x30u), (edx & 0xffffu));
/* 9882d7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9882da: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 9882de: mov word ptr [edx + 0x32], 8 */
  W16((uint32_t)(edx + 0x32u), 0x8u);
/* 9882e4: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9882e7: mov word ptr [edx + 0x2c], cx */
  W16((uint32_t)(edx + 0x2cu), (ecx & 0xffffu));
/* 9882eb: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 9882ef: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9882f3: mov dword ptr [esi + 0x2374], eax */
  W32((uint32_t)(esi + 0x2374u), eax);
/* 9882f9: xor eax, eax */
  eax = 0;
/* 9882fb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9882fd: jbe 0x988309 */
  if ((cf | zf)) goto L_988309;
L_9882ff: /* 9882ff: mov edx, edi */
  edx = edi;
L_988301: /* 988301: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 988303: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 988304: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 988306: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 988307: jne 0x988301 */
  if (!zf) goto L_988301;
L_988309: /* 988309: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 98830c: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98830f: mov esi, eax */
  esi = eax;
/* 988311: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 988315: jne 0x988330 */
  if (!zf) goto L_988330;
L_988317: /* 988317: mov al, byte ptr [0xcf3076] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3076u))) & 0xffu);
L_98831c: /* 98831c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98831e: je 0x9883bf */
  if (zf) goto L_9883bf;
L_988324: /* 988324: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 988328: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 98832a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98832b: jmp 0x9883c6 */
  goto L_9883c6;
L_988330: /* 988330: mov al, byte ptr [esp + 0x13] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 988334: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988336: mov al, byte ptr [0xcf3076] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3076u))) & 0xffu);
/* 98833b: je 0x98831c */
  if (zf) goto L_98831c;
L_98833d: /* 98833d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98833f: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 988343: je 0x988382 */
  if (zf) goto L_988382;
L_988345: /* 988345: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988348: jae 0x98834f */
  if (!cf) goto L_98834f;
L_98834a: /* 98834a: mov eax, 8 */
  eax = 0x8u;
L_98834f: /* 98834f: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 988351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988352: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988353: push 0xcf2ff0 */
  { uint32_t v = 0xcf2ff0u; esp -= 4; W32(esp, v); }
/* 988358: call 0x9878e0 */
  esp -= 4; W32(esp, 0x98835du); SPILL(); f_9878e0(); if (g_unwind) return; RELOAD();
/* 98835d: mov edi, dword ptr [0xcf2ff0] */
  edi = R32((uint32_t)(0xcf2ff0u));
/* 988363: mov ecx, esi */
  ecx = esi;
/* 988365: imul ecx, dword ptr [esp + 0x60] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x60u)));
  ecx = (uint32_t)r;
  }
/* 98836a: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98836d: mov edx, ecx */
  edx = ecx;
/* 98836f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 988372: xor eax, eax */
  eax = 0;
/* 988374: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 988376: mov ecx, edx */
  ecx = edx;
/* 988378: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98837b: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98837e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 988380: jmp 0x9883d4 */
  goto L_9883d4;
L_988382: /* 988382: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988385: jae 0x98838c */
  if (!cf) goto L_98838c;
L_988387: /* 988387: mov eax, 8 */
  eax = 0x8u;
L_98838c: /* 98838c: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 98838e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98838f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988390: push 0xcf2ff0 */
  { uint32_t v = 0xcf2ff0u; esp -= 4; W32(esp, v); }
/* 988395: call 0x9878e0 */
  esp -= 4; W32(esp, 0x98839au); SPILL(); f_9878e0(); if (g_unwind) return; RELOAD();
/* 98839a: mov edi, dword ptr [0xcf2ff0] */
  edi = R32((uint32_t)(0xcf2ff0u));
/* 9883a0: mov eax, esi */
  eax = esi;
/* 9883a2: imul eax, dword ptr [esp + 0x60] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x60u)));
  eax = (uint32_t)r;
  }
/* 9883a7: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9883aa: mov edx, ecx */
  edx = ecx;
/* 9883ac: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9883af: xor eax, eax */
  eax = 0;
/* 9883b1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9883b3: mov ecx, edx */
  ecx = edx;
/* 9883b5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9883b8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9883bb: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 9883bd: jmp 0x9883d4 */
  goto L_9883d4;
L_9883bf: /* 9883bf: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 9883c3: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 9883c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_9883c6: /* 9883c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9883c7: push 0xcf2ff0 */
  { uint32_t v = 0xcf2ff0u; esp -= 4; W32(esp, v); }
/* 9883cc: call 0x9878e0 */
  esp -= 4; W32(esp, 0x9883d1u); SPILL(); f_9878e0(); if (g_unwind) return; RELOAD();
/* 9883d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9883d4: /* 9883d4: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9883d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9883da: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 9883e2: mov byte ptr [0xcf307c], 0 */
  W8((uint32_t)(0xcf307cu), 0x0u);
/* 9883e9: jle 0x988748 */
  if ((zf || sf != of)) goto L_988748;
L_9883ef: /* 9883ef: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 9883f3: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9883f7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9883fb: jmp 0x988400 */
  goto L_988400;
L_988400: /* 988400: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 988404: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 988408: xor ecx, ecx */
  ecx = 0;
/* 98840a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98840c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 988410: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 988414: jbe 0x98873e */
  if ((cf | zf)) goto L_98873e;
L_98841a: /* 98841a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_988420: /* 988420: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 988424: cmp eax, 0x29 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 988427: jg 0x988470 */
  if ((!zf && sf == of)) goto L_988470;
L_988429: /* 988429: je 0x98845b */
  if (zf) goto L_98845b;
L_98842b: /* 98842b: add eax, -0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98842e: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988431: ja 0x9884b5 */
  if ((!cf && !zf)) goto L_9884b5;
L_988437: /* 988437: jmp dword ptr [eax*4 + 0x988754] */
  switch (R32((uint32_t)(eax*4 + 0x988754u))) {
    case 0x98843eu: goto L_98843e;
    case 0x988448u: goto L_988448;
    case 0x988452u: goto L_988452;
    default: guest_badjump(0x988437, R32((uint32_t)(eax*4 + 0x988754u))); return;
  }
L_98843e: /* 98843e: mov edi, esi */
  edi = esi;
/* 988440: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 988443: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 988446: jmp 0x9884b1 */
  goto L_9884b1;
L_988448: /* 988448: mov eax, esi */
  eax = esi;
/* 98844a: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 98844d: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 988450: jmp 0x9884b1 */
  goto L_9884b1;
L_988452: /* 988452: mov edi, esi */
  edi = esi;
/* 988454: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 988457: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 988459: jmp 0x9884b1 */
  goto L_9884b1;
L_98845b: /* 98845b: mov edi, esi */
  edi = esi;
/* 98845d: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 988460: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988462: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 988466: jne 0x9884b5 */
  if (!zf) goto L_9884b5;
L_988468: /* 988468: add edi, 0x400 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98846e: jmp 0x9884b1 */
  goto L_9884b1;
L_988470: /* 988470: cmp eax, 0x33545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 988475: jg 0x988492 */
  if ((!zf && sf == of)) goto L_988492;
L_988477: /* 988477: je 0x988487 */
  if (zf) goto L_988487;
L_988479: /* 988479: cmp eax, 0x31545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x31545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98847e: je 0x98848e */
  if (zf) goto L_98848e;
L_988480: /* 988480: cmp eax, 0x32545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988485: jne 0x9884b5 */
  if (!zf) goto L_9884b5;
L_988487: /* 988487: mov edx, 0x100 */
  edx = 0x100u;
/* 98848c: jmp 0x9884a5 */
  goto L_9884a5;
L_98848e: /* 98848e: xor edx, edx */
  edx = 0;
/* 988490: jmp 0x9884a5 */
  goto L_9884a5;
L_988492: /* 988492: cmp eax, 0x34545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988497: je 0x9884a0 */
  if (zf) goto L_9884a0;
L_988499: /* 988499: cmp eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98849e: jne 0x9884b5 */
  if (!zf) goto L_9884b5;
L_9884a0: /* 9884a0: mov edx, 0x200 */
  edx = 0x200u;
L_9884a5: /* 9884a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9884a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9884a7: call 0x9876c0 */
  esp -= 4; W32(esp, 0x9884acu); SPILL(); f_9876c0(); if (g_unwind) return; RELOAD();
/* 9884ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9884af: mov edi, eax */
  edi = eax;
L_9884b1: /* 9884b1: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_9884b5: /* 9884b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9884b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9884b8: call 0x99cf54 */
  esp -= 4; W32(esp, 0x9884bdu); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 9884bd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9884c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9884c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9884c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9884c3: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9884c7: call 0x9855d0 */
  esp -= 4; W32(esp, 0x9884ccu); SPILL(); f_9855d0(); if (g_unwind) return; RELOAD();
/* 9884cc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9884cf: mov cl, byte ptr [eax + 0x237c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x237cu))) & 0xffu);
/* 9884d5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9884d8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9884da: jne 0x9884f6 */
  if (!zf) goto L_9884f6;
L_9884dc: /* 9884dc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9884e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9884e2: jbe 0x9884f6 */
  if ((cf | zf)) goto L_9884f6;
L_9884e4: /* 9884e4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9884e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9884e9: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9884eeu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9884ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9884f1: jmp 0x98871f */
  goto L_98871f;
L_9884f6: /* 9884f6: xor eax, eax */
  eax = 0;
/* 9884f8: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 9884fd: lea edi, [esp + 0xc8] */
  edi = (uint32_t)(esp + 0xc8u);
/* 988504: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 988506: cmp dword ptr [esp + 0x18], 0x29 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98850b: mov dword ptr [esp + 0xc8], 0x7c */
  W32((uint32_t)(esp + 0xc8u), 0x7cu);
/* 988516: mov dword ptr [esp + 0xcc], 0x1806 */
  W32((uint32_t)(esp + 0xccu), 0x1806u);
/* 988521: mov dword ptr [esp + 0xd4], ebx */
  W32((uint32_t)(esp + 0xd4u), ebx);
/* 988528: mov dword ptr [esp + 0xd0], esi */
  W32((uint32_t)(esp + 0xd0u), esi);
/* 98852f: jne 0x98855b */
  if (!zf) goto L_98855b;
L_988531: /* 988531: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 988535: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988537: jne 0x98855b */
  if (!zf) goto L_98855b;
L_988539: /* 988539: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98853d: mov esi, eax */
  esi = eax;
/* 98853f: mov ecx, 0x100 */
  ecx = 0x100u;
/* 988544: lea edi, [esp + 0x1c8] */
  edi = (uint32_t)(esp + 0x1c8u);
/* 98854b: add eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 988550: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988552: mov dword ptr [esp + 0xec], eax */
  W32((uint32_t)(esp + 0xecu), eax);
/* 988559: jmp 0x988566 */
  goto L_988566;
L_98855b: /* 98855b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98855f: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
L_988566: /* 988566: mov al, byte ptr [esp + 0x13] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 98856a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98856c: jne 0x988585 */
  if (!zf) goto L_988585;
L_98856e: /* 98856e: mov ecx, 8 */
  ecx = 0x8u;
/* 988573: lea esi, [esp + 0x90] */
  esi = (uint32_t)(esp + 0x90u);
/* 98857a: lea edi, [esp + 0x110] */
  edi = (uint32_t)(esp + 0x110u);
/* 988581: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988583: jmp 0x9885a9 */
  goto L_9885a9;
L_988585: /* 988585: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 98858c: mov dword ptr [esp + 0x114], 4 */
  W32((uint32_t)(esp + 0x114u), 0x4u);
/* 988597: mov dword ptr [esp + 0x118], 0xdeadbabe */
  W32((uint32_t)(esp + 0x118u), 0xdeadbabeu);
/* 9885a2: mov dword ptr [esp + 0x11c], eax */
  W32((uint32_t)(esp + 0x11cu), eax);
L_9885a9: /* 9885a9: lea ecx, [esp + 0xc8] */
  ecx = (uint32_t)(esp + 0xc8u);
/* 9885b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9885b1: call 0x98ba70 */
  esp -= 4; W32(esp, 0x9885b6u); SPILL(); f_98ba70(); if (g_unwind) return; RELOAD();
/* 9885b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9885b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9885b9: call 0x99cf54 */
  esp -= 4; W32(esp, 0x9885beu); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 9885be: mov esi, eax */
  esi = eax;
/* 9885c0: xor eax, eax */
  eax = 0;
/* 9885c2: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 9885c7: lea edi, [esp + 0x154] */
  edi = (uint32_t)(esp + 0x154u);
/* 9885ce: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9885d0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9885d4: lea edx, [esp + 0x1d4] */
  edx = (uint32_t)(esp + 0x1d4u);
/* 9885db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9885dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9885dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9885de: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 9885e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9885e6: lea edx, [esp + 0xe4] */
  edx = (uint32_t)(esp + 0xe4u);
/* 9885ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9885ee: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 9885f2: mov dword ptr [esp + 0x168], 0x7c */
  W32((uint32_t)(esp + 0x168u), 0x7cu);
/* 9885fd: call 0x98be50 */
  esp -= 4; W32(esp, 0x988602u); SPILL(); f_98be50(); if (g_unwind) return; RELOAD();
/* 988602: mov al, byte ptr [0xcf3076] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3076u))) & 0xffu);
/* 988607: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98860a: xor edi, edi */
  edi = 0;
/* 98860c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98860e: mov eax, dword ptr [esp + 0x150] */
  eax = R32((uint32_t)(esp + 0x150u));
/* 988615: jne 0x988689 */
  if (!zf) goto L_988689;
L_988617: /* 988617: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 988619: jbe 0x9886fc */
  if ((cf | zf)) goto L_9886fc;
L_98861f: /* 98861f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 988623: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 988626: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98862a: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98862e: mov edi, edi */
  edi = edi;
L_988630: /* 988630: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 988634: mov esi, dword ptr [0xcf2ff0] */
  esi = R32((uint32_t)(0xcf2ff0u));
/* 98863a: mov eax, edi */
  eax = edi;
/* 98863c: imul eax, dword ptr [0xcf3004] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xcf3004u)));
  eax = (uint32_t)r;
  }
/* 988643: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 988645: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 988649: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98864b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98864d: jbe 0x98866a */
  if ((cf | zf)) goto L_98866a;
L_98864f: /* 98864f: mov esi, ebx */
  esi = ebx;
L_988651: /* 988651: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 988653: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 988655: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 988658: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988659: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98865a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98865c: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98865f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988660: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 988661: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 988663: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988664: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 988667: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 988668: jne 0x988651 */
  if (!zf) goto L_988651;
L_98866a: /* 98866a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98866e: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 988675: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 988677: mov eax, dword ptr [esp + 0x150] */
  eax = R32((uint32_t)(esp + 0x150u));
/* 98867e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98867f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988681: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 988685: jb 0x988630 */
  if (cf) goto L_988630;
L_988687: /* 988687: jmp 0x9886fc */
  goto L_9886fc;
L_988689: /* 988689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98868b: jbe 0x9886fc */
  if ((cf | zf)) goto L_9886fc;
L_98868d: /* 98868d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 988691: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 988695: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 98869c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
L_9886a0: /* 9886a0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9886a4: mov ecx, dword ptr [0xcf2ff0] */
  ecx = R32((uint32_t)(0xcf2ff0u));
/* 9886aa: mov eax, edi */
  eax = edi;
/* 9886ac: imul eax, dword ptr [0xcf3004] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xcf3004u)));
  eax = (uint32_t)r;
  }
/* 9886b3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9886b5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9886b7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9886b9: mov ecx, esi */
  ecx = esi;
/* 9886bb: jbe 0x9886e7 */
  if ((cf | zf)) goto L_9886e7;
L_9886bd: /* 9886bd: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
L_9886c1: /* 9886c1: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9886c3: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886c5: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 9886c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886c9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886ca: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886cc: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 9886cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886d1: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886d3: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 9886d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886d7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886d8: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886da: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9886de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886df: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886e0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9886e1: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 9886e5: jne 0x9886c1 */
  if (!zf) goto L_9886c1;
L_9886e7: /* 9886e7: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 9886ee: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9886f0: mov eax, dword ptr [esp + 0x150] */
  eax = R32((uint32_t)(esp + 0x150u));
/* 9886f7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9886f8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9886fa: jb 0x9886a0 */
  if (cf) goto L_9886a0;
L_9886fc: /* 9886fc: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 988700: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 988704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988705: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98870au); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98870a: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98870f: call 0x99cf5a */
  esp -= 4; W32(esp, 0x988714u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 988714: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 988718: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98871c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98871f: /* 98871f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 988723: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 988727: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 988728: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 988729: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98872b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98872c: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98872e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988730: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 988734: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 988738: jb 0x988420 */
  if (cf) goto L_988420;
L_98873e: /* 98873e: dec dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 988742: jne 0x988400 */
  if (!zf) goto L_988400;
L_988748: /* 988748: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 98874c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98874d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98874e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98874f: mov esp, ebp */
  esp = ebp;
/* 988751: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988752: ret  */
  esp += 4; SPILL(); return;
}
