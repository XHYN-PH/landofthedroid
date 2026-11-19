#include "recomp.h"
#include "rec_mod.h"

void f_47f29e(void) {
  LOAD_REGS();
L_47f29e: /* 47f29e: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f2a3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f2a8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f2a8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f2ab: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f2b0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f2b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f2b4: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f2ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f2bb: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f2be: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f2c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f2c0: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f2c3: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47f2c6: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f2c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2ca: mov ecx, edi */
  ecx = edi;
/* 47f2cc: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f2d1u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f2d1: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47f2d4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f2d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f2da: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2de: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f2e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2e2: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47f2e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2e6: call 0x47addc */
  esp -= 4; W32(esp, 0x47f2ebu); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47f2eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2ec: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f2ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2f0: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47f2f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f2f4: call dword ptr [0x48e0c8] */
  esp -= 4; W32(esp, 0x47f2fau); SPILL(); f_41703d(); if (g_unwind) return; /* MSVCR70!_strtoui64 */ RELOAD();
/* 47f2fa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f2fe: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f301: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f304: mov edi, eax */
  edi = eax;
/* 47f306: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 47f309: call 0x461389 */
  esp -= 4; W32(esp, 0x47f30eu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f30e: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f312: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f315: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f31au); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f31a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f31c: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47f31f: je 0x47f324 */
  if (zf) goto L_47f324;
L_47f321: /* 47f321: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47f324: /* 47f324: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 47f327: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f32a: je 0x47f343 */
  if (zf) goto L_47f343;
L_47f32c: /* 47f32c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f32eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f32e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f331: jne 0x47f340 */
  if (!zf) goto L_47f340;
L_47f333: /* 47f333: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f336: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47f339: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47f33b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f33e: jmp 0x47f346 */
  goto L_47f346;
L_47f340: /* 47f340: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47f343: /* 47f343: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47f346: /* 47f346: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f349: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f34c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f34e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f351: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f354: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f357: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f35e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f361: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f364: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47f365: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f366: call 0x46190c */
  esp -= 4; W32(esp, 0x47f36bu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f36b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f36c: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f36f(void) {
  LOAD_REGS();
L_47f36f: /* 47f36f: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f374: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f379u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f379: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f37c: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f381: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f384: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47f385: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f386: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f38c: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f38f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f391u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f391: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f394: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47f397: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f39a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f39b: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f3a0u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f3a0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f3a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3a5: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f3a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3a9: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f3ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3ad: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47f3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3b1: call 0x47b10f */
  esp -= 4; W32(esp, 0x47f3b6u); SPILL(); f_47b10f(); if (g_unwind) return; RELOAD();
/* 47f3b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3b7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f3ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3bb: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47f3be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3bf: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x47f3c4u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 47f3c4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 47f3c7: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f3cb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f3ce: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f3d1: call 0x461389 */
  esp -= 4; W32(esp, 0x47f3d6u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f3d6: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f3d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f3da: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f3dd: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f3e2u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f3e2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f3e4: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47f3e7: je 0x47f3ec */
  if (zf) goto L_47f3ec;
L_47f3e9: /* 47f3e9: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f3ec: /* 47f3ec: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47f3ef: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f3f2: je 0x47f405 */
  if (zf) goto L_47f405;
L_47f3f4: /* 47f3f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f3f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f3f6: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f3f9: jne 0x47f405 */
  if (!zf) goto L_47f405;
L_47f3fb: /* 47f3fb: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 47f3fe: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f401: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 47f403: jmp 0x47f408 */
  goto L_47f408;
L_47f405: /* 47f405: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f408: /* 47f408: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f40b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f40e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f410: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f413: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f416: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f419: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f420: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f423: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f426: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f427: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47f428: call 0x46190c */
  esp -= 4; W32(esp, 0x47f42du); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f42d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f42e: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f431(void) {
  LOAD_REGS();
L_47f431: /* 47f431: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f436: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f43bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f43b: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f43e: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f443: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f446: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47f447: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f448: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f44e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f451: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f453u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f453: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f456: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47f459: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f45c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f45d: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f462u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f462: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f467: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f46a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f46b: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f46e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f46f: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47f472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f473: call 0x47b10f */
  esp -= 4; W32(esp, 0x47f478u); SPILL(); f_47b10f(); if (g_unwind) return; RELOAD();
/* 47f478: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f479: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f47c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f47d: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47f480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f481: call 0x48b191 */
  esp -= 4; W32(esp, 0x47f486u); SPILL(); f_48b191(); if (g_unwind) return; RELOAD();
/* 47f486: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 47f489: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f48d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f490: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f493: call 0x461389 */
  esp -= 4; W32(esp, 0x47f498u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f498: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f49b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f49c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f49f: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f4a4u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f4a4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f4a6: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47f4a9: je 0x47f4ae */
  if (zf) goto L_47f4ae;
L_47f4ab: /* 47f4ab: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f4ae: /* 47f4ae: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47f4b1: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f4b4: je 0x47f4c7 */
  if (zf) goto L_47f4c7;
L_47f4b6: /* 47f4b6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f4b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f4b8: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f4bb: jne 0x47f4c7 */
  if (!zf) goto L_47f4c7;
L_47f4bd: /* 47f4bd: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 47f4c0: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f4c3: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 47f4c5: jmp 0x47f4ca */
  goto L_47f4ca;
L_47f4c7: /* 47f4c7: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f4ca: /* 47f4ca: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f4cd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f4d0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f4d2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f4d5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f4d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f4db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f4e2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f4e5: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f4e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f4e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47f4ea: call 0x46190c */
  esp -= 4; W32(esp, 0x47f4efu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f4ef: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f4f0: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f4f3(void) {
  LOAD_REGS();
L_47f4f3: /* 47f4f3: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f4f8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f4fdu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f4fd: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f500: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f505: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f508: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47f509: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f50a: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f510: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f513: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f515: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f518: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47f51b: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f51e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f51f: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f524u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f524: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f529: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f52c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f52d: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f531: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47f534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f535: call 0x47b10f */
  esp -= 4; W32(esp, 0x47f53au); SPILL(); f_47b10f(); if (g_unwind) return; RELOAD();
/* 47f53a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f53b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f53e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f53f: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47f542: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f543: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x47f548u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 47f548: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 47f54b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f54f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f552: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f555: call 0x461389 */
  esp -= 4; W32(esp, 0x47f55au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f55a: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f55e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f561: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f566u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f566: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f568: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47f56b: je 0x47f570 */
  if (zf) goto L_47f570;
L_47f56d: /* 47f56d: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f570: /* 47f570: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47f573: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f576: je 0x47f589 */
  if (zf) goto L_47f589;
L_47f578: /* 47f578: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f57au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f57a: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f57d: jne 0x47f589 */
  if (!zf) goto L_47f589;
L_47f57f: /* 47f57f: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 47f582: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f585: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 47f587: jmp 0x47f58c */
  goto L_47f58c;
L_47f589: /* 47f589: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f58c: /* 47f58c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f58f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f592: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f594: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f597: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f59a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f59d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f5a4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f5a7: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f5aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f5ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47f5ac: call 0x46190c */
  esp -= 4; W32(esp, 0x47f5b1u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f5b1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f5b2: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f5b5(void) {
  LOAD_REGS();
L_47f5b5: /* 47f5b5: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f5ba: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f5bfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f5bf: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f5c2: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f5c7: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f5ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47f5cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f5cc: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f5d2: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f5d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f5d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f5d7: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f5da: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47f5dd: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f5e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f5e1: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f5e6u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f5e6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f5ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f5eb: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 47f5f0: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f5f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f5f4: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f5f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f5f8: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47f5fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f5fc: call 0x47addc */
  esp -= 4; W32(esp, 0x47f601u); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47f601: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f605: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f608: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f60b: mov ebx, eax */
  ebx = eax;
/* 47f60d: call 0x461389 */
  esp -= 4; W32(esp, 0x47f612u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f612: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47f613: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f617: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47f61a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f61b: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47f621u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47f621: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47f625: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 47f628: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f62b: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f62e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f62f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f632: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f637u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f637: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f639: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47f63c: je 0x47f641 */
  if (zf) goto L_47f641;
L_47f63e: /* 47f63e: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f641: /* 47f641: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47f644: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f647: je 0x47f65a */
  if (zf) goto L_47f65a;
L_47f649: /* 47f649: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f64bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f64b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f64e: jne 0x47f65a */
  if (!zf) goto L_47f65a;
L_47f650: /* 47f650: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f653: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47f656: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f658: jmp 0x47f65d */
  goto L_47f65d;
L_47f65a: /* 47f65a: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47f65d: /* 47f65d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f660: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f663: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f665: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f668: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f66b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f66e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f675: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f678: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f67b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f67c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47f67d: call 0x46190c */
  esp -= 4; W32(esp, 0x47f682u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f682: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f683: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f686(void) {
  LOAD_REGS();
L_47f686: /* 47f686: mov eax, 0x48d203 */
  eax = 0x48d203u;
/* 47f68b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f690u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f690: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f693: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f698: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47f69c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f69f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f6a0: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47f6a3: test byte ptr [esi + 0xd], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f6a7: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f6aa: jne 0x47f6c8 */
  if (!zf) goto L_47f6c8;
L_47f6ac: /* 47f6ac: movzx edx, byte ptr [ebp + 0x1c] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x1cu)));
/* 47f6b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47f6b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47f6b3: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47f6b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f6b7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47f6ba: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47f6bd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47f6c0: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x47f6c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f6c3: jmp 0x47f7d8 */
  goto L_47f7d8;
L_47f6c8: /* 47f6c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47f6c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f6ca: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f6ce: mov ecx, esi */
  ecx = esi;
/* 47f6d0: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f6d5u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f6d5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f6d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f6da: call 0x4797fd */
  esp -= 4; W32(esp, 0x47f6dfu); SPILL(); f_4797fd(); if (g_unwind) return; RELOAD();
/* 47f6df: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f6e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47f6e4: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 47f6e7: mov edi, eax */
  edi = eax;
/* 47f6e9: call 0x461389 */
  esp -= 4; W32(esp, 0x47f6eeu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f6ee: cmp byte ptr [ebp + 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47f6f2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 47f6f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47f6f5: mov ecx, edi */
  ecx = edi;
/* 47f6f7: je 0x47f70d */
  if (zf) goto L_47f70d;
L_47f6f9: /* 47f6f9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 47f6fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f6fd: call 0x471ec1 */
  esp -= 4; W32(esp, 0x47f702u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 47f702: xor edi, edi */
  edi = 0;
/* 47f704: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47f705: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47f708: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 47f70b: jmp 0x47f71f */
  goto L_47f71f;
L_47f70d: /* 47f70d: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47f710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f711: call 0x471eaa */
  esp -= 4; W32(esp, 0x47f716u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 47f716: xor edi, edi */
  edi = 0;
/* 47f718: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47f71b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 47f71e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_47f71f: /* 47f71f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f720: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 47f723: call 0x4675a8 */
  esp -= 4; W32(esp, 0x47f728u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 47f728: test byte ptr [ebp - 0x14], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f72b: je 0x47f73a */
  if (zf) goto L_47f73a;
L_47f72d: /* 47f72d: and dword ptr [ebp - 0x14], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47f731: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f732: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 47f735: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47f73au); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_47f73a: /* 47f73a: test byte ptr [ebp - 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f73e: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 47f745: je 0x47f750 */
  if (zf) goto L_47f750;
L_47f747: /* 47f747: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f748: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 47f74b: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47f750u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_47f750: /* 47f750: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 47f753: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47f755: jle 0x47f763 */
  if ((zf || sf != of)) goto L_47f763;
L_47f757: /* 47f757: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47f75a: jbe 0x47f763 */
  if ((cf | zf)) goto L_47f763;
L_47f75c: /* 47f75c: sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47f75f: mov edi, eax */
  edi = eax;
/* 47f761: jmp 0x47f765 */
  goto L_47f765;
L_47f763: /* 47f763: xor edi, edi */
  edi = 0;
L_47f765: /* 47f765: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47f768: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47f76d: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f770: je 0x47f791 */
  if (zf) goto L_47f791;
L_47f772: /* 47f772: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f773: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47f776: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f779: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47f77c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47f77f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f780: call 0x472063 */
  esp -= 4; W32(esp, 0x47f785u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47f785: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47f787: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47f78a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f78d: xor edi, edi */
  edi = 0;
/* 47f78f: jmp 0x47f797 */
  goto L_47f797;
L_47f791: /* 47f791: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 47f794: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_47f797: /* 47f797: cmp dword ptr [ebp - 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47f79b: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 47f79e: jae 0x47f7a3 */
  if (!cf) goto L_47f7a3;
L_47f7a0: /* 47f7a0: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
L_47f7a3: /* 47f7a3: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47f7a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47f7a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f7a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47f7a9: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f7ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f7ad: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47f7b2u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47f7b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47f7b4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47f7b7: and dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x14u), r);
  }
/* 47f7bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f7bc: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47f7bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f7c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47f7c1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47f7c4: call 0x472063 */
  esp -= 4; W32(esp, 0x47f7c9u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47f7c9: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f7cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47f7ce: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 47f7d1: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47f7d6u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47f7d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47f7d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_47f7d8: /* 47f7d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f7db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f7de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f7e5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f7e8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f7eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f7ec: call 0x46190c */
  esp -= 4; W32(esp, 0x47f7f1u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f7f1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f7f2: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_47f7f5(void) {
  LOAD_REGS();
L_47f7f5: /* 47f7f5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47f7f6: mov ebp, esp */
  ebp = esp;
/* 47f7f8: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f7fb: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f800: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f803: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f804: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47f807: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47f80a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47f80d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47f810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f811: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 47f814: push 0x4c8ed0 */
  { uint32_t v = 0x4c8ed0u; esp -= 4; W32(esp, v); }
/* 47f819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f81a: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47f81fu); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47f81f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f823: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47f826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f827: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47f82du); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47f82d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f82e: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47f831: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f832: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47f835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f836: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47f839: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47f83c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47f83f: call 0x47b635 */
  esp -= 4; W32(esp, 0x47f844u); SPILL(); f_47b635(); if (g_unwind) return; RELOAD();
/* 47f844: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47f847: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f84a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f84d: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f851: call 0x46190c */
  esp -= 4; W32(esp, 0x47f856u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f856: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f857: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_47f85a(void) {
  LOAD_REGS();
L_47f85a: /* 47f85a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47f85b: mov ebp, esp */
  ebp = esp;
/* 47f85d: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f860: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f865: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f869: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47f86c: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47f86f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47f872: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47f875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f876: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 47f879: push 0x4c8ed4 */
  { uint32_t v = 0x4c8ed4u; esp -= 4; W32(esp, v); }
/* 47f87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f87f: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47f884u); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47f884: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f887: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f888: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47f88b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f88c: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47f892u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47f892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f893: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47f896: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f897: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47f89a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f89b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47f89e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47f8a1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47f8a4: call 0x47b635 */
  esp -= 4; W32(esp, 0x47f8a9u); SPILL(); f_47b635(); if (g_unwind) return; RELOAD();
/* 47f8a9: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47f8ac: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f8af: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f8b2: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f8b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f8b6: call 0x46190c */
  esp -= 4; W32(esp, 0x47f8bbu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f8bb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f8bc: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_47f8bf(void) {
  LOAD_REGS();
L_47f8bf: /* 47f8bf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47f8c0: mov ebp, esp */
  ebp = esp;
/* 47f8c2: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f8c5: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f8ca: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f8cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f8ce: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47f8d1: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47f8d4: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47f8d7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47f8da: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47f8dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f8de: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f8e1: push 0x4c8ed8 */
  { uint32_t v = 0x4c8ed8u; esp -= 4; W32(esp, v); }
/* 47f8e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f8e7: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47f8ecu); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47f8ec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f8ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f8f0: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47f8f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f8f4: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47f8fau); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47f8fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f8fb: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47f8fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f8ff: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47f902: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f903: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47f906: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47f909: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47f90c: call 0x47b635 */
  esp -= 4; W32(esp, 0x47f911u); SPILL(); f_47b635(); if (g_unwind) return; RELOAD();
/* 47f911: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47f914: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f917: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f91a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f91d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f91e: call 0x46190c */
  esp -= 4; W32(esp, 0x47f923u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f923: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f924: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_47f927(void) {
  LOAD_REGS();
L_47f927: /* 47f927: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47f928: mov ebp, esp */
  ebp = esp;
/* 47f92a: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f92d: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f932: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f935: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f936: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47f939: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47f93c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47f93f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47f942: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47f945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f946: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f949: push 0x4c8edc */
  { uint32_t v = 0x4c8edcu; esp -= 4; W32(esp, v); }
/* 47f94e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f94f: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47f954u); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47f954: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f958: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47f95b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f95c: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47f962u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47f962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f963: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47f966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f967: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47f96a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f96b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47f96e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47f971: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47f974: call 0x47b635 */
  esp -= 4; W32(esp, 0x47f979u); SPILL(); f_47b635(); if (g_unwind) return; RELOAD();
/* 47f979: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47f97c: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f97f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f982: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f985: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f986: call 0x46190c */
  esp -= 4; W32(esp, 0x47f98bu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f98b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f98c: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_47f98f(void) {
  LOAD_REGS();
L_47f98f: /* 47f98f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47f990: mov ebp, esp */
  ebp = esp;
/* 47f992: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f995: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f99a: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f99d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f99e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47f9a1: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 47f9a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47f9a6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47f9a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f9aa: mov eax, 0x2000 */
  eax = 0x2000u;
/* 47f9af: jg 0x47f9b9 */
  if ((!zf && sf == of)) goto L_47f9b9;
L_47f9b1: /* 47f9b1: test dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47f9b4: jne 0x47f9b9 */
  if (!zf) goto L_47f9b9;
L_47f9b6: /* 47f9b6: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 47f9b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_47f9b9: /* 47f9b9: mov edi, ecx */
  edi = ecx;
/* 47f9bb: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 47f9bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47f9be: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47f9c0: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 47f9c3: jg 0x47f9c8 */
  if ((!zf && sf == of)) goto L_47f9c8;
L_47f9c5: /* 47f9c5: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_47f9c8: /* 47f9c8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 47f9cb: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 47f9ce: sub edi, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 47f9d1: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47f9d5: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47f9d9: mov edx, ecx */
  edx = ecx;
/* 47f9db: and edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 47f9e1: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f9e3: jne 0x47fa69 */
  if (!zf) goto L_47fa69;
L_47f9e9: /* 47f9e9: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 47f9ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47f9f1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47f9f4: jp 0x47fa0b */
  if (pf) goto L_47fa0b;
L_47f9f6: /* 47f9f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 47f9f8: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 47f9fc: fchs  */
  ST0 = -ST0;
/* 47f9fe: fstp st(1) */
  STI(1) = ST0; FPOP();
L_47fa00: /* 47fa00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47fa01: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47fa03: mov ebx, 0x1388 */
  ebx = 0x1388u;
/* 47fa08: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 47fa09: jmp 0x47fa1f */
  goto L_47fa1f;
L_47fa0b: /* 47fa0b: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47fa0f: jmp 0x47fa00 */
  goto L_47fa00;
L_47fa11: /* 47fa11: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47fa14: jae 0x47fa2e */
  if (!cf) goto L_47fa2e;
L_47fa16: /* 47fa16: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 47fa1c: add dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_47fa1f: /* 47fa1f: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 47fa25: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 47fa27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fa29: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fa2c: jnp 0x47fa11 */
  if (!pf) goto L_47fa11;
L_47fa2e: /* 47fa2e: fldz  */
  FPUSH(0.0);
/* 47fa30: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 47fa32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fa34: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fa37: jp 0x47fa5c */
  if (pf) goto L_47fa5c;
L_47fa39: /* 47fa39: jmp 0x47fa58 */
  goto L_47fa58;
L_47fa3b: /* 47fa3b: fcom qword ptr [0x4c8ee8] */
  fpu_com(ST0, F64((uint32_t)(0x4c8ee8u)));
/* 47fa41: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fa43: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fa46: jp 0x47fa5c */
  if (pf) goto L_47fa5c;
L_47fa48: /* 47fa48: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47fa4b: jae 0x47fa5c */
  if (!cf) goto L_47fa5c;
L_47fa4d: /* 47fa4d: fmul qword ptr [0x4c8ee0] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ee0u)));
/* 47fa53: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 47fa55: add dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47fa58: /* 47fa58: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47fa5a: jge 0x47fa3b */
  if ((sf == of)) goto L_47fa3b;
L_47fa5c: /* 47fa5c: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47fa60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47fa61: je 0x47fa69 */
  if (zf) goto L_47fa69;
L_47fa63: /* 47fa63: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 47fa65: fchs  */
  ST0 = -ST0;
/* 47fa67: fstp st(1) */
  STI(1) = ST0; FPOP();
L_47fa69: /* 47fa69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fa6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fa6b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 47fa6e: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47fa71: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47fa74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fa75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47fa77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fa78: call 0x468ac3 */
  esp -= 4; W32(esp, 0x47fa7du); SPILL(); f_468ac3(); if (g_unwind) return; RELOAD();
/* 47fa7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fa80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fa81: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 47fa84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fa85: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47fa8bu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47fa8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fa8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fa8d: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 47fa90: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 47fa93: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 47fa96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fa97: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fa9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fa9b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fa9e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47faa1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47faa4: call 0x47b406 */
  esp -= 4; W32(esp, 0x47faa9u); SPILL(); f_47b406(); if (g_unwind) return; RELOAD();
/* 47faa9: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47faac: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47faaf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47fab2: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fab5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47fab6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47fab7: call 0x46190c */
  esp -= 4; W32(esp, 0x47fabcu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47fabc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47fabd: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_47fac0(void) {
  LOAD_REGS();
L_47fac0: /* 47fac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47fac1: mov ebp, esp */
  ebp = esp;
/* 47fac3: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47fac6: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47facb: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47face: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47facf: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47fad2: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 47fad5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47fad7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47fada: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fadb: mov eax, 0x2000 */
  eax = 0x2000u;
/* 47fae0: jg 0x47faea */
  if ((!zf && sf == of)) goto L_47faea;
L_47fae2: /* 47fae2: test dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47fae5: jne 0x47faea */
  if (!zf) goto L_47faea;
L_47fae7: /* 47fae7: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 47fae9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_47faea: /* 47faea: mov edi, ecx */
  edi = ecx;
/* 47faec: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 47faee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47faef: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47faf1: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 47faf4: jg 0x47faf9 */
  if ((!zf && sf == of)) goto L_47faf9;
L_47faf6: /* 47faf6: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_47faf9: /* 47faf9: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 47fafc: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 47faff: sub edi, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 47fb02: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47fb06: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47fb0a: mov edx, ecx */
  edx = ecx;
/* 47fb0c: and edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 47fb12: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47fb14: jne 0x47fb9a */
  if (!zf) goto L_47fb9a;
L_47fb1a: /* 47fb1a: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 47fb20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fb22: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fb25: jp 0x47fb3c */
  if (pf) goto L_47fb3c;
L_47fb27: /* 47fb27: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 47fb29: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 47fb2d: fchs  */
  ST0 = -ST0;
/* 47fb2f: fstp st(1) */
  STI(1) = ST0; FPOP();
L_47fb31: /* 47fb31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47fb32: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47fb34: mov ebx, 0x1388 */
  ebx = 0x1388u;
/* 47fb39: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 47fb3a: jmp 0x47fb50 */
  goto L_47fb50;
L_47fb3c: /* 47fb3c: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47fb40: jmp 0x47fb31 */
  goto L_47fb31;
L_47fb42: /* 47fb42: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47fb45: jae 0x47fb5f */
  if (!cf) goto L_47fb5f;
L_47fb47: /* 47fb47: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 47fb4d: add dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_47fb50: /* 47fb50: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 47fb56: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 47fb58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fb5a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fb5d: jnp 0x47fb42 */
  if (!pf) goto L_47fb42;
L_47fb5f: /* 47fb5f: fldz  */
  FPUSH(0.0);
/* 47fb61: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 47fb63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fb65: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fb68: jp 0x47fb8d */
  if (pf) goto L_47fb8d;
L_47fb6a: /* 47fb6a: jmp 0x47fb89 */
  goto L_47fb89;
L_47fb6c: /* 47fb6c: fcom qword ptr [0x4c8ee8] */
  fpu_com(ST0, F64((uint32_t)(0x4c8ee8u)));
/* 47fb72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fb74: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fb77: jp 0x47fb8d */
  if (pf) goto L_47fb8d;
L_47fb79: /* 47fb79: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47fb7c: jae 0x47fb8d */
  if (!cf) goto L_47fb8d;
L_47fb7e: /* 47fb7e: fmul qword ptr [0x4c8ee0] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ee0u)));
/* 47fb84: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 47fb86: add dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47fb89: /* 47fb89: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47fb8b: jge 0x47fb6c */
  if ((sf == of)) goto L_47fb6c;
L_47fb8d: /* 47fb8d: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47fb91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47fb92: je 0x47fb9a */
  if (zf) goto L_47fb9a;
L_47fb94: /* 47fb94: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 47fb96: fchs  */
  ST0 = -ST0;
/* 47fb98: fstp st(1) */
  STI(1) = ST0; FPOP();
L_47fb9a: /* 47fb9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fb9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fb9c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 47fb9f: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47fba2: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47fba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fba6: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 47fba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fba9: call 0x468ac3 */
  esp -= 4; W32(esp, 0x47fbaeu); SPILL(); f_468ac3(); if (g_unwind) return; RELOAD();
/* 47fbae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fbb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fbb2: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 47fbb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fbb6: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47fbbcu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47fbbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fbbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fbbe: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 47fbc1: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 47fbc4: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 47fbc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fbc8: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fbcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fbcc: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fbcf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47fbd2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47fbd5: call 0x47b406 */
  esp -= 4; W32(esp, 0x47fbdau); SPILL(); f_47b406(); if (g_unwind) return; RELOAD();
/* 47fbda: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47fbdd: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47fbe0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47fbe3: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fbe6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47fbe7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47fbe8: call 0x46190c */
  esp -= 4; W32(esp, 0x47fbedu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47fbed: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47fbee: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_47fbf1(void) {
  LOAD_REGS();
L_47fbf1: /* 47fbf1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47fbf2: mov ebp, esp */
  ebp = esp;
/* 47fbf4: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47fbf7: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47fbfc: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47fbff: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47fc02: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47fc05: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47fc08: push 0x4c8f00 */
  { uint32_t v = 0x4c8f00u; esp -= 4; W32(esp, v); }
/* 47fc0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fc0e: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47fc14u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47fc14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fc15: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47fc18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fc19: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fc1c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47fc1f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fc22: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47fc25: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47fc28: call 0x47b635 */
  esp -= 4; W32(esp, 0x47fc2du); SPILL(); f_47b635(); if (g_unwind) return; RELOAD();
/* 47fc2d: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47fc30: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47fc33: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47fc36: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fc39: call 0x46190c */
  esp -= 4; W32(esp, 0x47fc3eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47fc3e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47fc3f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_47fc42(void) {
  LOAD_REGS();
L_47fc42: /* 47fc42: mov eax, 0x48d243 */
  eax = 0x48d243u;
/* 47fc47: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47fc4cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47fc4c: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47fc4f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47fc54: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47fc58: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47fc5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fc5c: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47fc5f: test byte ptr [esi + 0xd], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47fc63: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47fc66: jne 0x47fc84 */
  if (!zf) goto L_47fc84;
L_47fc68: /* 47fc68: movzx edx, byte ptr [ebp + 0x1c] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x1cu)));
/* 47fc6c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47fc6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47fc6f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fc72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fc73: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fc76: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47fc79: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47fc7c: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x47fc7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47fc7f: jmp 0x47fd94 */
  goto L_47fd94;
L_47fc84: /* 47fc84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47fc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fc86: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47fc89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fc8a: mov ecx, esi */
  ecx = esi;
/* 47fc8c: call 0x464a5a */
  esp -= 4; W32(esp, 0x47fc91u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47fc91: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47fc95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fc96: call 0x47989f */
  esp -= 4; W32(esp, 0x47fc9bu); SPILL(); f_47989f(); if (g_unwind) return; RELOAD();
/* 47fc9b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47fc9f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47fca0: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 47fca3: mov edi, eax */
  edi = eax;
/* 47fca5: call 0x461389 */
  esp -= 4; W32(esp, 0x47fcaau); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47fcaa: cmp byte ptr [ebp + 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47fcae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 47fcb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47fcb1: mov ecx, edi */
  ecx = edi;
/* 47fcb3: je 0x47fcc9 */
  if (zf) goto L_47fcc9;
L_47fcb5: /* 47fcb5: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 47fcb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fcb9: call 0x471ec1 */
  esp -= 4; W32(esp, 0x47fcbeu); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 47fcbe: xor edi, edi */
  edi = 0;
/* 47fcc0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47fcc1: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47fcc4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 47fcc7: jmp 0x47fcdb */
  goto L_47fcdb;
L_47fcc9: /* 47fcc9: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47fccc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fccd: call 0x471eaa */
  esp -= 4; W32(esp, 0x47fcd2u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 47fcd2: xor edi, edi */
  edi = 0;
/* 47fcd4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47fcd7: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 47fcda: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_47fcdb: /* 47fcdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fcdc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 47fcdf: call 0x47d83c */
  esp -= 4; W32(esp, 0x47fce4u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 47fce4: test byte ptr [ebp - 0x14], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47fce7: je 0x47fcf6 */
  if (zf) goto L_47fcf6;
L_47fce9: /* 47fce9: and dword ptr [ebp - 0x14], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47fced: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fcee: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 47fcf1: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47fcf6u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
L_47fcf6: /* 47fcf6: test byte ptr [ebp - 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47fcfa: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 47fd01: je 0x47fd0c */
  if (zf) goto L_47fd0c;
L_47fd03: /* 47fd03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fd04: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 47fd07: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47fd0cu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
L_47fd0c: /* 47fd0c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 47fd0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47fd11: jle 0x47fd1f */
  if ((zf || sf != of)) goto L_47fd1f;
L_47fd13: /* 47fd13: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47fd16: jbe 0x47fd1f */
  if ((cf | zf)) goto L_47fd1f;
L_47fd18: /* 47fd18: sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47fd1b: mov edi, eax */
  edi = eax;
/* 47fd1d: jmp 0x47fd21 */
  goto L_47fd21;
L_47fd1f: /* 47fd1f: xor edi, edi */
  edi = 0;
L_47fd21: /* 47fd21: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47fd24: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47fd29: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47fd2c: je 0x47fd4d */
  if (zf) goto L_47fd4d;
L_47fd2e: /* 47fd2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fd2f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fd32: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47fd35: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fd38: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47fd3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fd3c: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47fd41u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47fd41: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47fd43: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47fd46: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fd49: xor edi, edi */
  edi = 0;
/* 47fd4b: jmp 0x47fd53 */
  goto L_47fd53;
L_47fd4d: /* 47fd4d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 47fd50: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_47fd53: /* 47fd53: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47fd57: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 47fd5a: jae 0x47fd5f */
  if (!cf) goto L_47fd5f;
L_47fd5c: /* 47fd5c: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
L_47fd5f: /* 47fd5f: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47fd62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47fd63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fd64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fd65: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47fd68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fd69: call 0x46f314 */
  esp -= 4; W32(esp, 0x47fd6eu); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 47fd6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47fd70: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47fd73: and dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x14u), r);
  }
/* 47fd77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47fd78: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fd7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fd7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47fd7d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47fd80: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47fd85u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47fd85: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fd88: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47fd8a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 47fd8d: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47fd92u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47fd92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47fd93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_47fd94: /* 47fd94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47fd97: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47fd9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47fda1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47fda4: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47fda7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47fda8: call 0x46190c */
  esp -= 4; W32(esp, 0x47fdadu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47fdad: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47fdae: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_47fdb1(void) {
  LOAD_REGS();
L_47fdb1: /* 47fdb1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47fdb2: mov ebp, esp */
  ebp = esp;
/* 47fdb4: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47fdb7: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47fdbc: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47fdbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fdc0: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47fdc3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47fdc6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47fdc9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47fdcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fdcd: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 47fdd0: push 0x4c8ed0 */
  { uint32_t v = 0x4c8ed0u; esp -= 4; W32(esp, v); }
/* 47fdd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fdd6: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47fddbu); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47fddb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fdde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fddf: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47fde2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fde3: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47fde9u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47fde9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fdea: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47fded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fdee: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fdf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fdf2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fdf5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47fdf8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47fdfb: call 0x47bae2 */
  esp -= 4; W32(esp, 0x47fe00u); SPILL(); f_47bae2(); if (g_unwind) return; RELOAD();
/* 47fe00: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47fe03: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47fe06: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47fe09: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fe0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47fe0d: call 0x46190c */
  esp -= 4; W32(esp, 0x47fe12u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47fe12: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47fe13: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_47fe16(void) {
  LOAD_REGS();
L_47fe16: /* 47fe16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47fe17: mov ebp, esp */
  ebp = esp;
/* 47fe19: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47fe1c: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47fe21: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47fe24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fe25: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47fe28: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47fe2b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47fe2e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47fe31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fe32: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 47fe35: push 0x4c8ed4 */
  { uint32_t v = 0x4c8ed4u; esp -= 4; W32(esp, v); }
/* 47fe3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fe3b: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47fe40u); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47fe40: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fe43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fe44: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47fe47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fe48: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47fe4eu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47fe4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fe4f: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 47fe52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fe53: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47fe56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fe57: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fe5a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47fe5d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47fe60: call 0x47bae2 */
  esp -= 4; W32(esp, 0x47fe65u); SPILL(); f_47bae2(); if (g_unwind) return; RELOAD();
/* 47fe65: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47fe68: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47fe6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47fe6e: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fe71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47fe72: call 0x46190c */
  esp -= 4; W32(esp, 0x47fe77u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47fe77: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47fe78: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_47fe7b(void) {
  LOAD_REGS();
L_47fe7b: /* 47fe7b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47fe7c: mov ebp, esp */
  ebp = esp;
/* 47fe7e: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47fe81: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47fe86: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47fe89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fe8a: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47fe8d: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47fe90: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47fe93: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47fe96: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47fe99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fe9a: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47fe9d: push 0x4c8ed8 */
  { uint32_t v = 0x4c8ed8u; esp -= 4; W32(esp, v); }
/* 47fea2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47fea3: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47fea8u); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47fea8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47feab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47feac: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47feaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47feb0: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47feb6u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47feb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47feb7: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47feba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47febb: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47febe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47febf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47fec2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47fec5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47fec8: call 0x47bae2 */
  esp -= 4; W32(esp, 0x47fecdu); SPILL(); f_47bae2(); if (g_unwind) return; RELOAD();
/* 47fecd: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47fed0: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47fed3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47fed6: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47fed9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47feda: call 0x46190c */
  esp -= 4; W32(esp, 0x47fedfu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47fedf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47fee0: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_47fee3(void) {
  LOAD_REGS();
L_47fee3: /* 47fee3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47fee4: mov ebp, esp */
  ebp = esp;
/* 47fee6: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47fee9: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47feee: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47fef1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47fef2: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47fef5: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47fef8: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47fefb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47fefe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47ff01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ff02: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47ff05: push 0x4c8edc */
  { uint32_t v = 0x4c8edcu; esp -= 4; W32(esp, v); }
/* 47ff0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ff0b: call 0x468cb6 */
  esp -= 4; W32(esp, 0x47ff10u); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 47ff10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ff13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ff14: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47ff17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ff18: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x47ff1eu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 47ff1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ff1f: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 47ff22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ff23: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47ff26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ff27: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ff2a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47ff2d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47ff30: call 0x47bae2 */
  esp -= 4; W32(esp, 0x47ff35u); SPILL(); f_47bae2(); if (g_unwind) return; RELOAD();
/* 47ff35: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47ff38: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47ff3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ff3e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ff41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ff42: call 0x46190c */
  esp -= 4; W32(esp, 0x47ff47u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47ff47: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ff48: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_47ff4b(void) {
  LOAD_REGS();
L_47ff4b: /* 47ff4b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47ff4c: mov ebp, esp */
  ebp = esp;
/* 47ff4e: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ff51: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47ff56: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47ff59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ff5a: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 47ff5d: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 47ff60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47ff62: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47ff65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ff66: mov eax, 0x2000 */
  eax = 0x2000u;
/* 47ff6b: jg 0x47ff75 */
  if ((!zf && sf == of)) goto L_47ff75;
L_47ff6d: /* 47ff6d: test dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47ff70: jne 0x47ff75 */
  if (!zf) goto L_47ff75;
L_47ff72: /* 47ff72: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 47ff74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_47ff75: /* 47ff75: mov edi, ecx */
  edi = ecx;
/* 47ff77: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 47ff79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ff7a: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47ff7c: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 47ff7f: jg 0x47ff84 */
  if ((!zf && sf == of)) goto L_47ff84;
L_47ff81: /* 47ff81: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_47ff84: /* 47ff84: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 47ff87: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 47ff8a: sub edi, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 47ff8d: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47ff91: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47ff95: mov edx, ecx */
  edx = ecx;
/* 47ff97: and edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 47ff9d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ff9f: jne 0x480025 */
  if (!zf) goto L_480025;
L_47ffa5: /* 47ffa5: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 47ffab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47ffad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47ffb0: jp 0x47ffc7 */
  if (pf) goto L_47ffc7;
L_47ffb2: /* 47ffb2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 47ffb4: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 47ffb8: fchs  */
  ST0 = -ST0;
/* 47ffba: fstp st(1) */
  STI(1) = ST0; FPOP();
L_47ffbc: /* 47ffbc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ffbd: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47ffbf: mov ebx, 0x1388 */
  ebx = 0x1388u;
/* 47ffc4: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 47ffc5: jmp 0x47ffdb */
  goto L_47ffdb;
L_47ffc7: /* 47ffc7: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47ffcb: jmp 0x47ffbc */
  goto L_47ffbc;
L_47ffcd: /* 47ffcd: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47ffd0: jae 0x47ffea */
  if (!cf) goto L_47ffea;
L_47ffd2: /* 47ffd2: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 47ffd8: add dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_47ffdb: /* 47ffdb: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 47ffe1: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 47ffe3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47ffe5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47ffe8: jnp 0x47ffcd */
  if (!pf) goto L_47ffcd;
L_47ffea: /* 47ffea: fldz  */
  FPUSH(0.0);
/* 47ffec: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 47ffee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47fff0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 47fff3: jp 0x480018 */
  if (pf) goto L_480018;
L_47fff5: /* 47fff5: jmp 0x480014 */
  goto L_480014;
L_47fff7: /* 47fff7: fcom qword ptr [0x4c8ee8] */
  fpu_com(ST0, F64((uint32_t)(0x4c8ee8u)));
/* 47fffd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 47ffff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 480002: jp 0x480018 */
  if (pf) goto L_480018;
L_480004: /* 480004: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 480007: jae 0x480018 */
  if (!cf) goto L_480018;
L_480009: /* 480009: fmul qword ptr [0x4c8ee0] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ee0u)));
/* 48000f: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 480011: add dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_480014: /* 480014: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 480016: jge 0x47fff7 */
  if ((sf == of)) goto L_47fff7;
L_480018: /* 480018: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48001c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48001d: je 0x480025 */
  if (zf) goto L_480025;
L_48001f: /* 48001f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 480021: fchs  */
  ST0 = -ST0;
/* 480023: fstp st(1) */
  STI(1) = ST0; FPOP();
L_480025: /* 480025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480027: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48002a: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48002d: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 480030: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480031: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480033: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480034: call 0x468ac3 */
  esp -= 4; W32(esp, 0x480039u); SPILL(); f_468ac3(); if (g_unwind) return; RELOAD();
/* 480039: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48003c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48003d: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 480040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480041: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x480047u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 480047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480048: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480049: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 48004c: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 48004f: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 480052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480053: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480057: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48005a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48005d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 480060: call 0x47b8a4 */
  esp -= 4; W32(esp, 0x480065u); SPILL(); f_47b8a4(); if (g_unwind) return; RELOAD();
/* 480065: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 480068: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48006b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48006e: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480071: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 480072: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480073: call 0x46190c */
  esp -= 4; W32(esp, 0x480078u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480078: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480079: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_48007c(void) {
  LOAD_REGS();
L_48007c: /* 48007c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48007d: mov ebp, esp */
  ebp = esp;
/* 48007f: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 480082: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480087: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 48008a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48008b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 48008e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 480091: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 480093: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 480096: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480097: mov eax, 0x2000 */
  eax = 0x2000u;
/* 48009c: jg 0x4800a6 */
  if ((!zf && sf == of)) goto L_4800a6;
L_48009e: /* 48009e: test dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4800a1: jne 0x4800a6 */
  if (!zf) goto L_4800a6;
L_4800a3: /* 4800a3: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 4800a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4800a6: /* 4800a6: mov edi, ecx */
  edi = ecx;
/* 4800a8: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 4800aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4800ab: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4800ad: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 4800b0: jg 0x4800b5 */
  if ((!zf && sf == of)) goto L_4800b5;
L_4800b2: /* 4800b2: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_4800b5: /* 4800b5: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 4800b8: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 4800bb: sub edi, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4800be: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 4800c2: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4800c6: mov edx, ecx */
  edx = ecx;
/* 4800c8: and edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4800ce: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4800d0: jne 0x480156 */
  if (!zf) goto L_480156;
L_4800d6: /* 4800d6: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 4800dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4800de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4800e1: jp 0x4800f8 */
  if (pf) goto L_4800f8;
L_4800e3: /* 4800e3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4800e5: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 4800e9: fchs  */
  ST0 = -ST0;
/* 4800eb: fstp st(1) */
  STI(1) = ST0; FPOP();
L_4800ed: /* 4800ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4800ee: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4800f0: mov ebx, 0x1388 */
  ebx = 0x1388u;
/* 4800f5: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4800f6: jmp 0x48010c */
  goto L_48010c;
L_4800f8: /* 4800f8: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 4800fc: jmp 0x4800ed */
  goto L_4800ed;
L_4800fe: /* 4800fe: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 480101: jae 0x48011b */
  if (!cf) goto L_48011b;
L_480103: /* 480103: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 480109: add dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_48010c: /* 48010c: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 480112: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 480114: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 480116: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 480119: jnp 0x4800fe */
  if (!pf) goto L_4800fe;
L_48011b: /* 48011b: fldz  */
  FPUSH(0.0);
/* 48011d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 48011f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 480121: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 480124: jp 0x480149 */
  if (pf) goto L_480149;
L_480126: /* 480126: jmp 0x480145 */
  goto L_480145;
L_480128: /* 480128: fcom qword ptr [0x4c8ee8] */
  fpu_com(ST0, F64((uint32_t)(0x4c8ee8u)));
/* 48012e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 480130: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 480133: jp 0x480149 */
  if (pf) goto L_480149;
L_480135: /* 480135: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 480138: jae 0x480149 */
  if (!cf) goto L_480149;
L_48013a: /* 48013a: fmul qword ptr [0x4c8ee0] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ee0u)));
/* 480140: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 480142: add dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_480145: /* 480145: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 480147: jge 0x480128 */
  if ((sf == of)) goto L_480128;
L_480149: /* 480149: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48014d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48014e: je 0x480156 */
  if (zf) goto L_480156;
L_480150: /* 480150: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 480152: fchs  */
  ST0 = -ST0;
/* 480154: fstp st(1) */
  STI(1) = ST0; FPOP();
L_480156: /* 480156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480157: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480158: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48015b: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48015e: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 480161: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480162: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 480164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480165: call 0x468ac3 */
  esp -= 4; W32(esp, 0x48016au); SPILL(); f_468ac3(); if (g_unwind) return; RELOAD();
/* 48016a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48016d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48016e: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 480171: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480172: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x480178u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 480178: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48017a: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 48017d: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 480180: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 480183: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480184: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480187: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480188: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48018b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48018e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 480191: call 0x47b8a4 */
  esp -= 4; W32(esp, 0x480196u); SPILL(); f_47b8a4(); if (g_unwind) return; RELOAD();
/* 480196: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 480199: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48019c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48019f: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4801a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4801a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4801a4: call 0x46190c */
  esp -= 4; W32(esp, 0x4801a9u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4801a9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4801aa: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_4801ad(void) {
  LOAD_REGS();
L_4801ad: /* 4801ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4801ae: mov ebp, esp */
  ebp = esp;
/* 4801b0: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4801b3: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4801b8: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4801bb: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4801be: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4801c1: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 4801c4: push 0x4c8f00 */
  { uint32_t v = 0x4c8f00u; esp -= 4; W32(esp, v); }
/* 4801c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4801ca: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x4801d0u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 4801d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4801d1: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 4801d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4801d5: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4801d8: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4801db: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4801de: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4801e1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4801e4: call 0x47bae2 */
  esp -= 4; W32(esp, 0x4801e9u); SPILL(); f_47bae2(); if (g_unwind) return; RELOAD();
/* 4801e9: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4801ec: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4801ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4801f2: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4801f5: call 0x46190c */
  esp -= 4; W32(esp, 0x4801fau); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4801fa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4801fb: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_4801fe(void) {
  LOAD_REGS();
L_4801fe: /* 4801fe: mov eax, 0x48d243 */
  eax = 0x48d243u;
/* 480203: call 0x4616c0 */
  esp -= 4; W32(esp, 0x480208u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 480208: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48020b: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480210: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 480214: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 480217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480218: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 48021b: test byte ptr [esi + 0xd], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48021f: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 480222: jne 0x480240 */
  if (!zf) goto L_480240;
L_480224: /* 480224: movzx edx, byte ptr [ebp + 0x1c] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x1cu)));
/* 480228: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 48022a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 48022b: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 48022e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48022f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 480232: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 480235: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 480238: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x48023bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48023b: jmp 0x480350 */
  goto L_480350;
L_480240: /* 480240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 480241: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480242: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 480245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480246: mov ecx, esi */
  ecx = esi;
/* 480248: call 0x464a5a */
  esp -= 4; W32(esp, 0x48024du); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 48024d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480251: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480252: call 0x479941 */
  esp -= 4; W32(esp, 0x480257u); SPILL(); f_479941(); if (g_unwind) return; RELOAD();
/* 480257: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48025b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48025c: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 48025f: mov edi, eax */
  edi = eax;
/* 480261: call 0x461389 */
  esp -= 4; W32(esp, 0x480266u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 480266: cmp byte ptr [ebp + 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48026a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 48026c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48026d: mov ecx, edi */
  ecx = edi;
/* 48026f: je 0x480285 */
  if (zf) goto L_480285;
L_480271: /* 480271: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 480274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480275: call 0x471ec1 */
  esp -= 4; W32(esp, 0x48027au); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 48027a: xor edi, edi */
  edi = 0;
/* 48027c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 48027d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 480280: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 480283: jmp 0x480297 */
  goto L_480297;
L_480285: /* 480285: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 480288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480289: call 0x471eaa */
  esp -= 4; W32(esp, 0x48028eu); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 48028e: xor edi, edi */
  edi = 0;
/* 480290: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 480293: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 480296: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_480297: /* 480297: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480298: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48029b: call 0x47d83c */
  esp -= 4; W32(esp, 0x4802a0u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 4802a0: test byte ptr [ebp - 0x14], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4802a3: je 0x4802b2 */
  if (zf) goto L_4802b2;
L_4802a5: /* 4802a5: and dword ptr [ebp - 0x14], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 4802a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4802aa: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 4802ad: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4802b2u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
L_4802b2: /* 4802b2: test byte ptr [ebp - 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4802b6: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 4802bd: je 0x4802c8 */
  if (zf) goto L_4802c8;
L_4802bf: /* 4802bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4802c0: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 4802c3: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4802c8u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
L_4802c8: /* 4802c8: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4802cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4802cd: jle 0x4802db */
  if ((zf || sf != of)) goto L_4802db;
L_4802cf: /* 4802cf: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4802d2: jbe 0x4802db */
  if ((cf | zf)) goto L_4802db;
L_4802d4: /* 4802d4: sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4802d7: mov edi, eax */
  edi = eax;
/* 4802d9: jmp 0x4802dd */
  goto L_4802dd;
L_4802db: /* 4802db: xor edi, edi */
  edi = 0;
L_4802dd: /* 4802dd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4802e0: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4802e5: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4802e8: je 0x480309 */
  if (zf) goto L_480309;
L_4802ea: /* 4802ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4802eb: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4802ee: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 4802f1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4802f4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4802f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4802f8: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x4802fdu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 4802fd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4802ff: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 480302: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480305: xor edi, edi */
  edi = 0;
/* 480307: jmp 0x48030f */
  goto L_48030f;
L_480309: /* 480309: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 48030c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_48030f: /* 48030f: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 480313: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 480316: jae 0x48031b */
  if (!cf) goto L_48031b;
L_480318: /* 480318: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
L_48031b: /* 48031b: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 48031e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 48031f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480320: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480321: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 480324: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480325: call 0x46f314 */
  esp -= 4; W32(esp, 0x48032au); SPILL(); f_46f314(); if (g_unwind) return; RELOAD();
/* 48032a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 48032c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48032f: and dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x14u), r);
  }
/* 480333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480334: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480337: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480338: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480339: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48033c: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x480341u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 480341: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480344: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 480346: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480349: call 0x4624b0 */
  esp -= 4; W32(esp, 0x48034eu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 48034e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48034f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_480350: /* 480350: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 480353: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480356: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48035d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 480360: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 480363: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480364: call 0x46190c */
  esp -= 4; W32(esp, 0x480369u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480369: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48036a: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_48036d(void) {
  LOAD_REGS();
L_48036d: /* 48036d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48036e: mov ebp, esp */
  ebp = esp;
/* 480370: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 480373: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480378: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 48037b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48037c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 48037f: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 480382: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 480385: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 480388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480389: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 48038c: push 0x4c8ed0 */
  { uint32_t v = 0x4c8ed0u; esp -= 4; W32(esp, v); }
/* 480391: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480392: call 0x468cb6 */
  esp -= 4; W32(esp, 0x480397u); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 480397: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48039a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48039b: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 48039e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48039f: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x4803a5u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 4803a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4803a6: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 4803a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4803aa: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4803ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4803ae: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4803b1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4803b4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4803b7: call 0x47bf93 */
  esp -= 4; W32(esp, 0x4803bcu); SPILL(); f_47bf93(); if (g_unwind) return; RELOAD();
/* 4803bc: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4803bf: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4803c2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4803c5: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4803c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4803c9: call 0x46190c */
  esp -= 4; W32(esp, 0x4803ceu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4803ce: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4803cf: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_4803d2(void) {
  LOAD_REGS();
L_4803d2: /* 4803d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4803d3: mov ebp, esp */
  ebp = esp;
/* 4803d5: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4803d8: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4803dd: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4803e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4803e1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4803e4: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 4803e7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4803ea: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4803ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4803ee: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4803f1: push 0x4c8ed4 */
  { uint32_t v = 0x4c8ed4u; esp -= 4; W32(esp, v); }
/* 4803f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4803f7: call 0x468cb6 */
  esp -= 4; W32(esp, 0x4803fcu); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 4803fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4803ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480400: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 480403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480404: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x48040au); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 48040a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48040b: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 48040e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48040f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480412: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480413: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 480416: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 480419: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48041c: call 0x47bf93 */
  esp -= 4; W32(esp, 0x480421u); SPILL(); f_47bf93(); if (g_unwind) return; RELOAD();
/* 480421: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 480424: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 480427: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48042a: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48042d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48042e: call 0x46190c */
  esp -= 4; W32(esp, 0x480433u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480433: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480434: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_480437(void) {
  LOAD_REGS();
L_480437: /* 480437: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480438: mov ebp, esp */
  ebp = esp;
/* 48043a: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48043d: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480442: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 480445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480446: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 480449: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 48044c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 48044f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 480452: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 480455: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480456: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 480459: push 0x4c8ed8 */
  { uint32_t v = 0x4c8ed8u; esp -= 4; W32(esp, v); }
/* 48045e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48045f: call 0x468cb6 */
  esp -= 4; W32(esp, 0x480464u); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 480464: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480468: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 48046b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48046c: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x480472u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 480472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480473: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 480476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480477: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 48047a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48047b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48047e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 480481: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 480484: call 0x47bf93 */
  esp -= 4; W32(esp, 0x480489u); SPILL(); f_47bf93(); if (g_unwind) return; RELOAD();
/* 480489: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 48048c: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48048f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480492: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480495: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480496: call 0x46190c */
  esp -= 4; W32(esp, 0x48049bu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48049b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48049c: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_48049f(void) {
  LOAD_REGS();
L_48049f: /* 48049f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4804a0: mov ebp, esp */
  ebp = esp;
/* 4804a2: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4804a5: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4804aa: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4804ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4804ae: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4804b1: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 4804b4: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4804b7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4804ba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4804bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4804be: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 4804c1: push 0x4c8edc */
  { uint32_t v = 0x4c8edcu; esp -= 4; W32(esp, v); }
/* 4804c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4804c7: call 0x468cb6 */
  esp -= 4; W32(esp, 0x4804ccu); SPILL(); f_468cb6(); if (g_unwind) return; RELOAD();
/* 4804cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4804cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4804d0: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 4804d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4804d4: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x4804dau); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 4804da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4804db: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 4804de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4804df: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4804e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4804e3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4804e6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4804e9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4804ec: call 0x47bf93 */
  esp -= 4; W32(esp, 0x4804f1u); SPILL(); f_47bf93(); if (g_unwind) return; RELOAD();
/* 4804f1: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4804f4: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4804f7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4804fa: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4804fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4804fe: call 0x46190c */
  esp -= 4; W32(esp, 0x480503u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480503: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480504: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_480507(void) {
  LOAD_REGS();
L_480507: /* 480507: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480508: mov ebp, esp */
  ebp = esp;
/* 48050a: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48050d: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480512: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 480515: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480516: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 480519: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 48051c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48051e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 480521: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480522: mov eax, 0x2000 */
  eax = 0x2000u;
/* 480527: jg 0x480531 */
  if ((!zf && sf == of)) goto L_480531;
L_480529: /* 480529: test dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48052c: jne 0x480531 */
  if (!zf) goto L_480531;
L_48052e: /* 48052e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 480530: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_480531: /* 480531: mov edi, ecx */
  edi = ecx;
/* 480533: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 480535: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480536: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 480538: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 48053b: jg 0x480540 */
  if ((!zf && sf == of)) goto L_480540;
L_48053d: /* 48053d: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_480540: /* 480540: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 480543: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 480546: sub edi, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 480549: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 48054d: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 480551: mov edx, ecx */
  edx = ecx;
/* 480553: and edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 480559: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48055b: jne 0x4805e1 */
  if (!zf) goto L_4805e1;
L_480561: /* 480561: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 480567: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 480569: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48056c: jp 0x480583 */
  if (pf) goto L_480583;
L_48056e: /* 48056e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 480570: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 480574: fchs  */
  ST0 = -ST0;
/* 480576: fstp st(1) */
  STI(1) = ST0; FPOP();
L_480578: /* 480578: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 480579: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 48057b: mov ebx, 0x1388 */
  ebx = 0x1388u;
/* 480580: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 480581: jmp 0x480597 */
  goto L_480597;
L_480583: /* 480583: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 480587: jmp 0x480578 */
  goto L_480578;
L_480589: /* 480589: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48058c: jae 0x4805a6 */
  if (!cf) goto L_4805a6;
L_48058e: /* 48058e: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 480594: add dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_480597: /* 480597: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 48059d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 48059f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4805a1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4805a4: jnp 0x480589 */
  if (!pf) goto L_480589;
L_4805a6: /* 4805a6: fldz  */
  FPUSH(0.0);
/* 4805a8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4805aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4805ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4805af: jp 0x4805d4 */
  if (pf) goto L_4805d4;
L_4805b1: /* 4805b1: jmp 0x4805d0 */
  goto L_4805d0;
L_4805b3: /* 4805b3: fcom qword ptr [0x4c8ee8] */
  fpu_com(ST0, F64((uint32_t)(0x4c8ee8u)));
/* 4805b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4805bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4805be: jp 0x4805d4 */
  if (pf) goto L_4805d4;
L_4805c0: /* 4805c0: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4805c3: jae 0x4805d4 */
  if (!cf) goto L_4805d4;
L_4805c5: /* 4805c5: fmul qword ptr [0x4c8ee0] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ee0u)));
/* 4805cb: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4805cd: add dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_4805d0: /* 4805d0: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4805d2: jge 0x4805b3 */
  if ((sf == of)) goto L_4805b3;
L_4805d4: /* 4805d4: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4805d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4805d9: je 0x4805e1 */
  if (zf) goto L_4805e1;
L_4805db: /* 4805db: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4805dd: fchs  */
  ST0 = -ST0;
/* 4805df: fstp st(1) */
  STI(1) = ST0; FPOP();
L_4805e1: /* 4805e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4805e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4805e3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4805e6: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 4805e9: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 4805ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4805ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4805ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4805f0: call 0x468ac3 */
  esp -= 4; W32(esp, 0x4805f5u); SPILL(); f_468ac3(); if (g_unwind) return; RELOAD();
/* 4805f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4805f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4805f9: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 4805fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4805fd: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x480603u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 480603: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480604: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480605: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 480608: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 48060b: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 48060e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48060f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480612: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480613: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 480616: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 480619: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48061c: call 0x47bd55 */
  esp -= 4; W32(esp, 0x480621u); SPILL(); f_47bd55(); if (g_unwind) return; RELOAD();
/* 480621: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 480624: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 480627: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48062a: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48062d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48062e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48062f: call 0x46190c */
  esp -= 4; W32(esp, 0x480634u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480634: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480635: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_480638(void) {
  LOAD_REGS();
L_480638: /* 480638: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480639: mov ebp, esp */
  ebp = esp;
/* 48063b: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48063e: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480643: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 480646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480647: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 48064a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 48064d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48064f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 480652: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480653: mov eax, 0x2000 */
  eax = 0x2000u;
/* 480658: jg 0x480662 */
  if ((!zf && sf == of)) goto L_480662;
L_48065a: /* 48065a: test dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48065d: jne 0x480662 */
  if (!zf) goto L_480662;
L_48065f: /* 48065f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 480661: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_480662: /* 480662: mov edi, ecx */
  edi = ecx;
/* 480664: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 480666: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480667: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 480669: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 48066c: jg 0x480671 */
  if ((!zf && sf == of)) goto L_480671;
L_48066e: /* 48066e: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_480671: /* 480671: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 480674: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 480677: sub edi, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 48067a: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 48067e: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 480682: mov edx, ecx */
  edx = ecx;
/* 480684: and edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 48068a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48068c: jne 0x480712 */
  if (!zf) goto L_480712;
L_480692: /* 480692: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 480698: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48069a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48069d: jp 0x4806b4 */
  if (pf) goto L_4806b4;
L_48069f: /* 48069f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4806a1: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 4806a5: fchs  */
  ST0 = -ST0;
/* 4806a7: fstp st(1) */
  STI(1) = ST0; FPOP();
L_4806a9: /* 4806a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4806aa: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4806ac: mov ebx, 0x1388 */
  ebx = 0x1388u;
/* 4806b1: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4806b2: jmp 0x4806c8 */
  goto L_4806c8;
L_4806b4: /* 4806b4: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 4806b8: jmp 0x4806a9 */
  goto L_4806a9;
L_4806ba: /* 4806ba: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4806bd: jae 0x4806d7 */
  if (!cf) goto L_4806d7;
L_4806bf: /* 4806bf: fmul qword ptr [0x4c8ef8] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ef8u)));
/* 4806c5: add dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_4806c8: /* 4806c8: fld qword ptr [0x4c8ef0] */
  { double v = F64((uint32_t)(0x4c8ef0u)); FPUSH(v); }
/* 4806ce: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4806d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4806d2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4806d5: jnp 0x4806ba */
  if (!pf) goto L_4806ba;
L_4806d7: /* 4806d7: fldz  */
  FPUSH(0.0);
/* 4806d9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4806db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4806dd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4806e0: jp 0x480705 */
  if (pf) goto L_480705;
L_4806e2: /* 4806e2: jmp 0x480701 */
  goto L_480701;
L_4806e4: /* 4806e4: fcom qword ptr [0x4c8ee8] */
  fpu_com(ST0, F64((uint32_t)(0x4c8ee8u)));
/* 4806ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4806ec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4806ef: jp 0x480705 */
  if (pf) goto L_480705;
L_4806f1: /* 4806f1: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4806f4: jae 0x480705 */
  if (!cf) goto L_480705;
L_4806f6: /* 4806f6: fmul qword ptr [0x4c8ee0] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8ee0u)));
/* 4806fc: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4806fe: add dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_480701: /* 480701: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 480703: jge 0x4806e4 */
  if ((sf == of)) goto L_4806e4;
L_480705: /* 480705: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 480709: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48070a: je 0x480712 */
  if (zf) goto L_480712;
L_48070c: /* 48070c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48070e: fchs  */
  ST0 = -ST0;
/* 480710: fstp st(1) */
  STI(1) = ST0; FPOP();
L_480712: /* 480712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480714: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 480717: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48071a: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 48071d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48071e: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 480720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480721: call 0x468ac3 */
  esp -= 4; W32(esp, 0x480726u); SPILL(); f_468ac3(); if (g_unwind) return; RELOAD();
/* 480726: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48072a: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 48072d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48072e: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x480734u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 480734: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480735: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480736: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 480739: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 48073c: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 48073f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480740: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480743: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480744: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 480747: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48074a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48074d: call 0x47bd55 */
  esp -= 4; W32(esp, 0x480752u); SPILL(); f_47bd55(); if (g_unwind) return; RELOAD();
/* 480752: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 480755: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 480758: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48075b: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48075e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48075f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480760: call 0x46190c */
  esp -= 4; W32(esp, 0x480765u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480765: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480766: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_480769(void) {
  LOAD_REGS();
L_480769: /* 480769: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48076a: mov ebp, esp */
  ebp = esp;
/* 48076c: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48076f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480774: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 480777: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 48077a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 48077d: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 480780: push 0x4c8f00 */
  { uint32_t v = 0x4c8f00u; esp -= 4; W32(esp, v); }
/* 480785: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480786: call dword ptr [0x48e0cc] */
  esp -= 4; W32(esp, 0x48078cu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 48078c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48078d: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 480790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480791: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480794: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 480797: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48079a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48079d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4807a0: call 0x47bf93 */
  esp -= 4; W32(esp, 0x4807a5u); SPILL(); f_47bf93(); if (g_unwind) return; RELOAD();
/* 4807a5: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4807a8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4807ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4807ae: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4807b1: call 0x46190c */
  esp -= 4; W32(esp, 0x4807b6u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4807b6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4807b7: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_4807ba(void) {
  LOAD_REGS();
L_4807ba: /* 4807ba: mov eax, 0x48d265 */
  eax = 0x48d265u;
/* 4807bf: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4807c4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4807c4: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4807c7: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4807cc: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4807cf: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 4807d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4807d3: xor esi, esi */
  esi = 0;
/* 4807d5: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4807d8: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4807db: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4807de: jne 0x480817 */
  if (!zf) goto L_480817;
L_4807e0: /* 4807e0: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4807e3: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4807e5: je 0x480817 */
  if (zf) goto L_480817;
L_4807e7: /* 4807e7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4807e9: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 4807ec: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4807ee: jb 0x4807f2 */
  if (cf) goto L_4807f2;
L_4807f0: /* 4807f0: mov eax, edx */
  eax = edx;
L_4807f2: /* 4807f2: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 4807f5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4807f7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4807f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4807fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4807fb: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 4807fe: call 0x46760d */
  esp -= 4; W32(esp, 0x480803u); SPILL(); f_46760d(); if (g_unwind) return; RELOAD();
/* 480803: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480806: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 480809: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48080a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 48080d: call 0x4675a8 */
  esp -= 4; W32(esp, 0x480812u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 480812: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 480815: jmp 0x480879 */
  goto L_480879;
L_480817: /* 480817: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48081a: jne 0x480853 */
  if (!zf) goto L_480853;
L_48081c: /* 48081c: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 48081f: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480821: je 0x480853 */
  if (zf) goto L_480853;
L_480823: /* 480823: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 480826: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 480829: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 48082b: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 48082d: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 48082f: add ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480831: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480832: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 480833: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 480836: call 0x46760d */
  esp -= 4; W32(esp, 0x48083bu); SPILL(); f_46760d(); if (g_unwind) return; RELOAD();
/* 48083b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48083e: xor esi, esi */
  esi = 0;
/* 480840: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 480843: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 480844: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480845: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 480848: call 0x4675a8 */
  esp -= 4; W32(esp, 0x48084du); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 48084d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48084e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 480851: jmp 0x48087b */
  goto L_48087b;
L_480853: /* 480853: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480854: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480857: mov dword ptr [ebp - 0x18], 0xf */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xfu);
/* 48085e: call 0x461ed0 */
  esp -= 4; W32(esp, 0x480863u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 480863: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480866: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 480869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48086a: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 480871: call 0x4675a8 */
  esp -= 4; W32(esp, 0x480876u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 480876: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
L_480879: /* 480879: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_48087b: /* 48087b: call 0x461ea8 */
  esp -= 4; W32(esp, 0x480880u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 480880: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 480883: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480886: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48088d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 480890: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 480893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480894: call 0x46190c */
  esp -= 4; W32(esp, 0x480899u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480899: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48089a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48089d(void) {
  LOAD_REGS();
L_48089d: /* 48089d: mov eax, 0x48d287 */
  eax = 0x48d287u;
/* 4808a2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4808a7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4808a7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4808aa: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4808af: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4808b2: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 4808b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4808b6: xor esi, esi */
  esi = 0;
/* 4808b8: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4808bb: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4808be: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4808c1: jne 0x4808fc */
  if (!zf) goto L_4808fc;
L_4808c3: /* 4808c3: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4808c6: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4808c8: je 0x4808fc */
  if (zf) goto L_4808fc;
L_4808ca: /* 4808ca: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4808cc: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 4808cf: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4808d1: jb 0x4808d5 */
  if (cf) goto L_4808d5;
L_4808d3: /* 4808d3: mov eax, edx */
  eax = edx;
L_4808d5: /* 4808d5: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 4808d8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4808da: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4808dc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4808de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4808df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4808e0: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 4808e3: call 0x47d85b */
  esp -= 4; W32(esp, 0x4808e8u); SPILL(); f_47d85b(); if (g_unwind) return; RELOAD();
/* 4808e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4808eb: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 4808ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4808ef: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4808f2: call 0x47d83c */
  esp -= 4; W32(esp, 0x4808f7u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 4808f7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 4808fa: jmp 0x480962 */
  goto L_480962;
L_4808fc: /* 4808fc: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4808ff: jne 0x48093c */
  if (!zf) goto L_48093c;
L_480901: /* 480901: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 480904: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480906: je 0x48093c */
  if (zf) goto L_48093c;
L_480908: /* 480908: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 48090b: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 48090e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 480910: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 480912: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 480914: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 480916: add ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480918: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 48091a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48091b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 48091c: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48091f: call 0x47d85b */
  esp -= 4; W32(esp, 0x480924u); SPILL(); f_47d85b(); if (g_unwind) return; RELOAD();
/* 480924: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480927: xor esi, esi */
  esi = 0;
/* 480929: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 48092c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 48092d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48092e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 480931: call 0x47d83c */
  esp -= 4; W32(esp, 0x480936u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 480936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480937: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 48093a: jmp 0x480964 */
  goto L_480964;
L_48093c: /* 48093c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48093d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480940: mov dword ptr [ebp - 0x18], 7 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x7u);
/* 480947: call 0x4624dd */
  esp -= 4; W32(esp, 0x48094cu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 48094c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48094f: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 480952: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480953: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48095a: call 0x47d83c */
  esp -= 4; W32(esp, 0x48095fu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48095f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
L_480962: /* 480962: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_480964: /* 480964: call 0x4624b0 */
  esp -= 4; W32(esp, 0x480969u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 480969: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48096c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48096f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 480976: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 480979: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48097c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48097d: call 0x46190c */
  esp -= 4; W32(esp, 0x480982u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480982: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480983: ret 4 */
  esp += 8; SPILL(); return;
}

void f_480986(void) {
  LOAD_REGS();
L_480986: /* 480986: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480987: mov ebp, esp */
  ebp = esp;
/* 480989: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48098a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48098d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480991: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480994: call 0x4807ba */
  esp -= 4; W32(esp, 0x480999u); SPILL(); f_4807ba(); if (g_unwind) return; RELOAD();
/* 480999: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48099c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48099d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4809a0(void) {
  LOAD_REGS();
L_4809a0: /* 4809a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4809a1: mov ebp, esp */
  ebp = esp;
/* 4809a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4809a4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4809a7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4809ab: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4809ae: call 0x48089d */
  esp -= 4; W32(esp, 0x4809b3u); SPILL(); f_48089d(); if (g_unwind) return; RELOAD();
/* 4809b3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4809b6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4809b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4809ba(void) {
  LOAD_REGS();
L_4809ba: /* 4809ba: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4809bb: mov ebp, esp */
  ebp = esp;
/* 4809bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4809be: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4809c1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4809c5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4809c8: call 0x4807ba */
  esp -= 4; W32(esp, 0x4809cdu); SPILL(); f_4807ba(); if (g_unwind) return; RELOAD();
/* 4809cd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4809d0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4809d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4809d4(void) {
  LOAD_REGS();
L_4809d4: /* 4809d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4809d5: mov ebp, esp */
  ebp = esp;
/* 4809d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4809d8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4809db: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4809df: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4809e2: call 0x48089d */
  esp -= 4; W32(esp, 0x4809e7u); SPILL(); f_48089d(); if (g_unwind) return; RELOAD();
/* 4809e7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4809ea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4809eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4809ee(void) {
  LOAD_REGS();
L_4809ee: /* 4809ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4809ef: mov ebp, esp */
  ebp = esp;
/* 4809f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4809f2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4809f5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4809f9: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4809fc: call 0x4807ba */
  esp -= 4; W32(esp, 0x480a01u); SPILL(); f_4807ba(); if (g_unwind) return; RELOAD();
/* 480a01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480a04: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480a05: ret 4 */
  esp += 8; SPILL(); return;
}

void f_480a08(void) {
  LOAD_REGS();
L_480a08: /* 480a08: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480a09: mov ebp, esp */
  ebp = esp;
/* 480a0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480a0c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 480a0f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480a13: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480a16: call 0x48089d */
  esp -= 4; W32(esp, 0x480a1bu); SPILL(); f_48089d(); if (g_unwind) return; RELOAD();
/* 480a1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480a1e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480a1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_480a22(void) {
  LOAD_REGS();
L_480a22: /* 480a22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480a23: mov esi, ecx */
  esi = ecx;
/* 480a25: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480a29: je 0x480a50 */
  if (zf) goto L_480a50;
L_480a2b: /* 480a2b: call 0x47c347 */
  esp -= 4; W32(esp, 0x480a30u); SPILL(); f_47c347(); if (g_unwind) return; RELOAD();
/* 480a30: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 480a32: je 0x480a50 */
  if (zf) goto L_480a50;
L_480a34: /* 480a34: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 480a37: call dword ptr [0x48e068] */
  esp -= 4; W32(esp, 0x480a3du); SPILL(); f_41441f(); if (g_unwind) return; /* MSVCR70!fclose */ RELOAD();
/* 480a3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480a3f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480a40: jne 0x480a50 */
  if (!zf) goto L_480a50;
L_480a42: /* 480a42: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 480a44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480a45: mov ecx, esi */
  ecx = esi;
/* 480a47: call 0x462051 */
  esp -= 4; W32(esp, 0x480a4cu); SPILL(); f_462051(); if (g_unwind) return; RELOAD();
/* 480a4c: mov eax, esi */
  eax = esi;
/* 480a4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480a4f: ret  */
  esp += 4; SPILL(); return;
L_480a50: /* 480a50: xor eax, eax */
  eax = 0;
/* 480a52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480a53: ret  */
  esp += 4; SPILL(); return;
}

void f_480a54(void) {
  LOAD_REGS();
L_480a54: /* 480a54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480a55: mov ebp, esp */
  ebp = esp;
/* 480a57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480a58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480a59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 480a5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480a5b: mov esi, ecx */
  esi = ecx;
/* 480a5d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 480a60: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 480a62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480a63: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* 480a66: xor ebx, ebx */
  ebx = 0;
/* 480a68: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480a6a: jne 0x480aa0 */
  if (!zf) goto L_480aa0;
L_480a6c: /* 480a6c: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 480a6f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 480a71: lea ecx, [eax + ecx*2] */
  ecx = (uint32_t)(eax + ecx*2);
/* 480a74: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 480a76: jbe 0x480aa0 */
  if ((cf | zf)) goto L_480aa0;
L_480a78: /* 480a78: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480a7c: jne 0x480aa0 */
  if (!zf) goto L_480aa0;
L_480a7e: /* 480a7e: cmp dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480a81: jne 0x480a89 */
  if (!zf) goto L_480a89;
L_480a83: /* 480a83: sub dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 480a87: jmp 0x480aa0 */
  goto L_480aa0;
L_480a89: /* 480a89: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 480a8c: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 480a8f: sub dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 480a92: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 480a94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 480a95: call 0x466522 */
  esp -= 4; W32(esp, 0x480a9au); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 480a9a: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 480a9d: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
L_480aa0: /* 480aa0: cmp dword ptr [esi + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480aa3: je 0x480b1c */
  if (zf) goto L_480b1c;
L_480aa5: /* 480aa5: mov ecx, esi */
  ecx = esi;
/* 480aa7: call 0x47c347 */
  esp -= 4; W32(esp, 0x480aacu); SPILL(); f_47c347(); if (g_unwind) return; RELOAD();
/* 480aac: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 480aae: je 0x480b1c */
  if (zf) goto L_480b1c;
L_480ab0: /* 480ab0: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480ab3: jne 0x480abb */
  if (!zf) goto L_480abb;
L_480ab5: /* 480ab5: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480ab9: je 0x480ad1 */
  if (zf) goto L_480ad1;
L_480abb: /* 480abb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 480abe: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 480ac1: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 480ac4: call dword ptr [0x48e060] */
  esp -= 4; W32(esp, 0x480acau); SPILL(); f_42cc09(); if (g_unwind) return; /* MSVCR70!fseek */ RELOAD();
/* 480aca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480acd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480acf: jne 0x480b1c */
  if (!zf) goto L_480b1c;
L_480ad1: /* 480ad1: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 480ad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480ad5: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 480ad8: call dword ptr [0x48e05c] */
  esp -= 4; W32(esp, 0x480adeu); SPILL(); f_42c5b4(); if (g_unwind) return; /* MSVCR70!fgetpos */ RELOAD();
/* 480ade: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480ae0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480ae1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480ae2: jne 0x480b1c */
  if (!zf) goto L_480b1c;
L_480ae4: /* 480ae4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 480ae7: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480ae9: jne 0x480b03 */
  if (!zf) goto L_480b03;
L_480aeb: /* 480aeb: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 480aee: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 480af0: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 480af3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 480af5: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 480af8: mov eax, esi */
  eax = esi;
/* 480afa: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 480afc: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 480aff: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 480b01: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_480b03: /* 480b03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480b06: mov esi, dword ptr [esi + 0x50] */
  esi = R32((uint32_t)(esi + 0x50u));
/* 480b09: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 480b0c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 480b0f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 480b12: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 480b14: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 480b17: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 480b1a: jmp 0x480b2d */
  goto L_480b2d;
L_480b1c: /* 480b1c: push dword ptr [0x48e2bc] */
  { uint32_t v = R32((uint32_t)(0x48e2bcu)); esp -= 4; W32(esp, v); }
/* 480b22: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480b25: call 0x469803 */
  esp -= 4; W32(esp, 0x480b2au); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 480b2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_480b2d: /* 480b2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 480b2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480b2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 480b30: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480b31: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_480b34(void) {
  LOAD_REGS();
L_480b34: /* 480b34: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480b35: mov ebp, esp */
  ebp = esp;
/* 480b37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480b38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480b39: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 480b3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480b3d: mov esi, ecx */
  esi = ecx;
/* 480b3f: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480b43: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 480b46: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 480b49: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 480b4c: je 0x480bf1 */
  if (zf) goto L_480bf1;
L_480b52: /* 480b52: call 0x47c347 */
  esp -= 4; W32(esp, 0x480b57u); SPILL(); f_47c347(); if (g_unwind) return; RELOAD();
/* 480b57: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 480b59: je 0x480bf1 */
  if (zf) goto L_480bf1;
L_480b5f: /* 480b5f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 480b62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480b63: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 480b66: call dword ptr [0x48e064] */
  esp -= 4; W32(esp, 0x480b6cu); SPILL(); f_42cc52(); if (g_unwind) return; /* MSVCR70!fsetpos */ RELOAD();
/* 480b6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480b6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480b6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480b70: jne 0x480bf1 */
  if (!zf) goto L_480bf1;
L_480b72: /* 480b72: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480b75: je 0x480b8c */
  if (zf) goto L_480b8c;
L_480b77: /* 480b77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 480b79: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 480b7c: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 480b7f: call dword ptr [0x48e060] */
  esp -= 4; W32(esp, 0x480b85u); SPILL(); f_42cc09(); if (g_unwind) return; /* MSVCR70!fseek */ RELOAD();
/* 480b85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480b88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480b8a: jne 0x480bf1 */
  if (!zf) goto L_480bf1;
L_480b8c: /* 480b8c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 480b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480b90: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 480b93: call dword ptr [0x48e05c] */
  esp -= 4; W32(esp, 0x480b99u); SPILL(); f_42c5b4(); if (g_unwind) return; /* MSVCR70!fgetpos */ RELOAD();
/* 480b99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480b9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480b9c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480b9d: jne 0x480bf1 */
  if (!zf) goto L_480bf1;
L_480b9f: /* 480b9f: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 480ba2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480ba4: je 0x480bb5 */
  if (zf) goto L_480bb5;
L_480ba6: /* 480ba6: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 480ba9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 480bab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480bad: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 480bb0: call 0x466522 */
  esp -= 4; W32(esp, 0x480bb5u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
L_480bb5: /* 480bb5: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 480bb8: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 480bbb: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480bbd: jne 0x480bd7 */
  if (!zf) goto L_480bd7;
L_480bbf: /* 480bbf: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 480bc2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 480bc4: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 480bc7: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 480bc9: mov ecx, esi */
  ecx = esi;
/* 480bcb: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 480bcd: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 480bd0: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480bd3: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 480bd5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_480bd7: /* 480bd7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480bda: mov esi, dword ptr [esi + 0x50] */
  esi = R32((uint32_t)(esi + 0x50u));
/* 480bdd: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 480be0: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 480be3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 480be6: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 480be9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 480bec: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 480bef: jmp 0x480c02 */
  goto L_480c02;
L_480bf1: /* 480bf1: push dword ptr [0x48e2bc] */
  { uint32_t v = R32((uint32_t)(0x48e2bcu)); esp -= 4; W32(esp, v); }
/* 480bf7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480bfa: call 0x469803 */
  esp -= 4; W32(esp, 0x480bffu); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 480bff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_480c02: /* 480c02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480c03: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480c04: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_480c07(void) {
  LOAD_REGS();
L_480c07: /* 480c07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480c08: mov esi, ecx */
  esi = ecx;
/* 480c0a: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 480c0e: je 0x480c35 */
  if (zf) goto L_480c35;
L_480c10: /* 480c10: call 0x47c347 */
  esp -= 4; W32(esp, 0x480c15u); SPILL(); f_47c347(); if (g_unwind) return; RELOAD();
/* 480c15: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 480c17: je 0x480c35 */
  if (zf) goto L_480c35;
L_480c19: /* 480c19: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 480c1c: call dword ptr [0x48e068] */
  esp -= 4; W32(esp, 0x480c22u); SPILL(); f_41441f(); if (g_unwind) return; /* MSVCR70!fclose */ RELOAD();
/* 480c22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480c24: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 480c25: jne 0x480c35 */
  if (!zf) goto L_480c35;
L_480c27: /* 480c27: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 480c29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480c2a: mov ecx, esi */
  ecx = esi;
/* 480c2c: call 0x461fce */
  esp -= 4; W32(esp, 0x480c31u); SPILL(); f_461fce(); if (g_unwind) return; RELOAD();
/* 480c31: mov eax, esi */
  eax = esi;
/* 480c33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480c34: ret  */
  esp += 4; SPILL(); return;
L_480c35: /* 480c35: xor eax, eax */
  eax = 0;
/* 480c37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480c38: ret  */
  esp += 4; SPILL(); return;
}

void f_480c39(void) {
  LOAD_REGS();
L_480c39: /* 480c39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480c3a: mov esi, ecx */
  esi = ecx;
/* 480c3c: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 480c3f: call 0x46789a */
  esp -= 4; W32(esp, 0x480c44u); SPILL(); f_46789a(); if (g_unwind) return; RELOAD();
/* 480c44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480c46: jne 0x480c5d */
  if (!zf) goto L_480c5d;
L_480c48: /* 480c48: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480c4a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480c4d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480c4f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480c52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480c54: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480c58: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480c5du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480c5d: /* 480c5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480c5e: ret  */
  esp += 4; SPILL(); return;
}

void f_480c5f(void) {
  LOAD_REGS();
L_480c5f: /* 480c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480c60: mov esi, ecx */
  esi = ecx;
/* 480c62: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 480c65: call 0x480a22 */
  esp -= 4; W32(esp, 0x480c6au); SPILL(); f_480a22(); if (g_unwind) return; RELOAD();
/* 480c6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480c6c: jne 0x480c83 */
  if (!zf) goto L_480c83;
L_480c6e: /* 480c6e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480c70: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480c73: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480c75: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480c78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480c7a: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480c7e: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480c83u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480c83: /* 480c83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480c84: ret  */
  esp += 4; SPILL(); return;
}

void f_480c85(void) {
  LOAD_REGS();
L_480c85: /* 480c85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480c86: mov esi, ecx */
  esi = ecx;
/* 480c88: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 480c8b: call 0x480c07 */
  esp -= 4; W32(esp, 0x480c90u); SPILL(); f_480c07(); if (g_unwind) return; RELOAD();
/* 480c90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480c92: jne 0x480ca9 */
  if (!zf) goto L_480ca9;
L_480c94: /* 480c94: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480c96: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480c99: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480c9b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480c9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480ca0: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480ca3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480ca4: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480ca9u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480ca9: /* 480ca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480caa: ret  */
  esp += 4; SPILL(); return;
}

void f_480cab(void) {
  LOAD_REGS();
L_480cab: /* 480cab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480cac: mov esi, ecx */
  esi = ecx;
/* 480cae: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 480cb1: call 0x46789a */
  esp -= 4; W32(esp, 0x480cb6u); SPILL(); f_46789a(); if (g_unwind) return; RELOAD();
/* 480cb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480cb8: jne 0x480ccf */
  if (!zf) goto L_480ccf;
L_480cba: /* 480cba: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480cbc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480cbf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480cc1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480cc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480cc6: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480cc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480cca: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480ccfu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480ccf: /* 480ccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480cd0: ret  */
  esp += 4; SPILL(); return;
}

void f_480cd1(void) {
  LOAD_REGS();
L_480cd1: /* 480cd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480cd2: mov esi, ecx */
  esi = ecx;
/* 480cd4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 480cd7: call 0x480a22 */
  esp -= 4; W32(esp, 0x480cdcu); SPILL(); f_480a22(); if (g_unwind) return; RELOAD();
/* 480cdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480cde: jne 0x480cf5 */
  if (!zf) goto L_480cf5;
L_480ce0: /* 480ce0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480ce2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480ce5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480ce7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480cea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480cec: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480cef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480cf0: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480cf5u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480cf5: /* 480cf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480cf6: ret  */
  esp += 4; SPILL(); return;
}

void f_480cf7(void) {
  LOAD_REGS();
L_480cf7: /* 480cf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480cf8: mov esi, ecx */
  esi = ecx;
/* 480cfa: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 480cfd: call 0x480c07 */
  esp -= 4; W32(esp, 0x480d02u); SPILL(); f_480c07(); if (g_unwind) return; RELOAD();
/* 480d02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480d04: jne 0x480d1b */
  if (!zf) goto L_480d1b;
L_480d06: /* 480d06: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480d08: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480d0b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480d0d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480d10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480d12: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480d15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480d16: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480d1bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480d1b: /* 480d1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480d1c: ret  */
  esp += 4; SPILL(); return;
}

void f_480d1d(void) {
  LOAD_REGS();
L_480d1d: /* 480d1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480d1e: mov esi, ecx */
  esi = ecx;
/* 480d20: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 480d23: call 0x46789a */
  esp -= 4; W32(esp, 0x480d28u); SPILL(); f_46789a(); if (g_unwind) return; RELOAD();
/* 480d28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480d2a: jne 0x480d41 */
  if (!zf) goto L_480d41;
L_480d2c: /* 480d2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480d2e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480d31: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480d33: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480d36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480d38: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480d3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480d3c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480d41u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480d41: /* 480d41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480d42: ret  */
  esp += 4; SPILL(); return;
}

void f_480d43(void) {
  LOAD_REGS();
L_480d43: /* 480d43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480d44: mov esi, ecx */
  esi = ecx;
/* 480d46: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 480d49: call 0x480a22 */
  esp -= 4; W32(esp, 0x480d4eu); SPILL(); f_480a22(); if (g_unwind) return; RELOAD();
/* 480d4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480d50: jne 0x480d67 */
  if (!zf) goto L_480d67;
L_480d52: /* 480d52: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480d54: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480d57: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480d59: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480d5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480d5e: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480d62: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480d67u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480d67: /* 480d67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480d68: ret  */
  esp += 4; SPILL(); return;
}

void f_480d69(void) {
  LOAD_REGS();
L_480d69: /* 480d69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480d6a: mov esi, ecx */
  esi = ecx;
/* 480d6c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 480d6f: call 0x480c07 */
  esp -= 4; W32(esp, 0x480d74u); SPILL(); f_480c07(); if (g_unwind) return; RELOAD();
/* 480d74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 480d76: jne 0x480d8d */
  if (!zf) goto L_480d8d;
L_480d78: /* 480d78: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 480d7a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 480d7d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 480d7f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 480d82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480d84: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 480d87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480d88: call 0x464bb2 */
  esp -= 4; W32(esp, 0x480d8du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_480d8d: /* 480d8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480d8e: ret  */
  esp += 4; SPILL(); return;
}

void f_480d8f(void) {
  LOAD_REGS();
L_480d8f: /* 480d8f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480d90: mov ebp, esp */
  ebp = esp;
/* 480d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480d93: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480d96: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480d99: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480d9d: call 0x4675a8 */
  esp -= 4; W32(esp, 0x480da2u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 480da2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480da5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480da6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_480da9(void) {
  LOAD_REGS();
L_480da9: /* 480da9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480daa: mov ebp, esp */
  ebp = esp;
/* 480dac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480dad: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 480db0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480db3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480db7: call 0x47d83c */
  esp -= 4; W32(esp, 0x480dbcu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 480dbc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480dbf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480dc0: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_480dc3(void) {
  LOAD_REGS();
L_480dc3: /* 480dc3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480dc4: mov ebp, esp */
  ebp = esp;
/* 480dc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480dc7: push dword ptr [ecx + 8] */
  { uint32_t v = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, v); }
/* 480dca: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480dcd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480dd1: call 0x46172f */
  esp -= 4; W32(esp, 0x480dd6u); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 480dd6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480dd9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480dda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_480ddd(void) {
  LOAD_REGS();
L_480ddd: /* 480ddd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480dde: mov ebp, esp */
  ebp = esp;
/* 480de0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480de1: push dword ptr [ecx + 0x14] */
  { uint32_t v = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, v); }
/* 480de4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480de7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480deb: call 0x46172f */
  esp -= 4; W32(esp, 0x480df0u); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 480df0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480df3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480df4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_480df7(void) {
  LOAD_REGS();
L_480df7: /* 480df7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480df8: mov ebp, esp */
  ebp = esp;
/* 480dfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480dfb: push dword ptr [ecx + 0x18] */
  { uint32_t v = R32((uint32_t)(ecx + 0x18u)); esp -= 4; W32(esp, v); }
/* 480dfe: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480e01: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480e05: call 0x46172f */
  esp -= 4; W32(esp, 0x480e0au); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 480e0a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480e0d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480e0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_480e11(void) {
  LOAD_REGS();
L_480e11: /* 480e11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480e12: mov ebp, esp */
  ebp = esp;
/* 480e14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480e15: push dword ptr [ecx + 0x18] */
  { uint32_t v = R32((uint32_t)(ecx + 0x18u)); esp -= 4; W32(esp, v); }
/* 480e18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480e1b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 480e1f: call 0x462c22 */
  esp -= 4; W32(esp, 0x480e24u); SPILL(); f_462c22(); if (g_unwind) return; RELOAD();
/* 480e24: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480e27: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480e28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_480e2b(void) {
  LOAD_REGS();
L_480e2b: /* 480e2b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480e2c: mov ebp, esp */
  ebp = esp;
/* 480e2e: push dword ptr [ecx + 8] */
  { uint32_t v = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, v); }
/* 480e31: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 480e34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480e36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480e37: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 480e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480e3b: call 0x47d2e6 */
  esp -= 4; W32(esp, 0x480e40u); SPILL(); f_47d2e6(); if (g_unwind) return; RELOAD();
/* 480e40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480e43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 480e45: jge 0x480e4f */
  if ((sf == of)) goto L_480e4f;
L_480e47: /* 480e47: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 480e4a: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 480e4d: jmp 0x480e57 */
  goto L_480e57;
L_480e4f: /* 480e4f: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 480e52: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 480e54: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
L_480e57: /* 480e57: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 480e5a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480e5d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 480e5f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 480e62: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 480e65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 480e66: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_480e69(void) {
  LOAD_REGS();
L_480e69: /* 480e69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480e6a: mov ebp, esp */
  ebp = esp;
/* 480e6c: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 480e6f: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 480e72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480e74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480e75: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 480e78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480e79: call 0x47d2e6 */
  esp -= 4; W32(esp, 0x480e7eu); SPILL(); f_47d2e6(); if (g_unwind) return; RELOAD();
/* 480e7e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480e81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 480e83: jge 0x480e8d */
  if ((sf == of)) goto L_480e8d;
L_480e85: /* 480e85: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 480e88: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 480e8b: jmp 0x480e95 */
  goto L_480e95;
L_480e8d: /* 480e8d: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 480e90: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 480e92: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_480e95: /* 480e95: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 480e98: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480e9b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 480e9d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 480ea0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 480ea3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 480ea4: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_480ea7(void) {
  LOAD_REGS();
L_480ea7: /* 480ea7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480ea8: mov ebp, esp */
  ebp = esp;
/* 480eaa: push dword ptr [ecx + 8] */
  { uint32_t v = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, v); }
/* 480ead: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 480eb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480eb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480eb3: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 480eb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480eb7: call 0x47d447 */
  esp -= 4; W32(esp, 0x480ebcu); SPILL(); f_47d447(); if (g_unwind) return; RELOAD();
/* 480ebc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480ebf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 480ec1: jge 0x480ecb */
  if ((sf == of)) goto L_480ecb;
L_480ec3: /* 480ec3: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 480ec6: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 480ec9: jmp 0x480ed3 */
  goto L_480ed3;
L_480ecb: /* 480ecb: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 480ece: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 480ed0: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
L_480ed3: /* 480ed3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 480ed6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480ed9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 480edb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 480ede: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 480ee1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 480ee2: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_480ee5(void) {
  LOAD_REGS();
L_480ee5: /* 480ee5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 480ee6: mov ebp, esp */
  ebp = esp;
/* 480ee8: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 480eeb: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 480eee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 480ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480ef1: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 480ef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480ef5: call 0x47d447 */
  esp -= 4; W32(esp, 0x480efau); SPILL(); f_47d447(); if (g_unwind) return; RELOAD();
/* 480efa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480efd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 480eff: jge 0x480f09 */
  if ((sf == of)) goto L_480f09;
L_480f01: /* 480f01: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 480f04: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 480f07: jmp 0x480f11 */
  goto L_480f11;
L_480f09: /* 480f09: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 480f0c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 480f0e: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_480f11: /* 480f11: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 480f14: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480f17: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 480f19: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 480f1c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 480f1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 480f20: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_480f23(void) {
  LOAD_REGS();
L_480f23: /* 480f23: mov eax, 0x48d299 */
  eax = 0x48d299u;
/* 480f28: call 0x4616c0 */
  esp -= 4; W32(esp, 0x480f2du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 480f2d: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 480f30: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480f35: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 480f38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480f39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480f3a: xor edi, edi */
  edi = 0;
/* 480f3c: mov esi, ecx */
  esi = ecx;
/* 480f3e: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 480f41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480f42: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480f45: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 480f48: mov dword ptr [ebp - 0x18], 0xf */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xfu);
/* 480f4f: call 0x461ed0 */
  esp -= 4; W32(esp, 0x480f54u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 480f54: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 480f57: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 480f5a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 480f5d: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_480f60: /* 480f60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480f61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480f62: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480f65: call 0x466ccb */
  esp -= 4; W32(esp, 0x480f6au); SPILL(); f_466ccb(); if (g_unwind) return; RELOAD();
/* 480f6a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 480f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480f6e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480f71: call 0x465162 */
  esp -= 4; W32(esp, 0x480f76u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 480f76: cmp dword ptr [ebp - 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 480f7a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 480f7c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 480f7f: jae 0x480f84 */
  if (!cf) goto L_480f84;
L_480f81: /* 480f81: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
L_480f84: /* 480f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480f85: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 480f88: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 480f8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480f8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 480f8d: call 0x488663 */
  esp -= 4; W32(esp, 0x480f92u); SPILL(); f_488663(); if (g_unwind) return; RELOAD();
/* 480f92: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 480f95: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 480f98: ja 0x480f60 */
  if ((!cf && !zf)) goto L_480f60;
L_480f9a: /* 480f9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480f9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480f9c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480f9f: call 0x466ccb */
  esp -= 4; W32(esp, 0x480fa4u); SPILL(); f_466ccb(); if (g_unwind) return; RELOAD();
/* 480fa4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 480fa7: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 480faa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 480fab: call 0x4675a8 */
  esp -= 4; W32(esp, 0x480fb0u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 480fb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 480fb2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480fb5: call 0x461ea8 */
  esp -= 4; W32(esp, 0x480fbau); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 480fba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 480fbd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 480fc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 480fc7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 480fca: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 480fcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 480fce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 480fcf: call 0x46190c */
  esp -= 4; W32(esp, 0x480fd4u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 480fd4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 480fd5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_480fd8(void) {
  LOAD_REGS();
L_480fd8: /* 480fd8: mov eax, 0x48d2ab */
  eax = 0x48d2abu;
/* 480fdd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x480fe2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 480fe2: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 480fe5: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 480fea: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 480fed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 480fee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480fef: xor edi, edi */
  edi = 0;
/* 480ff1: mov esi, ecx */
  esi = ecx;
/* 480ff3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 480ff6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 480ff7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 480ffa: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 480ffd: mov dword ptr [ebp - 0x18], 7 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x7u);
/* 481004: call 0x4624dd */
  esp -= 4; W32(esp, 0x481009u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 481009: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 48100c: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48100f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 481012: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 481014: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_481017: /* 481017: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 481018: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481019: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48101c: call 0x473a90 */
  esp -= 4; W32(esp, 0x481021u); SPILL(); f_473a90(); if (g_unwind) return; RELOAD();
/* 481021: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481025: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 481028: call 0x46adc2 */
  esp -= 4; W32(esp, 0x48102du); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 48102d: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 481031: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 481033: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 481036: jae 0x48103b */
  if (!cf) goto L_48103b;
L_481038: /* 481038: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
L_48103b: /* 48103b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48103c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48103f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481043: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481044: call 0x48a64d */
  esp -= 4; W32(esp, 0x481049u); SPILL(); f_48a64d(); if (g_unwind) return; RELOAD();
/* 481049: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48104c: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48104f: ja 0x481017 */
  if ((!cf && !zf)) goto L_481017;
L_481051: /* 481051: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 481052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481053: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 481056: call 0x473a90 */
  esp -= 4; W32(esp, 0x48105bu); SPILL(); f_473a90(); if (g_unwind) return; RELOAD();
/* 48105b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48105e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481061: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481062: call 0x47d83c */
  esp -= 4; W32(esp, 0x481067u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 481067: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481069: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48106c: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481071u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481071: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481074: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 481077: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48107e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481081: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 481084: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 481085: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 481086: call 0x46190c */
  esp -= 4; W32(esp, 0x48108bu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48108b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48108c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_48108f(void) {
  LOAD_REGS();
L_48108f: /* 48108f: mov eax, 0x48d2ab */
  eax = 0x48d2abu;
/* 481094: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481099u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481099: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48109c: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4810a1: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4810a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4810a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4810a6: xor edi, edi */
  edi = 0;
/* 4810a8: mov esi, ecx */
  esi = ecx;
/* 4810aa: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 4810ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4810ae: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 4810b1: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4810b4: mov dword ptr [ebp - 0x18], 7 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x7u);
/* 4810bb: call 0x4624dd */
  esp -= 4; W32(esp, 0x4810c0u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4810c0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4810c3: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4810c6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4810c9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4810cb: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4810ce: /* 4810ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4810cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4810d0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 4810d3: call 0x473a90 */
  esp -= 4; W32(esp, 0x4810d8u); SPILL(); f_473a90(); if (g_unwind) return; RELOAD();
/* 4810d8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4810db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4810dc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 4810df: call 0x46adc2 */
  esp -= 4; W32(esp, 0x4810e4u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 4810e4: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4810e8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4810ea: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 4810ed: jae 0x4810f2 */
  if (!cf) goto L_4810f2;
L_4810ef: /* 4810ef: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
L_4810f2: /* 4810f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4810f3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4810f6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4810f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4810fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4810fb: call 0x46a5b3 */
  esp -= 4; W32(esp, 0x481100u); SPILL(); f_46a5b3(); if (g_unwind) return; RELOAD();
/* 481100: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 481103: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 481106: ja 0x4810ce */
  if ((!cf && !zf)) goto L_4810ce;
L_481108: /* 481108: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 481109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48110a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48110d: call 0x473a90 */
  esp -= 4; W32(esp, 0x481112u); SPILL(); f_473a90(); if (g_unwind) return; RELOAD();
/* 481112: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481115: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481119: call 0x47d83c */
  esp -= 4; W32(esp, 0x48111eu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48111e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481120: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 481123: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481128u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481128: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48112b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48112e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481135: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481138: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48113b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48113c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48113d: call 0x46190c */
  esp -= 4; W32(esp, 0x481142u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 481142: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481143: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_481146(void) {
  LOAD_REGS();
L_481146: /* 481146: mov eax, 0x48d9c0 */
  eax = 0x48d9c0u;
/* 48114b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481150u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481150: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481153: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481156: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 48115a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48115d: call 0x4675a8 */
  esp -= 4; W32(esp, 0x481162u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 481162: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481166: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 481168: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48116a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48116d: mov ecx, eax */
  ecx = eax;
/* 48116f: call 0x466014 */
  esp -= 4; W32(esp, 0x481174u); SPILL(); f_466014(); if (g_unwind) return; RELOAD();
/* 481174: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481177: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481178: call 0x4675a8 */
  esp -= 4; W32(esp, 0x48117du); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 48117d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48117f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 481182: call 0x461ea8 */
  esp -= 4; W32(esp, 0x481187u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 481187: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48118a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48118d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481194: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481195: ret  */
  esp += 4; SPILL(); return;
}

void f_481196(void) {
  LOAD_REGS();
L_481196: /* 481196: mov eax, 0x48d9c0 */
  eax = 0x48d9c0u;
/* 48119b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4811a0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4811a0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4811a3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4811a6: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 4811aa: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4811ad: call 0x46172f */
  esp -= 4; W32(esp, 0x4811b2u); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 4811b2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4811b6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4811b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4811ba: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4811bd: mov ecx, eax */
  ecx = eax;
/* 4811bf: call 0x466014 */
  esp -= 4; W32(esp, 0x4811c4u); SPILL(); f_466014(); if (g_unwind) return; RELOAD();
/* 4811c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4811c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4811c8: call 0x4675a8 */
  esp -= 4; W32(esp, 0x4811cdu); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 4811cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4811cf: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4811d2: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4811d7u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4811d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4811da: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4811dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4811e4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4811e5: ret  */
  esp += 4; SPILL(); return;
}

void f_4811e6(void) {
  LOAD_REGS();
L_4811e6: /* 4811e6: mov eax, 0x48d9c0 */
  eax = 0x48d9c0u;
/* 4811eb: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4811f0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4811f0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4811f3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4811f6: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 4811fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4811fc: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4811ff: call 0x46729b */
  esp -= 4; W32(esp, 0x481204u); SPILL(); f_46729b(); if (g_unwind) return; RELOAD();
/* 481204: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481208: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48120a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48120c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48120f: mov ecx, eax */
  ecx = eax;
/* 481211: call 0x466014 */
  esp -= 4; W32(esp, 0x481216u); SPILL(); f_466014(); if (g_unwind) return; RELOAD();
/* 481216: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48121a: call 0x4675a8 */
  esp -= 4; W32(esp, 0x48121fu); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 48121f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481221: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 481224: call 0x461ea8 */
  esp -= 4; W32(esp, 0x481229u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 481229: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48122c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48122f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481236: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481237: ret  */
  esp += 4; SPILL(); return;
}

void f_481238(void) {
  LOAD_REGS();
L_481238: /* 481238: mov eax, 0x48d9c0 */
  eax = 0x48d9c0u;
/* 48123d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481242u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481242: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481245: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481248: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 48124c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48124f: call 0x4675a8 */
  esp -= 4; W32(esp, 0x481254u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 481254: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 481257: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48125b: mov ecx, eax */
  ecx = eax;
/* 48125d: call 0x466139 */
  esp -= 4; W32(esp, 0x481262u); SPILL(); f_466139(); if (g_unwind) return; RELOAD();
/* 481262: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481266: call 0x4675a8 */
  esp -= 4; W32(esp, 0x48126bu); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 48126b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48126d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 481270: call 0x461ea8 */
  esp -= 4; W32(esp, 0x481275u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 481275: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481278: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48127b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481282: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481283: ret  */
  esp += 4; SPILL(); return;
}

void f_481284(void) {
  LOAD_REGS();
L_481284: /* 481284: mov eax, 0x48d9c0 */
  eax = 0x48d9c0u;
/* 481289: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48128eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48128e: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481291: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481294: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 481298: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48129b: call 0x4675a8 */
  esp -= 4; W32(esp, 0x4812a0u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 4812a0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4812a3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4812a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4812a9: mov ecx, eax */
  ecx = eax;
/* 4812ab: call 0x466156 */
  esp -= 4; W32(esp, 0x4812b0u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 4812b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4812b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4812b4: call 0x4675a8 */
  esp -= 4; W32(esp, 0x4812b9u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 4812b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4812bb: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4812be: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4812c3u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4812c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4812c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4812c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4812d0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4812d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4812d2(void) {
  LOAD_REGS();
L_4812d2: /* 4812d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4812d3: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4812d7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4812d9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4812dc: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4812de: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4812e0: call 0x46f3cb */
  esp -= 4; W32(esp, 0x4812e5u); SPILL(); f_46f3cb(); if (g_unwind) return; RELOAD();
/* 4812e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4812e6: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4812ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4812eb: call 0x47cfd2 */
  esp -= 4; W32(esp, 0x4812f0u); SPILL(); f_47cfd2(); if (g_unwind) return; RELOAD();
/* 4812f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4812f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4812f4: ret  */
  esp += 4; SPILL(); return;
}

void f_4812f5(void) {
  LOAD_REGS();
L_4812f5: /* 4812f5: mov eax, 0x48d9d2 */
  eax = 0x48d9d2u;
/* 4812fa: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4812ffu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4812ff: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481302: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481305: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 481309: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48130b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48130e: call 0x47a0ea */
  esp -= 4; W32(esp, 0x481313u); SPILL(); f_47a0ea(); if (g_unwind) return; RELOAD();
/* 481313: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481317: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 481319: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48131b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48131e: mov ecx, eax */
  ecx = eax;
/* 481320: call 0x472d70 */
  esp -= 4; W32(esp, 0x481325u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 481325: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481328: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481329: call 0x47d83c */
  esp -= 4; W32(esp, 0x48132eu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48132e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481330: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 481333: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481338u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481338: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48133b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48133e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481345: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481346: ret  */
  esp += 4; SPILL(); return;
}

void f_481347(void) {
  LOAD_REGS();
L_481347: /* 481347: mov eax, 0x48d9d2 */
  eax = 0x48d9d2u;
/* 48134c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481351u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481351: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481354: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481357: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 48135b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48135e: call 0x47d83c */
  esp -= 4; W32(esp, 0x481363u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 481363: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 481366: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48136a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48136c: mov ecx, eax */
  ecx = eax;
/* 48136e: call 0x473236 */
  esp -= 4; W32(esp, 0x481373u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 481373: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481377: call 0x47d83c */
  esp -= 4; W32(esp, 0x48137cu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48137c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48137e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 481381: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481386u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481386: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481389: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48138c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481393: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481394: ret  */
  esp += 4; SPILL(); return;
}

void f_481395(void) {
  LOAD_REGS();
L_481395: /* 481395: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481396: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 48139a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 48139c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48139f: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4813a1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4813a3: call 0x46f45c */
  esp -= 4; W32(esp, 0x4813a8u); SPILL(); f_46f45c(); if (g_unwind) return; RELOAD();
/* 4813a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4813a9: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4813ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4813ae: call 0x47d0d6 */
  esp -= 4; W32(esp, 0x4813b3u); SPILL(); f_47d0d6(); if (g_unwind) return; RELOAD();
/* 4813b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4813b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4813b7: ret  */
  esp += 4; SPILL(); return;
}

void f_4813b8(void) {
  LOAD_REGS();
L_4813b8: /* 4813b8: mov eax, 0x48d9d2 */
  eax = 0x48d9d2u;
/* 4813bd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4813c2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4813c2: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4813c5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4813c8: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 4813cc: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4813cf: call 0x47d83c */
  esp -= 4; W32(esp, 0x4813d4u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 4813d4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4813d8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4813da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4813dc: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4813df: mov ecx, eax */
  ecx = eax;
/* 4813e1: call 0x472d70 */
  esp -= 4; W32(esp, 0x4813e6u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 4813e6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4813e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4813ea: call 0x47d83c */
  esp -= 4; W32(esp, 0x4813efu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 4813ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4813f1: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 4813f4: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4813f9u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4813f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4813fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4813ff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481406: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481407: ret  */
  esp += 4; SPILL(); return;
}

void f_481408(void) {
  LOAD_REGS();
L_481408: /* 481408: mov eax, 0x48d9d2 */
  eax = 0x48d9d2u;
/* 48140d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481412u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481412: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481415: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481418: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 48141c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48141f: call 0x462c22 */
  esp -= 4; W32(esp, 0x481424u); SPILL(); f_462c22(); if (g_unwind) return; RELOAD();
/* 481424: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481428: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48142a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48142c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48142f: mov ecx, eax */
  ecx = eax;
/* 481431: call 0x472d70 */
  esp -= 4; W32(esp, 0x481436u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 481436: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481439: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48143a: call 0x47d83c */
  esp -= 4; W32(esp, 0x48143fu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48143f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481441: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 481444: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481449u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481449: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48144c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48144f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481456: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481457: ret  */
  esp += 4; SPILL(); return;
}

void f_481458(void) {
  LOAD_REGS();
L_481458: /* 481458: mov eax, 0x48d9d2 */
  eax = 0x48d9d2u;
/* 48145d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481462u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481462: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481465: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 481468: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 48146c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 48146f: call 0x47d83c */
  esp -= 4; W32(esp, 0x481474u); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 481474: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 481477: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48147b: mov ecx, eax */
  ecx = eax;
/* 48147d: call 0x473218 */
  esp -= 4; W32(esp, 0x481482u); SPILL(); f_473218(); if (g_unwind) return; RELOAD();
/* 481482: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 481485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481486: call 0x47d83c */
  esp -= 4; W32(esp, 0x48148bu); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48148b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48148d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 481490: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481495u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481495: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481498: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48149b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4814a2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4814a3: ret  */
  esp += 4; SPILL(); return;
}

void f_4814a4(void) {
  LOAD_REGS();
L_4814a4: /* 4814a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4814a5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4814a9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4814ab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4814ae: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4814b0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4814b2: call 0x46f4ed */
  esp -= 4; W32(esp, 0x4814b7u); SPILL(); f_46f4ed(); if (g_unwind) return; RELOAD();
/* 4814b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4814b8: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4814bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4814bd: call 0x47d1de */
  esp -= 4; W32(esp, 0x4814c2u); SPILL(); f_47d1de(); if (g_unwind) return; RELOAD();
/* 4814c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4814c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4814c6: ret  */
  esp += 4; SPILL(); return;
}

void f_4814c7(void) {
  LOAD_REGS();
L_4814c7: /* 4814c7: mov eax, 0x48d2d0 */
  eax = 0x48d2d0u;
/* 4814cc: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4814d1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4814d1: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4814d7: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4814dc: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4814df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4814e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4814e2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4814e4: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 4814ea: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4814ed: call 0x477fa4 */
  esp -= 4; W32(esp, 0x4814f2u); SPILL(); f_477fa4(); if (g_unwind) return; RELOAD();
/* 4814f2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4814f5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4814f7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4814fa: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481500: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 481504: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 481507: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48150b: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 481510: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 481517: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 48151a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 48151d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481521: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 481523: call 0x464a5a */
  esp -= 4; W32(esp, 0x481528u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 481528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481529: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48152c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48152d: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 481533: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 481536: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 48153d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 481541: call 0x468d8c */
  esp -= 4; W32(esp, 0x481546u); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 481546: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 481549: call 0x461389 */
  esp -= 4; W32(esp, 0x48154eu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48154e: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481552: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 481555: call 0x461389 */
  esp -= 4; W32(esp, 0x48155au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48155a: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481560: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 481562: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 481565: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481568: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 48156c: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481573: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 481576: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 481579: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 48157b: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 48157d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 481580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481581: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 481584: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 481586: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481587: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 48158a: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 481590: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 481592: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481593: call 0x46c8ea */
  esp -= 4; W32(esp, 0x481598u); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 481598: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481599: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48159a: mov ecx, eax */
  ecx = eax;
/* 48159c: call 0x46fba6 */
  esp -= 4; W32(esp, 0x4815a1u); SPILL(); f_46fba6(); if (g_unwind) return; RELOAD();
/* 4815a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4815a2: call 0x46c8ea */
  esp -= 4; W32(esp, 0x4815a7u); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 4815a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4815a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4815a9: mov ecx, eax */
  ecx = eax;
/* 4815ab: call 0x46fba6 */
  esp -= 4; W32(esp, 0x4815b0u); SPILL(); f_46fba6(); if (g_unwind) return; RELOAD();
/* 4815b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4815b1: call 0x46c8ea */
  esp -= 4; W32(esp, 0x4815b6u); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 4815b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4815b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4815b8: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4815bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4815bc: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 4815c2: call 0x4809ba */
  esp -= 4; W32(esp, 0x4815c7u); SPILL(); f_4809ba(); if (g_unwind) return; RELOAD();
/* 4815c7: cmp dword ptr [ebp - 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4815cb: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4815cf: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 4815d2: jae 0x4815d7 */
  if (!cf) goto L_4815d7;
L_4815d4: /* 4815d4: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_4815d7: /* 4815d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4815d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4815d9: call 0x46c7a0 */
  esp -= 4; W32(esp, 0x4815deu); SPILL(); f_46c7a0(); if (g_unwind) return; RELOAD();
/* 4815de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4815df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4815e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4815e2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 4815e5: mov esi, eax */
  esi = eax;
/* 4815e7: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4815ecu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4815ec: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4815f0: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 4815f3: call 0x471b91 */
  esp -= 4; W32(esp, 0x4815f8u); SPILL(); f_471b91(); if (g_unwind) return; RELOAD();
/* 4815f8: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 4815fb: mov dword ptr [ebp - 0x64], 0x4c6d18 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c6d18u);
/* 481602: call 0x461c33 */
  esp -= 4; W32(esp, 0x481607u); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 481607: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48160a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481611: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481614: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 481617: mov eax, esi */
  eax = esi;
/* 481619: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48161a: call 0x46190c */
  esp -= 4; W32(esp, 0x48161fu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48161f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481620: ret  */
  esp += 4; SPILL(); return;
}

void f_481621(void) {
  LOAD_REGS();
L_481621: /* 481621: mov eax, 0x48d2f5 */
  eax = 0x48d2f5u;
/* 481626: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48162bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48162b: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481631: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 481636: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 481639: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48163a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48163c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 48163e: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481644: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 481647: call 0x478097 */
  esp -= 4; W32(esp, 0x48164cu); SPILL(); f_478097(); if (g_unwind) return; RELOAD();
/* 48164c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 48164f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 481651: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 481654: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 48165a: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 48165e: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 481661: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481665: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48166a: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 481671: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 481674: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481677: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 48167a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48167b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48167d: call 0x464a5a */
  esp -= 4; W32(esp, 0x481682u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 481682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481683: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 481686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481687: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 48168d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 481690: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481697: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48169b: call 0x468d8c */
  esp -= 4; W32(esp, 0x4816a0u); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 4816a0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 4816a3: call 0x461389 */
  esp -= 4; W32(esp, 0x4816a8u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4816a8: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4816ac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 4816af: call 0x461389 */
  esp -= 4; W32(esp, 0x4816b4u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4816b4: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 4816ba: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4816bc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4816bf: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4816c2: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 4816c6: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 4816cd: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 4816d0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4816d3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4816d5: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 4816d7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4816da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4816db: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4816de: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 4816e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4816e1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4816e4: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 4816e6: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 4816ec: call 0x470336 */
  esp -= 4; W32(esp, 0x4816f1u); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 4816f1: mov ecx, eax */
  ecx = eax;
/* 4816f3: call 0x4706cc */
  esp -= 4; W32(esp, 0x4816f8u); SPILL(); f_4706cc(); if (g_unwind) return; RELOAD();
/* 4816f8: mov ecx, eax */
  ecx = eax;
/* 4816fa: call 0x470336 */
  esp -= 4; W32(esp, 0x4816ffu); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 4816ff: mov ecx, eax */
  ecx = eax;
/* 481701: call 0x4706cc */
  esp -= 4; W32(esp, 0x481706u); SPILL(); f_4706cc(); if (g_unwind) return; RELOAD();
/* 481706: mov ecx, eax */
  ecx = eax;
/* 481708: call 0x470336 */
  esp -= 4; W32(esp, 0x48170du); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 48170d: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481711: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481717: call 0x4809d4 */
  esp -= 4; W32(esp, 0x48171cu); SPILL(); f_4809d4(); if (g_unwind) return; RELOAD();
/* 48171c: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 481720: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 481723: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 481727: jae 0x48172c */
  if (!cf) goto L_48172c;
L_481729: /* 481729: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_48172c: /* 48172c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48172d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48172e: call 0x46ca2d */
  esp -= 4; W32(esp, 0x481733u); SPILL(); f_46ca2d(); if (g_unwind) return; RELOAD();
/* 481733: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481734: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481735: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481737: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48173a: mov esi, eax */
  esi = eax;
/* 48173c: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481741u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481741: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481745: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481748: call 0x471bd7 */
  esp -= 4; W32(esp, 0x48174du); SPILL(); f_471bd7(); if (g_unwind) return; RELOAD();
/* 48174d: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481750: mov dword ptr [ebp - 0x64], 0x4c75d8 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c75d8u);
/* 481757: call 0x461c33 */
  esp -= 4; W32(esp, 0x48175cu); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 48175c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48175f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481766: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481769: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48176c: mov eax, esi */
  eax = esi;
/* 48176e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48176f: call 0x46190c */
  esp -= 4; W32(esp, 0x481774u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 481774: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481775: ret  */
  esp += 4; SPILL(); return;
}

void f_481776(void) {
  LOAD_REGS();
L_481776: /* 481776: mov eax, 0x48d31a */
  eax = 0x48d31au;
/* 48177b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481780u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481780: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481786: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 48178b: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 48178e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48178f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481791: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 481793: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481799: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 48179c: call 0x47818a */
  esp -= 4; W32(esp, 0x4817a1u); SPILL(); f_47818a(); if (g_unwind) return; RELOAD();
/* 4817a1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4817a4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4817a6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4817a9: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 4817af: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 4817b3: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 4817b6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4817ba: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4817bf: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 4817c6: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 4817c9: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4817cc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4817cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4817d0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4817d2: call 0x464a5a */
  esp -= 4; W32(esp, 0x4817d7u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4817d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4817d8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4817db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4817dc: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 4817e2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4817e5: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 4817ec: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4817f0: call 0x468d8c */
  esp -= 4; W32(esp, 0x4817f5u); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 4817f5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 4817f8: call 0x461389 */
  esp -= 4; W32(esp, 0x4817fdu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4817fd: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481801: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 481804: call 0x461389 */
  esp -= 4; W32(esp, 0x481809u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481809: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 48180f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 481811: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 481814: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481817: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 48181b: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481822: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 481825: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 481828: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 48182a: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 48182c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 48182f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481830: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 481833: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 481835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481836: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 481839: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 48183b: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481841: call 0x470f3e */
  esp -= 4; W32(esp, 0x481846u); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 481846: mov ecx, eax */
  ecx = eax;
/* 481848: call 0x4711f0 */
  esp -= 4; W32(esp, 0x48184du); SPILL(); f_4711f0(); if (g_unwind) return; RELOAD();
/* 48184d: mov ecx, eax */
  ecx = eax;
/* 48184f: call 0x470f3e */
  esp -= 4; W32(esp, 0x481854u); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 481854: mov ecx, eax */
  ecx = eax;
/* 481856: call 0x4711f0 */
  esp -= 4; W32(esp, 0x48185bu); SPILL(); f_4711f0(); if (g_unwind) return; RELOAD();
/* 48185b: mov ecx, eax */
  ecx = eax;
/* 48185d: call 0x470f3e */
  esp -= 4; W32(esp, 0x481862u); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 481862: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481866: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 48186c: call 0x4809d4 */
  esp -= 4; W32(esp, 0x481871u); SPILL(); f_4809d4(); if (g_unwind) return; RELOAD();
/* 481871: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 481875: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 481878: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 48187c: jae 0x481881 */
  if (!cf) goto L_481881;
L_48187e: /* 48187e: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_481881: /* 481881: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481883: call 0x46ca2d */
  esp -= 4; W32(esp, 0x481888u); SPILL(); f_46ca2d(); if (g_unwind) return; RELOAD();
/* 481888: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481889: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48188a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48188c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 48188f: mov esi, eax */
  esi = eax;
/* 481891: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481896u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481896: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48189a: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 48189d: call 0x471c1d */
  esp -= 4; W32(esp, 0x4818a2u); SPILL(); f_471c1d(); if (g_unwind) return; RELOAD();
/* 4818a2: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 4818a5: mov dword ptr [ebp - 0x64], 0x4c762c */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c762cu);
/* 4818ac: call 0x461c33 */
  esp -= 4; W32(esp, 0x4818b1u); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 4818b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4818b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4818bb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4818be: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4818c1: mov eax, esi */
  eax = esi;
/* 4818c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4818c4: call 0x46190c */
  esp -= 4; W32(esp, 0x4818c9u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4818c9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4818ca: ret  */
  esp += 4; SPILL(); return;
}

void f_4818cb(void) {
  LOAD_REGS();
L_4818cb: /* 4818cb: mov eax, 0x48d2d0 */
  eax = 0x48d2d0u;
/* 4818d0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4818d5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4818d5: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4818db: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4818e0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4818e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4818e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4818e6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4818e8: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 4818ee: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4818f1: call 0x477fa4 */
  esp -= 4; W32(esp, 0x4818f6u); SPILL(); f_477fa4(); if (g_unwind) return; RELOAD();
/* 4818f6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4818f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4818fb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4818fe: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481904: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 481908: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 48190b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48190f: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 481914: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 48191b: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 48191e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481921: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481925: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 481927: call 0x464a5a */
  esp -= 4; W32(esp, 0x48192cu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 48192c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48192d: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 481930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481931: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 481937: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 48193a: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481941: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 481945: call 0x468d8c */
  esp -= 4; W32(esp, 0x48194au); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 48194a: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 48194d: call 0x461389 */
  esp -= 4; W32(esp, 0x481952u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481952: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481956: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 481959: call 0x461389 */
  esp -= 4; W32(esp, 0x48195eu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48195e: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481964: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 481966: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 481969: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 48196c: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 481970: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481977: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 481979: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 48197c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48197f: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 481981: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481982: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 481985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481986: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481989: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 48198b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48198c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48198d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481990: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 481996: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 481998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481999: call 0x46c8ea */
  esp -= 4; W32(esp, 0x48199eu); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 48199e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48199f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4819a0: mov ecx, eax */
  ecx = eax;
/* 4819a2: call 0x46fc91 */
  esp -= 4; W32(esp, 0x4819a7u); SPILL(); f_46fc91(); if (g_unwind) return; RELOAD();
/* 4819a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4819a8: call 0x46c8ea */
  esp -= 4; W32(esp, 0x4819adu); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 4819ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4819ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4819af: mov ecx, eax */
  ecx = eax;
/* 4819b1: call 0x46fc91 */
  esp -= 4; W32(esp, 0x4819b6u); SPILL(); f_46fc91(); if (g_unwind) return; RELOAD();
/* 4819b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4819b7: call 0x46c8ea */
  esp -= 4; W32(esp, 0x4819bcu); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 4819bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4819bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4819be: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4819c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4819c2: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 4819c8: call 0x4809ba */
  esp -= 4; W32(esp, 0x4819cdu); SPILL(); f_4809ba(); if (g_unwind) return; RELOAD();
/* 4819cd: cmp dword ptr [ebp - 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4819d1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 4819d4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4819d8: jae 0x4819dd */
  if (!cf) goto L_4819dd;
L_4819da: /* 4819da: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_4819dd: /* 4819dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4819de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4819df: call 0x46c7a0 */
  esp -= 4; W32(esp, 0x4819e4u); SPILL(); f_46c7a0(); if (g_unwind) return; RELOAD();
/* 4819e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4819e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4819e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4819e8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 4819eb: mov esi, eax */
  esi = eax;
/* 4819ed: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4819f2u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4819f2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4819f6: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 4819f9: call 0x471b91 */
  esp -= 4; W32(esp, 0x4819feu); SPILL(); f_471b91(); if (g_unwind) return; RELOAD();
/* 4819fe: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481a01: mov dword ptr [ebp - 0x64], 0x4c6d18 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c6d18u);
/* 481a08: call 0x461c33 */
  esp -= 4; W32(esp, 0x481a0du); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 481a0d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481a10: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481a17: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481a1a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 481a1d: mov eax, esi */
  eax = esi;
/* 481a1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 481a20: call 0x46190c */
  esp -= 4; W32(esp, 0x481a25u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 481a25: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481a26: ret  */
  esp += 4; SPILL(); return;
}

void f_481a27(void) {
  LOAD_REGS();
L_481a27: /* 481a27: mov eax, 0x48d2f5 */
  eax = 0x48d2f5u;
/* 481a2c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481a31u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481a31: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481a37: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 481a3c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 481a3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481a40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481a42: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 481a44: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481a4a: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 481a4d: call 0x478097 */
  esp -= 4; W32(esp, 0x481a52u); SPILL(); f_478097(); if (g_unwind) return; RELOAD();
/* 481a52: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 481a55: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 481a57: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 481a5a: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481a60: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 481a64: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 481a67: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481a6b: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 481a70: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 481a77: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 481a7a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481a7d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481a81: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 481a83: call 0x464a5a */
  esp -= 4; W32(esp, 0x481a88u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 481a88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481a89: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 481a8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481a8d: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 481a93: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 481a96: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481a9d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 481aa1: call 0x468d8c */
  esp -= 4; W32(esp, 0x481aa6u); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 481aa6: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 481aa9: call 0x461389 */
  esp -= 4; W32(esp, 0x481aaeu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481aae: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481ab2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 481ab5: call 0x461389 */
  esp -= 4; W32(esp, 0x481abau); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481aba: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481ac0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 481ac2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 481ac5: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481ac8: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 481acc: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481ad3: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 481ad5: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 481ad8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 481adb: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 481add: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481ade: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 481ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481ae2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481ae5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 481ae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481ae9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481aec: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 481aee: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481af4: call 0x470336 */
  esp -= 4; W32(esp, 0x481af9u); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 481af9: mov ecx, eax */
  ecx = eax;
/* 481afb: call 0x4707b5 */
  esp -= 4; W32(esp, 0x481b00u); SPILL(); f_4707b5(); if (g_unwind) return; RELOAD();
/* 481b00: mov ecx, eax */
  ecx = eax;
/* 481b02: call 0x470336 */
  esp -= 4; W32(esp, 0x481b07u); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 481b07: mov ecx, eax */
  ecx = eax;
/* 481b09: call 0x4707b5 */
  esp -= 4; W32(esp, 0x481b0eu); SPILL(); f_4707b5(); if (g_unwind) return; RELOAD();
/* 481b0e: mov ecx, eax */
  ecx = eax;
/* 481b10: call 0x470336 */
  esp -= 4; W32(esp, 0x481b15u); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 481b15: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481b19: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481b1f: call 0x4809d4 */
  esp -= 4; W32(esp, 0x481b24u); SPILL(); f_4809d4(); if (g_unwind) return; RELOAD();
/* 481b24: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 481b28: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 481b2b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 481b2f: jae 0x481b34 */
  if (!cf) goto L_481b34;
L_481b31: /* 481b31: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_481b34: /* 481b34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481b35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481b36: call 0x46ca2d */
  esp -= 4; W32(esp, 0x481b3bu); SPILL(); f_46ca2d(); if (g_unwind) return; RELOAD();
/* 481b3b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481b3c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481b3d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481b3f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 481b42: mov esi, eax */
  esi = eax;
/* 481b44: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481b49u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481b49: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481b4d: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481b50: call 0x471bd7 */
  esp -= 4; W32(esp, 0x481b55u); SPILL(); f_471bd7(); if (g_unwind) return; RELOAD();
/* 481b55: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481b58: mov dword ptr [ebp - 0x64], 0x4c75d8 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c75d8u);
/* 481b5f: call 0x461c33 */
  esp -= 4; W32(esp, 0x481b64u); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 481b64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481b67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481b6e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481b71: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 481b74: mov eax, esi */
  eax = esi;
/* 481b76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 481b77: call 0x46190c */
  esp -= 4; W32(esp, 0x481b7cu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 481b7c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481b7d: ret  */
  esp += 4; SPILL(); return;
}

void f_481b7e(void) {
  LOAD_REGS();
L_481b7e: /* 481b7e: mov eax, 0x48d31a */
  eax = 0x48d31au;
/* 481b83: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481b88u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481b88: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481b8e: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 481b93: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 481b96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481b97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481b99: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 481b9b: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481ba1: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 481ba4: call 0x47818a */
  esp -= 4; W32(esp, 0x481ba9u); SPILL(); f_47818a(); if (g_unwind) return; RELOAD();
/* 481ba9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 481bac: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 481bae: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 481bb1: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481bb7: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 481bbb: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 481bbe: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481bc2: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 481bc7: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 481bce: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 481bd1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481bd4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481bd8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 481bda: call 0x464a5a */
  esp -= 4; W32(esp, 0x481bdfu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 481bdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481be0: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 481be3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481be4: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 481bea: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 481bed: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481bf4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 481bf8: call 0x468d8c */
  esp -= 4; W32(esp, 0x481bfdu); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 481bfd: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 481c00: call 0x461389 */
  esp -= 4; W32(esp, 0x481c05u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481c05: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481c09: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 481c0c: call 0x461389 */
  esp -= 4; W32(esp, 0x481c11u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481c11: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481c17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 481c19: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 481c1c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481c1f: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 481c23: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481c2a: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 481c2c: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 481c2f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 481c32: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 481c34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481c35: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 481c38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481c39: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481c3c: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 481c3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481c3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481c40: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481c43: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 481c45: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481c4b: call 0x470f3e */
  esp -= 4; W32(esp, 0x481c50u); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 481c50: mov ecx, eax */
  ecx = eax;
/* 481c52: call 0x4712d9 */
  esp -= 4; W32(esp, 0x481c57u); SPILL(); f_4712d9(); if (g_unwind) return; RELOAD();
/* 481c57: mov ecx, eax */
  ecx = eax;
/* 481c59: call 0x470f3e */
  esp -= 4; W32(esp, 0x481c5eu); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 481c5e: mov ecx, eax */
  ecx = eax;
/* 481c60: call 0x4712d9 */
  esp -= 4; W32(esp, 0x481c65u); SPILL(); f_4712d9(); if (g_unwind) return; RELOAD();
/* 481c65: mov ecx, eax */
  ecx = eax;
/* 481c67: call 0x470f3e */
  esp -= 4; W32(esp, 0x481c6cu); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 481c6c: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481c70: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481c76: call 0x4809d4 */
  esp -= 4; W32(esp, 0x481c7bu); SPILL(); f_4809d4(); if (g_unwind) return; RELOAD();
/* 481c7b: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 481c7f: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 481c82: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 481c86: jae 0x481c8b */
  if (!cf) goto L_481c8b;
L_481c88: /* 481c88: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_481c8b: /* 481c8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481c8d: call 0x46ca2d */
  esp -= 4; W32(esp, 0x481c92u); SPILL(); f_46ca2d(); if (g_unwind) return; RELOAD();
/* 481c92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481c93: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481c94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481c96: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 481c99: mov esi, eax */
  esi = eax;
/* 481c9b: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481ca0u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481ca0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481ca4: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481ca7: call 0x471c1d */
  esp -= 4; W32(esp, 0x481cacu); SPILL(); f_471c1d(); if (g_unwind) return; RELOAD();
/* 481cac: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481caf: mov dword ptr [ebp - 0x64], 0x4c762c */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c762cu);
/* 481cb6: call 0x461c33 */
  esp -= 4; W32(esp, 0x481cbbu); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 481cbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481cbe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481cc5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481cc8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 481ccb: mov eax, esi */
  eax = esi;
/* 481ccd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 481cce: call 0x46190c */
  esp -= 4; W32(esp, 0x481cd3u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 481cd3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481cd4: ret  */
  esp += 4; SPILL(); return;
}

void f_481cd5(void) {
  LOAD_REGS();
L_481cd5: /* 481cd5: mov eax, 0x48d2d0 */
  eax = 0x48d2d0u;
/* 481cda: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481cdfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481cdf: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481ce5: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 481cea: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 481ced: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481cee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481cf0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 481cf2: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481cf8: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 481cfb: call 0x477fa4 */
  esp -= 4; W32(esp, 0x481d00u); SPILL(); f_477fa4(); if (g_unwind) return; RELOAD();
/* 481d00: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 481d03: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 481d05: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 481d08: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481d0e: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 481d12: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 481d15: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481d19: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 481d1e: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 481d25: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 481d28: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481d2b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481d2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481d2f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 481d31: call 0x464a5a */
  esp -= 4; W32(esp, 0x481d36u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 481d36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481d37: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 481d3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481d3b: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 481d41: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 481d44: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481d4b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 481d4f: call 0x468d8c */
  esp -= 4; W32(esp, 0x481d54u); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 481d54: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 481d57: call 0x461389 */
  esp -= 4; W32(esp, 0x481d5cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481d5c: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481d60: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 481d63: call 0x461389 */
  esp -= 4; W32(esp, 0x481d68u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481d68: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481d6e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 481d70: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 481d73: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481d76: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 481d7a: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481d81: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 481d83: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 481d86: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 481d89: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 481d8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481d8c: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 481d8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481d90: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481d93: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 481d95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481d96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481d97: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481d9a: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 481da0: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 481da2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481da3: call 0x46c8ea */
  esp -= 4; W32(esp, 0x481da8u); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 481da8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481da9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481daa: mov ecx, eax */
  ecx = eax;
/* 481dac: call 0x46fd7c */
  esp -= 4; W32(esp, 0x481db1u); SPILL(); f_46fd7c(); if (g_unwind) return; RELOAD();
/* 481db1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481db2: call 0x46c8ea */
  esp -= 4; W32(esp, 0x481db7u); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 481db7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481db8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481db9: mov ecx, eax */
  ecx = eax;
/* 481dbb: call 0x46fd7c */
  esp -= 4; W32(esp, 0x481dc0u); SPILL(); f_46fd7c(); if (g_unwind) return; RELOAD();
/* 481dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481dc1: call 0x46c8ea */
  esp -= 4; W32(esp, 0x481dc6u); SPILL(); f_46c8ea(); if (g_unwind) return; RELOAD();
/* 481dc6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481dc7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481dc8: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481dcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481dcc: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481dd2: call 0x4809ba */
  esp -= 4; W32(esp, 0x481dd7u); SPILL(); f_4809ba(); if (g_unwind) return; RELOAD();
/* 481dd7: cmp dword ptr [ebp - 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 481ddb: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 481dde: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 481de2: jae 0x481de7 */
  if (!cf) goto L_481de7;
L_481de4: /* 481de4: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_481de7: /* 481de7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481de8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481de9: call 0x46c7a0 */
  esp -= 4; W32(esp, 0x481deeu); SPILL(); f_46c7a0(); if (g_unwind) return; RELOAD();
/* 481dee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481def: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481df0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481df2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 481df5: mov esi, eax */
  esi = eax;
/* 481df7: call 0x461ea8 */
  esp -= 4; W32(esp, 0x481dfcu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 481dfc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481e00: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481e03: call 0x471b91 */
  esp -= 4; W32(esp, 0x481e08u); SPILL(); f_471b91(); if (g_unwind) return; RELOAD();
/* 481e08: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481e0b: mov dword ptr [ebp - 0x64], 0x4c6d18 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c6d18u);
/* 481e12: call 0x461c33 */
  esp -= 4; W32(esp, 0x481e17u); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 481e17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481e1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481e21: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481e24: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 481e27: mov eax, esi */
  eax = esi;
/* 481e29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 481e2a: call 0x46190c */
  esp -= 4; W32(esp, 0x481e2fu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 481e2f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481e30: ret  */
  esp += 4; SPILL(); return;
}

void f_481e31(void) {
  LOAD_REGS();
L_481e31: /* 481e31: mov eax, 0x48d2f5 */
  eax = 0x48d2f5u;
/* 481e36: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481e3bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481e3b: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481e41: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 481e46: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 481e49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481e4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481e4c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 481e4e: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481e54: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 481e57: call 0x478097 */
  esp -= 4; W32(esp, 0x481e5cu); SPILL(); f_478097(); if (g_unwind) return; RELOAD();
/* 481e5c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 481e5f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 481e61: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 481e64: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481e6a: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 481e6e: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 481e71: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481e75: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 481e7a: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 481e81: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 481e84: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481e87: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481e8b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 481e8d: call 0x464a5a */
  esp -= 4; W32(esp, 0x481e92u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 481e92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481e93: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 481e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481e97: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 481e9d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 481ea0: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481ea7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 481eab: call 0x468d8c */
  esp -= 4; W32(esp, 0x481eb0u); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 481eb0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 481eb3: call 0x461389 */
  esp -= 4; W32(esp, 0x481eb8u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481eb8: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481ebc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 481ebf: call 0x461389 */
  esp -= 4; W32(esp, 0x481ec4u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 481ec4: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481eca: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 481ecc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 481ecf: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481ed2: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 481ed6: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481edd: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 481edf: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 481ee2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 481ee5: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 481ee7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481ee8: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 481eeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481eec: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481eef: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 481ef1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481ef2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 481ef3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 481ef6: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 481ef8: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481efe: call 0x470336 */
  esp -= 4; W32(esp, 0x481f03u); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 481f03: mov ecx, eax */
  ecx = eax;
/* 481f05: call 0x47089e */
  esp -= 4; W32(esp, 0x481f0au); SPILL(); f_47089e(); if (g_unwind) return; RELOAD();
/* 481f0a: mov ecx, eax */
  ecx = eax;
/* 481f0c: call 0x470336 */
  esp -= 4; W32(esp, 0x481f11u); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 481f11: mov ecx, eax */
  ecx = eax;
/* 481f13: call 0x47089e */
  esp -= 4; W32(esp, 0x481f18u); SPILL(); f_47089e(); if (g_unwind) return; RELOAD();
/* 481f18: mov ecx, eax */
  ecx = eax;
/* 481f1a: call 0x470336 */
  esp -= 4; W32(esp, 0x481f1fu); SPILL(); f_470336(); if (g_unwind) return; RELOAD();
/* 481f1f: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 481f22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481f23: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481f29: call 0x4809d4 */
  esp -= 4; W32(esp, 0x481f2eu); SPILL(); f_4809d4(); if (g_unwind) return; RELOAD();
/* 481f2e: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 481f32: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 481f35: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 481f39: jae 0x481f3e */
  if (!cf) goto L_481f3e;
L_481f3b: /* 481f3b: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_481f3e: /* 481f3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481f3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481f40: call 0x46ca2d */
  esp -= 4; W32(esp, 0x481f45u); SPILL(); f_46ca2d(); if (g_unwind) return; RELOAD();
/* 481f45: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481f46: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 481f47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481f49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 481f4c: mov esi, eax */
  esi = eax;
/* 481f4e: call 0x4624b0 */
  esp -= 4; W32(esp, 0x481f53u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 481f53: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481f57: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481f5a: call 0x471bd7 */
  esp -= 4; W32(esp, 0x481f5fu); SPILL(); f_471bd7(); if (g_unwind) return; RELOAD();
/* 481f5f: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 481f62: mov dword ptr [ebp - 0x64], 0x4c75d8 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c75d8u);
/* 481f69: call 0x461c33 */
  esp -= 4; W32(esp, 0x481f6eu); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 481f6e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 481f71: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 481f78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 481f7b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 481f7e: mov eax, esi */
  eax = esi;
/* 481f80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 481f81: call 0x46190c */
  esp -= 4; W32(esp, 0x481f86u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 481f86: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 481f87: ret  */
  esp += 4; SPILL(); return;
}

void f_481f88(void) {
  LOAD_REGS();
L_481f88: /* 481f88: mov eax, 0x48d31a */
  eax = 0x48d31au;
/* 481f8d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x481f92u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 481f92: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 481f98: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 481f9d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 481fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 481fa1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 481fa3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 481fa5: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 481fab: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 481fae: call 0x47818a */
  esp -= 4; W32(esp, 0x481fb3u); SPILL(); f_47818a(); if (g_unwind) return; RELOAD();
/* 481fb3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 481fb6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 481fb8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 481fbb: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 481fc1: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 481fc5: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 481fc8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 481fcc: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 481fd1: lea edx, [ebp + edx - 0xb0] */
  edx = (uint32_t)(ebp + edx + 0xffffff50u);
/* 481fd8: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 481fdb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 481fde: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 481fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481fe2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 481fe4: call 0x464a5a */
  esp -= 4; W32(esp, 0x481fe9u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 481fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481fea: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 481fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 481fee: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 481ff4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 481ff7: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 481ffe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 482002: call 0x468d8c */
  esp -= 4; W32(esp, 0x482007u); SPILL(); f_468d8c(); if (g_unwind) return; RELOAD();
/* 482007: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 48200a: call 0x461389 */
  esp -= 4; W32(esp, 0x48200fu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48200f: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482013: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 482016: call 0x461389 */
  esp -= 4; W32(esp, 0x48201bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48201b: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 482021: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482023: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482026: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 482029: mov eax, dword ptr [eax + esi + 0x10] */
  eax = R32((uint32_t)(eax + esi + 0x10u));
/* 48202d: lea ecx, [ebp + ecx - 0xb0] */
  ecx = (uint32_t)(ebp + ecx + 0xffffff50u);
/* 482034: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 482036: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 482039: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48203c: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 48203e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48203f: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 482042: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482043: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 482046: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 482048: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482049: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48204a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48204d: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 48204f: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 482055: call 0x470f3e */
  esp -= 4; W32(esp, 0x48205au); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 48205a: mov ecx, eax */
  ecx = eax;
/* 48205c: call 0x4713c2 */
  esp -= 4; W32(esp, 0x482061u); SPILL(); f_4713c2(); if (g_unwind) return; RELOAD();
/* 482061: mov ecx, eax */
  ecx = eax;
/* 482063: call 0x470f3e */
  esp -= 4; W32(esp, 0x482068u); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 482068: mov ecx, eax */
  ecx = eax;
/* 48206a: call 0x4713c2 */
  esp -= 4; W32(esp, 0x48206fu); SPILL(); f_4713c2(); if (g_unwind) return; RELOAD();
/* 48206f: mov ecx, eax */
  ecx = eax;
/* 482071: call 0x470f3e */
  esp -= 4; W32(esp, 0x482076u); SPILL(); f_470f3e(); if (g_unwind) return; RELOAD();
/* 482076: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 482079: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48207a: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 482080: call 0x4809d4 */
  esp -= 4; W32(esp, 0x482085u); SPILL(); f_4809d4(); if (g_unwind) return; RELOAD();
/* 482085: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482089: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 48208c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 482090: jae 0x482095 */
  if (!cf) goto L_482095;
L_482092: /* 482092: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
L_482095: /* 482095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482096: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482097: call 0x46ca2d */
  esp -= 4; W32(esp, 0x48209cu); SPILL(); f_46ca2d(); if (g_unwind) return; RELOAD();
/* 48209c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48209d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48209e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4820a0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 4820a3: mov esi, eax */
  esi = eax;
/* 4820a5: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4820aau); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4820aa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4820ae: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 4820b1: call 0x471c1d */
  esp -= 4; W32(esp, 0x4820b6u); SPILL(); f_471c1d(); if (g_unwind) return; RELOAD();
/* 4820b6: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 4820b9: mov dword ptr [ebp - 0x64], 0x4c762c */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x4c762cu);
/* 4820c0: call 0x461c33 */
  esp -= 4; W32(esp, 0x4820c5u); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 4820c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4820c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4820cf: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4820d2: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4820d5: mov eax, esi */
  eax = esi;
/* 4820d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4820d8: call 0x46190c */
  esp -= 4; W32(esp, 0x4820ddu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4820dd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4820de: ret  */
  esp += 4; SPILL(); return;
}

void f_4820df(void) {
  LOAD_REGS();
L_4820df: /* 4820df: mov eax, 0x48d32e */
  eax = 0x48d32eu;
/* 4820e4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4820e9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4820e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4820ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4820eb: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 4820ed: mov esi, ecx */
  esi = ecx;
/* 4820ef: call 0x4620da */
  esp -= 4; W32(esp, 0x4820f4u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4820f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4820f5: mov ecx, eax */
  ecx = eax;
/* 4820f7: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 4820fa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4820fe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 482100: je 0x48210e */
  if (zf) goto L_48210e;
L_482102: /* 482102: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 482105: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 482107: call 0x486feb */
  esp -= 4; W32(esp, 0x48210cu); SPILL(); f_486feb(); if (g_unwind) return; RELOAD();
/* 48210c: jmp 0x482110 */
  goto L_482110;
L_48210e: /* 48210e: xor eax, eax */
  eax = 0;
L_482110: /* 482110: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482114: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482118: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 48211a: je 0x482146 */
  if (zf) goto L_482146;
L_48211c: /* 48211c: mov ecx, 0x4d0ecc */
  ecx = 0x4d0eccu;
/* 482121: call 0x464006 */
  esp -= 4; W32(esp, 0x482126u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 482126: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 482128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482129: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48212c: call 0x486b0d */
  esp -= 4; W32(esp, 0x482131u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 482131: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482133: and dword ptr [eax + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x10u), r);
  }
/* 482137: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 482139: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 48213e: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 482141: call 0x46174a */
  esp -= 4; W32(esp, 0x482146u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
L_482146: /* 482146: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482149: mov eax, esi */
  eax = esi;
/* 48214b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48214c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 482153: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 482154: ret 8 */
  esp += 12; SPILL(); return;
}

void f_482157(void) {
  LOAD_REGS();
L_482157: /* 482157: mov eax, 0x48d32e */
  eax = 0x48d32eu;
/* 48215c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x482161u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 482161: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482163: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 482165: mov esi, ecx */
  esi = ecx;
/* 482167: call 0x4620da */
  esp -= 4; W32(esp, 0x48216cu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48216c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48216d: mov ecx, eax */
  ecx = eax;
/* 48216f: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 482172: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482176: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 482178: je 0x482186 */
  if (zf) goto L_482186;
L_48217a: /* 48217a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48217d: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 48217f: call 0x486feb */
  esp -= 4; W32(esp, 0x482184u); SPILL(); f_486feb(); if (g_unwind) return; RELOAD();
/* 482184: jmp 0x482188 */
  goto L_482188;
L_482186: /* 482186: xor eax, eax */
  eax = 0;
L_482188: /* 482188: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48218c: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482190: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 482192: je 0x4821be */
  if (zf) goto L_4821be;
L_482194: /* 482194: mov ecx, 0x4d0ebc */
  ecx = 0x4d0ebcu;
/* 482199: call 0x464006 */
  esp -= 4; W32(esp, 0x48219eu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48219e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4821a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4821a1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4821a4: call 0x486b0d */
  esp -= 4; W32(esp, 0x4821a9u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 4821a9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4821ab: and dword ptr [eax + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x10u), r);
  }
/* 4821af: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4821b1: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 4821b6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4821b9: call 0x46174a */
  esp -= 4; W32(esp, 0x4821beu); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
L_4821be: /* 4821be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4821c1: mov eax, esi */
  eax = esi;
/* 4821c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4821c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4821cb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4821cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4821cf(void) {
  LOAD_REGS();
L_4821cf: /* 4821cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4821d0: mov ebp, esp */
  ebp = esp;
/* 4821d2: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4821d5: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4821da: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4821dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4821de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4821df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4821e0: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 4821e3: mov esi, edx */
  esi = edx;
/* 4821e5: lea edi, [ebp - 0x14] */
  edi = (uint32_t)(ebp + 0xffffffecu);
/* 4821e8: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821e9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821ea: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821eb: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821ec: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4821ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4821f2: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 4821f5: mov edi, edx */
  edi = edx;
/* 4821f7: mov esi, ebx */
  esi = ebx;
/* 4821f9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821fa: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821fb: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821fc: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4821fd: mov edi, ebx */
  edi = ebx;
/* 4821ff: lea esi, [ebp - 0x14] */
  esi = (uint32_t)(ebp + 0xffffffecu);
/* 482202: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 482203: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 482204: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 482205: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 482206: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 482209: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 48220c: mov dword ptr [ecx + 0x14], esi */
  W32((uint32_t)(ecx + 0x14u), esi);
/* 48220f: mov esi, dword ptr [eax + 0x18] */
  esi = R32((uint32_t)(eax + 0x18u));
/* 482212: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 482215: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 482218: mov dword ptr [ecx + 0x18], esi */
  W32((uint32_t)(ecx + 0x18u), esi);
/* 48221b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 48221e: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 482221: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 482222: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482223: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 482226: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 482227: call 0x46190c */
  esp -= 4; W32(esp, 0x48222cu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 48222c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48222d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482230(void) {
  LOAD_REGS();
L_482230: /* 482230: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 482232: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 482234: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 482238: call 0x47a171 */
  esp -= 4; W32(esp, 0x48223du); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 48223d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482240(void) {
  LOAD_REGS();
L_482240: /* 482240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 482241: mov ebp, esp */
  ebp = esp;
/* 482243: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482244: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482245: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 482248: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 48224a: mov esi, ecx */
  esi = ecx;
/* 48224c: mov ecx, edi */
  ecx = edi;
/* 48224e: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x482251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 482251: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482253: je 0x48225b */
  if (zf) goto L_48225b;
L_482255: /* 482255: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 482259: jmp 0x4822aa */
  goto L_4822aa;
L_48225b: /* 48225b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48225c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48225d: lea ebx, [esi + 0x58] */
  ebx = (uint32_t)(esi + 0x58u);
/* 482260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 482261: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 482264: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 482267: call 0x4820df */
  esp -= 4; W32(esp, 0x48226cu); SPILL(); f_4820df(); if (g_unwind) return; RELOAD();
/* 48226c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48226d: mov ecx, ebx */
  ecx = ebx;
/* 48226f: call 0x464063 */
  esp -= 4; W32(esp, 0x482274u); SPILL(); f_464063(); if (g_unwind) return; RELOAD();
/* 482274: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 482277: call 0x461389 */
  esp -= 4; W32(esp, 0x48227cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 48227c: mov ecx, esi */
  ecx = esi;
/* 48227e: call 0x461f3f */
  esp -= 4; W32(esp, 0x482283u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 482283: cmp dword ptr [esi + 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482287: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 482288: jne 0x4822aa */
  if (!zf) goto L_4822aa;
L_48228a: /* 48228a: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 48228c: call 0x4620da */
  esp -= 4; W32(esp, 0x482291u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 482291: mov edi, eax */
  edi = eax;
/* 482293: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 482295: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 482296: je 0x4822a5 */
  if (zf) goto L_4822a5;
L_482298: /* 482298: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48229a: mov ecx, edi */
  ecx = edi;
/* 48229c: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4822a1u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4822a1: mov eax, edi */
  eax = edi;
/* 4822a3: jmp 0x4822a7 */
  goto L_4822a7;
L_4822a5: /* 4822a5: xor eax, eax */
  eax = 0;
L_4822a7: /* 4822a7: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
L_4822aa: /* 4822aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4822ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4822ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4822ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4822b0(void) {
  LOAD_REGS();
L_4822b0: /* 4822b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4822b1: mov ebp, esp */
  ebp = esp;
/* 4822b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4822b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4822b5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4822b8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4822ba: mov esi, ecx */
  esi = ecx;
/* 4822bc: mov ecx, edi */
  ecx = edi;
/* 4822be: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x4822c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4822c1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4822c3: je 0x4822cb */
  if (zf) goto L_4822cb;
L_4822c5: /* 4822c5: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 4822c9: jmp 0x48231a */
  goto L_48231a;
L_4822cb: /* 4822cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4822cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4822cd: lea ebx, [esi + 0x58] */
  ebx = (uint32_t)(esi + 0x58u);
/* 4822d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4822d1: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 4822d4: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 4822d7: call 0x482157 */
  esp -= 4; W32(esp, 0x4822dcu); SPILL(); f_482157(); if (g_unwind) return; RELOAD();
/* 4822dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4822dd: mov ecx, ebx */
  ecx = ebx;
/* 4822df: call 0x464063 */
  esp -= 4; W32(esp, 0x4822e4u); SPILL(); f_464063(); if (g_unwind) return; RELOAD();
/* 4822e4: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 4822e7: call 0x461389 */
  esp -= 4; W32(esp, 0x4822ecu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4822ec: mov ecx, esi */
  ecx = esi;
/* 4822ee: call 0x461f3f */
  esp -= 4; W32(esp, 0x4822f3u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 4822f3: cmp dword ptr [esi + 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4822f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4822f8: jne 0x48231a */
  if (!zf) goto L_48231a;
L_4822fa: /* 4822fa: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 4822fc: call 0x4620da */
  esp -= 4; W32(esp, 0x482301u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 482301: mov edi, eax */
  edi = eax;
/* 482303: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 482305: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 482306: je 0x482315 */
  if (zf) goto L_482315;
L_482308: /* 482308: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48230a: mov ecx, edi */
  ecx = edi;
/* 48230c: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482311u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482311: mov eax, edi */
  eax = edi;
/* 482313: jmp 0x482317 */
  goto L_482317;
L_482315: /* 482315: xor eax, eax */
  eax = 0;
L_482317: /* 482317: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
L_48231a: /* 48231a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48231b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48231c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48231d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482320(void) {
  LOAD_REGS();
L_482320: /* 482320: mov eax, 0x48d393 */
  eax = 0x48d393u;
/* 482325: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48232au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48232a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48232b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48232c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48232d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48232e: xor ebx, ebx */
  ebx = 0;
/* 482330: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482331: xor edi, edi */
  edi = 0;
/* 482333: mov esi, ecx */
  esi = ecx;
/* 482335: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 482336: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482339: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 48233c: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 48233f: je 0x482359 */
  if (zf) goto L_482359;
L_482341: /* 482341: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 482344: mov dword ptr [esi], 0x48e2a0 */
  W32((uint32_t)(esi), 0x48e2a0u);
/* 48234a: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 48234d: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 482353: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 482356: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_482359: /* 482359: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48235a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48235b: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 48235e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48235f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482360: mov ecx, esi */
  ecx = esi;
/* 482362: call 0x4627bb */
  esp -= 4; W32(esp, 0x482367u); SPILL(); f_4627bb(); if (g_unwind) return; RELOAD();
/* 482367: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482369: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48236c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48236d: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 482370: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 482373: mov dword ptr [esi + eax], 0x4c8850 */
  W32((uint32_t)(esi + eax), 0x4c8850u);
/* 48237a: call 0x4615e2 */
  esp -= 4; W32(esp, 0x48237fu); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 48237f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482382: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 482383: mov eax, esi */
  eax = esi;
/* 482385: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482386: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 482387: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48238e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48238f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482392(void) {
  LOAD_REGS();
L_482392: /* 482392: mov eax, 0x48d3a8 */
  eax = 0x48d3a8u;
/* 482397: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48239cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48239c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48239d: mov eax, dword ptr [ecx - 0x68] */
  eax = R32((uint32_t)(ecx + 0xffffff98u));
/* 4823a0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4823a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4823a4: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 4823a7: mov dword ptr [eax + ecx - 0x68], 0x4c8850 */
  W32((uint32_t)(eax + ecx + 0xffffff98u), 0x4c8850u);
/* 4823af: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4823b3: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 4823b6: mov ecx, esi */
  ecx = esi;
/* 4823b8: call 0x4622d2 */
  esp -= 4; W32(esp, 0x4823bdu); SPILL(); f_4622d2(); if (g_unwind) return; RELOAD();
/* 4823bd: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 4823c0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4823c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4823c6: mov dword ptr [eax + esi - 8], 0x4c702c */
  W32((uint32_t)(eax + esi + 0xfffffff8u), 0x4c702cu);
/* 4823ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4823cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4823d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4823d7: ret  */
  esp += 4; SPILL(); return;
}

void f_4823d8(void) {
  LOAD_REGS();
L_4823d8: /* 4823d8: mov eax, 0x48d3d3 */
  eax = 0x48d3d3u;
/* 4823dd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4823e2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4823e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4823e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4823e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4823e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4823e6: xor ebx, ebx */
  ebx = 0;
/* 4823e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4823e9: xor edi, edi */
  edi = 0;
/* 4823eb: mov esi, ecx */
  esi = ecx;
/* 4823ed: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4823ee: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4823f1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4823f4: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 4823f7: je 0x482411 */
  if (zf) goto L_482411;
L_4823f9: /* 4823f9: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 4823fc: mov dword ptr [esi], 0x48e2a0 */
  W32((uint32_t)(esi), 0x48e2a0u);
/* 482402: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 482405: mov dword ptr [eax], 0x4c75d8 */
  W32((uint32_t)(eax), 0x4c75d8u);
/* 48240b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 48240e: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_482411: /* 482411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482412: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482413: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 482416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482418: mov ecx, esi */
  ecx = esi;
/* 48241a: call 0x462b0d */
  esp -= 4; W32(esp, 0x48241fu); SPILL(); f_462b0d(); if (g_unwind) return; RELOAD();
/* 48241f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482421: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482424: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482425: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 482428: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 48242b: mov dword ptr [esi + eax], 0x4c88ac */
  W32((uint32_t)(esi + eax), 0x4c88acu);
/* 482432: call 0x462024 */
  esp -= 4; W32(esp, 0x482437u); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 482437: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48243a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48243b: mov eax, esi */
  eax = esi;
/* 48243d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48243e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48243f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 482446: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 482447: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48244a(void) {
  LOAD_REGS();
L_48244a: /* 48244a: mov eax, 0x48d3e8 */
  eax = 0x48d3e8u;
/* 48244f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x482454u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 482454: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482455: mov eax, dword ptr [ecx - 0x68] */
  eax = R32((uint32_t)(ecx + 0xffffff98u));
/* 482458: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48245b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48245c: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 48245f: mov dword ptr [eax + ecx - 0x68], 0x4c88ac */
  W32((uint32_t)(eax + ecx + 0xffffff98u), 0x4c88acu);
/* 482467: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48246b: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 48246e: mov ecx, esi */
  ecx = esi;
/* 482470: call 0x461cd8 */
  esp -= 4; W32(esp, 0x482475u); SPILL(); f_461cd8(); if (g_unwind) return; RELOAD();
/* 482475: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 482478: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48247b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48247e: mov dword ptr [eax + esi - 8], 0x4c7730 */
  W32((uint32_t)(eax + esi + 0xfffffff8u), 0x4c7730u);
/* 482486: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482487: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48248e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48248f: ret  */
  esp += 4; SPILL(); return;
}

void f_482490(void) {
  LOAD_REGS();
L_482490: /* 482490: mov eax, 0x48d413 */
  eax = 0x48d413u;
/* 482495: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48249au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48249a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48249b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48249c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48249d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48249e: xor ebx, ebx */
  ebx = 0;
/* 4824a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4824a1: xor edi, edi */
  edi = 0;
/* 4824a3: mov esi, ecx */
  esi = ecx;
/* 4824a5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4824a6: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4824a9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4824ac: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 4824af: je 0x4824c9 */
  if (zf) goto L_4824c9;
L_4824b1: /* 4824b1: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 4824b4: mov dword ptr [esi], 0x48e2a0 */
  W32((uint32_t)(esi), 0x48e2a0u);
/* 4824ba: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 4824bd: mov dword ptr [eax], 0x4c762c */
  W32((uint32_t)(eax), 0x4c762cu);
/* 4824c3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4824c6: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_4824c9: /* 4824c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4824ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4824cb: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 4824ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4824cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4824d0: mov ecx, esi */
  ecx = esi;
/* 4824d2: call 0x462974 */
  esp -= 4; W32(esp, 0x4824d7u); SPILL(); f_462974(); if (g_unwind) return; RELOAD();
/* 4824d7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4824d9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4824dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4824dd: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 4824e0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4824e3: mov dword ptr [esi + eax], 0x4c8908 */
  W32((uint32_t)(esi + eax), 0x4c8908u);
/* 4824ea: call 0x461fa1 */
  esp -= 4; W32(esp, 0x4824efu); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 4824ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4824f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4824f3: mov eax, esi */
  eax = esi;
/* 4824f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4824f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4824f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4824fe: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4824ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482502(void) {
  LOAD_REGS();
L_482502: /* 482502: mov eax, 0x48d428 */
  eax = 0x48d428u;
/* 482507: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48250cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48250c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48250d: mov eax, dword ptr [ecx - 0x68] */
  eax = R32((uint32_t)(ecx + 0xffffff98u));
/* 482510: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482513: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482514: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 482517: mov dword ptr [eax + ecx - 0x68], 0x4c8908 */
  W32((uint32_t)(eax + ecx + 0xffffff98u), 0x4c8908u);
/* 48251f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482523: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 482526: mov ecx, esi */
  ecx = esi;
/* 482528: call 0x46130d */
  esp -= 4; W32(esp, 0x48252du); SPILL(); f_46130d(); if (g_unwind) return; RELOAD();
/* 48252d: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 482530: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482533: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482536: mov dword ptr [eax + esi - 8], 0x4c7788 */
  W32((uint32_t)(eax + esi + 0xfffffff8u), 0x4c7788u);
/* 48253e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48253f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 482546: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 482547: ret  */
  esp += 4; SPILL(); return;
}

void f_482548(void) {
  LOAD_REGS();
L_482548: /* 482548: mov eax, 0x48d453 */
  eax = 0x48d453u;
/* 48254d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x482552u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 482552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482554: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 482555: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482556: xor ebx, ebx */
  ebx = 0;
/* 482558: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482559: xor edi, edi */
  edi = 0;
/* 48255b: mov esi, ecx */
  esi = ecx;
/* 48255d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 48255e: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482561: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 482564: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 482567: je 0x482581 */
  if (zf) goto L_482581;
L_482569: /* 482569: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* 48256c: mov dword ptr [esi], 0x48e2a8 */
  W32((uint32_t)(esi), 0x48e2a8u);
/* 482572: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 482575: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 48257b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 48257e: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_482581: /* 482581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482582: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 482585: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482587: mov ecx, esi */
  ecx = esi;
/* 482589: call 0x46236d */
  esp -= 4; W32(esp, 0x48258eu); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 48258e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482590: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482593: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482594: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 482597: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 48259a: mov dword ptr [esi + eax], 0x4c8964 */
  W32((uint32_t)(esi + eax), 0x4c8964u);
/* 4825a1: call 0x4615e2 */
  esp -= 4; W32(esp, 0x4825a6u); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 4825a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4825a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4825aa: mov eax, esi */
  eax = esi;
/* 4825ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4825ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4825ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4825b5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4825b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4825b9(void) {
  LOAD_REGS();
L_4825b9: /* 4825b9: mov eax, 0x48d468 */
  eax = 0x48d468u;
/* 4825be: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4825c3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4825c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4825c4: mov eax, dword ptr [ecx - 0x64] */
  eax = R32((uint32_t)(ecx + 0xffffff9cu));
/* 4825c7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4825ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4825cb: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 4825ce: mov dword ptr [eax + ecx - 0x64], 0x4c8964 */
  W32((uint32_t)(eax + ecx + 0xffffff9cu), 0x4c8964u);
/* 4825d6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4825da: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 4825dd: mov ecx, esi */
  ecx = esi;
/* 4825df: call 0x4622d2 */
  esp -= 4; W32(esp, 0x4825e4u); SPILL(); f_4622d2(); if (g_unwind) return; RELOAD();
/* 4825e4: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4825e7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4825ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4825ed: mov dword ptr [eax + esi - 4], 0x4c6cc0 */
  W32((uint32_t)(eax + esi + 0xfffffffcu), 0x4c6cc0u);
/* 4825f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4825f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4825fd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4825fe: ret  */
  esp += 4; SPILL(); return;
}

void f_4825ff(void) {
  LOAD_REGS();
L_4825ff: /* 4825ff: mov eax, 0x48d493 */
  eax = 0x48d493u;
/* 482604: call 0x4616c0 */
  esp -= 4; W32(esp, 0x482609u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 482609: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48260a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48260b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48260c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48260d: xor ebx, ebx */
  ebx = 0;
/* 48260f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482610: xor edi, edi */
  edi = 0;
/* 482612: mov esi, ecx */
  esi = ecx;
/* 482614: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 482615: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482618: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 48261b: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 48261e: je 0x482638 */
  if (zf) goto L_482638;
L_482620: /* 482620: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* 482623: mov dword ptr [esi], 0x48e2a8 */
  W32((uint32_t)(esi), 0x48e2a8u);
/* 482629: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 48262c: mov dword ptr [eax], 0x4c75d8 */
  W32((uint32_t)(eax), 0x4c75d8u);
/* 482632: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 482635: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_482638: /* 482638: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482639: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 48263c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48263d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48263e: mov ecx, esi */
  ecx = esi;
/* 482640: call 0x462a4e */
  esp -= 4; W32(esp, 0x482645u); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 482645: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482647: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48264a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48264b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 48264e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 482651: mov dword ptr [esi + eax], 0x4c89c0 */
  W32((uint32_t)(esi + eax), 0x4c89c0u);
/* 482658: call 0x462024 */
  esp -= 4; W32(esp, 0x48265du); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 48265d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482660: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 482661: mov eax, esi */
  eax = esi;
/* 482663: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 482665: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48266c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48266d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482670(void) {
  LOAD_REGS();
L_482670: /* 482670: mov eax, 0x48d4a8 */
  eax = 0x48d4a8u;
/* 482675: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48267au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48267a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48267b: mov eax, dword ptr [ecx - 0x64] */
  eax = R32((uint32_t)(ecx + 0xffffff9cu));
/* 48267e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482682: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 482685: mov dword ptr [eax + ecx - 0x64], 0x4c89c0 */
  W32((uint32_t)(eax + ecx + 0xffffff9cu), 0x4c89c0u);
/* 48268d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482691: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 482694: mov ecx, esi */
  ecx = esi;
/* 482696: call 0x461cd8 */
  esp -= 4; W32(esp, 0x48269bu); SPILL(); f_461cd8(); if (g_unwind) return; RELOAD();
/* 48269b: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 48269e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4826a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4826a4: mov dword ptr [eax + esi - 4], 0x4c7680 */
  W32((uint32_t)(eax + esi + 0xfffffffcu), 0x4c7680u);
/* 4826ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4826ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4826b4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4826b5: ret  */
  esp += 4; SPILL(); return;
}

void f_4826b6(void) {
  LOAD_REGS();
L_4826b6: /* 4826b6: mov eax, 0x48d4d3 */
  eax = 0x48d4d3u;
/* 4826bb: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4826c0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4826c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4826c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4826c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4826c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4826c4: xor ebx, ebx */
  ebx = 0;
/* 4826c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4826c7: xor edi, edi */
  edi = 0;
/* 4826c9: mov esi, ecx */
  esi = ecx;
/* 4826cb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4826cc: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4826cf: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4826d2: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 4826d5: je 0x4826ef */
  if (zf) goto L_4826ef;
L_4826d7: /* 4826d7: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* 4826da: mov dword ptr [esi], 0x48e2a8 */
  W32((uint32_t)(esi), 0x48e2a8u);
/* 4826e0: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 4826e3: mov dword ptr [eax], 0x4c762c */
  W32((uint32_t)(eax), 0x4c762cu);
/* 4826e9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4826ec: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_4826ef: /* 4826ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4826f0: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 4826f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4826f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4826f5: mov ecx, esi */
  ecx = esi;
/* 4826f7: call 0x461ae0 */
  esp -= 4; W32(esp, 0x4826fcu); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 4826fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4826fe: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482701: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482702: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 482705: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 482708: mov dword ptr [esi + eax], 0x4c8a1c */
  W32((uint32_t)(esi + eax), 0x4c8a1cu);
/* 48270f: call 0x461fa1 */
  esp -= 4; W32(esp, 0x482714u); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 482714: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482717: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 482718: mov eax, esi */
  eax = esi;
/* 48271a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48271b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48271c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 482723: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 482724: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482727(void) {
  LOAD_REGS();
L_482727: /* 482727: mov eax, 0x48d4e8 */
  eax = 0x48d4e8u;
/* 48272c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x482731u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 482731: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482732: mov eax, dword ptr [ecx - 0x64] */
  eax = R32((uint32_t)(ecx + 0xffffff9cu));
/* 482735: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482738: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482739: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 48273c: mov dword ptr [eax + ecx - 0x64], 0x4c8a1c */
  W32((uint32_t)(eax + ecx + 0xffffff9cu), 0x4c8a1cu);
/* 482744: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482748: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 48274b: mov ecx, esi */
  ecx = esi;
/* 48274d: call 0x46130d */
  esp -= 4; W32(esp, 0x482752u); SPILL(); f_46130d(); if (g_unwind) return; RELOAD();
/* 482752: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 482755: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482758: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48275b: mov dword ptr [eax + esi - 4], 0x4c76d8 */
  W32((uint32_t)(eax + esi + 0xfffffffcu), 0x4c76d8u);
/* 482763: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482764: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48276b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48276c: ret  */
  esp += 4; SPILL(); return;
}

void f_48276d(void) {
  LOAD_REGS();
L_48276d: /* 48276d: mov eax, 0x48d513 */
  eax = 0x48d513u;
/* 482772: call 0x4616c0 */
  esp -= 4; W32(esp, 0x482777u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 482777: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482778: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 482779: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48277a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48277b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48277c: xor edi, edi */
  edi = 0;
/* 48277e: xor ebx, ebx */
  ebx = 0;
/* 482780: mov esi, ecx */
  esi = ecx;
/* 482782: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 482783: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482786: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 482789: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 48278c: je 0x4827ad */
  if (zf) goto L_4827ad;
L_48278e: /* 48278e: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 482791: mov dword ptr [esi], 0x48e2b0 */
  W32((uint32_t)(esi), 0x48e2b0u);
/* 482797: mov dword ptr [esi + 8], 0x48e2a8 */
  W32((uint32_t)(esi + 0x8u), 0x48e2a8u);
/* 48279e: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 4827a1: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 4827a7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4827aa: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_4827ad: /* 4827ad: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 4827b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4827b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4827b2: mov ecx, esi */
  ecx = esi;
/* 4827b4: call 0x46b701 */
  esp -= 4; W32(esp, 0x4827b9u); SPILL(); f_46b701(); if (g_unwind) return; RELOAD();
/* 4827b9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4827bb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4827be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4827bf: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4827c2: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4827c5: mov dword ptr [esi + eax], 0x4c8a78 */
  W32((uint32_t)(esi + eax), 0x4c8a78u);
/* 4827cc: call 0x4615e2 */
  esp -= 4; W32(esp, 0x4827d1u); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 4827d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4827d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4827d5: mov eax, esi */
  eax = esi;
/* 4827d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4827d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4827d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4827e0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4827e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4827e4(void) {
  LOAD_REGS();
L_4827e4: /* 4827e4: mov eax, 0x48d528 */
  eax = 0x48d528u;
/* 4827e9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4827eeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4827ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4827ef: mov eax, dword ptr [ecx - 0x6c] */
  eax = R32((uint32_t)(ecx + 0xffffff94u));
/* 4827f2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4827f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4827f6: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 4827f9: mov dword ptr [eax + ecx - 0x6c], 0x4c8a78 */
  W32((uint32_t)(eax + ecx + 0xffffff94u), 0x4c8a78u);
/* 482801: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482805: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 482808: mov ecx, esi */
  ecx = esi;
/* 48280a: call 0x4622d2 */
  esp -= 4; W32(esp, 0x48280fu); SPILL(); f_4622d2(); if (g_unwind) return; RELOAD();
/* 48280f: mov ecx, esi */
  ecx = esi;
/* 482811: call 0x4690e5 */
  esp -= 4; W32(esp, 0x482816u); SPILL(); f_4690e5(); if (g_unwind) return; RELOAD();
/* 482816: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482819: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48281a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 482821: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 482822: ret  */
  esp += 4; SPILL(); return;
}

void f_482823(void) {
  LOAD_REGS();
L_482823: /* 482823: mov eax, 0x48d553 */
  eax = 0x48d553u;
/* 482828: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48282du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48282d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48282e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48282f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 482830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482831: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482832: xor edi, edi */
  edi = 0;
/* 482834: xor ebx, ebx */
  ebx = 0;
/* 482836: mov esi, ecx */
  esi = ecx;
/* 482838: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 482839: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48283c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 48283f: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 482842: je 0x482863 */
  if (zf) goto L_482863;
L_482844: /* 482844: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 482847: mov dword ptr [esi], 0x48e2b0 */
  W32((uint32_t)(esi), 0x48e2b0u);
/* 48284d: mov dword ptr [esi + 8], 0x48e2a8 */
  W32((uint32_t)(esi + 0x8u), 0x48e2a8u);
/* 482854: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 482857: mov dword ptr [eax], 0x4c75d8 */
  W32((uint32_t)(eax), 0x4c75d8u);
/* 48285d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 482860: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_482863: /* 482863: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 482866: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 482867: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482868: mov ecx, esi */
  ecx = esi;
/* 48286a: call 0x46911e */
  esp -= 4; W32(esp, 0x48286fu); SPILL(); f_46911e(); if (g_unwind) return; RELOAD();
/* 48286f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482871: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482874: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 482875: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 482878: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 48287b: mov dword ptr [esi + eax], 0x4c8ae8 */
  W32((uint32_t)(esi + eax), 0x4c8ae8u);
/* 482882: call 0x462024 */
  esp -= 4; W32(esp, 0x482887u); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 482887: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48288a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48288b: mov eax, esi */
  eax = esi;
/* 48288d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48288e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48288f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 482896: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 482897: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48289a(void) {
  LOAD_REGS();
L_48289a: /* 48289a: mov eax, 0x48d568 */
  eax = 0x48d568u;
/* 48289f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4828a4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4828a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4828a5: mov eax, dword ptr [ecx - 0x6c] */
  eax = R32((uint32_t)(ecx + 0xffffff94u));
/* 4828a8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4828ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4828ac: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 4828af: mov dword ptr [eax + ecx - 0x6c], 0x4c8ae8 */
  W32((uint32_t)(eax + ecx + 0xffffff94u), 0x4c8ae8u);
/* 4828b7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4828bb: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 4828be: mov ecx, esi */
  ecx = esi;
/* 4828c0: call 0x461cd8 */
  esp -= 4; W32(esp, 0x4828c5u); SPILL(); f_461cd8(); if (g_unwind) return; RELOAD();
/* 4828c5: mov ecx, esi */
  ecx = esi;
/* 4828c7: call 0x469198 */
  esp -= 4; W32(esp, 0x4828ccu); SPILL(); f_469198(); if (g_unwind) return; RELOAD();
/* 4828cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4828cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4828d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4828d7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4828d8: ret  */
  esp += 4; SPILL(); return;
}

void f_4828d9(void) {
  LOAD_REGS();
L_4828d9: /* 4828d9: mov eax, 0x48d593 */
  eax = 0x48d593u;
/* 4828de: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4828e3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4828e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4828e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4828e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4828e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4828e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4828e8: xor edi, edi */
  edi = 0;
/* 4828ea: xor ebx, ebx */
  ebx = 0;
/* 4828ec: mov esi, ecx */
  esi = ecx;
/* 4828ee: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4828ef: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4828f2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4828f5: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 4828f8: je 0x482919 */
  if (zf) goto L_482919;
L_4828fa: /* 4828fa: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 4828fd: mov dword ptr [esi], 0x48e2b0 */
  W32((uint32_t)(esi), 0x48e2b0u);
/* 482903: mov dword ptr [esi + 8], 0x48e2a8 */
  W32((uint32_t)(esi + 0x8u), 0x48e2a8u);
/* 48290a: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 48290d: mov dword ptr [eax], 0x4c762c */
  W32((uint32_t)(eax), 0x4c762cu);
/* 482913: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 482916: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_482919: /* 482919: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 48291c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48291d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48291e: mov ecx, esi */
  ecx = esi;
/* 482920: call 0x4691d1 */
  esp -= 4; W32(esp, 0x482925u); SPILL(); f_4691d1(); if (g_unwind) return; RELOAD();
/* 482925: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482927: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48292a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48292b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 48292e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 482931: mov dword ptr [esi + eax], 0x4c8b58 */
  W32((uint32_t)(esi + eax), 0x4c8b58u);
/* 482938: call 0x461fa1 */
  esp -= 4; W32(esp, 0x48293du); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 48293d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482940: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 482941: mov eax, esi */
  eax = esi;
/* 482943: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482944: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 482945: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48294c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48294d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_482950(void) {
  LOAD_REGS();
L_482950: /* 482950: mov eax, 0x48d5a8 */
  eax = 0x48d5a8u;
/* 482955: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48295au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48295a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48295b: mov eax, dword ptr [ecx - 0x6c] */
  eax = R32((uint32_t)(ecx + 0xffffff94u));
/* 48295e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 482961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482962: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 482965: mov dword ptr [eax + ecx - 0x6c], 0x4c8b58 */
  W32((uint32_t)(eax + ecx + 0xffffff94u), 0x4c8b58u);
/* 48296d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 482971: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 482974: mov ecx, esi */
  ecx = esi;
/* 482976: call 0x46130d */
  esp -= 4; W32(esp, 0x48297bu); SPILL(); f_46130d(); if (g_unwind) return; RELOAD();
/* 48297b: mov ecx, esi */
  ecx = esi;
/* 48297d: call 0x46924b */
  esp -= 4; W32(esp, 0x482982u); SPILL(); f_46924b(); if (g_unwind) return; RELOAD();
/* 482982: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 482985: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482986: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48298d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48298e: ret  */
  esp += 4; SPILL(); return;
}

void f_48298f(void) {
  LOAD_REGS();
L_48298f: /* 48298f: mov eax, 0x48d63d */
  eax = 0x48d63du;
/* 482994: call 0x4616c0 */
  esp -= 4; W32(esp, 0x482999u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 482999: sub esp, 0x174 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x174u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48299f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4829a4: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4829a7: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4829aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4829ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4829ac: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4829af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4829b0: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 4829b3: xor edi, edi */
  edi = 0;
/* 4829b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4829b6: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 4829b9: call 0x464a5a */
  esp -= 4; W32(esp, 0x4829beu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4829be: cmp byte ptr [ebp + 0x14], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4829c2: je 0x4829cf */
  if (zf) goto L_4829cf;
L_4829c4: /* 4829c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4829c5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4829c8: call 0x47d5ba */
  esp -= 4; W32(esp, 0x4829cdu); SPILL(); f_47d5ba(); if (g_unwind) return; RELOAD();
/* 4829cd: jmp 0x4829dc */
  goto L_4829dc;
L_4829cf: /* 4829cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4829d0: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4829d7: call 0x4799e3 */
  esp -= 4; W32(esp, 0x4829dcu); SPILL(); f_4799e3(); if (g_unwind) return; RELOAD();
L_4829dc: /* 4829dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4829dd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 4829e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 4829e3: call 0x461389 */
  esp -= 4; W32(esp, 0x4829e8u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4829e8: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4829eb: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 4829ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4829ef: call 0x464a5a */
  esp -= 4; W32(esp, 0x4829f4u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4829f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4829f5: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4829fc: call 0x46587a */
  esp -= 4; W32(esp, 0x482a01u); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 482a01: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 482a02: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 482a05: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 482a08: call 0x461389 */
  esp -= 4; W32(esp, 0x482a0du); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 482a0d: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 482a11: and byte ptr [ebp - 0x15], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffebu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffebu), r);
  }
/* 482a15: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 482a17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 482a18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482a19: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 482a1c: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 482a1f: call 0x461ed0 */
  esp -= 4; W32(esp, 0x482a24u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 482a24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 482a25: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 482a2b: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 482a32: mov dword ptr [ebp - 0x94], esi */
  W32((uint32_t)(ebp + 0xffffff6cu), esi);
/* 482a38: call 0x461ed0 */
  esp -= 4; W32(esp, 0x482a3du); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 482a3d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482a40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 482a42: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 482a45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 482a46: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 482a4a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x482a4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 482a4d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 482a50: xor esi, esi */
  esi = 0;
/* 482a52: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 482a55: jmp 0x482a5a */
  goto L_482a5a;
L_482a57: /* 482a57: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
L_482a5a: /* 482a5a: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482a5d: jae 0x482fe1 */
  if (!cf) goto L_482fe1;
L_482a63: /* 482a63: mov al, byte ptr [ebp + esi - 0x4c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffb4u))) & 0xffu);
/* 482a67: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482a69: je 0x482fa2 */
  if (zf) goto L_482fa2;
L_482a6f: /* 482a6f: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482a71: je 0x482ed1 */
  if (zf) goto L_482ed1;
L_482a77: /* 482a77: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482a79: je 0x482d59 */
  if (zf) goto L_482d59;
L_482a7f: /* 482a7f: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482a81: jne 0x482fd4 */
  if (!zf) goto L_482fd4;
L_482a87: /* 482a87: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 482a8a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482a8c: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 482a90: mov ecx, esi */
  ecx = esi;
/* 482a92: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x482a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 482a95: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 482a98: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 482a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482a9f: mov ecx, esi */
  ecx = esi;
/* 482aa1: call 0x471e93 */
  esp -= 4; W32(esp, 0x482aa6u); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 482aa6: cmp dword ptr [ebp - 0xb0], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482aad: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 482ab3: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 482ab7: jae 0x482abf */
  if (!cf) goto L_482abf;
L_482ab9: /* 482ab9: lea eax, [ebp - 0xc4] */
  eax = (uint32_t)(ebp + 0xffffff3cu);
L_482abf: /* 482abf: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 482ac2: jle 0x482bb2 */
  if ((zf || sf != of)) goto L_482bb2;
L_482ac8: /* 482ac8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482acb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 482acd: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x482ad0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 482ad0: xor esi, esi */
  esi = 0;
/* 482ad2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482ad3: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 482ad6: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 482ad8: mov dword ptr [ebp - 0x2c], 0xf */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xfu);
/* 482adf: call 0x461ed0 */
  esp -= 4; W32(esp, 0x482ae4u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 482ae4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 482ae5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482ae7: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 482aea: call 0x4661b6 */
  esp -= 4; W32(esp, 0x482aefu); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 482aef: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482af2: mov ecx, edi */
  ecx = edi;
/* 482af4: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 482af8: call 0x46e745 */
  esp -= 4; W32(esp, 0x482afdu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482afd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482aff: jne 0x482c29 */
  if (!zf) goto L_482c29;
L_482b05: /* 482b05: mov ecx, edi */
  ecx = edi;
/* 482b07: call 0x47215a */
  esp -= 4; W32(esp, 0x482b0cu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482b0c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 482b0f: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 482b12: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 482b15: movsx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + eax*2)));
/* 482b19: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 482b1c: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482b1e: je 0x482bc5 */
  if (zf) goto L_482bc5;
L_482b24: /* 482b24: mov ecx, edi */
  ecx = edi;
/* 482b26: call 0x47215a */
  esp -= 4; W32(esp, 0x482b2bu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482b2b: mov byte ptr [ebp - 0x54], al */
  W8((uint32_t)(ebp + 0xffffffacu), (eax & 0xffu));
/* 482b2e: push dword ptr [ebp - 0x54] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffacu)); esp -= 4; W32(esp, v); }
/* 482b31: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 482b37: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482b39: call 0x466156 */
  esp -= 4; W32(esp, 0x482b3eu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 482b3e: cmp dword ptr [ebp - 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482b42: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 482b45: jae 0x482b4a */
  if (!cf) goto L_482b4a;
L_482b47: /* 482b47: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_482b4a: /* 482b4a: cmp byte ptr [eax + esi], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482b4e: je 0x482bf3 */
  if (zf) goto L_482bf3;
L_482b54: /* 482b54: cmp dword ptr [ebp - 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482b58: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 482b5b: jae 0x482b60 */
  if (!cf) goto L_482b60;
L_482b5d: /* 482b5d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_482b60: /* 482b60: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 482b62: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
/* 482b64: jmp 0x482bf3 */
  goto L_482bf3;
L_482b69: /* 482b69: mov ecx, edi */
  ecx = edi;
/* 482b6b: call 0x47215a */
  esp -= 4; W32(esp, 0x482b70u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482b70: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 482b73: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 482b76: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 482b79: movsx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + eax*2)));
/* 482b7d: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 482b80: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482b82: je 0x482ca7 */
  if (zf) goto L_482ca7;
L_482b88: /* 482b88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 482b8a: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
/* 482b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482b91: mov ecx, edi */
  ecx = edi;
/* 482b93: call 0x47216d */
  esp -= 4; W32(esp, 0x482b98u); SPILL(); f_47216d(); if (g_unwind) return; RELOAD();
/* 482b98: mov ecx, eax */
  ecx = eax;
/* 482b9a: call 0x47215a */
  esp -= 4; W32(esp, 0x482b9fu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482b9f: mov byte ptr [ebp - 0x50], al */
  W8((uint32_t)(ebp + 0xffffffb0u), (eax & 0xffu));
/* 482ba2: push dword ptr [ebp - 0x50] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb0u)); esp -= 4; W32(esp, v); }
/* 482ba5: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 482bab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482bad: call 0x466156 */
  esp -= 4; W32(esp, 0x482bb2u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
L_482bb2: /* 482bb2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482bb5: mov ecx, edi */
  ecx = edi;
/* 482bb7: call 0x46e745 */
  esp -= 4; W32(esp, 0x482bbcu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482bbc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482bbe: je 0x482b69 */
  if (zf) goto L_482b69;
L_482bc0: /* 482bc0: jmp 0x482ca7 */
  goto L_482ca7;
L_482bc5: /* 482bc5: cmp dword ptr [ebp - 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482bc9: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 482bcc: jae 0x482bd1 */
  if (!cf) goto L_482bd1;
L_482bce: /* 482bce: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_482bd1: /* 482bd1: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482bd5: je 0x482c0c */
  if (zf) goto L_482c0c;
L_482bd7: /* 482bd7: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482bd9: je 0x482c0c */
  if (zf) goto L_482c0c;
L_482bdb: /* 482bdb: mov ecx, edi */
  ecx = edi;
/* 482bdd: call 0x47215a */
  esp -= 4; W32(esp, 0x482be2u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482be2: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482be4: jne 0x482c0c */
  if (!zf) goto L_482c0c;
L_482be6: /* 482be6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 482be8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482bea: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 482bed: call 0x466156 */
  esp -= 4; W32(esp, 0x482bf2u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 482bf2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_482bf3: /* 482bf3: mov ecx, edi */
  ecx = edi;
/* 482bf5: call 0x46c710 */
  esp -= 4; W32(esp, 0x482bfau); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 482bfa: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482bfd: mov ecx, edi */
  ecx = edi;
/* 482bff: call 0x46e745 */
  esp -= 4; W32(esp, 0x482c04u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482c04: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482c06: je 0x482b05 */
  if (zf) goto L_482b05;
L_482c0c: /* 482c0c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 482c0e: je 0x482c29 */
  if (zf) goto L_482c29;
L_482c10: /* 482c10: cmp dword ptr [ebp - 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482c14: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 482c17: jae 0x482c1c */
  if (!cf) goto L_482c1c;
L_482c19: /* 482c19: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
L_482c1c: /* 482c1c: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 482c20: jle 0x482c25 */
  if ((zf || sf != of)) goto L_482c25;
L_482c22: /* 482c22: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 482c23: jmp 0x482c29 */
  goto L_482c29;
L_482c25: /* 482c25: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_482c29: /* 482c29: cmp dword ptr [ebp - 0xb0], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482c30: mov edx, dword ptr [ebp - 0xc4] */
  edx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 482c36: jae 0x482c3e */
  if (!cf) goto L_482c3e;
L_482c38: /* 482c38: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
L_482c3e: /* 482c3e: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482c42: jne 0x482c87 */
  if (!zf) goto L_482c87;
L_482c44: /* 482c44: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 482c46: jbe 0x482c96 */
  if ((cf | zf)) goto L_482c96;
L_482c48: /* 482c48: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 482c4a: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482c4c: je 0x482c96 */
  if (zf) goto L_482c96;
L_482c4e: /* 482c4e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 482c4f: je 0x482c62 */
  if (zf) goto L_482c62;
L_482c51: /* 482c51: cmp dword ptr [ebp - 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482c55: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 482c58: jae 0x482c5d */
  if (!cf) goto L_482c5d;
L_482c5a: /* 482c5a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
L_482c5d: /* 482c5d: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482c60: jne 0x482c83 */
  if (!zf) goto L_482c83;
L_482c62: /* 482c62: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 482c64: jne 0x482c77 */
  if (!zf) goto L_482c77;
L_482c66: /* 482c66: cmp dword ptr [ebp - 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482c6a: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 482c6d: jae 0x482c72 */
  if (!cf) goto L_482c72;
L_482c6f: /* 482c6f: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
L_482c72: /* 482c72: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 482c75: jl 0x482c83 */
  if ((sf != of)) goto L_482c83;
L_482c77: /* 482c77: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 482c7a: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 482c7d: jle 0x482c44 */
  if ((zf || sf != of)) goto L_482c44;
L_482c7f: /* 482c7f: mov edx, eax */
  edx = eax;
/* 482c81: jmp 0x482c44 */
  goto L_482c44;
L_482c83: /* 482c83: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_482c87: /* 482c87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482c89: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 482c8c: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482c91u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482c91: jmp 0x482d4e */
  goto L_482d4e;
L_482c96: /* 482c96: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482c98: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 482c9b: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 482c9f: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482ca4u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482ca4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_482ca7: /* 482ca7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482caa: mov ecx, edi */
  ecx = edi;
/* 482cac: call 0x46e745 */
  esp -= 4; W32(esp, 0x482cb1u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482cb1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482cb3: jne 0x482d20 */
  if (!zf) goto L_482d20;
L_482cb5: /* 482cb5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 482cb7: mov ecx, esi */
  ecx = esi;
/* 482cb9: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x482cbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 482cbc: mov ecx, edi */
  ecx = edi;
/* 482cbe: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 482cc0: call 0x47215a */
  esp -= 4; W32(esp, 0x482cc5u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482cc5: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482cc7: jne 0x482d20 */
  if (!zf) goto L_482d20;
L_482cc9: /* 482cc9: jmp 0x482d0b */
  goto L_482d0b;
L_482ccb: /* 482ccb: mov ecx, edi */
  ecx = edi;
/* 482ccd: call 0x47215a */
  esp -= 4; W32(esp, 0x482cd2u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482cd2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 482cd5: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 482cd8: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 482cdb: movsx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + eax*2)));
/* 482cdf: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 482ce2: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482ce4: je 0x482d20 */
  if (zf) goto L_482d20;
L_482ce6: /* 482ce6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 482ce9: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 482cec: jge 0x482d0b */
  if ((sf == of)) goto L_482d0b;
L_482cee: /* 482cee: mov ecx, edi */
  ecx = edi;
/* 482cf0: call 0x47215a */
  esp -= 4; W32(esp, 0x482cf5u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482cf5: mov byte ptr [ebp - 0x48], al */
  W8((uint32_t)(ebp + 0xffffffb8u), (eax & 0xffu));
/* 482cf8: push dword ptr [ebp - 0x48] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb8u)); esp -= 4; W32(esp, v); }
/* 482cfb: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 482d01: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482d03: call 0x466156 */
  esp -= 4; W32(esp, 0x482d08u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 482d08: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_482d0b: /* 482d0b: mov ecx, edi */
  ecx = edi;
/* 482d0d: call 0x46c710 */
  esp -= 4; W32(esp, 0x482d12u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 482d12: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482d15: mov ecx, edi */
  ecx = edi;
/* 482d17: call 0x46e745 */
  esp -= 4; W32(esp, 0x482d1cu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482d1c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482d1e: je 0x482ccb */
  if (zf) goto L_482ccb;
L_482d20: /* 482d20: cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482d27: jne 0x482d2f */
  if (!zf) goto L_482d2f;
L_482d29: /* 482d29: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 482d2d: jmp 0x482d4e */
  goto L_482d4e;
L_482d2f: /* 482d2f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 482d32: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 482d35: jge 0x482d4e */
  if ((sf == of)) goto L_482d4e;
L_482d37: /* 482d37: mov esi, eax */
  esi = eax;
/* 482d39: sub esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_482d3c: /* 482d3c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 482d3e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482d40: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 482d46: call 0x466156 */
  esp -= 4; W32(esp, 0x482d4bu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 482d4b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 482d4c: jne 0x482d3c */
  if (!zf) goto L_482d3c;
L_482d4e: /* 482d4e: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 482d54: jmp 0x482e0a */
  goto L_482e0a;
L_482d59: /* 482d59: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482d5c: mov ecx, edi */
  ecx = edi;
/* 482d5e: call 0x46e745 */
  esp -= 4; W32(esp, 0x482d63u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482d63: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482d65: jne 0x482fd4 */
  if (!zf) goto L_482fd4;
L_482d6b: /* 482d6b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482d6e: lea eax, [ebp - 0xf4] */
  eax = (uint32_t)(ebp + 0xffffff0cu);
/* 482d74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482d75: call 0x471ec1 */
  esp -= 4; W32(esp, 0x482d7au); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 482d7a: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 482d7e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 482d82: jbe 0x482dc6 */
  if ((cf | zf)) goto L_482dc6;
L_482d84: /* 482d84: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482d87: lea eax, [ebp - 0x12c] */
  eax = (uint32_t)(ebp + 0xfffffed4u);
/* 482d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482d8e: call 0x471ec1 */
  esp -= 4; W32(esp, 0x482d93u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 482d93: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482d97: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 482d9b: jb 0x482da2 */
  if (cf) goto L_482da2;
L_482d9d: /* 482d9d: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 482da0: jmp 0x482da5 */
  goto L_482da5;
L_482da2: /* 482da2: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
L_482da5: /* 482da5: mov ecx, edi */
  ecx = edi;
/* 482da7: call 0x47215a */
  esp -= 4; W32(esp, 0x482dacu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482dac: cmp byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482dae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482db0: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 482db6: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 482db9: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482dbeu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482dbe: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482dc0: je 0x482dc6 */
  if (zf) goto L_482dc6;
L_482dc2: /* 482dc2: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 482dc4: jmp 0x482dc8 */
  goto L_482dc8;
L_482dc6: /* 482dc6: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_482dc8: /* 482dc8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482dca: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 482dd0: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 482dd4: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482dd9u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482dd9: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482ddb: je 0x482e1a */
  if (zf) goto L_482e1a;
L_482ddd: /* 482ddd: mov ecx, edi */
  ecx = edi;
/* 482ddf: call 0x46c710 */
  esp -= 4; W32(esp, 0x482de4u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 482de4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482de7: lea eax, [ebp - 0x164] */
  eax = (uint32_t)(ebp + 0xfffffe9cu);
/* 482ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482dee: call 0x471ec1 */
  esp -= 4; W32(esp, 0x482df3u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 482df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 482df5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 482df7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482df8: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 482dfb: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 482dff: call 0x467320 */
  esp -= 4; W32(esp, 0x482e04u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 482e04: lea ecx, [ebp - 0x164] */
  ecx = (uint32_t)(ebp + 0xfffffe9cu);
L_482e0a: /* 482e0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482e0c: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 482e10: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482e15u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482e15: jmp 0x482fd4 */
  goto L_482fd4;
L_482e1a: /* 482e1a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482e1d: lea eax, [ebp - 0x148] */
  eax = (uint32_t)(ebp + 0xfffffeb8u);
/* 482e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482e24: call 0x471ed8 */
  esp -= 4; W32(esp, 0x482e29u); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 482e29: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 482e2d: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 482e31: jbe 0x482e75 */
  if ((cf | zf)) goto L_482e75;
L_482e33: /* 482e33: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482e36: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 482e3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482e3d: call 0x471ed8 */
  esp -= 4; W32(esp, 0x482e42u); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 482e42: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482e46: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 482e4a: jb 0x482e51 */
  if (cf) goto L_482e51;
L_482e4c: /* 482e4c: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 482e4f: jmp 0x482e54 */
  goto L_482e54;
L_482e51: /* 482e51: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
L_482e54: /* 482e54: mov ecx, edi */
  ecx = edi;
/* 482e56: call 0x47215a */
  esp -= 4; W32(esp, 0x482e5bu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482e5b: cmp byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482e5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482e5f: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 482e65: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 482e68: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482e6du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482e6d: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482e6f: je 0x482e75 */
  if (zf) goto L_482e75;
L_482e71: /* 482e71: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 482e73: jmp 0x482e77 */
  goto L_482e77;
L_482e75: /* 482e75: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_482e77: /* 482e77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482e79: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 482e7f: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 482e83: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482e88u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482e88: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482e8a: je 0x482fd4 */
  if (zf) goto L_482fd4;
L_482e90: /* 482e90: mov ecx, edi */
  ecx = edi;
/* 482e92: call 0x46c710 */
  esp -= 4; W32(esp, 0x482e97u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 482e97: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482e9a: lea eax, [ebp - 0x180] */
  eax = (uint32_t)(ebp + 0xfffffe80u);
/* 482ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482ea1: call 0x471ed8 */
  esp -= 4; W32(esp, 0x482ea6u); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 482ea6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 482ea8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 482eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482eab: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 482eae: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 482eb2: call 0x467320 */
  esp -= 4; W32(esp, 0x482eb7u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 482eb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 482eb9: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 482ebf: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 482ec3: call 0x461ea8 */
  esp -= 4; W32(esp, 0x482ec8u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 482ec8: mov byte ptr [ebp - 0x15], 1 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x1u);
/* 482ecc: jmp 0x482fd4 */
  goto L_482fd4;
L_482ed1: /* 482ed1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 482ed4: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 482eda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482edb: call 0x471eaa */
  esp -= 4; W32(esp, 0x482ee0u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 482ee0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 482ee3: test byte ptr [eax + 0xc], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482ee7: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 482eeb: jne 0x482f32 */
  if (!zf) goto L_482f32;
L_482eed: /* 482eed: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482ef0: jne 0x482f32 */
  if (!zf) goto L_482f32;
L_482ef2: /* 482ef2: cmp dword ptr [ebp - 0x60], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 482ef6: ja 0x482f32 */
  if ((!cf && !zf)) goto L_482f32;
L_482ef8: /* 482ef8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482efb: mov ecx, edi */
  ecx = edi;
/* 482efd: call 0x46e745 */
  esp -= 4; W32(esp, 0x482f02u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482f02: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482f04: jne 0x482f23 */
  if (!zf) goto L_482f23;
L_482f06: /* 482f06: cmp dword ptr [ebp - 0x78], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482f0a: mov esi, dword ptr [ebp - 0x8c] */
  esi = R32((uint32_t)(ebp + 0xffffff74u));
/* 482f10: jae 0x482f18 */
  if (!cf) goto L_482f18;
L_482f12: /* 482f12: lea esi, [ebp - 0x8c] */
  esi = (uint32_t)(ebp + 0xffffff74u);
L_482f18: /* 482f18: mov ecx, edi */
  ecx = edi;
/* 482f1a: call 0x47215a */
  esp -= 4; W32(esp, 0x482f1fu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482f1f: cmp al, byte ptr [esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482f21: je 0x482f32 */
  if (zf) goto L_482f32;
L_482f23: /* 482f23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 482f25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 482f27: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 482f2d: call 0x466522 */
  esp -= 4; W32(esp, 0x482f32u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
L_482f32: /* 482f32: cmp dword ptr [ebp - 0x78], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482f36: mov esi, dword ptr [ebp - 0x8c] */
  esi = R32((uint32_t)(ebp + 0xffffff74u));
/* 482f3c: jae 0x482f6f */
  if (!cf) goto L_482f6f;
L_482f3e: /* 482f3e: lea esi, [ebp - 0x8c] */
  esi = (uint32_t)(ebp + 0xffffff74u);
/* 482f44: jmp 0x482f6f */
  goto L_482f6f;
L_482f46: /* 482f46: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 482f4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482f4d: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 482f53: call 0x465162 */
  esp -= 4; W32(esp, 0x482f58u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 482f58: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482f5a: je 0x482f7d */
  if (zf) goto L_482f7d;
L_482f5c: /* 482f5c: mov ecx, edi */
  ecx = edi;
/* 482f5e: call 0x47215a */
  esp -= 4; W32(esp, 0x482f63u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482f63: cmp al, byte ptr [esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482f65: jne 0x482f7d */
  if (!zf) goto L_482f7d;
L_482f67: /* 482f67: mov ecx, edi */
  ecx = edi;
/* 482f69: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 482f6a: call 0x46c710 */
  esp -= 4; W32(esp, 0x482f6fu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_482f6f: /* 482f6f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482f72: mov ecx, edi */
  ecx = edi;
/* 482f74: call 0x46e745 */
  esp -= 4; W32(esp, 0x482f79u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482f79: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482f7b: je 0x482f46 */
  if (zf) goto L_482f46;
L_482f7d: /* 482f7d: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 482f83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482f84: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 482f8a: call 0x465162 */
  esp -= 4; W32(esp, 0x482f8fu); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 482f8f: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482f91: je 0x482f97 */
  if (zf) goto L_482f97;
L_482f93: /* 482f93: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_482f97: /* 482f97: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 482f9d: jmp 0x482e0a */
  goto L_482e0a;
L_482fa2: /* 482fa2: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 482fa5: je 0x482fd4 */
  if (zf) goto L_482fd4;
L_482fa7: /* 482fa7: jmp 0x482fc6 */
  goto L_482fc6;
L_482fa9: /* 482fa9: mov ecx, edi */
  ecx = edi;
/* 482fab: call 0x47215a */
  esp -= 4; W32(esp, 0x482fb0u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 482fb0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 482fb3: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 482fb6: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 482fb9: test byte ptr [ecx + eax*2], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482fbd: je 0x482fd4 */
  if (zf) goto L_482fd4;
L_482fbf: /* 482fbf: mov ecx, edi */
  ecx = edi;
/* 482fc1: call 0x46c710 */
  esp -= 4; W32(esp, 0x482fc6u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_482fc6: /* 482fc6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 482fc9: mov ecx, edi */
  ecx = edi;
/* 482fcb: call 0x46e745 */
  esp -= 4; W32(esp, 0x482fd0u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 482fd0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 482fd2: je 0x482fa9 */
  if (zf) goto L_482fa9;
L_482fd4: /* 482fd4: inc dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 482fd7: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482fdb: je 0x482a57 */
  if (zf) goto L_482a57;
L_482fe1: /* 482fe1: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 482fe5: jne 0x48303c */
  if (!zf) goto L_48303c;
L_482fe7: /* 482fe7: cmp dword ptr [ebp - 0x60], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 482feb: jbe 0x48304d */
  if ((cf | zf)) goto L_48304d;
L_482fed: /* 482fed: cmp dword ptr [ebp - 0x5c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 482ff1: mov esi, dword ptr [ebp - 0x70] */
  esi = R32((uint32_t)(ebp + 0xffffff90u));
/* 482ff4: jae 0x48301e */
  if (!cf) goto L_48301e;
L_482ff6: /* 482ff6: lea esi, [ebp - 0x70] */
  esi = (uint32_t)(ebp + 0xffffff90u);
/* 482ff9: jmp 0x48301e */
  goto L_48301e;
L_482ffb: /* 482ffb: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 482ffe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 482fff: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 483002: call 0x465162 */
  esp -= 4; W32(esp, 0x483007u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 483007: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483008: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48300a: je 0x48302c */
  if (zf) goto L_48302c;
L_48300c: /* 48300c: mov ecx, edi */
  ecx = edi;
/* 48300e: call 0x47215a */
  esp -= 4; W32(esp, 0x483013u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 483013: cmp al, byte ptr [esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483015: jne 0x48302c */
  if (!zf) goto L_48302c;
L_483017: /* 483017: mov ecx, edi */
  ecx = edi;
/* 483019: call 0x46c710 */
  esp -= 4; W32(esp, 0x48301eu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_48301e: /* 48301e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483021: mov ecx, edi */
  ecx = edi;
/* 483023: call 0x46e745 */
  esp -= 4; W32(esp, 0x483028u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 483028: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48302a: je 0x482ffb */
  if (zf) goto L_482ffb;
L_48302c: /* 48302c: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 48302f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483030: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 483033: call 0x465162 */
  esp -= 4; W32(esp, 0x483038u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 483038: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48303a: je 0x48304d */
  if (zf) goto L_48304d;
L_48303c: /* 48303c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48303e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483040: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 483046: call 0x466522 */
  esp -= 4; W32(esp, 0x48304bu); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 48304b: jmp 0x483064 */
  goto L_483064;
L_48304d: /* 48304d: cmp byte ptr [ebp - 0x15], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffebu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483051: je 0x483064 */
  if (zf) goto L_483064;
L_483053: /* 483053: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 483055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483059: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 48305f: call 0x46640d */
  esp -= 4; W32(esp, 0x483064u); SPILL(); f_46640d(); if (g_unwind) return; RELOAD();
L_483064: /* 483064: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 483067: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 48306d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48306e: call 0x4675a8 */
  esp -= 4; W32(esp, 0x483073u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 483073: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483075: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 48307b: call 0x461ea8 */
  esp -= 4; W32(esp, 0x483080u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 483080: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483082: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 483085: call 0x461ea8 */
  esp -= 4; W32(esp, 0x48308au); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 48308a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48308d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 483090: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 483097: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 48309a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 48309d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48309e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48309f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4830a0: call 0x46190c */
  esp -= 4; W32(esp, 0x4830a5u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4830a5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4830a6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_4830a9(void) {
  LOAD_REGS();
L_4830a9: /* 4830a9: mov eax, 0x48d6d2 */
  eax = 0x48d6d2u;
/* 4830ae: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4830b3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4830b3: sub esp, 0x168 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x168u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4830b9: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4830be: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4830c1: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 4830c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4830c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4830c6: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4830c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4830ca: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4830cd: xor ebx, ebx */
  ebx = 0;
/* 4830cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4830d0: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 4830d3: call 0x464a5a */
  esp -= 4; W32(esp, 0x4830d8u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4830d8: cmp byte ptr [ebp + 0x14], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4830db: je 0x4830e8 */
  if (zf) goto L_4830e8;
L_4830dd: /* 4830dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4830de: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4830e1: call 0x47d65c */
  esp -= 4; W32(esp, 0x4830e6u); SPILL(); f_47d65c(); if (g_unwind) return; RELOAD();
/* 4830e6: jmp 0x4830f5 */
  goto L_4830f5;
L_4830e8: /* 4830e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4830e9: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4830f0: call 0x479a85 */
  esp -= 4; W32(esp, 0x4830f5u); SPILL(); f_479a85(); if (g_unwind) return; RELOAD();
L_4830f5: /* 4830f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4830f6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4830f9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 4830fc: call 0x461389 */
  esp -= 4; W32(esp, 0x483101u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 483101: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 483104: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 483107: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483108: call 0x464a5a */
  esp -= 4; W32(esp, 0x48310du); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 48310d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48310e: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 483115: call 0x46591c */
  esp -= 4; W32(esp, 0x48311au); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 48311a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48311b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 48311e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 483121: call 0x461389 */
  esp -= 4; W32(esp, 0x483126u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 483126: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 48312a: and byte ptr [ebp - 0x15], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffebu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffebu), r);
  }
/* 48312e: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 483130: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 483131: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483132: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483135: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 483138: call 0x4624dd */
  esp -= 4; W32(esp, 0x48313du); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 48313d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48313e: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483144: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 48314b: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 48314e: call 0x4624dd */
  esp -= 4; W32(esp, 0x483153u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 483153: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483156: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 483158: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 48315b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 48315c: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 483160: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x483163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483163: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 483166: xor esi, esi */
  esi = 0;
/* 483168: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 48316b: jmp 0x483170 */
  goto L_483170;
L_48316d: /* 48316d: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_483170: /* 483170: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483173: jae 0x483704 */
  if (!cf) goto L_483704;
L_483179: /* 483179: mov al, byte ptr [ebp + esi - 0x4c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffb4u))) & 0xffu);
/* 48317d: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48317f: je 0x4836c4 */
  if (zf) goto L_4836c4;
L_483185: /* 483185: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483187: je 0x4835eb */
  if (zf) goto L_4835eb;
L_48318d: /* 48318d: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48318f: je 0x483477 */
  if (zf) goto L_483477;
L_483195: /* 483195: cmp al, 0x76 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x76u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483197: jne 0x4836f6 */
  if (!zf) goto L_4836f6;
L_48319d: /* 48319d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4831a0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4831a2: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4831a6: mov ecx, esi */
  ecx = esi;
/* 4831a8: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x4831abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4831ab: mov ebx, eax */
  ebx = eax;
/* 4831ad: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 4831b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4831b4: mov ecx, esi */
  ecx = esi;
/* 4831b6: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 4831b9: call 0x471e93 */
  esp -= 4; W32(esp, 0x4831beu); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 4831be: cmp dword ptr [ebp - 0xa4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff5cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4831c5: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 4831cb: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 4831cf: jae 0x4831d7 */
  if (!cf) goto L_4831d7;
L_4831d1: /* 4831d1: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
L_4831d7: /* 4831d7: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4831da: jle 0x4832b6 */
  if ((zf || sf != of)) goto L_4832b6;
L_4831e0: /* 4831e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 4831e3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4831e5: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x4831e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4831e8: xor esi, esi */
  esi = 0;
/* 4831ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4831eb: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 4831ee: mov dword ptr [ebp - 0x28], 0xf */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xfu);
/* 4831f5: mov ebx, eax */
  ebx = eax;
/* 4831f7: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4831fcu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 4831fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4831fd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4831ff: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 483202: call 0x4661b6 */
  esp -= 4; W32(esp, 0x483207u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 483207: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48320a: mov ecx, edi */
  ecx = edi;
/* 48320c: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 483210: call 0x46e77f */
  esp -= 4; W32(esp, 0x483215u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483215: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483217: jne 0x48332f */
  if (!zf) goto L_48332f;
L_48321d: /* 48321d: mov ecx, edi */
  ecx = edi;
/* 48321f: call 0x472198 */
  esp -= 4; W32(esp, 0x483224u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483224: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 483227: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 483229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48322a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 48322c: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x48322fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48322f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483231: je 0x4832c9 */
  if (zf) goto L_4832c9;
L_483237: /* 483237: mov ecx, edi */
  ecx = edi;
/* 483239: call 0x472198 */
  esp -= 4; W32(esp, 0x48323eu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 48323e: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483245: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483247: call 0x473236 */
  esp -= 4; W32(esp, 0x48324cu); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 48324c: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483250: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 483253: jae 0x483258 */
  if (!cf) goto L_483258;
L_483255: /* 483255: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_483258: /* 483258: cmp byte ptr [eax + esi], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48325c: je 0x4832f9 */
  if (zf) goto L_4832f9;
L_483262: /* 483262: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483266: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 483269: jae 0x48326e */
  if (!cf) goto L_48326e;
L_48326b: /* 48326b: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_48326e: /* 48326e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 483270: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
/* 483272: jmp 0x4832f9 */
  goto L_4832f9;
L_483277: /* 483277: mov ecx, edi */
  ecx = edi;
/* 483279: call 0x472198 */
  esp -= 4; W32(esp, 0x48327eu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 48327e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 483281: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 483283: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483284: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 483286: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x483289u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 483289: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48328b: je 0x4833b0 */
  if (zf) goto L_4833b0;
L_483291: /* 483291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483293: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 483299: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48329a: mov ecx, edi */
  ecx = edi;
/* 48329c: call 0x4721ac */
  esp -= 4; W32(esp, 0x4832a1u); SPILL(); f_4721ac(); if (g_unwind) return; RELOAD();
/* 4832a1: mov ecx, eax */
  ecx = eax;
/* 4832a3: call 0x472198 */
  esp -= 4; W32(esp, 0x4832a8u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4832a8: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4832ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4832af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4832b1: call 0x473236 */
  esp -= 4; W32(esp, 0x4832b6u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
L_4832b6: /* 4832b6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4832b9: mov ecx, edi */
  ecx = edi;
/* 4832bb: call 0x46e77f */
  esp -= 4; W32(esp, 0x4832c0u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 4832c0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4832c2: je 0x483277 */
  if (zf) goto L_483277;
L_4832c4: /* 4832c4: jmp 0x4833b0 */
  goto L_4833b0;
L_4832c9: /* 4832c9: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4832cd: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 4832d0: jae 0x4832d5 */
  if (!cf) goto L_4832d5;
L_4832d2: /* 4832d2: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_4832d5: /* 4832d5: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4832d9: je 0x483312 */
  if (zf) goto L_483312;
L_4832db: /* 4832db: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4832de: je 0x483312 */
  if (zf) goto L_483312;
L_4832e0: /* 4832e0: mov ecx, edi */
  ecx = edi;
/* 4832e2: call 0x472198 */
  esp -= 4; W32(esp, 0x4832e7u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4832e7: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4832ea: jne 0x483312 */
  if (!zf) goto L_483312;
L_4832ec: /* 4832ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4832ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4832f0: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 4832f3: call 0x466156 */
  esp -= 4; W32(esp, 0x4832f8u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 4832f8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4832f9: /* 4832f9: mov ecx, edi */
  ecx = edi;
/* 4832fb: call 0x46c756 */
  esp -= 4; W32(esp, 0x483300u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483300: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483303: mov ecx, edi */
  ecx = edi;
/* 483305: call 0x46e77f */
  esp -= 4; W32(esp, 0x48330au); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 48330a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48330c: je 0x48321d */
  if (zf) goto L_48321d;
L_483312: /* 483312: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 483314: je 0x48332f */
  if (zf) goto L_48332f;
L_483316: /* 483316: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48331a: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 48331d: jae 0x483322 */
  if (!cf) goto L_483322;
L_48331f: /* 48331f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_483322: /* 483322: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483326: jle 0x48332b */
  if ((zf || sf != of)) goto L_48332b;
L_483328: /* 483328: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483329: jmp 0x48332f */
  goto L_48332f;
L_48332b: /* 48332b: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_48332f: /* 48332f: cmp dword ptr [ebp - 0xa4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff5cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483336: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 48333c: jae 0x483344 */
  if (!cf) goto L_483344;
L_48333e: /* 48333e: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
L_483344: /* 483344: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483348: jne 0x48338d */
  if (!zf) goto L_48338d;
L_48334a: /* 48334a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 48334c: jbe 0x48339c */
  if ((cf | zf)) goto L_48339c;
L_48334e: /* 48334e: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 483350: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483352: je 0x48339c */
  if (zf) goto L_48339c;
L_483354: /* 483354: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 483355: je 0x483368 */
  if (zf) goto L_483368;
L_483357: /* 483357: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48335b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 48335e: jae 0x483363 */
  if (!cf) goto L_483363;
L_483360: /* 483360: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_483363: /* 483363: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483366: jne 0x483389 */
  if (!zf) goto L_483389;
L_483368: /* 483368: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48336a: jne 0x48337d */
  if (!zf) goto L_48337d;
L_48336c: /* 48336c: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483370: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 483373: jae 0x483378 */
  if (!cf) goto L_483378;
L_483375: /* 483375: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_483378: /* 483378: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 48337b: jl 0x483389 */
  if ((sf != of)) goto L_483389;
L_48337d: /* 48337d: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 483380: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 483383: jle 0x48334a */
  if ((zf || sf != of)) goto L_48334a;
L_483385: /* 483385: mov edx, eax */
  edx = eax;
/* 483387: jmp 0x48334a */
  goto L_48334a;
L_483389: /* 483389: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_48338d: /* 48338d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48338f: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 483392: call 0x461ea8 */
  esp -= 4; W32(esp, 0x483397u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 483397: jmp 0x483461 */
  goto L_483461;
L_48339c: /* 48339c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48339e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 4833a1: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 4833a5: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4833aau); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4833aa: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4833ad: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
L_4833b0: /* 4833b0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4833b3: mov ecx, edi */
  ecx = edi;
/* 4833b5: call 0x46e77f */
  esp -= 4; W32(esp, 0x4833bau); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 4833ba: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4833bc: jne 0x483432 */
  if (!zf) goto L_483432;
L_4833be: /* 4833be: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4833c0: mov ecx, esi */
  ecx = esi;
/* 4833c2: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x4833c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4833c5: mov ecx, edi */
  ecx = edi;
/* 4833c7: mov esi, eax */
  esi = eax;
/* 4833c9: call 0x472198 */
  esp -= 4; W32(esp, 0x4833ceu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4833ce: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4833d1: jne 0x483432 */
  if (!zf) goto L_483432;
L_4833d3: /* 4833d3: mov ecx, edi */
  ecx = edi;
/* 4833d5: call 0x46c756 */
  esp -= 4; W32(esp, 0x4833dau); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 4833da: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4833dd: mov ecx, edi */
  ecx = edi;
/* 4833df: call 0x46e77f */
  esp -= 4; W32(esp, 0x4833e4u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 4833e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4833e6: jne 0x483432 */
  if (!zf) goto L_483432;
L_4833e8: /* 4833e8: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_4833eb: /* 4833eb: mov ecx, edi */
  ecx = edi;
/* 4833ed: call 0x472198 */
  esp -= 4; W32(esp, 0x4833f2u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4833f2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4833f4: mov ecx, esi */
  ecx = esi;
/* 4833f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4833f7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4833f9: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x4833fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4833fc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4833fe: je 0x483432 */
  if (zf) goto L_483432;
L_483400: /* 483400: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 483403: jge 0x48341d */
  if ((sf == of)) goto L_48341d;
L_483405: /* 483405: mov ecx, edi */
  ecx = edi;
/* 483407: call 0x472198 */
  esp -= 4; W32(esp, 0x48340cu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 48340c: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483413: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483415: call 0x473236 */
  esp -= 4; W32(esp, 0x48341au); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 48341a: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_48341d: /* 48341d: mov ecx, edi */
  ecx = edi;
/* 48341f: call 0x46c756 */
  esp -= 4; W32(esp, 0x483424u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483424: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483427: mov ecx, edi */
  ecx = edi;
/* 483429: call 0x46e77f */
  esp -= 4; W32(esp, 0x48342eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 48342e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483430: je 0x4833eb */
  if (zf) goto L_4833eb;
L_483432: /* 483432: cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff90u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 483436: jne 0x48343e */
  if (!zf) goto L_48343e;
L_483438: /* 483438: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 48343c: jmp 0x483461 */
  goto L_483461;
L_48343e: /* 48343e: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 483441: jge 0x483461 */
  if ((sf == of)) goto L_483461;
L_483443: /* 483443: sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 483446: mov esi, ebx */
  esi = ebx;
L_483448: /* 483448: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 48344a: call 0x461d6f */
  esp -= 4; W32(esp, 0x48344fu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 48344f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 483450: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483457: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483459: call 0x473236 */
  esp -= 4; W32(esp, 0x48345eu); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 48345e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 48345f: jne 0x483448 */
  if (!zf) goto L_483448;
L_483461: /* 483461: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483463: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 483469: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 48346d: call 0x461ea8 */
  esp -= 4; W32(esp, 0x483472u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 483472: jmp 0x4836f6 */
  goto L_4836f6;
L_483477: /* 483477: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48347a: mov ecx, edi */
  ecx = edi;
/* 48347c: call 0x46e77f */
  esp -= 4; W32(esp, 0x483481u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 483481: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483483: jne 0x4836f6 */
  if (!zf) goto L_4836f6;
L_483489: /* 483489: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 48348c: lea eax, [ebp - 0x120] */
  eax = (uint32_t)(ebp + 0xfffffee0u);
/* 483492: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483493: call 0x471ec1 */
  esp -= 4; W32(esp, 0x483498u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 483498: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48349c: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 4834a0: jbe 0x4834e2 */
  if ((cf | zf)) goto L_4834e2;
L_4834a2: /* 4834a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 4834a5: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 4834ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4834ac: call 0x471ec1 */
  esp -= 4; W32(esp, 0x4834b1u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 4834b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4834b3: mov ecx, eax */
  ecx = eax;
/* 4834b5: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 4834b9: call 0x461123 */
  esp -= 4; W32(esp, 0x4834beu); SPILL(); f_461123(); if (g_unwind) return; RELOAD();
/* 4834be: mov ecx, edi */
  ecx = edi;
/* 4834c0: mov esi, eax */
  esi = eax;
/* 4834c2: call 0x472198 */
  esp -= 4; W32(esp, 0x4834c7u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4834c7: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4834ca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4834cc: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 4834d2: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4834d5: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4834dau); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4834da: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4834dc: je 0x4834e2 */
  if (zf) goto L_4834e2;
L_4834de: /* 4834de: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4834e0: jmp 0x4834e4 */
  goto L_4834e4;
L_4834e2: /* 4834e2: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_4834e4: /* 4834e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4834e6: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 4834ec: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 4834f0: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4834f5u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4834f5: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4834f7: je 0x483536 */
  if (zf) goto L_483536;
L_4834f9: /* 4834f9: mov ecx, edi */
  ecx = edi;
/* 4834fb: call 0x46c756 */
  esp -= 4; W32(esp, 0x483500u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 483500: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483503: lea eax, [ebp - 0xe8] */
  eax = (uint32_t)(ebp + 0xffffff18u);
/* 483509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48350a: call 0x471ec1 */
  esp -= 4; W32(esp, 0x48350fu); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 48350f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 483511: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483514: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483517: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 48351b: call 0x47a171 */
  esp -= 4; W32(esp, 0x483520u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 483520: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
L_483526: /* 483526: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483528: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 48352c: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483531u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483531: jmp 0x4836f6 */
  goto L_4836f6;
L_483536: /* 483536: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483539: lea eax, [ebp - 0x13c] */
  eax = (uint32_t)(ebp + 0xfffffec4u);
/* 48353f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483540: call 0x471ed8 */
  esp -= 4; W32(esp, 0x483545u); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 483545: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 483549: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 48354d: jbe 0x48358f */
  if ((cf | zf)) goto L_48358f;
L_48354f: /* 48354f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 483552: lea eax, [ebp - 0x104] */
  eax = (uint32_t)(ebp + 0xfffffefcu);
/* 483558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483559: call 0x471ed8 */
  esp -= 4; W32(esp, 0x48355eu); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 48355e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 483560: mov ecx, eax */
  ecx = eax;
/* 483562: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 483566: call 0x461123 */
  esp -= 4; W32(esp, 0x48356bu); SPILL(); f_461123(); if (g_unwind) return; RELOAD();
/* 48356b: mov ecx, edi */
  ecx = edi;
/* 48356d: mov esi, eax */
  esi = eax;
/* 48356f: call 0x472198 */
  esp -= 4; W32(esp, 0x483574u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483574: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483577: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483579: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 48357f: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 483582: call 0x4624b0 */
  esp -= 4; W32(esp, 0x483587u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 483587: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483589: je 0x48358f */
  if (zf) goto L_48358f;
L_48358b: /* 48358b: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 48358d: jmp 0x483591 */
  goto L_483591;
L_48358f: /* 48358f: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_483591: /* 483591: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483593: lea ecx, [ebp - 0x13c] */
  ecx = (uint32_t)(ebp + 0xfffffec4u);
/* 483599: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 48359d: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4835a2u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4835a2: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4835a4: je 0x4836f6 */
  if (zf) goto L_4836f6;
L_4835aa: /* 4835aa: mov ecx, edi */
  ecx = edi;
/* 4835ac: call 0x46c756 */
  esp -= 4; W32(esp, 0x4835b1u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 4835b1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 4835b4: lea eax, [ebp - 0x174] */
  eax = (uint32_t)(ebp + 0xfffffe8cu);
/* 4835ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4835bb: call 0x471ed8 */
  esp -= 4; W32(esp, 0x4835c0u); SPILL(); f_471ed8(); if (g_unwind) return; RELOAD();
/* 4835c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4835c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4835c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4835c5: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 4835c8: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 4835cc: call 0x47a171 */
  esp -= 4; W32(esp, 0x4835d1u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 4835d1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4835d3: lea ecx, [ebp - 0x174] */
  ecx = (uint32_t)(ebp + 0xfffffe8cu);
/* 4835d9: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 4835dd: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4835e2u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4835e2: mov byte ptr [ebp - 0x15], 1 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x1u);
/* 4835e6: jmp 0x4836f6 */
  goto L_4836f6;
L_4835eb: /* 4835eb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 4835ee: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 4835f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4835f5: call 0x471eaa */
  esp -= 4; W32(esp, 0x4835fau); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 4835fa: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4835fd: test byte ptr [eax + 0xc], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 483601: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 483605: jne 0x48364f */
  if (!zf) goto L_48364f;
L_483607: /* 483607: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48360a: jne 0x48364f */
  if (!zf) goto L_48364f;
L_48360c: /* 48360c: cmp dword ptr [ebp - 0x54], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 483610: ja 0x48364f */
  if ((!cf && !zf)) goto L_48364f;
L_483612: /* 483612: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483615: mov ecx, edi */
  ecx = edi;
/* 483617: call 0x46e77f */
  esp -= 4; W32(esp, 0x48361cu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 48361c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48361e: jne 0x483641 */
  if (!zf) goto L_483641;
L_483620: /* 483620: cmp dword ptr [ebp - 0x88], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff78u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483627: mov esi, dword ptr [ebp - 0x9c] */
  esi = R32((uint32_t)(ebp + 0xffffff64u));
/* 48362d: jae 0x483635 */
  if (!cf) goto L_483635;
L_48362f: /* 48362f: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
L_483635: /* 483635: mov ecx, edi */
  ecx = edi;
/* 483637: call 0x472198 */
  esp -= 4; W32(esp, 0x48363cu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 48363c: cmp ax, word ptr [esi] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48363f: je 0x48364f */
  if (zf) goto L_48364f;
L_483641: /* 483641: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 483643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483644: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 48364a: call 0x47349c */
  esp -= 4; W32(esp, 0x48364fu); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
L_48364f: /* 48364f: cmp dword ptr [ebp - 0x88], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff78u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483656: mov esi, dword ptr [ebp - 0x9c] */
  esi = R32((uint32_t)(ebp + 0xffffff64u));
/* 48365c: jae 0x483691 */
  if (!cf) goto L_483691;
L_48365e: /* 48365e: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 483664: jmp 0x483691 */
  goto L_483691;
L_483666: /* 483666: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 48366c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48366d: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 483673: call 0x46adc2 */
  esp -= 4; W32(esp, 0x483678u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 483678: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48367a: je 0x48369f */
  if (zf) goto L_48369f;
L_48367c: /* 48367c: mov ecx, edi */
  ecx = edi;
/* 48367e: call 0x472198 */
  esp -= 4; W32(esp, 0x483683u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483683: cmp ax, word ptr [esi] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 483686: jne 0x48369f */
  if (!zf) goto L_48369f;
L_483688: /* 483688: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 483689: mov ecx, edi */
  ecx = edi;
/* 48368b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 48368c: call 0x46c756 */
  esp -= 4; W32(esp, 0x483691u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_483691: /* 483691: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483694: mov ecx, edi */
  ecx = edi;
/* 483696: call 0x46e77f */
  esp -= 4; W32(esp, 0x48369bu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 48369b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48369d: je 0x483666 */
  if (zf) goto L_483666;
L_48369f: /* 48369f: lea eax, [ebp - 0xc4] */
  eax = (uint32_t)(ebp + 0xffffff3cu);
/* 4836a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4836a6: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 4836ac: call 0x46adc2 */
  esp -= 4; W32(esp, 0x4836b1u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 4836b1: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4836b3: je 0x4836b9 */
  if (zf) goto L_4836b9;
L_4836b5: /* 4836b5: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_4836b9: /* 4836b9: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 4836bf: jmp 0x483526 */
  goto L_483526;
L_4836c4: /* 4836c4: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4836c7: je 0x4836f6 */
  if (zf) goto L_4836f6;
L_4836c9: /* 4836c9: jmp 0x4836e8 */
  goto L_4836e8;
L_4836cb: /* 4836cb: mov ecx, edi */
  ecx = edi;
/* 4836cd: call 0x472198 */
  esp -= 4; W32(esp, 0x4836d2u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 4836d2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4836d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4836d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4836d8: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 4836da: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x4836ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4836dd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4836df: je 0x4836f6 */
  if (zf) goto L_4836f6;
L_4836e1: /* 4836e1: mov ecx, edi */
  ecx = edi;
/* 4836e3: call 0x46c756 */
  esp -= 4; W32(esp, 0x4836e8u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_4836e8: /* 4836e8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4836eb: mov ecx, edi */
  ecx = edi;
/* 4836ed: call 0x46e77f */
  esp -= 4; W32(esp, 0x4836f2u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 4836f2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4836f4: je 0x4836cb */
  if (zf) goto L_4836cb;
L_4836f6: /* 4836f6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 4836f9: xor ebx, ebx */
  ebx = 0;
/* 4836fb: cmp byte ptr [ebp + 0x17], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4836fe: je 0x48316d */
  if (zf) goto L_48316d;
L_483704: /* 483704: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483708: jne 0x483761 */
  if (!zf) goto L_483761;
L_48370a: /* 48370a: cmp dword ptr [ebp - 0x54], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48370e: jbe 0x483771 */
  if ((cf | zf)) goto L_483771;
L_483710: /* 483710: cmp dword ptr [ebp - 0x50], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 483714: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 483717: jae 0x483743 */
  if (!cf) goto L_483743;
L_483719: /* 483719: lea esi, [ebp - 0x64] */
  esi = (uint32_t)(ebp + 0xffffff9cu);
/* 48371c: jmp 0x483743 */
  goto L_483743;
L_48371e: /* 48371e: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 483721: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483722: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483725: call 0x46adc2 */
  esp -= 4; W32(esp, 0x48372au); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 48372a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 48372b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 48372c: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48372e: je 0x483751 */
  if (zf) goto L_483751;
L_483730: /* 483730: mov ecx, edi */
  ecx = edi;
/* 483732: call 0x472198 */
  esp -= 4; W32(esp, 0x483737u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 483737: cmp ax, word ptr [esi] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48373a: jne 0x483751 */
  if (!zf) goto L_483751;
L_48373c: /* 48373c: mov ecx, edi */
  ecx = edi;
/* 48373e: call 0x46c756 */
  esp -= 4; W32(esp, 0x483743u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_483743: /* 483743: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 483746: mov ecx, edi */
  ecx = edi;
/* 483748: call 0x46e77f */
  esp -= 4; W32(esp, 0x48374du); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 48374d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48374f: je 0x48371e */
  if (zf) goto L_48371e;
L_483751: /* 483751: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 483754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483755: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 483758: call 0x46adc2 */
  esp -= 4; W32(esp, 0x48375du); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 48375d: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48375f: je 0x483771 */
  if (zf) goto L_483771;
L_483761: /* 483761: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 483763: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483764: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 48376a: call 0x47349c */
  esp -= 4; W32(esp, 0x48376fu); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 48376f: jmp 0x48378e */
  goto L_48378e;
L_483771: /* 483771: cmp byte ptr [ebp - 0x15], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffebu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 483775: je 0x48378e */
  if (zf) goto L_48378e;
L_483777: /* 483777: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 483779: call 0x461d6f */
  esp -= 4; W32(esp, 0x48377eu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 48377e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48377f: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 483785: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483786: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 483788: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 483789: call 0x4733c4 */
  esp -= 4; W32(esp, 0x48378eu); SPILL(); f_4733c4(); if (g_unwind) return; RELOAD();
L_48378e: /* 48378e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 483791: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 483797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 483798: call 0x47d83c */
  esp -= 4; W32(esp, 0x48379du); SPILL(); f_47d83c(); if (g_unwind) return; RELOAD();
/* 48379d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48379f: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4837a5: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4837aau); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4837aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4837ac: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 4837af: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4837b4u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4837b4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4837b7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4837ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4837c1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4837c4: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4837c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4837c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4837c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4837ca: call 0x46190c */
  esp -= 4; W32(esp, 0x4837cfu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4837cf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4837d0: ret 0x14 */
  esp += 24; SPILL(); return;
}
