#include "recomp.h"
#include "rec_mod.h"

void f_963010(void) {
  LOAD_REGS();
L_963010: /* 963010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963011: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 963015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963016: call 0x94f340 */
  esp -= 4; W32(esp, 0x96301bu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96301b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96301c: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x963021u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 963021: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963024: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963026: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 96302a: je 0x963050 */
  if (zf) goto L_963050;
L_96302c: /* 96302c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96302f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 963032: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963034: je 0x963050 */
  if (zf) goto L_963050;
L_963036: /* 963036: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 963039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96303a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 96303e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96303f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 963042: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x963047u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 963047: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 963049: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96304c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96304e: jne 0x963036 */
  if (!zf) goto L_963036;
L_963050: /* 963050: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 963054: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963059: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96305a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96305b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96305c: call 0x965190 */
  esp -= 4; W32(esp, 0x963061u); SPILL(); f_965190(); if (g_unwind) return; RELOAD();
/* 963061: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 963065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963066: mov esi, eax */
  esi = eax;
/* 963068: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96306du); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96306d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963070: mov eax, esi */
  eax = esi;
/* 963072: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963073: ret  */
  esp += 4; SPILL(); return;
}

void f_963080(void) {
  LOAD_REGS();
L_963080: /* 963080: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963083: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963088: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963089: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96308a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96308b: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 963092: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 963093: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963094: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 96309c: call 0x9538c0 */
  esp -= 4; W32(esp, 0x9630a1u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 9630a1: mov ebp, eax */
  ebp = eax;
/* 9630a3: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 9630a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9630ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9630ad: je 0x9631b6 */
  if (zf) goto L_9631b6;
L_9630b3: /* 9630b3: mov edi, eax */
  edi = eax;
/* 9630b5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9630b7: je 0x9631b6 */
  if (zf) goto L_9631b6;
L_9630bd: /* 9630bd: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 9630c1: jmp 0x9630c8 */
  goto L_9630c8;
L_9630c3: /* 9630c3: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
L_9630c8: /* 9630c8: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 9630cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9630cd: je 0x9631b6 */
  if (zf) goto L_9631b6;
L_9630d3: /* 9630d3: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9630d5: jne 0x963109 */
  if (!zf) goto L_963109;
L_9630d7: /* 9630d7: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 9630dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9630df: je 0x963154 */
  if (zf) goto L_963154;
L_9630e1: /* 9630e1: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 9630e4: fld dword ptr [edx + ecx*4 - 4] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 9630e8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9630e9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9630ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9630f1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9630f4: jne 0x9630fd */
  if (!zf) goto L_9630fd;
L_9630f6: /* 9630f6: mov eax, 1 */
  eax = 0x1u;
/* 9630fb: jmp 0x9630ff */
  goto L_9630ff;
L_9630fd: /* 9630fd: xor eax, eax */
  eax = 0;
L_9630ff: /* 9630ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963101: mov dword ptr [ebp + ecx*4], eax */
  W32((uint32_t)(ebp + ecx*4), eax);
/* 963105: jne 0x9630e1 */
  if (!zf) goto L_9630e1;
L_963107: /* 963107: jmp 0x963154 */
  goto L_963154;
L_963109: /* 963109: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96310d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96310f: jne 0x963154 */
  if (!zf) goto L_963154;
L_963111: /* 963111: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 963117: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963119: je 0x963154 */
  if (zf) goto L_963154;
L_96311b: /* 96311b: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* 96311e: lea ecx, [ebp + edx*4] */
  ecx = (uint32_t)(ebp + edx*4);
/* 963122: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_963124: /* 963124: fld dword ptr [esi + ecx - 4] */
  { double v = F32((uint32_t)(esi + ecx + 0xfffffffcu)); FPUSH(v); }
/* 963128: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96312b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 963131: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 963132: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963134: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963137: jne 0x963140 */
  if (!zf) goto L_963140;
L_963139: /* 963139: mov eax, 1 */
  eax = 0x1u;
/* 96313e: jmp 0x963142 */
  goto L_963142;
L_963140: /* 963140: xor eax, eax */
  eax = 0;
L_963142: /* 963142: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963144: jne 0x96314c */
  if (!zf) goto L_96314c;
L_963146: /* 963146: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963148: jne 0x963124 */
  if (!zf) goto L_963124;
L_96314a: /* 96314a: jmp 0x963154 */
  goto L_963154;
L_96314c: /* 96314c: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
L_963154: /* 963154: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 963157: cmp eax, dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96315d: je 0x9631ab */
  if (zf) goto L_9631ab;
L_96315f: /* 96315f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 963163: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 963167: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963168: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 963169: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96316a: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96316fu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96316f: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 963173: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 963177: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 963179: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96317c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96317d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 96317f: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 963181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963183: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963186: jne 0x9631ab */
  if (!zf) goto L_9631ab;
L_963188: /* 963188: test byte ptr [edi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96318c: je 0x96319f */
  if (zf) goto L_96319f;
L_96318e: /* 96318e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 963192: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 963198: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96319a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96319d: jne 0x9631ab */
  if (!zf) goto L_9631ab;
L_96319f: /* 96319f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9631a3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9631a7: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 9631a9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_9631ab: /* 9631ab: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 9631ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9631b0: jne 0x9630c3 */
  if (!zf) goto L_9630c3;
L_9631b6: /* 9631b6: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 9631bc: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 9631c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9631c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9631c5: call 0x953a60 */
  esp -= 4; W32(esp, 0x9631cau); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 9631ca: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9631ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9631d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9631d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9631d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9631d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9631d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9631d8: ret  */
  esp += 4; SPILL(); return;
}

void f_9631e0(void) {
  LOAD_REGS();
L_9631e0: /* 9631e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9631e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9631e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9631e5: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 9631e9: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 9631ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9631ed: xor ebx, ebx */
  ebx = 0;
/* 9631ef: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9631f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9631f5: mov dword ptr [esp + 0x10], 0xff7fffff */
  W32((uint32_t)(esp + 0x10u), 0xff7fffffu);
/* 9631fd: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 963205: je 0x963230 */
  if (zf) goto L_963230;
L_963207: /* 963207: mov ebx, dword ptr [0xcf7808] */
  ebx = R32((uint32_t)(0xcf7808u));
/* 96320d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 963211: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 963215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963216: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963217: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 963218: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963219: mov dword ptr [0xcf7808], ebx */
  W32((uint32_t)(0xcf7808u), ebx);
/* 96321f: call 0x96fa90 */
  esp -= 4; W32(esp, 0x963224u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 963224: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963227: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 96322b: mov ebx, 1 */
  ebx = 0x1u;
L_963230: /* 963230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963231: call 0x95f280 */
  esp -= 4; W32(esp, 0x963236u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 963236: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963237: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x96323cu); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 96323c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 963240: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 963242: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 963248: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96324b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96324c: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 963252: mov dword ptr [ebp + 0x34], ecx */
  W32((uint32_t)(ebp + 0x34u), ecx);
/* 963255: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 963257: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963259: je 0x963336 */
  if (zf) goto L_963336;
L_96325f: /* 96325f: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_963263: /* 963263: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 963267: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 96326a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96326c: je 0x963336 */
  if (zf) goto L_963336;
L_963272: /* 963272: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 963275: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963277: je 0x963327 */
  if (zf) goto L_963327;
L_96327d: /* 96327d: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 963280: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963282: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 963285: je 0x963327 */
  if (zf) goto L_963327;
L_96328b: /* 96328b: nop  */
/* 96328c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_963290: /* 963290: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 963295: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 963298: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96329b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96329d: je 0x963319 */
  if (zf) goto L_963319;
L_96329f: /* 96329f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9632a1: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 9632a4: je 0x9632af */
  if (zf) goto L_9632af;
L_9632a6: /* 9632a6: test dword ptr [esi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9632ad: je 0x963319 */
  if (zf) goto L_963319;
L_9632af: /* 9632af: mov ecx, dword ptr [0xcf7808] */
  ecx = R32((uint32_t)(0xcf7808u));
/* 9632b5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9632b9: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 9632bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9632be: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9632bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9632c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9632c1: mov dword ptr [0xcf7808], ecx */
  W32((uint32_t)(0xcf7808u), ecx);
/* 9632c7: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9632ccu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9632cc: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9632d0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9632d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9632d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9632db: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9632de: jne 0x963319 */
  if (!zf) goto L_963319;
L_9632e0: /* 9632e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9632e1: call 0x95f280 */
  esp -= 4; W32(esp, 0x9632e6u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 9632e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9632e7: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x9632ecu); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 9632ec: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9632ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9632f2: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9632f7: je 0x963319 */
  if (zf) goto L_963319;
L_9632f9: /* 9632f9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9632fd: mov ebx, 1 */
  ebx = 0x1u;
/* 963302: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 963306: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963308: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96330b: jne 0x963319 */
  if (!zf) goto L_963319;
L_96330d: /* 96330d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 963311: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 963315: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_963319: /* 963319: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 96331b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96331d: jne 0x963290 */
  if (!zf) goto L_963290;
L_963323: /* 963323: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
L_963327: /* 963327: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 96332a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96332c: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 963330: jne 0x963263 */
  if (!zf) goto L_963263;
L_963336: /* 963336: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 96333a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96333c: je 0x96338c */
  if (zf) goto L_96338c;
L_96333e: /* 96333e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 963342: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 963346: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 963348: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96334d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963350: jl 0x963382 */
  if ((sf != of)) goto L_963382;
L_963352: /* 963352: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 963355: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 963359: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96335d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96335e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963361: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 963364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963365: call 0x95f210 */
  esp -= 4; W32(esp, 0x96336au); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96336a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 963370: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963373: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963374: push 0xafced4 */
  { uint32_t v = 0xafced4u; esp -= 4; W32(esp, v); }
/* 963379: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96337a: call 0x953470 */
  esp -= 4; W32(esp, 0x96337fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96337f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963382: /* 963382: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 963383: mov eax, esi */
  eax = esi;
/* 963385: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963386: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 963387: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 963388: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96338b: ret  */
  esp += 4; SPILL(); return;
L_96338c: /* 96338c: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963393: jl 0x9633bb */
  if ((sf != of)) goto L_9633bb;
L_963395: /* 963395: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 963398: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96339c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96339d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96339e: call 0x95f210 */
  esp -= 4; W32(esp, 0x9633a3u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9633a3: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9633a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9633ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9633ad: push 0xafcea0 */
  { uint32_t v = 0xafcea0u; esp -= 4; W32(esp, v); }
/* 9633b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9633b3: call 0x953470 */
  esp -= 4; W32(esp, 0x9633b8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9633b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9633bb: /* 9633bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9633bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9633bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9633be: xor eax, eax */
  eax = 0;
/* 9633c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9633c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9633c4: ret  */
  esp += 4; SPILL(); return;
}

void f_9633d0(void) {
  LOAD_REGS();
L_9633d0: /* 9633d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9633d1: mov eax, dword ptr [0xcf855c] */
  eax = R32((uint32_t)(0xcf855cu));
/* 9633d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9633d8: je 0x9633e7 */
  if (zf) goto L_9633e7;
L_9633da: /* 9633da: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9633df: push 0xafcf40 */
  { uint32_t v = 0xafcf40u; esp -= 4; W32(esp, v); }
/* 9633e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9633e5: jmp 0x9633fc */
  goto L_9633fc;
L_9633e7: /* 9633e7: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9633ee: jl 0x963404 */
  if ((sf != of)) goto L_963404;
L_9633f0: /* 9633f0: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9633f6: push 0xafcf08 */
  { uint32_t v = 0xafcf08u; esp -= 4; W32(esp, v); }
/* 9633fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_9633fc: /* 9633fc: call 0x953470 */
  esp -= 4; W32(esp, 0x963401u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963401: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963404: /* 963404: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963405: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 963409: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96340b: mov dword ptr [0xcf8bf4], 0 */
  W32((uint32_t)(0xcf8bf4u), 0x0u);
/* 963415: mov dword ptr [0xcf8bf0], 0 */
  W32((uint32_t)(0xcf8bf0u), 0x0u);
/* 96341f: je 0x963533 */
  if (zf) goto L_963533;
L_963425: /* 963425: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 963428: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96342a: je 0x963533 */
  if (zf) goto L_963533;
L_963430: /* 963430: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 963433: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963435: je 0x963528 */
  if (zf) goto L_963528;
L_96343b: /* 96343b: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96343f: je 0x96344e */
  if (zf) goto L_96344e;
L_963441: /* 963441: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 963446: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963448: jne 0x963528 */
  if (!zf) goto L_963528;
L_96344e: /* 96344e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96344f: call 0x962cd0 */
  esp -= 4; W32(esp, 0x963454u); SPILL(); f_962cd0(); if (g_unwind) return; RELOAD();
/* 963454: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 963458: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 96345b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96345f: or ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 963465: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 963468: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 96346b: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 963470: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963473: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963475: je 0x96349b */
  if (zf) goto L_96349b;
L_963477: /* 963477: mov ecx, dword ptr [0xcf85a4] */
  ecx = R32((uint32_t)(0xcf85a4u));
/* 96347d: xor eax, eax */
  eax = 0;
/* 96347f: mov al, byte ptr [esi + 0x3e] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3eu))) & 0xffu);
/* 963482: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 963485: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963487: jne 0x9634da */
  if (!zf) goto L_9634da;
L_963489: /* 963489: fld dword ptr [0xcf8bf0] */
  { double v = F32((uint32_t)(0xcf8bf0u)); FPUSH(v); }
/* 96348f: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 963493: fstp dword ptr [0xcf8bf0] */
  WF32((uint32_t)(0xcf8bf0u), ST0); FPOP();
/* 963499: jmp 0x9634da */
  goto L_9634da;
L_96349b: /* 96349b: fld dword ptr [0xcf8bf0] */
  { double v = F32((uint32_t)(0xcf8bf0u)); FPUSH(v); }
/* 9634a1: mov edx, dword ptr [0xcf8b3c] */
  edx = R32((uint32_t)(0xcf8b3cu));
/* 9634a7: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 9634ab: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 9634af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9634b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9634b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9634b2: fstp dword ptr [0xcf8bf0] */
  WF32((uint32_t)(0xcf8bf0u), ST0); FPOP();
/* 9634b8: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9634bdu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9634bd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9634c1: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 9634c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9634c8: fidiv dword ptr [0xcf85cc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(0xcf85ccu)));
/* 9634ce: fsubr dword ptr [0xcf8bf4] */
  ST0 = (F32((uint32_t)(0xcf8bf4u))) - ST0;
/* 9634d4: fstp dword ptr [0xcf8bf4] */
  WF32((uint32_t)(0xcf8bf4u), ST0); FPOP();
L_9634da: /* 9634da: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 9634df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9634e1: je 0x963528 */
  if (zf) goto L_963528;
L_9634e3: /* 9634e3: fld dword ptr [0xcf77e0] */
  { double v = F32((uint32_t)(0xcf77e0u)); FPUSH(v); }
/* 9634e9: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 9634ed: fstp dword ptr [0xcf77e0] */
  WF32((uint32_t)(0xcf77e0u), ST0); FPOP();
/* 9634f3: fld dword ptr [0xcf77e4] */
  { double v = F32((uint32_t)(0xcf77e4u)); FPUSH(v); }
/* 9634f9: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 9634fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9634ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963502: jp 0x96350d */
  if (pf) goto L_96350d;
L_963504: /* 963504: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 963508: mov dword ptr [0xcf77e4], eax */
  W32((uint32_t)(0xcf77e4u), eax);
L_96350d: /* 96350d: fld dword ptr [0xcf77e8] */
  { double v = F32((uint32_t)(0xcf77e8u)); FPUSH(v); }
/* 963513: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 963517: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963519: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96351c: jne 0x963528 */
  if (!zf) goto L_963528;
L_96351e: /* 96351e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 963522: mov dword ptr [0xcf77e8], ecx */
  W32((uint32_t)(0xcf77e8u), ecx);
L_963528: /* 963528: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 96352b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96352d: jne 0x963425 */
  if (!zf) goto L_963425;
L_963533: /* 963533: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963534: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 963535: ret  */
  esp += 4; SPILL(); return;
}

void f_963540(void) {
  LOAD_REGS();
L_963540: /* 963540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963541: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963542: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963543: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 963547: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 963549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96354a: jle 0x963617 */
  if ((zf || sf != of)) goto L_963617;
L_963550: /* 963550: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 963554: mov ebx, 1 */
  ebx = 0x1u;
/* 963559: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 96355d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_963560: /* 963560: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963562: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 963568: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96356c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 96356e: je 0x963582 */
  if (zf) goto L_963582;
L_963570: /* 963570: mov eax, esi */
  eax = esi;
L_963572: /* 963572: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 963574: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 963577: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 963578: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 96357a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 96357c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 96357e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 963580: jne 0x963572 */
  if (!zf) goto L_963572;
L_963582: /* 963582: fsqrt  */
  ST0 = sqrt(ST0);
/* 963584: fld dword ptr [0xcf798c] */
  { double v = F32((uint32_t)(0xcf798cu)); FPUSH(v); }
/* 96358a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 96358c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96358e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963591: jne 0x963599 */
  if (!zf) goto L_963599;
L_963593: /* 963593: fst dword ptr [0xcf798c] */
  WF32((uint32_t)(0xcf798cu), ST0);
L_963599: /* 963599: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 96359f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9635a1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9635a4: jnp 0x963621 */
  if (!pf) goto L_963621;
L_9635a6: /* 9635a6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9635a8: je 0x9635be */
  if (zf) goto L_9635be;
L_9635aa: /* 9635aa: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9635b0: mov eax, esi */
  eax = esi;
L_9635b2: /* 9635b2: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9635b5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9635b7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9635b8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9635ba: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9635bc: jne 0x9635b2 */
  if (!zf) goto L_9635b2;
L_9635be: /* 9635be: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9635c0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9635c2: mov edi, ebx */
  edi = ebx;
/* 9635c4: jge 0x963600 */
  if ((sf == of)) goto L_963600;
L_9635c6: /* 9635c6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9635c8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9635ce: mov eax, dword ptr [ebp + edi*4] */
  eax = R32((uint32_t)(ebp + edi*4));
/* 9635d2: je 0x9635f9 */
  if (zf) goto L_9635f9;
L_9635d4: /* 9635d4: mov edx, esi */
  edx = esi;
L_9635d6: /* 9635d6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9635d8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9635db: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 9635de: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9635e1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9635e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9635e4: jne 0x9635d6 */
  if (!zf) goto L_9635d6;
L_9635e6: /* 9635e6: mov edx, esi */
  edx = esi;
L_9635e8: /* 9635e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9635ea: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9635ed: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9635ef: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9635f2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9635f3: fsubr dword ptr [eax] */
  ST0 = (F32((uint32_t)(eax))) - ST0;
/* 9635f5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9635f7: jne 0x9635e8 */
  if (!zf) goto L_9635e8;
L_9635f9: /* 9635f9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9635fa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9635fc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9635fe: jl 0x9635c6 */
  if ((sf != of)) goto L_9635c6;
L_963600: /* 963600: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 963604: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 963607: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 963608: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
/* 96360b: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96360d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 963611: jl 0x963560 */
  if ((sf != of)) goto L_963560;
L_963617: /* 963617: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 963618: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963619: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96361a: mov eax, 1 */
  eax = 0x1u;
/* 96361f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 963620: ret  */
  esp += 4; SPILL(); return;
L_963621: /* 963621: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 963622: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 963624: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963625: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 963626: xor eax, eax */
  eax = 0;
/* 963628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 963629: ret  */
  esp += 4; SPILL(); return;
}

void f_963630(void) {
  LOAD_REGS();
L_963630: /* 963630: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 963634: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963636: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 963637: mov edi, 1 */
  edi = 0x1u;
/* 96363c: je 0x963644 */
  if (zf) goto L_963644;
L_96363e: /* 96363e: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_963644: /* 963644: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963649: xor ecx, ecx */
  ecx = 0;
/* 96364b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96364d: jle 0x9636fa */
  if ((zf || sf != of)) goto L_9636fa;
L_963653: /* 963653: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963655: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 963659: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_963660: /* 963660: mov eax, dword ptr [0xcf89fc] */
  eax = R32((uint32_t)(0xcf89fcu));
/* 963665: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 963668: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 96366c: fcomp dword ptr [0xa216c4] */
  fpu_com(ST0, F32((uint32_t)(0xa216c4u)));
  FPOP();
/* 963672: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963674: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963677: jne 0x9636a7 */
  if (!zf) goto L_9636a7;
L_963679: /* 963679: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 96367c: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 963680: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963682: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963685: jp 0x963689 */
  if (pf) goto L_963689;
L_963687: /* 963687: xor edi, edi */
  edi = 0;
L_963689: /* 963689: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96368b: je 0x9636a7 */
  if (zf) goto L_9636a7;
L_96368d: /* 96368d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 963691: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 963694: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 96369a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96369c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96369f: jp 0x9636a3 */
  if (pf) goto L_9636a3;
L_9636a1: /* 9636a1: fchs  */
  ST0 = -ST0;
L_9636a3: /* 9636a3: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 9636a5: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
L_9636a7: /* 9636a7: mov ebx, dword ptr [0xcf89f8] */
  ebx = R32((uint32_t)(0xcf89f8u));
/* 9636ad: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 9636b0: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9636b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9636b8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9636bb: jp 0x9636ea */
  if (pf) goto L_9636ea;
L_9636bd: /* 9636bd: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 9636c0: fcom dword ptr [esi + ecx*4] */
  fpu_com(ST0, F32((uint32_t)(esi + ecx*4)));
/* 9636c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9636c5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9636c8: jp 0x9636cc */
  if (pf) goto L_9636cc;
L_9636ca: /* 9636ca: xor edi, edi */
  edi = 0;
L_9636cc: /* 9636cc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9636ce: je 0x9636e8 */
  if (zf) goto L_9636e8;
L_9636d0: /* 9636d0: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 9636d3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9636d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9636db: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9636de: jp 0x9636e2 */
  if (pf) goto L_9636e2;
L_9636e0: /* 9636e0: fchs  */
  ST0 = -ST0;
L_9636e2: /* 9636e2: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 9636e4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9636e6: jmp 0x9636ea */
  goto L_9636ea;
L_9636e8: /* 9636e8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9636ea: /* 9636ea: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9636ef: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9636f0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9636f2: jl 0x963660 */
  if ((sf != of)) goto L_963660;
L_9636f8: /* 9636f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9636f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_9636fa: /* 9636fa: mov eax, edi */
  eax = edi;
/* 9636fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9636fd: ret  */
  esp += 4; SPILL(); return;
}

void f_963700(void) {
  LOAD_REGS();
L_963700: /* 963700: mov eax, dword ptr [0xcf85e0] */
  eax = R32((uint32_t)(0xcf85e0u));
/* 963705: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963708: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96370a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96370b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96370c: mov esi, 1 */
  esi = 0x1u;
/* 963711: jne 0x9637c3 */
  if (!zf) goto L_9637c3;
L_963717: /* 963717: mov eax, dword ptr [0xcf85d8] */
  eax = R32((uint32_t)(0xcf85d8u));
/* 96371c: mov ecx, dword ptr [0xcf85dc] */
  ecx = R32((uint32_t)(0xcf85dcu));
/* 963722: mov dword ptr [0xcf85e0], eax */
  W32((uint32_t)(0xcf85e0u), eax);
/* 963727: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96372c: imul eax, dword ptr [0xcf85d4] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xcf85d4u)));
  eax = (uint32_t)r;
  }
/* 963733: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 963736: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963737: mov dword ptr [0xcf85e4], ecx */
  W32((uint32_t)(0xcf85e4u), ecx);
/* 96373d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x963743u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 963743: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963745: mov dword ptr [0xcf85d8], eax */
  W32((uint32_t)(0xcf85d8u), eax);
/* 96374a: jne 0x963771 */
  if (!zf) goto L_963771;
L_96374c: /* 96374c: mov edx, dword ptr [0xcf85d4] */
  edx = R32((uint32_t)(0xcf85d4u));
/* 963752: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 963757: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963758: push 0xafd058 */
  { uint32_t v = 0xafd058u; esp -= 4; W32(esp, v); }
/* 96375d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96375e: call 0x953470 */
  esp -= 4; W32(esp, 0x963763u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963763: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963765: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963767: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 963769: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96376eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96376e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963771: /* 963771: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 963777: mov dword ptr [0xcf85dc], esi */
  W32((uint32_t)(0xcf85dcu), esi);
/* 96377d: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 963783: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963785: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963788: jp 0x963829 */
  if (pf) goto L_963829;
L_96378e: /* 96378e: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 963794: mov edx, dword ptr [0xcf85d4] */
  edx = R32((uint32_t)(0xcf85d4u));
/* 96379a: mov eax, dword ptr [0xcf85e0] */
  eax = R32((uint32_t)(0xcf85e0u));
/* 96379f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9637a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9637a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9637a2: call 0x962350 */
  esp -= 4; W32(esp, 0x9637a7u); SPILL(); f_962350(); if (g_unwind) return; RELOAD();
/* 9637a7: fstp dword ptr [0xcf8bb4] */
  WF32((uint32_t)(0xcf8bb4u), ST0); FPOP();
/* 9637ad: push 0xcf8bb4 */
  { uint32_t v = 0xcf8bb4u; esp -= 4; W32(esp, v); }
/* 9637b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9637b4: push 0xaf4c7c */
  { uint32_t v = 0xaf4c7cu; esp -= 4; W32(esp, v); }
/* 9637b9: call 0x953320 */
  esp -= 4; W32(esp, 0x9637beu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9637be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9637c1: jmp 0x963829 */
  goto L_963829;
L_9637c3: /* 9637c3: mov eax, dword ptr [0xcf8564] */
  eax = R32((uint32_t)(0xcf8564u));
/* 9637c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9637ca: jne 0x963815 */
  if (!zf) goto L_963815;
L_9637cc: /* 9637cc: cmp dword ptr [0xcf8ba4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9637d3: jle 0x963815 */
  if ((zf || sf != of)) goto L_963815;
L_9637d5: /* 9637d5: fld dword ptr [0xcf8a24] */
  { double v = F32((uint32_t)(0xcf8a24u)); FPUSH(v); }
/* 9637db: fmul qword ptr [0xa07620] */
  ST0 = ST0 * (F64((uint32_t)(0xa07620u)));
/* 9637e1: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9637e7: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9637e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9637eb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9637ee: jp 0x963813 */
  if (pf) goto L_963813;
L_9637f0: /* 9637f0: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9637f6: fmul qword ptr [0xa176f0] */
  ST0 = ST0 * (F64((uint32_t)(0xa176f0u)));
/* 9637fc: fst dword ptr [0xcf8bb4] */
  WF32((uint32_t)(0xcf8bb4u), ST0);
/* 963802: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 963804: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963806: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963809: jne 0x963813 */
  if (!zf) goto L_963813;
L_96380b: /* 96380b: fstp dword ptr [0xcf8bb4] */
  WF32((uint32_t)(0xcf8bb4u), ST0); FPOP();
/* 963811: jmp 0x963815 */
  goto L_963815;
L_963813: /* 963813: fstp st(0) */
  STI(0) = ST0; FPOP();
L_963815: /* 963815: push 0xcf8bb4 */
  { uint32_t v = 0xcf8bb4u; esp -= 4; W32(esp, v); }
/* 96381a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96381c: push 0xaf4c7c */
  { uint32_t v = 0xaf4c7cu; esp -= 4; W32(esp, v); }
/* 963821: call 0x953320 */
  esp -= 4; W32(esp, 0x963826u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 963826: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963829: /* 963829: cmp dword ptr [0xcf8ba4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96382f: jle 0x96388e */
  if ((zf || sf != of)) goto L_96388e;
L_963831: /* 963831: fld dword ptr [0xcf8a24] */
  { double v = F32((uint32_t)(0xcf8a24u)); FPUSH(v); }
/* 963837: fmul dword ptr [0xa0e1c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e1c0u)));
/* 96383d: fcom qword ptr [0xa15940] */
  fpu_com(ST0, F64((uint32_t)(0xa15940u)));
/* 963843: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963845: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963848: jp 0x963852 */
  if (pf) goto L_963852;
L_96384a: /* 96384a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96384c: fld qword ptr [0xa15940] */
  { double v = F64((uint32_t)(0xa15940u)); FPUSH(v); }
L_963852: /* 963852: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 963858: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 96385a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96385c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96385e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963861: jne 0x96388e */
  if (!zf) goto L_96388e;
L_963863: /* 963863: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 963869: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96386f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963872: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 963875: push 0xafcfc0 */
  { uint32_t v = 0xafcfc0u; esp -= 4; W32(esp, v); }
/* 96387a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96387b: call 0x953470 */
  esp -= 4; W32(esp, 0x963880u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963880: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963882: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963884: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 963886: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96388bu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96388b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96388e: /* 96388e: call 0x964770 */
  esp -= 4; W32(esp, 0x963893u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 963893: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963895: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 963899: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96389a: push 0xafcfb0 */
  { uint32_t v = 0xafcfb0u; esp -= 4; W32(esp, v); }
/* 96389f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9638a3: call 0x953320 */
  esp -= 4; W32(esp, 0x9638a8u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9638a8: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9638ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9638b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9638b2: je 0x9638d9 */
  if (zf) goto L_9638d9;
L_9638b4: /* 9638b4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9638b8: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9638be: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9638c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9638c5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9638c8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9638cb: push 0xafcf7c */
  { uint32_t v = 0xafcf7cu; esp -= 4; W32(esp, v); }
/* 9638d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9638d1: call 0x953470 */
  esp -= 4; W32(esp, 0x9638d6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9638d6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9638d9: /* 9638d9: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9638de: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9638e4: fmul qword ptr [0xa216b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa216b0u)));
/* 9638ea: imul eax, dword ptr [0xcf85d4] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xcf85d4u)));
  eax = (uint32_t)r;
  }
/* 9638f1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9638f5: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9638fb: fchs  */
  ST0 = -ST0;
/* 9638fd: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 963901: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963903: mov edi, dword ptr [0xcf85e0] */
  edi = R32((uint32_t)(0xcf85e0u));
/* 963909: mov esi, dword ptr [0xcf85d8] */
  esi = R32((uint32_t)(0xcf85d8u));
/* 96390f: je 0x963939 */
  if (zf) goto L_963939;
L_963911: /* 963911: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963912: mov ebx, eax */
  ebx = eax;
L_963914: /* 963914: call 0x964770 */
  esp -= 4; W32(esp, 0x963919u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 963919: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 96391d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 963921: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 963924: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 963927: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 963928: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 96392c: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 963930: fadd dword ptr [edi - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xfffffffcu)));
/* 963933: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 963936: jne 0x963914 */
  if (!zf) goto L_963914;
L_963938: /* 963938: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_963939: /* 963939: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96393e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963940: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 963941: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963942: je 0x96397e */
  if (zf) goto L_96397e;
L_963944: /* 963944: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 96394a: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 96394f: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 963955: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963957: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963958: mov dword ptr [0xcf8c44], 0x7f7fffff */
  W32((uint32_t)(0xcf8c44u), 0x7f7fffffu);
/* 963962: mov dword ptr [0xcf8c40], 0x7f7fffff */
  W32((uint32_t)(0xcf8c40u), 0x7f7fffffu);
/* 96396c: mov dword ptr [0xcf8c3c], 0x7f7fffff */
  W32((uint32_t)(0xcf8c3cu), 0x7f7fffffu);
/* 963976: call 0x964db0 */
  esp -= 4; W32(esp, 0x96397bu); SPILL(); f_964db0(); if (g_unwind) return; RELOAD();
/* 96397b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96397e: /* 96397e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963981: ret  */
  esp += 4; SPILL(); return;
}

void f_963990(void) {
  LOAD_REGS();
L_963990: /* 963990: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963991: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 963995: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 963999: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96399a: xor esi, esi */
  esi = 0;
/* 96399c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96399e: mov dword ptr [esp + 4], 0xff7fffff */
  W32((uint32_t)(esp + 0x4u), 0xff7fffffu);
/* 9639a6: je 0x9639de */
  if (zf) goto L_9639de;
L_9639a8: /* 9639a8: mov edx, eax */
  edx = eax;
/* 9639aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9639b0: /* 9639b0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9639b2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9639b8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9639ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9639bc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9639bf: jp 0x9639c3 */
  if (pf) goto L_9639c3;
L_9639c1: /* 9639c1: fchs  */
  ST0 = -ST0;
L_9639c3: /* 9639c3: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 9639c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9639c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9639cc: jne 0x9639d6 */
  if (!zf) goto L_9639d6;
L_9639ce: /* 9639ce: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9639d2: mov esi, ecx */
  esi = ecx;
/* 9639d4: jmp 0x9639d8 */
  goto L_9639d8;
L_9639d6: /* 9639d6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9639d8: /* 9639d8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9639db: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9639dc: jne 0x9639b0 */
  if (!zf) goto L_9639b0;
L_9639de: /* 9639de: mov eax, esi */
  eax = esi;
/* 9639e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9639e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9639e2: ret  */
  esp += 4; SPILL(); return;
}

void f_9639f0(void) {
  LOAD_REGS();
L_9639f0: /* 9639f0: mov eax, dword ptr [0xcf89f4] */
  eax = R32((uint32_t)(0xcf89f4u));
/* 9639f5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9639f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9639f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9639fa: xor esi, esi */
  esi = 0;
/* 9639fc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9639fe: mov dword ptr [0xcf8bbc], 0 */
  W32((uint32_t)(0xcf8bbcu), 0x0u);
/* 963a08: mov dword ptr [0xcf8a18], 0 */
  W32((uint32_t)(0xcf8a18u), 0x0u);
/* 963a12: mov dword ptr [0xcf8a24], 0xff7fffff */
  W32((uint32_t)(0xcf8a24u), 0xff7fffffu);
/* 963a1c: mov dword ptr [0xcf8a20], 0 */
  W32((uint32_t)(0xcf8a20u), 0x0u);
/* 963a26: mov dword ptr [0xcf8bc4], 0 */
  W32((uint32_t)(0xcf8bc4u), 0x0u);
/* 963a30: mov dword ptr [0xcf8c04], esi */
  W32((uint32_t)(0xcf8c04u), esi);
/* 963a36: je 0x963a42 */
  if (zf) goto L_963a42;
L_963a38: /* 963a38: mov dword ptr [0xcf8c00], 1 */
  W32((uint32_t)(0xcf8c00u), 0x1u);
L_963a42: /* 963a42: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 963a46: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 963a49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963a4a: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x963a4fu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 963a4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963a52: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963a54: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 963a58: jle 0x963bc3 */
  if ((zf || sf != of)) goto L_963bc3;
L_963a5e: /* 963a5e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963a5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_963a60: /* 963a60: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 963a64: cmp ecx, dword ptr [0xcf8424] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8424u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963a6a: jne 0x963a73 */
  if (!zf) goto L_963a73;
L_963a6c: /* 963a6c: lea edx, [ecx + ebx*4] */
  edx = (uint32_t)(ecx + ebx*4);
/* 963a6f: mov edi, edx */
  edi = edx;
/* 963a71: jmp 0x963a77 */
  goto L_963a77;
L_963a73: /* 963a73: mov edx, ecx */
  edx = ecx;
/* 963a75: mov edi, ecx */
  edi = ecx;
L_963a77: /* 963a77: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963a7c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 963a80: mov ebx, eax */
  ebx = eax;
/* 963a82: imul ebx, dword ptr [esp + 0x20] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x20u)));
  ebx = (uint32_t)r;
  }
/* 963a87: lea ebx, [ebp + ebx*4] */
  ebx = (uint32_t)(ebp + ebx*4);
/* 963a8b: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 963a8d: jae 0x963ac4 */
  if (!cf) goto L_963ac4;
L_963a8f: /* 963a8f: lea ebp, [eax*4] */
  ebp = (uint32_t)(eax*4);
L_963a96: /* 963a96: cmp ecx, dword ptr [0xcf8424] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8424u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963a9c: je 0x963abe */
  if (zf) goto L_963abe;
L_963a9e: /* 963a9e: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* 963aa1: fcomp dword ptr [ecx + esi*4] */
  fpu_com(ST0, F32((uint32_t)(ecx + esi*4)));
  FPOP();
/* 963aa4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963aa6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963aa9: jp 0x963aaf */
  if (pf) goto L_963aaf;
L_963aab: /* 963aab: mov edx, ecx */
  edx = ecx;
/* 963aad: jmp 0x963abe */
  goto L_963abe;
L_963aaf: /* 963aaf: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* 963ab2: fcomp dword ptr [ecx + esi*4] */
  fpu_com(ST0, F32((uint32_t)(ecx + esi*4)));
  FPOP();
/* 963ab5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963ab7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963aba: jne 0x963abe */
  if (!zf) goto L_963abe;
L_963abc: /* 963abc: mov edi, ecx */
  edi = ecx;
L_963abe: /* 963abe: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 963ac0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 963ac2: jb 0x963a96 */
  if (cf) goto L_963a96;
L_963ac4: /* 963ac4: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 963ac8: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 963acb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963acd: jne 0x963ae1 */
  if (!zf) goto L_963ae1;
L_963acf: /* 963acf: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* 963ad2: fstp dword ptr [0xcf8a38] */
  WF32((uint32_t)(0xcf8a38u), ST0); FPOP();
/* 963ad8: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* 963adb: fstp dword ptr [0xcf8a1c] */
  WF32((uint32_t)(0xcf8a1cu), ST0); FPOP();
L_963ae1: /* 963ae1: mov ecx, dword ptr [0xcf8570] */
  ecx = R32((uint32_t)(0xcf8570u));
/* 963ae7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963ae9: je 0x963af7 */
  if (zf) goto L_963af7;
L_963aeb: /* 963aeb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963aed: jne 0x963af7 */
  if (!zf) goto L_963af7;
L_963aef: /* 963aef: fld dword ptr [0xcf8a24] */
  { double v = F32((uint32_t)(0xcf8a24u)); FPUSH(v); }
/* 963af5: jmp 0x963b61 */
  goto L_963b61;
L_963af7: /* 963af7: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* 963afa: fchs  */
  ST0 = -ST0;
/* 963afc: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* 963aff: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 963b01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963b03: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963b06: jnp 0x963b0d */
  if (!pf) goto L_963b0d;
L_963b08: /* 963b08: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 963b0a: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
L_963b0d: /* 963b0d: mov ecx, dword ptr [0xcf8424] */
  ecx = R32((uint32_t)(0xcf8424u));
/* 963b13: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963b15: je 0x963b42 */
  if (zf) goto L_963b42;
L_963b17: /* 963b17: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
/* 963b1a: fchs  */
  ST0 = -ST0;
/* 963b1c: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
/* 963b1f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 963b21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963b23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963b26: jnp 0x963b2d */
  if (!pf) goto L_963b2d;
L_963b28: /* 963b28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 963b2a: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
L_963b2d: /* 963b2d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 963b31: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 963b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963b37: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963b3a: jp 0x963b42 */
  if (pf) goto L_963b42;
L_963b3c: /* 963b3c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 963b3e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_963b42: /* 963b42: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* 963b45: fsub dword ptr [edi + esi*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + esi*4)));
/* 963b48: fld dword ptr [0xcf8a24] */
  { double v = F32((uint32_t)(0xcf8a24u)); FPUSH(v); }
/* 963b4e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 963b50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963b52: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963b55: jp 0x963b5f */
  if (pf) goto L_963b5f;
L_963b57: /* 963b57: fstp dword ptr [0xcf8a24] */
  WF32((uint32_t)(0xcf8a24u), ST0); FPOP();
/* 963b5d: jmp 0x963b61 */
  goto L_963b61;
L_963b5f: /* 963b5f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_963b61: /* 963b61: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 963b67: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 963b69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963b6b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963b6e: jp 0x963b76 */
  if (pf) goto L_963b76;
L_963b70: /* 963b70: fst dword ptr [0xcf8a18] */
  WF32((uint32_t)(0xcf8a18u), ST0);
L_963b76: /* 963b76: fld dword ptr [0xcf8a20] */
  { double v = F32((uint32_t)(0xcf8a20u)); FPUSH(v); }
/* 963b7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963b7d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 963b7f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 963b83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963b84: fstp dword ptr [0xcf8a20] */
  WF32((uint32_t)(0xcf8a20u), ST0); FPOP();
/* 963b8a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 963b8c: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x963b91u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 963b91: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 963b95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 963b96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963b97: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x963b9cu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 963b9c: fld dword ptr [0xcf8a20] */
  { double v = F32((uint32_t)(0xcf8a20u)); FPUSH(v); }
/* 963ba2: fmul dword ptr [0xa21720] */
  ST0 = ST0 * (F32((uint32_t)(0xa21720u)));
/* 963ba8: mov eax, dword ptr [0xcf8a40] */
  eax = R32((uint32_t)(0xcf8a40u));
/* 963bad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963bb0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 963bb1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963bb3: fstp dword ptr [eax + esi*4 - 4] */
  WF32((uint32_t)(eax + esi*4 + 0xfffffffcu), ST0); FPOP();
/* 963bb7: jl 0x963a60 */
  if ((sf != of)) goto L_963a60;
L_963bbd: /* 963bbd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 963bc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 963bc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_963bc3: /* 963bc3: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963bca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963bcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 963bcc: jl 0x963be7 */
  if ((sf != of)) goto L_963be7;
L_963bce: /* 963bce: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 963bd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963bd5: push 0xafd090 */
  { uint32_t v = 0xafd090u; esp -= 4; W32(esp, v); }
/* 963bda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963bdb: call 0x9642f0 */
  esp -= 4; W32(esp, 0x963be0u); SPILL(); f_9642f0(); if (g_unwind) return; RELOAD();
/* 963be0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 963be4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963be7: /* 963be7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963bea: ret  */
  esp += 4; SPILL(); return;
}

void f_963bf0(void) {
  LOAD_REGS();
L_963bf0: /* 963bf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963bf1: fld dword ptr [0xcf8bbc] */
  { double v = F32((uint32_t)(0xcf8bbcu)); FPUSH(v); }
/* 963bf7: fcomp dword ptr [0xcf8a14] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a14u)));
  FPOP();
/* 963bfd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963bff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963c02: jp 0x963c0c */
  if (pf) goto L_963c0c;
L_963c04: /* 963c04: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 963c0a: jmp 0x963c12 */
  goto L_963c12;
L_963c0c: /* 963c0c: fld dword ptr [0xcf8bbc] */
  { double v = F32((uint32_t)(0xcf8bbcu)); FPUSH(v); }
L_963c12: /* 963c12: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 963c18: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 963c1d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963c20: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 963c24: jl 0x963c4d */
  if ((sf != of)) goto L_963c4d;
L_963c26: /* 963c26: fld dword ptr [0xcf8bbc] */
  { double v = F32((uint32_t)(0xcf8bbcu)); FPUSH(v); }
/* 963c2c: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 963c31: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963c34: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 963c38: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 963c3b: push 0xafd0c8 */
  { uint32_t v = 0xafd0c8u; esp -= 4; W32(esp, v); }
/* 963c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963c41: call 0x953470 */
  esp -= 4; W32(esp, 0x963c46u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963c46: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 963c4a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963c4d: /* 963c4d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 963c4e: ret  */
  esp += 4; SPILL(); return;
}

void f_963c50(void) {
  LOAD_REGS();
L_963c50: /* 963c50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963c53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963c54: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 963c58: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 963c5a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963c5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963c5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 963c5d: xor ebp, ebp */
  ebp = 0;
/* 963c5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963c60: xor edi, edi */
  edi = 0;
/* 963c62: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 963c66: mov dword ptr [esp + 0x18], 0x7f7fffff */
  W32((uint32_t)(esp + 0x18u), 0x7f7fffffu);
/* 963c6e: mov dword ptr [esp + 0x14], 0xff7fffff */
  W32((uint32_t)(esp + 0x14u), 0xff7fffffu);
/* 963c76: call 0x94f340 */
  esp -= 4; W32(esp, 0x963c7bu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 963c7b: mov esi, eax */
  esi = eax;
/* 963c7d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963c80: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963c83: jge 0x963de9 */
  if ((sf == of)) goto L_963de9;
L_963c89: /* 963c89: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 963c8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963c8e: call 0x94f340 */
  esp -= 4; W32(esp, 0x963c93u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 963c93: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963c96: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963c99: jl 0x963ce6 */
  if ((sf != of)) goto L_963ce6;
L_963c9b: /* 963c9b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963c9d: je 0x963d48 */
  if (zf) goto L_963d48;
L_963ca3: /* 963ca3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 963ca6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963ca8: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 963cab: je 0x963d48 */
  if (zf) goto L_963d48;
L_963cb1: /* 963cb1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 963cb5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 963cb8: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 963cba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963cbc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963cbf: jp 0x963cc9 */
  if (pf) goto L_963cc9;
L_963cc1: /* 963cc1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 963cc3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 963cc7: mov ebp, ecx */
  ebp = ecx;
L_963cc9: /* 963cc9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 963ccd: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 963ccf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963cd1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963cd4: jne 0x963cde */
  if (!zf) goto L_963cde;
L_963cd6: /* 963cd6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 963cd8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 963cdc: mov edi, ecx */
  edi = ecx;
L_963cde: /* 963cde: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 963ce0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963ce2: jne 0x963cb1 */
  if (!zf) goto L_963cb1;
L_963ce4: /* 963ce4: jmp 0x963d48 */
  goto L_963d48;
L_963ce6: /* 963ce6: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963ceb: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 963cef: mov edx, eax */
  edx = eax;
/* 963cf1: imul edx, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edx = (uint32_t)r;
  }
/* 963cf6: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 963cf9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 963cfb: jae 0x963d48 */
  if (!cf) goto L_963d48;
L_963cfd: /* 963cfd: mov ebx, dword ptr [0xcf8424] */
  ebx = R32((uint32_t)(0xcf8424u));
/* 963d03: lea esi, [eax*4] */
  esi = (uint32_t)(eax*4);
/* 963d0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_963d10: /* 963d10: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963d12: je 0x963d3e */
  if (zf) goto L_963d3e;
L_963d14: /* 963d14: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 963d18: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 963d1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963d1c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963d1f: jp 0x963d29 */
  if (pf) goto L_963d29;
L_963d21: /* 963d21: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 963d23: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 963d27: mov ebp, ecx */
  ebp = ecx;
L_963d29: /* 963d29: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 963d2d: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 963d2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963d31: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963d34: jne 0x963d3e */
  if (!zf) goto L_963d3e;
L_963d36: /* 963d36: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 963d38: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 963d3c: mov edi, ecx */
  edi = ecx;
L_963d3e: /* 963d3e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 963d40: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 963d42: jb 0x963d10 */
  if (cf) goto L_963d10;
L_963d44: /* 963d44: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
L_963d48: /* 963d48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 963d49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963d4a: call 0x94f5d0 */
  esp -= 4; W32(esp, 0x963d4fu); SPILL(); f_94f5d0(); if (g_unwind) return; RELOAD();
/* 963d4f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 963d51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963d52: call 0x94f340 */
  esp -= 4; W32(esp, 0x963d57u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 963d57: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963d5a: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963d5d: jge 0x963d69 */
  if ((sf == of)) goto L_963d69;
L_963d5f: /* 963d5f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963d60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963d61: call 0x94f5d0 */
  esp -= 4; W32(esp, 0x963d66u); SPILL(); f_94f5d0(); if (g_unwind) return; RELOAD();
/* 963d66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963d69: /* 963d69: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 963d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963d6c: call 0x94f340 */
  esp -= 4; W32(esp, 0x963d71u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 963d71: mov esi, eax */
  esi = eax;
/* 963d73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963d76: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963d79: jge 0x963de9 */
  if ((sf == of)) goto L_963de9;
L_963d7b: /* 963d7b: push 0xafd314 */
  { uint32_t v = 0xafd314u; esp -= 4; W32(esp, v); }
/* 963d80: call 0x96f160 */
  esp -= 4; W32(esp, 0x963d85u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 963d85: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963d8a: mov edx, dword ptr [0xcf7a70] */
  edx = R32((uint32_t)(0xcf7a70u));
/* 963d90: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 963d93: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963d96: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963d98: jle 0x963dc9 */
  if ((zf || sf != of)) goto L_963dc9;
L_963d9a: /* 963d9a: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 963d9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963d9f: call 0x94f340 */
  esp -= 4; W32(esp, 0x963da4u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 963da4: add eax, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 963da8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963da9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 963dae: push 0xafd2b0 */
  { uint32_t v = 0xafd2b0u; esp -= 4; W32(esp, v); }
/* 963db3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963db4: call 0x953470 */
  esp -= 4; W32(esp, 0x963db9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963db9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963dbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963dbd: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 963dbf: call 0x9535b0 */
  esp -= 4; W32(esp, 0x963dc4u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 963dc4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963dc7: jmp 0x963de9 */
  goto L_963de9;
L_963dc9: /* 963dc9: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 963dcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963dd0: push 0xafd250 */
  { uint32_t v = 0xafd250u; esp -= 4; W32(esp, v); }
/* 963dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963dd6: call 0x953470 */
  esp -= 4; W32(esp, 0x963ddbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963ddb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963ddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 963ddf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 963de1: call 0x9535b0 */
  esp -= 4; W32(esp, 0x963de6u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 963de6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963de9: /* 963de9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 963ded: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 963df0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963df2: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 963df6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 963dfa: jge 0x963ff6 */
  if ((sf == of)) goto L_963ff6;
L_963e00: /* 963e00: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 963e04: xor ebx, ebx */
  ebx = 0;
/* 963e06: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963e08: mov dword ptr [esp + 0x24], 0xff7fffff */
  W32((uint32_t)(esp + 0x24u), 0xff7fffffu);
/* 963e10: je 0x963e95 */
  if (zf) goto L_963e95;
L_963e16: /* 963e16: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 963e19: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 963e1c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963e1e: je 0x963e95 */
  if (zf) goto L_963e95;
L_963e20: /* 963e20: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 963e24: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 963e27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963e29: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 963e2c: call 0x94eed0 */
  esp -= 4; W32(esp, 0x963e31u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 963e31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963e34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963e36: jne 0x963e7d */
  if (!zf) goto L_963e7d;
L_963e38: /* 963e38: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 963e3c: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 963e3f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 963e43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963e45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963e47: call 0x962a60 */
  esp -= 4; W32(esp, 0x963e4cu); SPILL(); f_962a60(); if (g_unwind) return; RELOAD();
/* 963e4c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 963e52: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963e55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963e57: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963e5a: jp 0x963e5e */
  if (pf) goto L_963e5e;
L_963e5c: /* 963e5c: fchs  */
  ST0 = -ST0;
L_963e5e: /* 963e5e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 963e60: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 963e64: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963e66: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963e69: jne 0x963e7b */
  if (!zf) goto L_963e7b;
L_963e6b: /* 963e6b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 963e6f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 963e73: mov ebx, esi */
  ebx = esi;
/* 963e75: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 963e79: jmp 0x963e7d */
  goto L_963e7d;
L_963e7b: /* 963e7b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_963e7d: /* 963e7d: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 963e7f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963e81: jne 0x963e20 */
  if (!zf) goto L_963e20;
L_963e83: /* 963e83: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963e85: je 0x963e99 */
  if (zf) goto L_963e99;
L_963e87: /* 963e87: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 963e8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963e8d: je 0x963f7f */
  if (zf) goto L_963f7f;
L_963e93: /* 963e93: jmp 0x963e99 */
  goto L_963e99;
L_963e95: /* 963e95: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
L_963e99: /* 963e99: mov ecx, dword ptr [0xcf7a6c] */
  ecx = R32((uint32_t)(0xcf7a6cu));
/* 963e9f: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 963ea4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 963ea5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963ea7: mov dword ptr [0xcf7a6c], ecx */
  W32((uint32_t)(0xcf7a6cu), ecx);
/* 963ead: jne 0x963ece */
  if (!zf) goto L_963ece;
L_963eaf: /* 963eaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963eb1: je 0x963f00 */
  if (zf) goto L_963f00;
L_963eb3: /* 963eb3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 963eb7: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 963ebc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 963ebd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963ebe: push 0xafd20c */
  { uint32_t v = 0xafd20cu; esp -= 4; W32(esp, v); }
/* 963ec3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963ec4: call 0x953470 */
  esp -= 4; W32(esp, 0x963ec9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963ec9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963ecc: jmp 0x963f00 */
  goto L_963f00;
L_963ece: /* 963ece: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963ed0: je 0x963f00 */
  if (zf) goto L_963f00;
L_963ed2: /* 963ed2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 963ed6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963ed9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 963edc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963edd: call 0x95f210 */
  esp -= 4; W32(esp, 0x963ee2u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 963ee2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 963ee6: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 963eec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963ef0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 963ef1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963ef2: push 0xafd1b0 */
  { uint32_t v = 0xafd1b0u; esp -= 4; W32(esp, v); }
/* 963ef7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963ef8: call 0x953470 */
  esp -= 4; W32(esp, 0x963efdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963efd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963f00: /* 963f00: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963f05: imul eax, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  eax = (uint32_t)r;
  }
/* 963f0a: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 963f0e: lea edi, [esi + eax*4] */
  edi = (uint32_t)(esi + eax*4);
/* 963f11: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 963f13: jae 0x963f7f */
  if (!cf) goto L_963f7f;
L_963f15: /* 963f15: cmp esi, dword ptr [0xcf8424] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8424u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 963f1b: je 0x963f73 */
  if (zf) goto L_963f73;
L_963f1d: /* 963f1d: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 963f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963f21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963f22: call 0x94eed0 */
  esp -= 4; W32(esp, 0x963f27u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 963f27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963f2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963f2c: jne 0x963f73 */
  if (!zf) goto L_963f73;
L_963f2e: /* 963f2e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 963f32: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 963f35: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 963f39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963f3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963f3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963f3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 963f3d: call 0x962a60 */
  esp -= 4; W32(esp, 0x963f42u); SPILL(); f_962a60(); if (g_unwind) return; RELOAD();
/* 963f42: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 963f48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963f4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963f4d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 963f50: jp 0x963f54 */
  if (pf) goto L_963f54;
L_963f52: /* 963f52: fchs  */
  ST0 = -ST0;
L_963f54: /* 963f54: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 963f56: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 963f5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 963f5c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 963f5f: jne 0x963f71 */
  if (!zf) goto L_963f71;
L_963f61: /* 963f61: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 963f65: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 963f69: mov ebx, esi */
  ebx = esi;
/* 963f6b: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 963f6f: jmp 0x963f73 */
  goto L_963f73;
L_963f71: /* 963f71: fstp st(0) */
  STI(0) = ST0; FPOP();
L_963f73: /* 963f73: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 963f78: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 963f7b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 963f7d: jb 0x963f15 */
  if (cf) goto L_963f15;
L_963f7f: /* 963f7f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 963f81: jne 0x963fa0 */
  if (!zf) goto L_963fa0;
L_963f83: /* 963f83: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 963f89: push 0xafd168 */
  { uint32_t v = 0xafd168u; esp -= 4; W32(esp, v); }
/* 963f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 963f8f: call 0x953470 */
  esp -= 4; W32(esp, 0x963f94u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963f94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963f95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963f96: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 963f98: call 0x9535b0 */
  esp -= 4; W32(esp, 0x963f9du); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 963f9d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963fa0: /* 963fa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963fa1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 963fa2: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x963fa7u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 963fa7: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 963fac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963faf: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963fb2: jl 0x963fe1 */
  if ((sf != of)) goto L_963fe1;
L_963fb4: /* 963fb4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 963fb8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 963fbc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 963fbf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 963fc0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 963fc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 963fc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 963fc5: call 0x95f210 */
  esp -= 4; W32(esp, 0x963fcau); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 963fca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963fce: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 963fd3: push 0xafd120 */
  { uint32_t v = 0xafd120u; esp -= 4; W32(esp, v); }
/* 963fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 963fd9: call 0x953470 */
  esp -= 4; W32(esp, 0x963fdeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 963fde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_963fe1: /* 963fe1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 963fe5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 963fe9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 963fea: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 963fec: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 963ff0: jl 0x963e00 */
  if ((sf != of)) goto L_963e00;
L_963ff6: /* 963ff6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 963ff7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963ff8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 963ff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 963ffa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963ffd: ret  */
  esp += 4; SPILL(); return;
}

void f_964000(void) {
  LOAD_REGS();
L_964000: /* 964000: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964001: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 964005: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 96400b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96400d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 964011: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 964019: je 0x964046 */
  if (zf) goto L_964046;
L_96401b: /* 96401b: mov edx, eax */
  edx = eax;
/* 96401d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_964020: /* 964020: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 964024: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 964026: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964028: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96402b: jp 0x964033 */
  if (pf) goto L_964033;
L_96402d: /* 96402d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96402f: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
L_964033: /* 964033: fcom dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
/* 964035: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964037: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96403a: jne 0x964040 */
  if (!zf) goto L_964040;
L_96403c: /* 96403c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96403e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
L_964040: /* 964040: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 964043: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 964044: jne 0x964020 */
  if (!zf) goto L_964020;
L_964046: /* 964046: fchs  */
  ST0 = -ST0;
/* 964048: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 96404c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 96404e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964050: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964053: jnp 0x96405b */
  if (!pf) goto L_96405b;
L_964055: /* 964055: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 964057: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_96405b: /* 96405b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96405c: ret  */
  esp += 4; SPILL(); return;
}

void f_964060(void) {
  LOAD_REGS();
L_964060: /* 964060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964061: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 964065: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964066: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 96406a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96406b: xor esi, esi */
  esi = 0;
/* 96406d: xor edx, edx */
  edx = 0;
/* 96406f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 964071: mov dword ptr [esp + 8], 0x7f7fffff */
  W32((uint32_t)(esp + 0x8u), 0x7f7fffffu);
/* 964079: jle 0x9640b5 */
  if ((zf || sf != of)) goto L_9640b5;
L_96407b: /* 96407b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96407c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 964080: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_964082: /* 964082: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 964084: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 964087: fsub dword ptr [edi + ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx + 0xfffffffcu)));
/* 96408b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 964091: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964093: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964096: jp 0x96409a */
  if (pf) goto L_96409a;
L_964098: /* 964098: fchs  */
  ST0 = -ST0;
L_96409a: /* 96409a: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 96409e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9640a0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9640a3: jp 0x9640ad */
  if (pf) goto L_9640ad;
L_9640a5: /* 9640a5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9640a9: mov esi, edx */
  esi = edx;
/* 9640ab: jmp 0x9640af */
  goto L_9640af;
L_9640ad: /* 9640ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9640af: /* 9640af: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9640b0: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9640b2: jl 0x964082 */
  if ((sf != of)) goto L_964082;
L_9640b4: /* 9640b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_9640b5: /* 9640b5: mov eax, esi */
  eax = esi;
/* 9640b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9640b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9640b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9640ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9640c0(void) {
  LOAD_REGS();
L_9640c0: /* 9640c0: mov ecx, dword ptr [0xcf8b3c] */
  ecx = R32((uint32_t)(0xcf8b3cu));
/* 9640c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9640c7: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9640cb: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 9640cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9640d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9640d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9640d2: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9640d7u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9640d7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9640db: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9640e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9640e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9640e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9640e9: jne 0x964114 */
  if (!zf) goto L_964114;
L_9640eb: /* 9640eb: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 9640f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9640f3: je 0x964105 */
  if (zf) goto L_964105;
L_9640f5: /* 9640f5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9640f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 9640f9: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 9640fc: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 9640ff: fchs  */
  ST0 = -ST0;
/* 964101: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 964103: jne 0x9640f5 */
  if (!zf) goto L_9640f5;
L_964105: /* 964105: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 964108: mov eax, 1 */
  eax = 0x1u;
/* 96410d: fchs  */
  ST0 = -ST0;
/* 96410f: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 964112: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964113: ret  */
  esp += 4; SPILL(); return;
L_964114: /* 964114: xor eax, eax */
  eax = 0;
/* 964116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964117: ret  */
  esp += 4; SPILL(); return;
}

void f_964120(void) {
  LOAD_REGS();
L_964120: /* 964120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 964122: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 964126: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964129: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 96412d: je 0x964173 */
  if (zf) goto L_964173;
L_96412f: /* 96412f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964131: je 0x964147 */
  if (zf) goto L_964147;
L_964133: /* 964133: mov eax, dword ptr [0xcf8bb8] */
  eax = R32((uint32_t)(0xcf8bb8u));
/* 964138: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96413a: je 0x964147 */
  if (zf) goto L_964147;
L_96413c: /* 96413c: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 964142: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 964145: jmp 0x96414c */
  goto L_96414c;
L_964147: /* 964147: call 0x963bf0 */
  esp -= 4; W32(esp, 0x96414cu); SPILL(); f_963bf0(); if (g_unwind) return; RELOAD();
L_96414c: /* 96414c: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 96414e: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 964154: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96415a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96415c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96415f: jp 0x964173 */
  if (pf) goto L_964173;
L_964161: /* 964161: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 964167: fsqrt  */
  ST0 = sqrt(ST0);
/* 964169: fmul dword ptr [0xcf8bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8bb4u)));
/* 96416f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 964171: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_964173: /* 964173: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 964177: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964179: je 0x96421a */
  if (zf) goto L_96421a;
L_96417f: /* 96417f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964181: je 0x9641e5 */
  if (zf) goto L_9641e5;
L_964183: /* 964183: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 964186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964188: mov dword ptr [esp + 0x14], 0x7f7fffff */
  W32((uint32_t)(esp + 0x14u), 0x7f7fffffu);
/* 964190: je 0x9641df */
  if (zf) goto L_9641df;
L_964192: /* 964192: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 964195: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 964197: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964199: je 0x9641df */
  if (zf) goto L_9641df;
L_96419b: /* 96419b: nop  */
/* 96419c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9641a0: /* 9641a0: mov ecx, dword ptr [0xcf788c] */
  ecx = R32((uint32_t)(0xcf788cu));
/* 9641a6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9641a9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9641aa: mov dword ptr [0xcf788c], ecx */
  W32((uint32_t)(0xcf788cu), ecx);
/* 9641b0: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9641b3: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9641b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9641b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9641b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9641ba: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9641bfu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9641bf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9641c3: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 9641c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9641ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9641cc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9641cf: jne 0x9641d9 */
  if (!zf) goto L_9641d9;
L_9641d1: /* 9641d1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9641d5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_9641d9: /* 9641d9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9641db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9641dd: jne 0x9641a0 */
  if (!zf) goto L_9641a0;
L_9641df: /* 9641df: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9641e3: jmp 0x9641eb */
  goto L_9641eb;
L_9641e5: /* 9641e5: fld dword ptr [0xcf8bc4] */
  { double v = F32((uint32_t)(0xcf8bc4u)); FPUSH(v); }
L_9641eb: /* 9641eb: fsub dword ptr [0xcf8a14] */
  ST0 = ST0 - (F32((uint32_t)(0xcf8a14u)));
/* 9641f1: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9641f3: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9641f9: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9641ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964201: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964204: jp 0x96421a */
  if (pf) goto L_96421a;
L_964206: /* 964206: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 964208: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 96420e: fsqrt  */
  ST0 = sqrt(ST0);
/* 964210: fmul dword ptr [0xcf8bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8bb4u)));
/* 964216: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 964218: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
L_96421a: /* 96421a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96421b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96421c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96421d: ret  */
  esp += 4; SPILL(); return;
}

void f_964220(void) {
  LOAD_REGS();
L_964220: /* 964220: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 964226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 964227: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96422b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96422d: mov eax, esi */
  eax = esi;
/* 96422f: jg 0x964233 */
  if ((!zf && sf == of)) goto L_964233;
L_964231: /* 964231: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_964233: /* 964233: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964235: je 0x964257 */
  if (zf) goto L_964257;
L_964237: /* 964237: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 96423b: mov edx, eax */
  edx = eax;
/* 96423d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_964241: /* 964241: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 964243: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964246: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 964249: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96424c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 96424d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 96424f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 964251: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 964253: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 964255: jne 0x964241 */
  if (!zf) goto L_964241;
L_964257: /* 964257: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 964259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96425a: jle 0x96425e */
  if ((zf || sf != of)) goto L_96425e;
L_96425c: /* 96425c: fsqrt  */
  ST0 = sqrt(ST0);
L_96425e: /* 96425e: ret  */
  esp += 4; SPILL(); return;
}

void f_964260(void) {
  LOAD_REGS();
L_964260: /* 964260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964261: mov ebp, esp */
  ebp = esp;
/* 964263: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 964266: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964267: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 96426a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96426b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 96426e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96426f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964271: push 0xaf2ab8 */
  { uint32_t v = 0xaf2ab8u; esp -= 4; W32(esp, v); }
/* 964276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964277: call 0x953470 */
  esp -= 4; W32(esp, 0x96427cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96427c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 96427f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964282: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 964284: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 96428c: jle 0x9642db */
  if ((zf || sf != of)) goto L_9642db;
L_96428e: /* 96428e: mov edi, edi */
  edi = edi;
L_964290: /* 964290: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 964293: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 964295: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 964298: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 96429c: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 96429f: jle 0x9642bd */
  if ((zf || sf != of)) goto L_9642bd;
L_9642a1: /* 9642a1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9642a3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9642a6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9642a9: push 0xafd330 */
  { uint32_t v = 0xafd330u; esp -= 4; W32(esp, v); }
/* 9642ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9642af: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9642b2: call 0x953470 */
  esp -= 4; W32(esp, 0x9642b7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9642b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9642ba: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9642bb: jne 0x9642a1 */
  if (!zf) goto L_9642a1;
L_9642bd: /* 9642bd: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9642c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9642c3: call 0x953470 */
  esp -= 4; W32(esp, 0x9642c8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9642c8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9642cc: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9642cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9642d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9642d3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9642d5: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9642d9: jl 0x964290 */
  if ((sf != of)) goto L_964290;
L_9642db: /* 9642db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9642dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9642dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9642de: mov esp, ebp */
  esp = ebp;
/* 9642e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9642e1: ret  */
  esp += 4; SPILL(); return;
}

void f_9642f0(void) {
  LOAD_REGS();
L_9642f0: /* 9642f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9642f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9642f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9642f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9642f8: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9642fc: je 0x96434f */
  if (zf) goto L_96434f;
L_9642fe: /* 9642fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9642ff: push 0xafd340 */
  { uint32_t v = 0xafd340u; esp -= 4; W32(esp, v); }
/* 964304: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964305: call 0x953470 */
  esp -= 4; W32(esp, 0x96430au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96430a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96430e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964311: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964313: je 0x96437e */
  if (zf) goto L_96437e;
L_964315: /* 964315: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 964318: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96431a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96431c: je 0x96437e */
  if (zf) goto L_96437e;
L_96431e: /* 96431e: mov edi, edi */
  edi = edi;
L_964320: /* 964320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964321: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964324: call 0x95f210 */
  esp -= 4; W32(esp, 0x964329u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 964329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96432a: push 0xafd338 */
  { uint32_t v = 0xafd338u; esp -= 4; W32(esp, v); }
/* 96432f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964330: call 0x953470 */
  esp -= 4; W32(esp, 0x964335u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964335: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 964337: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96433a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96433c: jne 0x964320 */
  if (!zf) goto L_964320;
L_96433e: /* 96433e: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 964343: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964344: call 0x953470 */
  esp -= 4; W32(esp, 0x964349u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964349: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96434c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96434d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96434e: ret  */
  esp += 4; SPILL(); return;
L_96434f: /* 96434f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 964353: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964355: je 0x96437e */
  if (zf) goto L_96437e;
L_964357: /* 964357: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96435a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96435c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96435e: je 0x96437e */
  if (zf) goto L_96437e;
L_964360: /* 964360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964361: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964364: call 0x95f210 */
  esp -= 4; W32(esp, 0x964369u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 964369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96436a: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 96436f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964370: call 0x953470 */
  esp -= 4; W32(esp, 0x964375u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964375: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 964377: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96437a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96437c: jne 0x964360 */
  if (!zf) goto L_964360;
L_96437e: /* 96437e: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 964383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964384: call 0x953470 */
  esp -= 4; W32(esp, 0x964389u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964389: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96438c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96438d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96438e: ret  */
  esp += 4; SPILL(); return;
}

void f_964390(void) {
  LOAD_REGS();
L_964390: /* 964390: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964391: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964392: mov ebx, dword ptr [0xcf85d4] */
  ebx = R32((uint32_t)(0xcf85d4u));
/* 964398: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964399: mov ebp, dword ptr [0xcf85d0] */
  ebp = R32((uint32_t)(0xcf85d0u));
/* 96439f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9643a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9643a1: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 9643a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9643a5: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9643ad: call 0x9538c0 */
  esp -= 4; W32(esp, 0x9643b2u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 9643b2: mov ecx, edi */
  ecx = edi;
/* 9643b4: mov edx, ecx */
  edx = ecx;
/* 9643b6: mov esi, eax */
  esi = eax;
/* 9643b8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9643bb: xor eax, eax */
  eax = 0;
/* 9643bd: mov edi, esi */
  edi = esi;
/* 9643bf: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9643c1: mov ecx, edx */
  ecx = edx;
/* 9643c3: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9643c6: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 9643c8: mov eax, dword ptr [0xcf85d0] */
  eax = R32((uint32_t)(0xcf85d0u));
/* 9643cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9643d0: xor ecx, ecx */
  ecx = 0;
/* 9643d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9643d4: jle 0x964410 */
  if ((zf || sf != of)) goto L_964410;
L_9643d6: /* 9643d6: mov eax, dword ptr [0xcf8a04] */
  eax = R32((uint32_t)(0xcf8a04u));
/* 9643db: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 9643de: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9643e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9643e6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9643e9: jp 0x964406 */
  if (pf) goto L_964406;
L_9643eb: /* 9643eb: mov edx, dword ptr [0xcf8a00] */
  edx = R32((uint32_t)(0xcf8a00u));
/* 9643f1: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 9643f4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9643fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9643fc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9643ff: jp 0x964406 */
  if (pf) goto L_964406;
L_964401: /* 964401: mov byte ptr [ecx + esi], 0xff */
  W8((uint32_t)(ecx + esi), 0xffu);
/* 964405: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
L_964406: /* 964406: mov eax, dword ptr [0xcf85d0] */
  eax = R32((uint32_t)(0xcf85d0u));
/* 96440b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96440c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96440e: jl 0x9643d6 */
  if ((sf != of)) goto L_9643d6;
L_964410: /* 964410: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 964415: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964417: je 0x964428 */
  if (zf) goto L_964428;
L_964419: /* 964419: mov byte ptr [ecx + esi], 1 */
  W8((uint32_t)(ecx + esi), 0x1u);
/* 96441d: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 964422: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 964423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964425: je 0x964428 */
  if (zf) goto L_964428;
L_964427: /* 964427: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_964428: /* 964428: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96442d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96442f: je 0x964451 */
  if (zf) goto L_964451;
L_964431: /* 964431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964432: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 964437: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964438: push 0xafd3f0 */
  { uint32_t v = 0xafd3f0u; esp -= 4; W32(esp, v); }
/* 96443d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96443e: call 0x953470 */
  esp -= 4; W32(esp, 0x964443u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964443: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964445: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964447: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 964449: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96444eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96444e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964451: /* 964451: imul ebx, ebp */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ebp);
  ebx = (uint32_t)r;
  }
/* 964454: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 964457: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964458: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x96445eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96445e: mov ebx, eax */
  ebx = eax;
/* 964460: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964462: jne 0x964488 */
  if (!zf) goto L_964488;
L_964464: /* 964464: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 96446a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 964470: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964471: push 0xafd3b8 */
  { uint32_t v = 0xafd3b8u; esp -= 4; W32(esp, v); }
/* 964476: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964477: call 0x953470 */
  esp -= 4; W32(esp, 0x96447cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96447c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96447d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96447e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 964480: call 0x9535b0 */
  esp -= 4; W32(esp, 0x964485u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 964485: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964488: /* 964488: mov eax, dword ptr [0xcf85d0] */
  eax = R32((uint32_t)(0xcf85d0u));
/* 96448d: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 964493: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 964499: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96449a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96449b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96449c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96449d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96449e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96449f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9644a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9644a1: call 0x964650 */
  esp -= 4; W32(esp, 0x9644a6u); SPILL(); f_964650(); if (g_unwind) return; RELOAD();
/* 9644a6: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9644ab: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9644ae: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9644b1: jl 0x9644c6 */
  if ((sf != of)) goto L_9644c6;
L_9644b3: /* 9644b3: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9644b8: push 0xafd384 */
  { uint32_t v = 0xafd384u; esp -= 4; W32(esp, v); }
/* 9644bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9644be: call 0x953470 */
  esp -= 4; W32(esp, 0x9644c3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9644c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9644c6: /* 9644c6: mov ecx, dword ptr [0xcf85d0] */
  ecx = R32((uint32_t)(0xcf85d0u));
/* 9644cc: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 9644cf: mov ecx, dword ptr [0xcf8a04] */
  ecx = R32((uint32_t)(0xcf8a04u));
/* 9644d5: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 9644d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9644d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9644da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9644db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9644dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9644de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9644df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9644e0: call 0x964650 */
  esp -= 4; W32(esp, 0x9644e5u); SPILL(); f_964650(); if (g_unwind) return; RELOAD();
/* 9644e5: mov ecx, dword ptr [0xcf8a00] */
  ecx = R32((uint32_t)(0xcf8a00u));
/* 9644eb: mov edx, dword ptr [0xcf85d0] */
  edx = R32((uint32_t)(0xcf85d0u));
/* 9644f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9644f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9644f3: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 9644f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9644f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9644f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9644fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9644fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9644fc: call 0x964650 */
  esp -= 4; W32(esp, 0x964501u); SPILL(); f_964650(); if (g_unwind) return; RELOAD();
/* 964501: mov eax, dword ptr [0xcf85d0] */
  eax = R32((uint32_t)(0xcf85d0u));
/* 964506: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 964507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964508: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 964509: call 0x953a60 */
  esp -= 4; W32(esp, 0x96450eu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 96450e: mov eax, dword ptr [0xcf85dc] */
  eax = R32((uint32_t)(0xcf85dcu));
/* 964513: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964516: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964518: je 0x964527 */
  if (zf) goto L_964527;
L_96451a: /* 96451a: mov ecx, dword ptr [0xcf85d8] */
  ecx = R32((uint32_t)(0xcf85d8u));
/* 964520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964521: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x964527u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_964527: /* 964527: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96452c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96452e: mov dword ptr [0xcf85d8], ebx */
  W32((uint32_t)(0xcf85d8u), ebx);
/* 964534: mov dword ptr [0xcf85dc], 1 */
  W32((uint32_t)(0xcf85dcu), 0x1u);
/* 96453e: je 0x964644 */
  if (zf) goto L_964644;
L_964544: /* 964544: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 964549: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96454b: je 0x96462d */
  if (zf) goto L_96462d;
L_964551: /* 964551: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 964556: mov esi, dword ptr [0xcf85d4] */
  esi = R32((uint32_t)(0xcf85d4u));
/* 96455c: mov edx, eax */
  edx = eax;
/* 96455e: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* 964561: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 964562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964564: mov ecx, ebx */
  ecx = ebx;
/* 964566: lea edx, [ebx + edx*4] */
  edx = (uint32_t)(ebx + edx*4);
/* 964569: je 0x964580 */
  if (zf) goto L_964580;
L_96456b: /* 96456b: nop  */
/* 96456c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_964570: /* 964570: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 964571: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 964578: jne 0x964570 */
  if (!zf) goto L_964570;
L_96457a: /* 96457a: mov esi, dword ptr [0xcf85d4] */
  esi = R32((uint32_t)(0xcf85d4u));
L_964580: /* 964580: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964582: je 0x9645cc */
  if (zf) goto L_9645cc;
L_964584: /* 964584: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 964589: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 96458f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 964590: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964592: je 0x9645af */
  if (zf) goto L_9645af;
L_964594: /* 964594: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 964596: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 964597: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 964599: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96459c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96459e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9645a0: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9645a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9645a4: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 9645a7: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 9645aa: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 9645ad: jne 0x964594 */
  if (!zf) goto L_964594;
L_9645af: /* 9645af: fst dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0);
/* 9645b1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9645b4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9645b8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9645ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9645bc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9645bf: jp 0x9645c7 */
  if (pf) goto L_9645c7;
L_9645c1: /* 9645c1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9645c5: jmp 0x9645c9 */
  goto L_9645c9;
L_9645c7: /* 9645c7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9645c9: /* 9645c9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9645ca: jne 0x964584 */
  if (!zf) goto L_964584;
L_9645cc: /* 9645cc: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 9645d2: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 9645d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9645d7: je 0x9645f2 */
  if (zf) goto L_9645f2;
L_9645d9: /* 9645d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9645e0: /* 9645e0: fild dword ptr [0xcf85d4] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85d4u)); FPUSH(v); }
/* 9645e6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9645e9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9645ea: fdivr dword ptr [ecx - 4] */
  ST0 = (F32((uint32_t)(ecx + 0xfffffffcu))) / ST0;
/* 9645ed: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 9645f0: jne 0x9645e0 */
  if (!zf) goto L_9645e0;
L_9645f2: /* 9645f2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9645f6: fmul qword ptr [0xa21728] */
  ST0 = ST0 * (F64((uint32_t)(0xa21728u)));
/* 9645fc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9645fe: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 964604: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 964609: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96460a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96460c: mov dword ptr [0xcf85d4], ecx */
  W32((uint32_t)(0xcf85d4u), ecx);
/* 964612: je 0x964644 */
  if (zf) goto L_964644;
L_964614: /* 964614: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 964619: push 0xafd344 */
  { uint32_t v = 0xafd344u; esp -= 4; W32(esp, v); }
/* 96461e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96461f: call 0x953470 */
  esp -= 4; W32(esp, 0x964624u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964624: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964627: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 964628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964629: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96462a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96462b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96462c: ret  */
  esp += 4; SPILL(); return;
L_96462d: /* 96462d: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 964633: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 964639: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96463a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96463b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96463c: call 0x964db0 */
  esp -= 4; W32(esp, 0x964641u); SPILL(); f_964db0(); if (g_unwind) return; RELOAD();
/* 964641: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964644: /* 964644: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 964645: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964646: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 964647: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 964648: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 964649: ret  */
  esp += 4; SPILL(); return;
}

void f_964650(void) {
  LOAD_REGS();
L_964650: /* 964650: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964653: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964654: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 964658: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964659: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 96465d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96465e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96465f: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 964663: xor esi, esi */
  esi = 0;
/* 964665: xor eax, eax */
  eax = 0;
/* 964667: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 964669: mov ecx, edi */
  ecx = edi;
/* 96466b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 96466f: jle 0x96467c */
  if ((zf || sf != of)) goto L_96467c;
L_964671: /* 964671: movsx edx, byte ptr [eax + ebp] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + ebp)));
/* 964675: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 964677: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 964678: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96467a: jl 0x964671 */
  if ((sf != of)) goto L_964671;
L_96467c: /* 96467c: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 964680: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 964682: je 0x9646a4 */
  if (zf) goto L_9646a4;
L_964684: /* 964684: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964686: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96468b: push 0xafd488 */
  { uint32_t v = 0xafd488u; esp -= 4; W32(esp, v); }
/* 964690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964691: call 0x953470 */
  esp -= 4; W32(esp, 0x964696u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964696: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964698: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96469a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96469c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9646a1u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9646a1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9646a4: /* 9646a4: xor edx, edx */
  edx = 0;
/* 9646a6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9646a8: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9646ac: jle 0x964738 */
  if ((zf || sf != of)) goto L_964738;
L_9646b2: /* 9646b2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9646b6: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 9646ba: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9646be: jmp 0x9646c4 */
  goto L_9646c4;
L_9646c0: /* 9646c0: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_9646c4: /* 9646c4: mov al, byte ptr [edx + ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ebp))) & 0xffu);
/* 9646c7: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9646c9: jne 0x9646d5 */
  if (!zf) goto L_9646d5;
L_9646cb: /* 9646cb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9646cc: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9646d0: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9646d3: jmp 0x964727 */
  goto L_964727;
L_9646d5: /* 9646d5: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9646d9: mov ebp, ecx */
  ebp = ecx;
/* 9646db: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9646de: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9646e0: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 9646e4: jne 0x9646ee */
  if (!zf) goto L_9646ee;
L_9646e6: /* 9646e6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9646e8: jge 0x96472b */
  if ((sf == of)) goto L_96472b;
L_9646ea: /* 9646ea: mov eax, ebx */
  eax = ebx;
/* 9646ec: jmp 0x9646f8 */
  goto L_9646f8;
L_9646ee: /* 9646ee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9646ef: mov eax, ebx */
  eax = ebx;
/* 9646f1: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9646f5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_9646f8: /* 9646f8: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9646fc: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9646fe: je 0x964727 */
  if (zf) goto L_964727;
L_964700: /* 964700: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 964704: lea esi, [edx*4] */
  esi = (uint32_t)(edx*4);
/* 96470b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 96470e: mov edx, ebp */
  edx = ebp;
L_964710: /* 964710: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 964712: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 964714: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 964716: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964718: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 964719: jne 0x964710 */
  if (!zf) goto L_964710;
L_96471b: /* 96471b: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 96471f: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 964723: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
L_964727: /* 964727: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 964729: jge 0x964738 */
  if ((sf == of)) goto L_964738;
L_96472b: /* 96472b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96472f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 964730: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 964732: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 964736: jl 0x9646c0 */
  if ((sf != of)) goto L_9646c0;
L_964738: /* 964738: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96473f: jl 0x964760 */
  if ((sf != of)) goto L_964760;
L_964741: /* 964741: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 964745: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 964749: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96474f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964750: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964751: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964752: push 0xafd448 */
  { uint32_t v = 0xafd448u; esp -= 4; W32(esp, v); }
/* 964757: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964758: call 0x953470 */
  esp -= 4; W32(esp, 0x96475du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96475d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964760: /* 964760: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 964761: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964762: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 964763: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 964764: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964767: ret  */
  esp += 4; SPILL(); return;
}

void f_964770(void) {
  LOAD_REGS();
L_964770: /* 964770: mov eax, dword ptr [0xafcab0] */
  eax = R32((uint32_t)(0xafcab0u));
/* 964775: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 964776: mov ecx, 0x1f31d */
  ecx = 0x1f31du;
/* 96477b: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x96477b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 96477d: imul eax, eax, 0xb14 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xb14u);
  eax = (uint32_t)r;
  }
/* 964783: imul edx, edx, 0x41a7 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x41a7u);
  edx = (uint32_t)r;
  }
/* 964789: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 96478b: mov eax, edx */
  eax = edx;
/* 96478d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96478f: jg 0x964796 */
  if ((!zf && sf == of)) goto L_964796;
L_964791: /* 964791: add eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_964796: /* 964796: mov dword ptr [0xafcab0], eax */
  W32((uint32_t)(0xafcab0u), eax);
/* 96479b: ret  */
  esp += 4; SPILL(); return;
}

void f_9647a0(void) {
  LOAD_REGS();
L_9647a0: /* 9647a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9647a4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9647a7: jge 0x9647b4 */
  if ((sf == of)) goto L_9647b4;
L_9647a9: /* 9647a9: mov dword ptr [0xafcab0], 1 */
  W32((uint32_t)(0xafcab0u), 0x1u);
/* 9647b3: ret  */
  esp += 4; SPILL(); return;
L_9647b4: /* 9647b4: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9647b9: mov dword ptr [0xafcab0], 0x7ffffffe */
  W32((uint32_t)(0xafcab0u), 0x7ffffffeu);
/* 9647c3: jge 0x9647ca */
  if ((sf == of)) goto L_9647ca;
L_9647c5: /* 9647c5: mov dword ptr [0xafcab0], eax */
  W32((uint32_t)(0xafcab0u), eax);
L_9647ca: /* 9647ca: ret  */
  esp += 4; SPILL(); return;
}

void f_9647d0(void) {
  LOAD_REGS();
L_9647d0: /* 9647d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9647d1: call 0x964770 */
  esp -= 4; W32(esp, 0x9647d6u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 9647d6: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 9647da: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 9647de: fmul dword ptr [0xcf8550] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8550u)));
/* 9647e4: fadd dword ptr [0xcf8554] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8554u)));
/* 9647ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9647eb: ret  */
  esp += 4; SPILL(); return;
}

void f_9647f0(void) {
  LOAD_REGS();
L_9647f0: /* 9647f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9647f1: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9647f5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9647f6: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9647fa: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9647fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9647fd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 964801: jle 0x964839 */
  if ((zf || sf != of)) goto L_964839;
L_964803: /* 964803: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 964807: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_964808: /* 964808: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 96480a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96480d: mov edi, ebp */
  edi = ebp;
/* 96480f: nop  */
L_964810: /* 964810: call 0x964770 */
  esp -= 4; W32(esp, 0x964815u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 964815: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 964819: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 96481d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964820: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 964821: fmul qword ptr [0xa21730] */
  ST0 = ST0 * (F64((uint32_t)(0xa21730u)));
/* 964827: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 96482d: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 964830: jne 0x964810 */
  if (!zf) goto L_964810;
L_964832: /* 964832: dec dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 964836: jne 0x964808 */
  if (!zf) goto L_964808;
L_964838: /* 964838: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_964839: /* 964839: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 96483b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96483c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96483d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96483e: ret  */
  esp += 4; SPILL(); return;
}

void f_964840(void) {
  LOAD_REGS();
L_964840: /* 964840: mov eax, dword ptr [0xcf85dc] */
  eax = R32((uint32_t)(0xcf85dcu));
/* 964845: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964847: jne 0x964874 */
  if (!zf) goto L_964874;
L_964849: /* 964849: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96484e: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 964854: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 96485a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96485b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96485c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96485d: call 0x962160 */
  esp -= 4; W32(esp, 0x964862u); SPILL(); f_962160(); if (g_unwind) return; RELOAD();
/* 964862: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964865: mov dword ptr [0xcf85d8], eax */
  W32((uint32_t)(0xcf85d8u), eax);
/* 96486a: mov dword ptr [0xcf85dc], 1 */
  W32((uint32_t)(0xcf85dcu), 0x1u);
L_964874: /* 964874: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 964878: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96487e: mov edx, dword ptr [0xcf85d4] */
  edx = R32((uint32_t)(0xcf85d4u));
/* 964884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964885: mov eax, dword ptr [0xcf85d8] */
  eax = R32((uint32_t)(0xcf85d8u));
/* 96488a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96488b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96488c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96488d: call 0x9648a0 */
  esp -= 4; W32(esp, 0x964892u); SPILL(); f_9648a0(); if (g_unwind) return; RELOAD();
/* 964892: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964895: ret  */
  esp += 4; SPILL(); return;
}

void f_9648a0(void) {
  LOAD_REGS();
L_9648a0: /* 9648a0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9648a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9648a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9648a7: xor esi, esi */
  esi = 0;
/* 9648a9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9648ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9648ad: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9648b1: jl 0x9648ce */
  if ((sf != of)) goto L_9648ce;
L_9648b3: /* 9648b3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9648b7: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9648bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9648be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9648bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9648c0: push 0xafd4dc */
  { uint32_t v = 0xafd4dcu; esp -= 4; W32(esp, v); }
/* 9648c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9648c6: call 0x964260 */
  esp -= 4; W32(esp, 0x9648cbu); SPILL(); f_964260(); if (g_unwind) return; RELOAD();
/* 9648cb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9648ce: /* 9648ce: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9648d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9648d4: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9648d8: je 0x964953 */
  if (zf) goto L_964953;
L_9648da: /* 9648da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9648db: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 9648e2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_9648e6: /* 9648e6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9648ea: mov ebx, dword ptr [ecx + edx] */
  ebx = R32((uint32_t)(ecx + edx));
/* 9648ed: xor edx, edx */
  edx = 0;
/* 9648ef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9648f1: jle 0x96492a */
  if ((zf || sf != of)) goto L_96492a;
L_9648f3: /* 9648f3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9648f5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9648fb: mov esi, ebp */
  esi = ebp;
/* 9648fd: je 0x96491e */
  if (zf) goto L_96491e;
L_9648ff: /* 9648ff: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 964903: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 964906: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 964908: mov ecx, edi */
  ecx = edi;
/* 96490a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_964910: /* 964910: fld dword ptr [eax + esi] */
  { double v = F32((uint32_t)(eax + esi)); FPUSH(v); }
/* 964913: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964916: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 964917: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 96491a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96491c: jne 0x964910 */
  if (!zf) goto L_964910;
L_96491e: /* 96491e: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 964920: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 964923: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 964924: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 964926: jl 0x9648f3 */
  if ((sf != of)) goto L_9648f3;
L_964928: /* 964928: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_96492a: /* 96492a: je 0x96493e */
  if (zf) goto L_96493e;
L_96492c: /* 96492c: mov eax, edi */
  eax = edi;
/* 96492e: mov edi, edi */
  edi = edi;
L_964930: /* 964930: mov ecx, dword ptr [ebx - 4] */
  ecx = R32((uint32_t)(ebx + 0xfffffffcu));
/* 964933: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 964936: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 964939: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96493a: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 96493c: jne 0x964930 */
  if (!zf) goto L_964930;
L_96493e: /* 96493e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 964942: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 964949: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 96494b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96494c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 964950: jne 0x9648e6 */
  if (!zf) goto L_9648e6;
L_964952: /* 964952: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_964953: /* 964953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 964954: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964955: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 964956: ret  */
  esp += 4; SPILL(); return;
}

void f_964960(void) {
  LOAD_REGS();
L_964960: /* 964960: mov eax, dword ptr [0xcf85dc] */
  eax = R32((uint32_t)(0xcf85dcu));
/* 964965: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964967: jne 0x964994 */
  if (!zf) goto L_964994;
L_964969: /* 964969: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96496e: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 964974: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 96497a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96497b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96497c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96497d: call 0x962160 */
  esp -= 4; W32(esp, 0x964982u); SPILL(); f_962160(); if (g_unwind) return; RELOAD();
/* 964982: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964985: mov dword ptr [0xcf85d8], eax */
  W32((uint32_t)(0xcf85d8u), eax);
/* 96498a: mov dword ptr [0xcf85dc], 1 */
  W32((uint32_t)(0xcf85dcu), 0x1u);
L_964994: /* 964994: mov eax, dword ptr [0xcf8a00] */
  eax = R32((uint32_t)(0xcf8a00u));
/* 964999: mov ecx, dword ptr [0xcf8a04] */
  ecx = R32((uint32_t)(0xcf8a04u));
/* 96499f: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 9649a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9649a6: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 9649ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9649ac: mov ecx, dword ptr [0xcf85d8] */
  ecx = R32((uint32_t)(0xcf85d8u));
/* 9649b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9649b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9649b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9649b5: call 0x964ad0 */
  esp -= 4; W32(esp, 0x9649bau); SPILL(); f_964ad0(); if (g_unwind) return; RELOAD();
/* 9649ba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9649bd: ret  */
  esp += 4; SPILL(); return;
}

void f_9649c0(void) {
  LOAD_REGS();
L_9649c0: /* 9649c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9649c1: mov ebp, esp */
  ebp = esp;
/* 9649c3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9649c6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9649c9: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9649d0: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 9649d8: jl 0x964a04 */
  if ((sf != of)) goto L_964a04;
L_9649da: /* 9649da: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 9649dd: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9649e2: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9649e5: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9649e9: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 9649ec: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9649f0: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 9649f3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9649f6: push 0xafd580 */
  { uint32_t v = 0xafd580u; esp -= 4; W32(esp, v); }
/* 9649fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9649fc: call 0x953470 */
  esp -= 4; W32(esp, 0x964a01u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964a01: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964a04: /* 964a04: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 964a07: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 964a0a: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 964a0d: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 964a10: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 964a13: mov dword ptr [0xcf8c3c], ecx */
  W32((uint32_t)(0xcf8c3cu), ecx);
/* 964a19: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 964a1d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 964a21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964a22: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 964a25: mov dword ptr [0xcf8c40], edx */
  W32((uint32_t)(0xcf8c40u), edx);
/* 964a2b: mov edx, dword ptr [0xcf8a28] */
  edx = R32((uint32_t)(0xcf8a28u));
/* 964a31: mov dword ptr [0xcf8c44], eax */
  W32((uint32_t)(0xcf8c44u), eax);
/* 964a36: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 964a3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964a3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964a3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964a3d: call 0x962c10 */
  esp -= 4; W32(esp, 0x964a42u); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 964a42: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 964a46: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 964a4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964a4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964a4f: je 0x964a8f */
  if (zf) goto L_964a8f;
L_964a51: /* 964a51: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 964a55: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 964a5b: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964a5e: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 964a62: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 964a65: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 964a69: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 964a6c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 964a70: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 964a73: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 964a76: push 0xafd500 */
  { uint32_t v = 0xafd500u; esp -= 4; W32(esp, v); }
/* 964a7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964a7c: call 0x953470 */
  esp -= 4; W32(esp, 0x964a81u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964a81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964a83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964a85: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 964a87: call 0x9535b0 */
  esp -= 4; W32(esp, 0x964a8cu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 964a8c: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964a8f: /* 964a8f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 964a92: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 964a95: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 964a98: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 964a9b: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 964aa2: lea eax, [ecx + edx - 4] */
  eax = (uint32_t)(ecx + edx + 0xfffffffcu);
/* 964aa6: fdiv dword ptr [esp + 4] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4u)));
/* 964aaa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 964aad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964aaf: fchs  */
  ST0 = -ST0;
/* 964ab1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 964ab5: je 0x964ac8 */
  if (zf) goto L_964ac8;
L_964ab7: /* 964ab7: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 964abb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 964abd: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 964ac1: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 964ac3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964ac5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 964ac6: jne 0x964ab7 */
  if (!zf) goto L_964ab7;
L_964ac8: /* 964ac8: mov esp, ebp */
  esp = ebp;
/* 964aca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 964acb: ret  */
  esp += 4; SPILL(); return;
}

void f_964ad0(void) {
  LOAD_REGS();
L_964ad0: /* 964ad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964ad1: mov ebp, esp */
  ebp = esp;
/* 964ad3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 964ad6: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964ad9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 964adc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964add: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 964ade: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964adf: xor edi, edi */
  edi = 0;
/* 964ae1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 964ae3: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 964ae7: jle 0x964d9e */
  if ((zf || sf != of)) goto L_964d9e;
L_964aed: /* 964aed: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 964af0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 964af3: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 964af6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 964af9: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 964afb: mov esi, eax */
  esi = eax;
/* 964afd: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 964aff: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 964b03: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 964b07: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 964b0b: jmp 0x964b15 */
  goto L_964b15;
L_964b0d: /* 964b0d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 964b11: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
L_964b15: /* 964b15: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 964b18: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 964b1b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 964b1d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 964b21: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 964b25: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 964b29: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 964b2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964b31: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 964b34: jne 0x964b4b */
  if (!zf) goto L_964b4b;
L_964b36: /* 964b36: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 964b3a: fcomp dword ptr [0xa216c4] */
  fpu_com(ST0, F32((uint32_t)(0xa216c4u)));
  FPOP();
/* 964b40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964b42: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964b45: jnp 0x964d8b */
  if (!pf) goto L_964d8b;
L_964b4b: /* 964b4b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964b4d: mov dword ptr [esp + 0x1c], 0x7f7fffff */
  W32((uint32_t)(esp + 0x1cu), 0x7f7fffffu);
/* 964b55: mov dword ptr [esp + 0x18], 0xff7fffff */
  W32((uint32_t)(esp + 0x18u), 0xff7fffffu);
/* 964b5d: mov ecx, esi */
  ecx = esi;
/* 964b5f: je 0x964b9f */
  if (zf) goto L_964b9f;
L_964b61: /* 964b61: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 964b64: lea esi, [edx*4] */
  esi = (uint32_t)(edx*4);
/* 964b6b: mov edx, ebx */
  edx = ebx;
/* 964b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_964b70: /* 964b70: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 964b74: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 964b76: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964b78: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 964b7b: jne 0x964b83 */
  if (!zf) goto L_964b83;
L_964b7d: /* 964b7d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 964b7f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_964b83: /* 964b83: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 964b87: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 964b89: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964b8b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964b8e: jp 0x964b96 */
  if (pf) goto L_964b96;
L_964b90: /* 964b90: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 964b92: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_964b96: /* 964b96: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 964b98: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 964b99: jne 0x964b70 */
  if (!zf) goto L_964b70;
L_964b9b: /* 964b9b: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_964b9f: /* 964b9f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 964ba3: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 964ba9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964bab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 964bae: jne 0x964bb8 */
  if (!zf) goto L_964bb8;
L_964bb0: /* 964bb0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 964bb4: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_964bb8: /* 964bb8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 964bbc: fcomp dword ptr [0xa216c4] */
  fpu_com(ST0, F32((uint32_t)(0xa216c4u)));
  FPOP();
/* 964bc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964bc4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964bc7: jp 0x964bd1 */
  if (pf) goto L_964bd1;
L_964bc9: /* 964bc9: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 964bcd: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_964bd1: /* 964bd1: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 964bd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964bd8: je 0x964c24 */
  if (zf) goto L_964c24;
L_964bda: /* 964bda: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 964bdd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 964bde: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 964be0: jne 0x964c24 */
  if (!zf) goto L_964c24;
L_964be2: /* 964be2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 964be6: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 964bea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964bec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964bef: jp 0x964c24 */
  if (pf) goto L_964c24;
L_964bf1: /* 964bf1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 964bf5: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 964bfb: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964bfe: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 964c02: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 964c06: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 964c09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964c0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964c0b: push 0xafd6b0 */
  { uint32_t v = 0xafd6b0u; esp -= 4; W32(esp, v); }
/* 964c10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964c11: call 0x953470 */
  esp -= 4; W32(esp, 0x964c16u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964c16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964c18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964c1a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 964c1c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x964c21u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 964c21: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964c24: /* 964c24: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 964c28: mov eax, dword ptr [0xcf8a28] */
  eax = R32((uint32_t)(0xcf8a28u));
/* 964c2d: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 964c31: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 964c35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964c36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964c37: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 964c3b: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 964c3f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 964c43: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 964c47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964c48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964c49: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 964c4c: call 0x962c10 */
  esp -= 4; W32(esp, 0x964c51u); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 964c51: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 964c55: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 964c59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964c5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964c5e: je 0x964ca2 */
  if (zf) goto L_964ca2;
L_964c60: /* 964c60: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 964c64: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 964c6a: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964c6d: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 964c71: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 964c75: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 964c79: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 964c7d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 964c81: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 964c85: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 964c88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964c89: push 0xafd640 */
  { uint32_t v = 0xafd640u; esp -= 4; W32(esp, v); }
/* 964c8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964c8f: call 0x953470 */
  esp -= 4; W32(esp, 0x964c94u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964c94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964c96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 964c98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 964c9a: call 0x9535b0 */
  esp -= 4; W32(esp, 0x964c9fu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 964c9f: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964ca2: /* 964ca2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964ca4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 964ca8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 964cac: mov eax, esi */
  eax = esi;
/* 964cae: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 964cb2: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 964cb6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 964cb8: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* 964cbc: je 0x964cdf */
  if (zf) goto L_964cdf;
L_964cbe: /* 964cbe: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 964cc1: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 964cc8: mov ecx, ebx */
  ecx = ebx;
/* 964cca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_964cd0: /* 964cd0: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 964cd4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 964cd6: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 964cd8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 964cda: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964cdc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 964cdd: jne 0x964cd0 */
  if (!zf) goto L_964cd0;
L_964cdf: /* 964cdf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 964ce3: mov ecx, esi */
  ecx = esi;
/* 964ce5: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 964ce9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964ceb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964cee: jp 0x964cfa */
  if (pf) goto L_964cfa;
L_964cf0: /* 964cf0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 964cf4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 964cf8: jmp 0x964d02 */
  goto L_964d02;
L_964cfa: /* 964cfa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 964cfe: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_964d02: /* 964d02: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964d04: je 0x964d35 */
  if (zf) goto L_964d35;
L_964d06: /* 964d06: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 964d09: lea esi, [edx*4] */
  esi = (uint32_t)(edx*4);
/* 964d10: mov edx, ebx */
  edx = ebx;
L_964d12: /* 964d12: fcom dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
/* 964d14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964d16: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964d19: jp 0x964d1d */
  if (pf) goto L_964d1d;
L_964d1b: /* 964d1b: fst dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0);
L_964d1d: /* 964d1d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 964d1f: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 964d21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964d23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964d26: jp 0x964d2c */
  if (pf) goto L_964d2c;
L_964d28: /* 964d28: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 964d2a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
L_964d2c: /* 964d2c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 964d2e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 964d2f: jne 0x964d12 */
  if (!zf) goto L_964d12;
L_964d31: /* 964d31: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_964d35: /* 964d35: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 964d3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 964d3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964d3e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 964d40: je 0x964d89 */
  if (zf) goto L_964d89;
L_964d42: /* 964d42: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 964d47: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964d4a: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 964d4e: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 964d52: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 964d55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964d56: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 964d5a: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964d5d: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 964d61: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 964d65: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 964d69: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 964d6d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 964d71: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 964d75: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 964d78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964d79: push 0xafd5c8 */
  { uint32_t v = 0xafd5c8u; esp -= 4; W32(esp, v); }
/* 964d7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964d7f: call 0x953470 */
  esp -= 4; W32(esp, 0x964d84u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964d84: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964d87: jmp 0x964d8b */
  goto L_964d8b;
L_964d89: /* 964d89: fstp st(0) */
  STI(0) = ST0; FPOP();
L_964d8b: /* 964d8b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 964d8e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 964d8f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964d92: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 964d94: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 964d98: jl 0x964b0d */
  if ((sf != of)) goto L_964b0d;
L_964d9e: /* 964d9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 964d9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964da0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 964da1: mov esp, ebp */
  esp = ebp;
/* 964da3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 964da4: ret  */
  esp += 4; SPILL(); return;
}

void f_964db0(void) {
  LOAD_REGS();
L_964db0: /* 964db0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 964db5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964db7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964db8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964db9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964dba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 964dbe: je 0x964dd4 */
  if (zf) goto L_964dd4;
L_964dc0: /* 964dc0: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 964dc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964dc6: push 0xafd710 */
  { uint32_t v = 0xafd710u; esp -= 4; W32(esp, v); }
/* 964dcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964dcc: call 0x953470 */
  esp -= 4; W32(esp, 0x964dd1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964dd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964dd4: /* 964dd4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 964dd6: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 964dda: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 964dde: mov eax, ebp */
  eax = ebp;
/* 964de0: jle 0x964e10 */
  if ((zf || sf != of)) goto L_964e10;
L_964de2: /* 964de2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 964de3: lea edx, [ebx - 2] */
  edx = (uint32_t)(ebx + 0xfffffffeu);
/* 964de6: mov esi, edi */
  esi = edi;
L_964de8: /* 964de8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 964dea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964ded: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964def: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 964df1: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 964df3: je 0x964e07 */
  if (zf) goto L_964e07;
L_964df5: /* 964df5: mov ecx, edx */
  ecx = edx;
L_964df7: /* 964df7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 964df9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964dfc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 964dfd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 964dff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 964e01: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 964e03: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 964e05: jne 0x964df7 */
  if (!zf) goto L_964df7;
L_964e07: /* 964e07: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 964e09: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964e0c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 964e0d: jne 0x964de8 */
  if (!zf) goto L_964de8;
L_964e0f: /* 964e0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_964e10: /* 964e10: fld dword ptr [0xcf8c3c] */
  { double v = F32((uint32_t)(0xcf8c3cu)); FPUSH(v); }
/* 964e16: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 964e1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964e1e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964e21: jp 0x964e42 */
  if (pf) goto L_964e42;
L_964e23: /* 964e23: mov ecx, dword ptr [0xcf8c44] */
  ecx = R32((uint32_t)(0xcf8c44u));
/* 964e29: mov edx, dword ptr [0xcf8c40] */
  edx = R32((uint32_t)(0xcf8c40u));
/* 964e2f: mov eax, dword ptr [0xcf8c3c] */
  eax = R32((uint32_t)(0xcf8c3cu));
/* 964e34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964e35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964e36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964e37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964e38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964e39: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964e3a: call 0x9649c0 */
  esp -= 4; W32(esp, 0x964e3fu); SPILL(); f_9649c0(); if (g_unwind) return; RELOAD();
/* 964e3f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964e42: /* 964e42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 964e43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 964e44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 964e45: ret  */
  esp += 4; SPILL(); return;
}

void f_964e50(void) {
  LOAD_REGS();
L_964e50: /* 964e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 964e51: mov ebp, esp */
  ebp = esp;
/* 964e53: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 964e56: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964e59: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 964e5c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 964e5f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 964e60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 964e61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 964e62: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 964e65: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 964e67: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 964e6a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964e6c: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 964e70: mov eax, edx */
  eax = edx;
/* 964e72: mov esi, ecx */
  esi = ecx;
/* 964e74: je 0x964e95 */
  if (zf) goto L_964e95;
L_964e76: /* 964e76: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 964e79: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 964e7b: mov ebx, edi */
  ebx = edi;
/* 964e7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_964e80: /* 964e80: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 964e83: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 964e86: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 964e87: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 964e8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 964e8c: jne 0x964e80 */
  if (!zf) goto L_964e80;
L_964e8e: /* 964e8e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 964e91: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
L_964e95: /* 964e95: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 964e9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964e9d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 964ea0: je 0x964faf */
  if (zf) goto L_964faf;
L_964ea6: /* 964ea6: fld dword ptr [0xcf8a2c] */
  { double v = F32((uint32_t)(0xcf8a2cu)); FPUSH(v); }
/* 964eac: fchs  */
  ST0 = -ST0;
/* 964eae: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 964eb0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 964eb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 964eb4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 964eb7: jp 0x964f58 */
  if (pf) goto L_964f58;
L_964ebd: /* 964ebd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964ebf: je 0x964ee1 */
  if (zf) goto L_964ee1;
L_964ec1: /* 964ec1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 964ec7: mov eax, edx */
  eax = edx;
/* 964ec9: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 964ecb: mov ecx, edi */
  ecx = edi;
/* 964ecd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_964ed0: /* 964ed0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 964ed2: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964ed5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 964ed6: fmul dword ptr [eax + esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi + 0xfffffffcu)));
/* 964eda: fchs  */
  ST0 = -ST0;
/* 964edc: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 964edf: jne 0x964ed0 */
  if (!zf) goto L_964ed0;
L_964ee1: /* 964ee1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_964ee3: /* 964ee3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 964ee6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 964ee8: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 964eef: jl 0x964f4c */
  if ((sf != of)) goto L_964f4c;
L_964ef1: /* 964ef1: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 964ef4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 964ef6: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 964efc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964eff: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 964f02: push 0xafd7fc */
  { uint32_t v = 0xafd7fcu; esp -= 4; W32(esp, v); }
/* 964f07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964f08: call 0x953470 */
  esp -= 4; W32(esp, 0x964f0du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964f0d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 964f10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964f13: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964f15: je 0x964f38 */
  if (zf) goto L_964f38;
L_964f17: /* 964f17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 964f19: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 964f1e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 964f21: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 964f24: push 0xafd7f4 */
  { uint32_t v = 0xafd7f4u; esp -= 4; W32(esp, v); }
/* 964f29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964f2a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964f2d: call 0x953470 */
  esp -= 4; W32(esp, 0x964f32u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964f32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964f35: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 964f36: jne 0x964f17 */
  if (!zf) goto L_964f17;
L_964f38: /* 964f38: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 964f3e: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 964f43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964f44: call 0x953470 */
  esp -= 4; W32(esp, 0x964f49u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964f49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_964f4c: /* 964f4c: mov eax, 1 */
  eax = 0x1u;
/* 964f51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 964f52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 964f53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 964f54: mov esp, ebp */
  esp = ebp;
/* 964f56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 964f57: ret  */
  esp += 4; SPILL(); return;
L_964f58: /* 964f58: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964f5a: mov ebx, edi */
  ebx = edi;
/* 964f5c: je 0x964ee1 */
  if (zf) goto L_964ee1;
L_964f5e: /* 964f5e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 964f61: fchs  */
  ST0 = -ST0;
/* 964f63: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 964f65: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 964f69: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 964f6d: jmp 0x964f73 */
  goto L_964f73;
L_964f6f: /* 964f6f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_964f73: /* 964f73: fld dword ptr [eax + esi] */
  { double v = F32((uint32_t)(eax + esi)); FPUSH(v); }
/* 964f76: mov ecx, dword ptr [0xcf8a28] */
  ecx = R32((uint32_t)(0xcf8a28u));
/* 964f7c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 964f80: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 964f84: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 964f88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964f89: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 964f8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964f8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964f8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964f90: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 964f91: call 0x962c10 */
  esp -= 4; W32(esp, 0x964f96u); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 964f96: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 964f98: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 964f9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964f9f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964fa2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964fa4: jne 0x964fb3 */
  if (!zf) goto L_964fb3;
L_964fa6: /* 964fa6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964fa8: jne 0x964f6f */
  if (!zf) goto L_964f6f;
L_964faa: /* 964faa: jmp 0x964ee3 */
  goto L_964ee3;
L_964faf: /* 964faf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 964fb1: jmp 0x964fb6 */
  goto L_964fb6;
L_964fb3: /* 964fb3: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
L_964fb6: /* 964fb6: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 964fbc: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 964fbf: push 0xafd7a0 */
  { uint32_t v = 0xafd7a0u; esp -= 4; W32(esp, v); }
/* 964fc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964fc5: mov ebx, edx */
  ebx = edx;
/* 964fc7: call 0x953470 */
  esp -= 4; W32(esp, 0x964fccu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964fcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 964fcf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 964fd1: je 0x965009 */
  if (zf) goto L_965009;
L_964fd3: /* 964fd3: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_964fd7: /* 964fd7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 964fd9: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 964fdf: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 964fe3: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 964fe7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 964feb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 964fec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 964fed: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 964ff2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 964ff3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 964ff6: call 0x953470 */
  esp -= 4; W32(esp, 0x964ffbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 964ffb: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 964fff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965002: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 965003: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 965007: jne 0x964fd7 */
  if (!zf) goto L_964fd7;
L_965009: /* 965009: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96500f: push 0xafd780 */
  { uint32_t v = 0xafd780u; esp -= 4; W32(esp, v); }
/* 965014: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965015: call 0x953470 */
  esp -= 4; W32(esp, 0x96501au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96501a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96501d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96501f: je 0x96504b */
  if (zf) goto L_96504b;
L_965021: /* 965021: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 965023: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 965029: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 96502d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 965031: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 965035: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965036: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965037: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96503c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96503d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 965040: call 0x953470 */
  esp -= 4; W32(esp, 0x965045u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965045: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965048: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 965049: jne 0x965021 */
  if (!zf) goto L_965021;
L_96504b: /* 96504b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 965050: push 0xafd76c */
  { uint32_t v = 0xafd76cu; esp -= 4; W32(esp, v); }
/* 965055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965056: call 0x953470 */
  esp -= 4; W32(esp, 0x96505bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96505b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 96505e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 965060: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 965066: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 965069: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96506e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96506f: call 0x953470 */
  esp -= 4; W32(esp, 0x965074u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965074: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 965079: push 0xafd75c */
  { uint32_t v = 0xafd75cu; esp -= 4; W32(esp, v); }
/* 96507e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96507f: call 0x953470 */
  esp -= 4; W32(esp, 0x965084u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965084: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 965088: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96508e: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 965092: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965095: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96509a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96509b: call 0x953470 */
  esp -= 4; W32(esp, 0x9650a0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9650a0: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9650a6: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9650ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9650ac: call 0x953470 */
  esp -= 4; W32(esp, 0x9650b1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9650b1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9650b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9650b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9650b6: xor eax, eax */
  eax = 0;
/* 9650b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9650b9: mov esp, ebp */
  esp = ebp;
/* 9650bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9650bc: ret  */
  esp += 4; SPILL(); return;
}

void f_9650c0(void) {
  LOAD_REGS();
L_9650c0: /* 9650c0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9650c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9650c7: je 0x9650dc */
  if (zf) goto L_9650dc;
L_9650c9: /* 9650c9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9650ce: push 0xafd89c */
  { uint32_t v = 0xafd89cu; esp -= 4; W32(esp, v); }
/* 9650d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9650d4: call 0x953470 */
  esp -= 4; W32(esp, 0x9650d9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9650d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9650dc: /* 9650dc: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9650e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9650e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9650e2: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9650e6: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 9650e9: mov edx, ebx */
  edx = ebx;
/* 9650eb: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 9650ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9650ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9650f0: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9650f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9650f4: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9650fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9650fa: mov esi, eax */
  esi = eax;
/* 9650fc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9650fe: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 965102: jne 0x965121 */
  if (!zf) goto L_965121;
L_965104: /* 965104: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 965109: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96510a: push 0xafd858 */
  { uint32_t v = 0xafd858u; esp -= 4; W32(esp, v); }
/* 96510f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965110: call 0x953470 */
  esp -= 4; W32(esp, 0x965115u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965115: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965117: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 965119: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96511eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96511e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965121: /* 965121: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 965125: xor edi, edi */
  edi = 0;
/* 965127: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 965129: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 96512d: jle 0x965182 */
  if ((zf || sf != of)) goto L_965182;
L_96512f: /* 96512f: nop  */
L_965130: /* 965130: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 965134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965135: lea esi, [eax + ebx*4] */
  esi = (uint32_t)(eax + ebx*4);
/* 965138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96513a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96513e: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 965142: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965144: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 965145: call 0x964e50 */
  esp -= 4; W32(esp, 0x96514au); SPILL(); f_964e50(); if (g_unwind) return; RELOAD();
/* 96514a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96514d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96514f: jne 0x965171 */
  if (!zf) goto L_965171;
L_965151: /* 965151: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 965157: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965158: push 0xafd834 */
  { uint32_t v = 0xafd834u; esp -= 4; W32(esp, v); }
/* 96515d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96515e: call 0x953470 */
  esp -= 4; W32(esp, 0x965163u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965163: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965165: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965167: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 965169: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96516eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96516e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965171: /* 965171: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 965172: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965174: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 965177: jl 0x965130 */
  if ((sf != of)) goto L_965130;
L_965179: /* 965179: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96517d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96517e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96517f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 965180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 965181: ret  */
  esp += 4; SPILL(); return;
L_965182: /* 965182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 965183: mov eax, esi */
  eax = esi;
/* 965185: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 965186: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 965187: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 965188: ret  */
  esp += 4; SPILL(); return;
}

void f_965190(void) {
  LOAD_REGS();
L_965190: /* 965190: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 965193: mov eax, dword ptr [0xcf8b44] */
  eax = R32((uint32_t)(0xcf8b44u));
/* 965198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 965199: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96519a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96519b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96519c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96519d: call 0x9538c0 */
  esp -= 4; W32(esp, 0x9651a2u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 9651a2: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 9651a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9651a7: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9651ab: call 0x94f340 */
  esp -= 4; W32(esp, 0x9651b0u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9651b0: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 9651b4: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 9651b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9651ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9651bc: jne 0x9651c4 */
  if (!zf) goto L_9651c4;
L_9651be: /* 9651be: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9651c2: jmp 0x965201 */
  goto L_965201;
L_9651c4: /* 9651c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9651c5: jge 0x9651e5 */
  if ((sf == of)) goto L_9651e5;
L_9651c7: /* 9651c7: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9651cd: push 0xafd948 */
  { uint32_t v = 0xafd948u; esp -= 4; W32(esp, v); }
/* 9651d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9651d3: call 0x953470 */
  esp -= 4; W32(esp, 0x9651d8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9651d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9651da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9651dc: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9651de: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9651e3u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9651e3: jmp 0x9651fe */
  goto L_9651fe;
L_9651e5: /* 9651e5: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x9651eau); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 9651ea: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9651ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9651ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9651f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9651f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9651f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9651f5: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9651f9: call 0x963c50 */
  esp -= 4; W32(esp, 0x9651feu); SPILL(); f_963c50(); if (g_unwind) return; RELOAD();
L_9651fe: /* 9651fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965201: /* 965201: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 965205: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 965208: mov edx, dword ptr [0xcf8c1c] */
  edx = R32((uint32_t)(0xcf8c1cu));
/* 96520e: xor ecx, ecx */
  ecx = 0;
/* 965210: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 965212: jle 0x96524f */
  if ((zf || sf != of)) goto L_96524f;
L_965214: /* 965214: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 965219: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 96521c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 965220: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965222: je 0x96524a */
  if (zf) goto L_96524a;
L_965224: /* 965224: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 965227: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 965229: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96522b: je 0x96524a */
  if (zf) goto L_96524a;
L_96522d: /* 96522d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_965230: /* 965230: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 965233: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965235: je 0x965244 */
  if (zf) goto L_965244;
L_965237: /* 965237: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 96523a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96523d: fsub dword ptr [ebp + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4)));
/* 965241: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
L_965244: /* 965244: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 965246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965248: jne 0x965230 */
  if (!zf) goto L_965230;
L_96524a: /* 96524a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96524b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96524d: jl 0x965214 */
  if ((sf != of)) goto L_965214;
L_96524f: /* 96524f: xor ebx, ebx */
  ebx = 0;
/* 965251: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 965253: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 965257: jle 0x96529a */
  if ((zf || sf != of)) goto L_96529a;
L_965259: /* 965259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_965260: /* 965260: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 965266: mov edi, dword ptr [0xcf8c20] */
  edi = R32((uint32_t)(0xcf8c20u));
/* 96526c: xor ecx, ecx */
  ecx = 0;
/* 96526e: lea esi, [ebx*4] */
  esi = (uint32_t)(ebx*4);
L_965275: /* 965275: mov eax, dword ptr [edi + ecx*4] */
  eax = R32((uint32_t)(edi + ecx*4));
/* 965278: fld dword ptr [eax + esi] */
  { double v = F32((uint32_t)(eax + esi)); FPUSH(v); }
/* 96527b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96527d: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 965281: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 965283: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 965285: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 965286: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965288: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 96528a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96528c: jl 0x965275 */
  if ((sf != of)) goto L_965275;
L_96528e: /* 96528e: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 965290: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 965293: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 965294: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965296: jl 0x965260 */
  if ((sf != of)) goto L_965260;
L_965298: /* 965298: mov edi, eax */
  edi = eax;
L_96529a: /* 96529a: mov edx, dword ptr [0xcf8c20] */
  edx = R32((uint32_t)(0xcf8c20u));
/* 9652a0: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 9652a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9652a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9652a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9652a7: call 0x962210 */
  esp -= 4; W32(esp, 0x9652acu); SPILL(); f_962210(); if (g_unwind) return; RELOAD();
/* 9652ac: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9652b0: mov ecx, dword ptr [0xcf8a2c] */
  ecx = R32((uint32_t)(0xcf8a2cu));
/* 9652b6: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9652ba: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 9652be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9652bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9652c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9652c1: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 9652c6: call 0x962c10 */
  esp -= 4; W32(esp, 0x9652cbu); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 9652cb: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9652cf: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9652d3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9652d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9652d8: je 0x965318 */
  if (zf) goto L_965318;
L_9652da: /* 9652da: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9652dc: mov eax, edi */
  eax = edi;
/* 9652de: je 0x9652ee */
  if (zf) goto L_9652ee;
L_9652e0: /* 9652e0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9652e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9652e5: mov dword ptr [ecx + eax*4], 0xc1219db2 */
  W32((uint32_t)(ecx + eax*4), 0xc1219db2u);
/* 9652ec: jne 0x9652e0 */
  if (!zf) goto L_9652e0;
L_9652ee: /* 9652ee: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9652f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9652f5: je 0x9654b3 */
  if (zf) goto L_9654b3;
L_9652fb: /* 9652fb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9652ff: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 965304: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965305: push 0xafd920 */
  { uint32_t v = 0xafd920u; esp -= 4; W32(esp, v); }
/* 96530a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96530b: call 0x9642f0 */
  esp -= 4; W32(esp, 0x965310u); SPILL(); f_9642f0(); if (g_unwind) return; RELOAD();
/* 965310: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965313: jmp 0x9654b3 */
  goto L_9654b3;
L_965318: /* 965318: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96531a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 965322: jle 0x9653dd */
  if ((zf || sf != of)) goto L_9653dd;
L_965328: /* 965328: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 96532c: mov eax, ebp */
  eax = ebp;
/* 96532e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 965330: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 965334: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_965338: /* 965338: mov ecx, dword ptr [0xcf8c1c] */
  ecx = R32((uint32_t)(0xcf8c1cu));
/* 96533e: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 965342: xor esi, esi */
  esi = 0;
L_965344: /* 965344: cmp esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965348: mov edx, dword ptr [0xcf8c20] */
  edx = R32((uint32_t)(0xcf8c20u));
/* 96534e: mov dword ptr [edx + esi*4], ecx */
  W32((uint32_t)(edx + esi*4), ecx);
/* 965351: jne 0x96536f */
  if (!zf) goto L_96536f;
L_965353: /* 965353: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965355: je 0x96539a */
  if (zf) goto L_96539a;
L_965357: /* 965357: mov eax, edi */
  eax = edi;
/* 965359: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_965360: /* 965360: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 965362: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 965364: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 965367: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96536a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96536b: jne 0x965360 */
  if (!zf) goto L_965360;
L_96536d: /* 96536d: jmp 0x96539a */
  goto L_96539a;
L_96536f: /* 96536f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 965373: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965375: je 0x96539a */
  if (zf) goto L_96539a;
L_965377: /* 965377: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 96537a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 96537c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96537e: je 0x96539a */
  if (zf) goto L_96539a;
L_965380: /* 965380: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 965383: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965385: je 0x965394 */
  if (zf) goto L_965394;
L_965387: /* 965387: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 96538a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96538d: fsub dword ptr [ebp + esi*4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + esi*4)));
/* 965391: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
L_965394: /* 965394: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 965396: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965398: jne 0x965380 */
  if (!zf) goto L_965380;
L_96539a: /* 96539a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96539b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96539d: jl 0x965344 */
  if ((sf != of)) goto L_965344;
L_96539f: /* 96539f: mov ecx, dword ptr [0xcf8c20] */
  ecx = R32((uint32_t)(0xcf8c20u));
/* 9653a5: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 9653a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9653aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9653ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9653ac: call 0x962210 */
  esp -= 4; W32(esp, 0x9653b1u); SPILL(); f_962210(); if (g_unwind) return; RELOAD();
/* 9653b1: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9653b5: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9653b9: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9653bd: fadd dword ptr [edx + eax] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax)));
/* 9653c0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9653c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9653c7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9653c8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9653ca: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9653cd: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9653cf: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9653d3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9653d7: jl 0x965338 */
  if ((sf != of)) goto L_965338;
L_9653dd: /* 9653dd: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9653e4: jl 0x9654b3 */
  if ((sf != of)) goto L_9654b3;
L_9653ea: /* 9653ea: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9653ee: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9653f3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9653f6: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9653fa: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9653fe: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 965401: push 0xafd8f4 */
  { uint32_t v = 0xafd8f4u; esp -= 4; W32(esp, v); }
/* 965406: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965407: call 0x953470 */
  esp -= 4; W32(esp, 0x96540cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96540c: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 965412: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965413: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 965415: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 965419: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96541a: push 0xafd8ec */
  { uint32_t v = 0xafd8ecu; esp -= 4; W32(esp, v); }
/* 96541f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965420: call 0x964260 */
  esp -= 4; W32(esp, 0x965425u); SPILL(); f_964260(); if (g_unwind) return; RELOAD();
/* 965425: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96542a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96542d: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965430: jl 0x9654b3 */
  if ((sf != of)) goto L_9654b3;
L_965436: /* 965436: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96543a: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 965440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965441: push 0xaf5784 */
  { uint32_t v = 0xaf5784u; esp -= 4; W32(esp, v); }
/* 965446: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965447: call 0x9642f0 */
  esp -= 4; W32(esp, 0x96544cu); SPILL(); f_9642f0(); if (g_unwind) return; RELOAD();
/* 96544c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 965450: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965453: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965455: je 0x96549f */
  if (zf) goto L_96549f;
L_965457: /* 965457: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96545a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96545c: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 96545f: je 0x96549f */
  if (zf) goto L_96549f;
L_965461: /* 965461: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 965465: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 965469: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96546a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96546b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96546c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96546f: call 0x964220 */
  esp -= 4; W32(esp, 0x965474u); SPILL(); f_964220(); if (g_unwind) return; RELOAD();
/* 965474: fstp qword ptr [esp + 4] */
  WF64((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 965478: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96547b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96547c: call 0x95f210 */
  esp -= 4; W32(esp, 0x965481u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 965481: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 965487: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96548a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96548b: push 0xafd8dc */
  { uint32_t v = 0xafd8dcu; esp -= 4; W32(esp, v); }
/* 965490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965491: call 0x953470 */
  esp -= 4; W32(esp, 0x965496u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965496: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 965498: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96549b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96549d: jne 0x965461 */
  if (!zf) goto L_965461;
L_96549f: /* 96549f: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9654a5: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9654aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9654ab: call 0x953470 */
  esp -= 4; W32(esp, 0x9654b0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9654b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9654b3: /* 9654b3: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9654b7: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9654bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9654bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9654bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9654be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9654bf: je 0x9654ce */
  if (zf) goto L_9654ce;
L_9654c1: /* 9654c1: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 9654c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9654c6: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9654cbu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9654cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9654ce: /* 9654ce: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9654d2: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9654d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9654e0(void) {
  LOAD_REGS();
L_9654e0: /* 9654e0: mov eax, dword ptr [0xcf2f48] */
  eax = R32((uint32_t)(0xcf2f48u));
/* 9654e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9654e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9654e7: call 0x94f340 */
  esp -= 4; W32(esp, 0x9654ecu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9654ec: mov edi, eax */
  edi = eax;
/* 9654ee: mov eax, dword ptr [0xcf85b0] */
  eax = R32((uint32_t)(0xcf85b0u));
/* 9654f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9654f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9654f8: je 0x965509 */
  if (zf) goto L_965509;
L_9654fa: /* 9654fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9654fc: call 0x955dc0 */
  esp -= 4; W32(esp, 0x965501u); SPILL(); f_955dc0(); if (g_unwind) return; RELOAD();
/* 965501: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965504: call 0x958540 */
  esp -= 4; W32(esp, 0x965509u); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
L_965509: /* 965509: mov eax, dword ptr [0xcf85c4] */
  eax = R32((uint32_t)(0xcf85c4u));
/* 96550e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965510: je 0x965521 */
  if (zf) goto L_965521;
L_965512: /* 965512: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 965518: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965519: call 0x9633d0 */
  esp -= 4; W32(esp, 0x96551eu); SPILL(); f_9633d0(); if (g_unwind) return; RELOAD();
/* 96551e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965521: /* 965521: mov edx, dword ptr [0xcf8b4c] */
  edx = R32((uint32_t)(0xcf8b4cu));
/* 965527: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965528: call 0x956620 */
  esp -= 4; W32(esp, 0x96552du); SPILL(); f_956620(); if (g_unwind) return; RELOAD();
/* 96552d: mov eax, dword ptr [0xcf843c] */
  eax = R32((uint32_t)(0xcf843cu));
/* 965532: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965535: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965537: jne 0x965555 */
  if (!zf) goto L_965555;
L_965539: /* 965539: mov eax, dword ptr [0xcf8448] */
  eax = R32((uint32_t)(0xcf8448u));
/* 96553e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965540: jne 0x965555 */
  if (!zf) goto L_965555;
L_965542: /* 965542: fld dword ptr [0xcf844c] */
  { double v = F32((uint32_t)(0xcf844cu)); FPUSH(v); }
/* 965548: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96554e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965550: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965553: jp 0x965563 */
  if (pf) goto L_965563;
L_965555: /* 965555: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 96555a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96555b: call 0x966780 */
  esp -= 4; W32(esp, 0x965560u); SPILL(); f_966780(); if (g_unwind) return; RELOAD();
/* 965560: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965563: /* 965563: mov eax, dword ptr [0xcf8534] */
  eax = R32((uint32_t)(0xcf8534u));
/* 965568: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96556a: je 0x965575 */
  if (zf) goto L_965575;
L_96556c: /* 96556c: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 965572: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965573: jmp 0x965585 */
  goto L_965585;
L_965575: /* 965575: mov eax, dword ptr [0xcf84b8] */
  eax = R32((uint32_t)(0xcf84b8u));
/* 96557a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96557c: jne 0x96558d */
  if (!zf) goto L_96558d;
L_96557e: /* 96557e: mov edx, dword ptr [0xcf8b34] */
  edx = R32((uint32_t)(0xcf8b34u));
/* 965584: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_965585: /* 965585: call 0x96f1c0 */
  esp -= 4; W32(esp, 0x96558au); SPILL(); f_96f1c0(); if (g_unwind) return; RELOAD();
/* 96558a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96558d: /* 96558d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96558e: mov esi, 0xcf84b8 */
  esi = 0xcf84b8u;
L_965593: /* 965593: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 965598: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 96559a: mov edx, dword ptr [0xcf8b34] */
  edx = R32((uint32_t)(0xcf8b34u));
/* 9655a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9655a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9655a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9655a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9655a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9655a7: call 0x96a450 */
  esp -= 4; W32(esp, 0x9655acu); SPILL(); f_96a450(); if (g_unwind) return; RELOAD();
/* 9655ac: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9655af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9655b2: cmp esi, 0xcf8528 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcf8528u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9655b8: jl 0x965593 */
  if ((sf != of)) goto L_965593;
L_9655ba: /* 9655ba: call 0x961690 */
  esp -= 4; W32(esp, 0x9655bfu); SPILL(); f_961690(); if (g_unwind) return; RELOAD();
/* 9655bf: mov eax, dword ptr [0xcf84b4] */
  eax = R32((uint32_t)(0xcf84b4u));
/* 9655c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9655c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9655c7: je 0x965605 */
  if (zf) goto L_965605;
L_9655c9: /* 9655c9: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 9655ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9655d0: jne 0x965605 */
  if (!zf) goto L_965605;
L_9655d2: /* 9655d2: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9655d8: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9655de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9655e0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9655e3: je 0x9655ee */
  if (zf) goto L_9655ee;
L_9655e5: /* 9655e5: mov eax, dword ptr [0xcf8564] */
  eax = R32((uint32_t)(0xcf8564u));
/* 9655ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9655ec: je 0x965605 */
  if (zf) goto L_965605;
L_9655ee: /* 9655ee: mov eax, dword ptr [0xcf81c4] */
  eax = R32((uint32_t)(0xcf81c4u));
/* 9655f3: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9655f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9655fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9655fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9655fd: call 0x9620d0 */
  esp -= 4; W32(esp, 0x965602u); SPILL(); f_9620d0(); if (g_unwind) return; RELOAD();
/* 965602: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965605: /* 965605: mov eax, dword ptr [0xcf85a8] */
  eax = R32((uint32_t)(0xcf85a8u));
/* 96560a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96560c: je 0x965637 */
  if (zf) goto L_965637;
L_96560e: /* 96560e: mov eax, dword ptr [0xcf7a3c] */
  eax = R32((uint32_t)(0xcf7a3cu));
/* 965613: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 965615: jg 0x965620 */
  if ((!zf && sf == of)) goto L_965620;
L_965617: /* 965617: mov eax, dword ptr [0xcf7a54] */
  eax = R32((uint32_t)(0xcf7a54u));
/* 96561c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96561e: jle 0x965637 */
  if ((zf || sf != of)) goto L_965637;
L_965620: /* 965620: mov edx, dword ptr [0xcf81c8] */
  edx = R32((uint32_t)(0xcf81c8u));
/* 965626: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96562b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96562d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96562e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96562f: call 0x9620d0 */
  esp -= 4; W32(esp, 0x965634u); SPILL(); f_9620d0(); if (g_unwind) return; RELOAD();
/* 965634: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965637: /* 965637: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 96563c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96563e: je 0x965697 */
  if (zf) goto L_965697;
L_965640: /* 965640: call 0x9616b0 */
  esp -= 4; W32(esp, 0x965645u); SPILL(); f_9616b0(); if (g_unwind) return; RELOAD();
/* 965645: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96564b: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 965650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965651: call 0x961d00 */
  esp -= 4; W32(esp, 0x965656u); SPILL(); f_961d00(); if (g_unwind) return; RELOAD();
/* 965656: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96565c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96565d: call 0x953e00 */
  esp -= 4; W32(esp, 0x965662u); SPILL(); f_953e00(); if (g_unwind) return; RELOAD();
/* 965662: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 965667: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 96566d: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 965674: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 965677: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965679: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96567e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96567f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 965681: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 965683: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 965685: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 965687: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 965689: push 0xafda00 */
  { uint32_t v = 0xafda00u; esp -= 4; W32(esp, v); }
/* 96568e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96568f: call 0x953470 */
  esp -= 4; W32(esp, 0x965694u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965694: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965697: /* 965697: mov ecx, dword ptr [0xcf2f48] */
  ecx = R32((uint32_t)(0xcf2f48u));
/* 96569d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96569e: call 0x94f340 */
  esp -= 4; W32(esp, 0x9656a3u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9656a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9656a6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9656a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9656a9: je 0x9656d6 */
  if (zf) goto L_9656d6;
L_9656ab: /* 9656ab: mov edx, dword ptr [0xcf2f48] */
  edx = R32((uint32_t)(0xcf2f48u));
/* 9656b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9656b2: call 0x94f340 */
  esp -= 4; W32(esp, 0x9656b7u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9656b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9656b8: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9656bd: push 0xafd9b0 */
  { uint32_t v = 0xafd9b0u; esp -= 4; W32(esp, v); }
/* 9656c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9656c3: call 0x953470 */
  esp -= 4; W32(esp, 0x9656c8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9656c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9656ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9656cc: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9656ce: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9656d3u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9656d3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9656d6: /* 9656d6: ret  */
  esp += 4; SPILL(); return;
}

void f_9656e0(void) {
  LOAD_REGS();
L_9656e0: /* 9656e0: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 9656e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9656e7: je 0x965712 */
  if (zf) goto L_965712;
L_9656e9: /* 9656e9: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9656ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9656f0: /* 9656f0: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 9656f3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9656f5: je 0x965712 */
  if (zf) goto L_965712;
L_9656f7: /* 9656f7: cmp dword ptr [eax + 0x38], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9656fa: je 0x965703 */
  if (zf) goto L_965703;
L_9656fc: /* 9656fc: mov eax, ecx */
  eax = ecx;
/* 9656fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965700: jne 0x9656f0 */
  if (!zf) goto L_9656f0;
L_965702: /* 965702: ret  */
  esp += 4; SPILL(); return;
L_965703: /* 965703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965704: mov eax, dword ptr [0xcf8b34] */
  eax = R32((uint32_t)(0xcf8b34u));
/* 965709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96570a: call 0x968be0 */
  esp -= 4; W32(esp, 0x96570fu); SPILL(); f_968be0(); if (g_unwind) return; RELOAD();
/* 96570f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965712: /* 965712: ret  */
  esp += 4; SPILL(); return;
}

void f_965720(void) {
  LOAD_REGS();
L_965720: /* 965720: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 965725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965727: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965728: je 0x96575a */
  if (zf) goto L_96575a;
L_96572a: /* 96572a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 96572e: mov edi, edi */
  edi = edi;
L_965730: /* 965730: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 965732: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965734: je 0x96575a */
  if (zf) goto L_96575a;
L_965736: /* 965736: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 965739: and esi, 0xffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 96573f: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965741: je 0x96574b */
  if (zf) goto L_96574b;
L_965743: /* 965743: mov eax, ecx */
  eax = ecx;
/* 965745: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965747: jne 0x965730 */
  if (!zf) goto L_965730;
L_965749: /* 965749: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96574a: ret  */
  esp += 4; SPILL(); return;
L_96574b: /* 96574b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96574c: mov eax, dword ptr [0xcf8b34] */
  eax = R32((uint32_t)(0xcf8b34u));
/* 965751: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965752: call 0x96b950 */
  esp -= 4; W32(esp, 0x965757u); SPILL(); f_96b950(); if (g_unwind) return; RELOAD();
/* 965757: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96575a: /* 96575a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96575b: ret  */
  esp += 4; SPILL(); return;
}

void f_965760(void) {
  LOAD_REGS();
L_965760: /* 965760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 965764: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 965768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965769: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 96576b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96576d: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 965770: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965772: call 0x95f210 */
  esp -= 4; W32(esp, 0x965777u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 965777: mov edi, eax */
  edi = eax;
/* 965779: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 96577c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96577d: call 0x95f210 */
  esp -= 4; W32(esp, 0x965782u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 965782: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965785: xor ecx, ecx */
  ecx = 0;
/* 965787: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965789: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 96578c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96578d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96578e: lea ecx, [ecx + ecx - 1] */
  ecx = (uint32_t)(ecx + ecx + 0xffffffffu);
/* 965792: mov eax, ecx */
  eax = ecx;
/* 965794: ret  */
  esp += 4; SPILL(); return;
}

void f_9657a0(void) {
  LOAD_REGS();
L_9657a0: /* 9657a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9657a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9657a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9657a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9657a6: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 9657aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9657ab: xor edi, edi */
  edi = 0;
/* 9657ad: xor ebp, ebp */
  ebp = 0;
/* 9657af: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9657b1: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 9657b5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 9657b9: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 9657bd: je 0x965858 */
  if (zf) goto L_965858;
L_9657c3: /* 9657c3: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9657c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9657c8: je 0x965858 */
  if (zf) goto L_965858;
L_9657ce: /* 9657ce: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9657d1: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9657d4: je 0x9657df */
  if (zf) goto L_9657df;
L_9657d6: /* 9657d6: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 9657db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9657dd: jne 0x9657f4 */
  if (!zf) goto L_9657f4;
L_9657df: /* 9657df: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9657e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9657e5: jne 0x9657fd */
  if (!zf) goto L_9657fd;
L_9657e7: /* 9657e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9657e8: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x9657edu); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 9657ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9657f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9657f2: je 0x9657fd */
  if (zf) goto L_9657fd;
L_9657f4: /* 9657f4: mov dword ptr [esi + 0x34], 0 */
  W32((uint32_t)(esi + 0x34u), 0x0u);
/* 9657fb: jmp 0x96584d */
  goto L_96584d;
L_9657fd: /* 9657fd: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 965800: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 965801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965802: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 965805: call 0x94f340 */
  esp -= 4; W32(esp, 0x96580au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96580a: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 96580c: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96580f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965812: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 965815: je 0x96581d */
  if (zf) goto L_96581d;
L_965817: /* 965817: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 96581b: jmp 0x965833 */
  goto L_965833;
L_96581d: /* 96581d: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 965820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965821: call 0x94f340 */
  esp -= 4; W32(esp, 0x965826u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 965826: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96582a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96582d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96582f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_965833: /* 965833: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 965836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965838: je 0x96584d */
  if (zf) goto L_96584d;
L_96583a: /* 96583a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96583b: call 0x94f340 */
  esp -= 4; W32(esp, 0x965840u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 965840: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 965844: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965847: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 965849: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_96584d: /* 96584d: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 965850: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965852: jne 0x9657c3 */
  if (!zf) goto L_9657c3;
L_965858: /* 965858: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 96585c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96585e: je 0x9658fe */
  if (zf) goto L_9658fe;
L_965864: /* 965864: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 965867: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965869: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 96586c: je 0x9658fe */
  if (zf) goto L_9658fe;
L_965872: /* 965872: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 965875: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 965878: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96587b: je 0x965886 */
  if (zf) goto L_965886;
L_96587d: /* 96587d: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 965882: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965884: jne 0x96589b */
  if (!zf) goto L_96589b;
L_965886: /* 965886: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96588a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96588c: jne 0x9658a4 */
  if (!zf) goto L_9658a4;
L_96588e: /* 96588e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96588f: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x965894u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 965894: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965897: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965899: je 0x9658a4 */
  if (zf) goto L_9658a4;
L_96589b: /* 96589b: mov dword ptr [esi + 0x34], 0 */
  W32((uint32_t)(esi + 0x34u), 0x0u);
/* 9658a2: jmp 0x9658f4 */
  goto L_9658f4;
L_9658a4: /* 9658a4: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 9658a7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9658a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9658a9: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 9658ac: call 0x94f340 */
  esp -= 4; W32(esp, 0x9658b1u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9658b1: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9658b3: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9658b6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9658b9: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9658bc: je 0x9658c4 */
  if (zf) goto L_9658c4;
L_9658be: /* 9658be: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 9658c2: jmp 0x9658da */
  goto L_9658da;
L_9658c4: /* 9658c4: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 9658c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9658c8: call 0x94f340 */
  esp -= 4; W32(esp, 0x9658cdu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9658cd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9658d1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9658d4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9658d6: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_9658da: /* 9658da: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 9658dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9658df: je 0x9658f4 */
  if (zf) goto L_9658f4;
L_9658e1: /* 9658e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9658e2: call 0x94f340 */
  esp -= 4; W32(esp, 0x9658e7u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9658e7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9658eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9658ee: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9658f0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_9658f4: /* 9658f4: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 9658f6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9658f8: jne 0x965872 */
  if (!zf) goto L_965872;
L_9658fe: /* 9658fe: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 965904: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 965908: lea edx, [ecx + edi + 1] */
  edx = (uint32_t)(ecx + edi + 0x1u);
/* 96590c: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 965910: mov dword ptr [0xcf8bf8], edx */
  W32((uint32_t)(0xcf8bf8u), edx);
/* 965916: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96591a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 96591c: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 965920: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 965922: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 965926: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96592a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96592b: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 96592d: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 965931: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 965932: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 965934: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 965938: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 965939: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 96593b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96593c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96593f: ret  */
  esp += 4; SPILL(); return;
}

void f_965940(void) {
  LOAD_REGS();
L_965940: /* 965940: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 965943: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 965948: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 965949: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96594a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96594b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96594c: xor ebp, ebp */
  ebp = 0;
/* 96594e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96594f: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 965953: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x965958u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 965958: mov edx, dword ptr [0xcf8c1c] */
  edx = R32((uint32_t)(0xcf8c1cu));
/* 96595e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 965962: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 965967: mov ecx, eax */
  ecx = eax;
/* 965969: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 96596c: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 96596f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965972: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 965975: xor eax, eax */
  eax = 0;
/* 965977: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965979: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 96597d: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 965981: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 965985: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 965989: jle 0x9659b3 */
  if ((zf || sf != of)) goto L_9659b3;
L_96598b: /* 96598b: nop  */
/* 96598c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_965990: /* 965990: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 965994: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 965997: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 96599b: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 96599e: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 9659a1: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 9659a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9659a5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9659a7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9659ad: fstp dword ptr [ecx + eax*4 - 4] */
  WF32((uint32_t)(ecx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 9659b1: jl 0x965990 */
  if ((sf != of)) goto L_965990;
L_9659b3: /* 9659b3: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 9659b7: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9659b9: je 0x965a0b */
  if (zf) goto L_965a0b;
L_9659bb: /* 9659bb: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 9659be: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9659c1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9659c3: je 0x965a0b */
  if (zf) goto L_965a0b;
L_9659c5: /* 9659c5: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 9659c8: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9659cb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9659cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9659ce: jne 0x9659da */
  if (!zf) goto L_9659da;
L_9659d0: /* 9659d0: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 9659d8: jmp 0x965a05 */
  goto L_965a05;
L_9659da: /* 9659da: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9659dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9659df: jne 0x9659f0 */
  if (!zf) goto L_9659f0;
L_9659e1: /* 9659e1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9659e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9659e5: call 0x963010 */
  esp -= 4; W32(esp, 0x9659eau); SPILL(); f_963010(); if (g_unwind) return; RELOAD();
/* 9659ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9659ed: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_9659f0: /* 9659f0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9659f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9659f4: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9659f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9659f9: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9659feu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9659fe: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 965a02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965a05: /* 965a05: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 965a07: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965a09: jne 0x9659c5 */
  if (!zf) goto L_9659c5;
L_965a0b: /* 965a0b: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965a0d: jle 0x965a72 */
  if ((zf || sf != of)) goto L_965a72;
L_965a0f: /* 965a0f: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 965a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965a15: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x965a1au); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 965a1a: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 965a1e: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 965a21: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 965a25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965a26: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 965a2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965a2b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x965a30u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 965a30: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 965a34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965a37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965a39: je 0x965a4d */
  if (zf) goto L_965a4d;
L_965a3b: /* 965a3b: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 965a3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965a40: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 965a44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965a45: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x965a4au); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 965a4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965a4d: /* 965a4d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 965a51: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 965a55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965a56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965a58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965a5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965a5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965a5c: call 0x963c50 */
  esp -= 4; W32(esp, 0x965a61u); SPILL(); f_963c50(); if (g_unwind) return; RELOAD();
/* 965a61: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 965a65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965a67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965a68: call 0x94eae0 */
  esp -= 4; W32(esp, 0x965a6du); SPILL(); f_94eae0(); if (g_unwind) return; RELOAD();
/* 965a6d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965a70: jmp 0x965ab4 */
  goto L_965ab4;
L_965a72: /* 965a72: jne 0x965a94 */
  if (!zf) goto L_965a94;
L_965a74: /* 965a74: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 965a78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965a7a: je 0x965a8a */
  if (zf) goto L_965a8a;
L_965a7c: /* 965a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965a7d: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 965a81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965a82: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x965a87u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 965a87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965a8a: /* 965a8a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 965a8e: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 965a92: jmp 0x965ab4 */
  goto L_965ab4;
L_965a94: /* 965a94: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 965a9a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 965a9b: push 0xafdb50 */
  { uint32_t v = 0xafdb50u; esp -= 4; W32(esp, v); }
/* 965aa0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965aa1: call 0x953470 */
  esp -= 4; W32(esp, 0x965aa6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965aa6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965aa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965aaa: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 965aac: call 0x9535b0 */
  esp -= 4; W32(esp, 0x965ab1u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 965ab1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965ab4: /* 965ab4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 965ab8: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 965abb: mov esi, dword ptr [0xcf8c1c] */
  esi = R32((uint32_t)(0xcf8c1cu));
/* 965ac1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 965ac4: xor ebx, ebx */
  ebx = 0;
/* 965ac6: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 965aca: mov ecx, eax */
  ecx = eax;
/* 965acc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 965ace: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965ad0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 965ad4: je 0x965b4d */
  if (zf) goto L_965b4d;
L_965ad6: /* 965ad6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 965ad9: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 965add: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965ae4: jl 0x965b06 */
  if ((sf != of)) goto L_965b06;
L_965ae6: /* 965ae6: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 965aec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965aed: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 965aef: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 965af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965af4: push 0xafdb28 */
  { uint32_t v = 0xafdb28u; esp -= 4; W32(esp, v); }
/* 965af9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965afa: call 0x964260 */
  esp -= 4; W32(esp, 0x965affu); SPILL(); f_964260(); if (g_unwind) return; RELOAD();
/* 965aff: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 965b03: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965b06: /* 965b06: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965b08: je 0x965b3f */
  if (zf) goto L_965b3f;
L_965b0a: /* 965b0a: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 965b0f: mov dword ptr [eax + ebx*4], esi */
  W32((uint32_t)(eax + ebx*4), esi);
/* 965b12: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 965b13: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965b15: mov eax, ebp */
  eax = ebp;
/* 965b17: je 0x965b3f */
  if (zf) goto L_965b3f;
L_965b19: /* 965b19: mov ecx, edi */
  ecx = edi;
/* 965b1b: nop  */
/* 965b1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_965b20: /* 965b20: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 965b24: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 965b26: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 965b29: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 965b2b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 965b2e: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 965b31: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 965b35: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 965b38: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 965b39: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 965b3d: jne 0x965b20 */
  if (!zf) goto L_965b20;
L_965b3f: /* 965b3f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 965b43: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 965b45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965b47: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 965b4b: jne 0x965ad6 */
  if (!zf) goto L_965ad6;
L_965b4d: /* 965b4d: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 965b52: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 965b56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965b57: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 965b5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965b5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 965b5f: mov dword ptr [eax + ebx*4], esi */
  W32((uint32_t)(eax + ebx*4), esi);
/* 965b62: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 965b67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 965b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965b69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965b6a: call 0x971840 */
  esp -= 4; W32(esp, 0x965b6fu); SPILL(); f_971840(); if (g_unwind) return; RELOAD();
/* 965b6f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 965b73: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 965b76: mov ecx, dword ptr [0xcf8430] */
  ecx = R32((uint32_t)(0xcf8430u));
/* 965b7c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965b7f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965b81: je 0x965b8a */
  if (zf) goto L_965b8a;
L_965b83: /* 965b83: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 965b87: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
L_965b8a: /* 965b8a: inc dword ptr [0xcf788c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf788cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf788cu), r);
  }
/* 965b90: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 965b94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965b95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965b96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965b97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965b98: call 0x962b60 */
  esp -= 4; W32(esp, 0x965b9du); SPILL(); f_962b60(); if (g_unwind) return; RELOAD();
/* 965b9d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 965ba3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965ba6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965ba8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 965bab: jne 0x965bcd */
  if (!zf) goto L_965bcd;
L_965bad: /* 965bad: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965baf: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 965bb3: fchs  */
  ST0 = -ST0;
/* 965bb5: mov eax, esi */
  eax = esi;
/* 965bb7: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 965bbb: je 0x965bcd */
  if (zf) goto L_965bcd;
L_965bbd: /* 965bbd: mov ecx, edi */
  ecx = edi;
/* 965bbf: nop  */
L_965bc0: /* 965bc0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 965bc2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 965bc5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 965bc6: fchs  */
  ST0 = -ST0;
/* 965bc8: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 965bcb: jne 0x965bc0 */
  if (!zf) goto L_965bc0;
L_965bcd: /* 965bcd: mov eax, dword ptr [0xcf85a8] */
  eax = R32((uint32_t)(0xcf85a8u));
/* 965bd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965bd4: jne 0x965be3 */
  if (!zf) goto L_965be3;
L_965bd6: /* 965bd6: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 965bdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965bdd: je 0x965ed0 */
  if (zf) goto L_965ed0;
L_965be3: /* 965be3: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 965be7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 965bea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965beb: call 0x95f210 */
  esp -= 4; W32(esp, 0x965bf0u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 965bf0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 965bf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965bf4: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 965bf8: call 0x95f210 */
  esp -= 4; W32(esp, 0x965bfdu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 965bfd: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 965c01: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 965c05: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965c0a: jne 0x965dba */
  if (!zf) goto L_965dba;
L_965c10: /* 965c10: mov edx, dword ptr [0xcf7894] */
  edx = R32((uint32_t)(0xcf7894u));
/* 965c16: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 965c1a: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 965c1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965c1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965c20: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 965c21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 965c22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965c23: mov dword ptr [0xcf7894], edx */
  W32((uint32_t)(0xcf7894u), edx);
/* 965c29: call 0x962b60 */
  esp -= 4; W32(esp, 0x965c2eu); SPILL(); f_962b60(); if (g_unwind) return; RELOAD();
/* 965c2e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 965c34: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965c37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965c39: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965c3c: jp 0x965c40 */
  if (pf) goto L_965c40;
L_965c3e: /* 965c3e: fchs  */
  ST0 = -ST0;
L_965c40: /* 965c40: fld dword ptr [0xcf7a5c] */
  { double v = F32((uint32_t)(0xcf7a5cu)); FPUSH(v); }
/* 965c46: mov eax, dword ptr [0xcf7a54] */
  eax = R32((uint32_t)(0xcf7a54u));
/* 965c4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 965c4c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 965c4e: mov dword ptr [0xcf7a54], eax */
  W32((uint32_t)(0xcf7a54u), eax);
/* 965c53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965c55: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965c58: jp 0x965c60 */
  if (pf) goto L_965c60;
L_965c5a: /* 965c5a: fst dword ptr [0xcf7a5c] */
  WF32((uint32_t)(0xcf7a5cu), ST0);
L_965c60: /* 965c60: fld dword ptr [0xcf7a58] */
  { double v = F32((uint32_t)(0xcf7a58u)); FPUSH(v); }
/* 965c66: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 965c6b: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965c6e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 965c70: fstp dword ptr [0xcf7a58] */
  WF32((uint32_t)(0xcf7a58u), ST0); FPOP();
/* 965c76: jl 0x965c9d */
  if ((sf != of)) goto L_965c9d;
L_965c78: /* 965c78: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 965c7c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 965c80: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 965c85: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 965c88: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 965c8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965c8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965c8d: push 0xafdaf8 */
  { uint32_t v = 0xafdaf8u; esp -= 4; W32(esp, v); }
/* 965c92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965c93: call 0x953470 */
  esp -= 4; W32(esp, 0x965c98u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965c98: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965c9b: jmp 0x965c9f */
  goto L_965c9f;
L_965c9d: /* 965c9d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_965c9f: /* 965c9f: xor eax, eax */
  eax = 0;
/* 965ca1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 965ca3: jle 0x965cbe */
  if ((zf || sf != of)) goto L_965cbe;
L_965ca5: /* 965ca5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 965ca8: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 965cac: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 965caf: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 965cb2: fsub dword ptr [edx + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax*4)));
/* 965cb5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 965cb6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965cb8: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 965cbc: jl 0x965ca5 */
  if ((sf != of)) goto L_965ca5;
L_965cbe: /* 965cbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 965cc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965cc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 965cc2: call 0x970b00 */
  esp -= 4; W32(esp, 0x965cc7u); SPILL(); f_970b00(); if (g_unwind) return; RELOAD();
/* 965cc7: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 965ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965ccc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965ccd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 965cce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965ccf: call 0x962b60 */
  esp -= 4; W32(esp, 0x965cd4u); SPILL(); f_962b60(); if (g_unwind) return; RELOAD();
/* 965cd4: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 965cda: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965cdd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965cdf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965ce2: jp 0x965cec */
  if (pf) goto L_965cec;
L_965ce4: /* 965ce4: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 965cea: jmp 0x965cf2 */
  goto L_965cf2;
L_965cec: /* 965cec: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
L_965cf2: /* 965cf2: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 965cf6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 965cfa: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 965d00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965d02: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965d05: jp 0x965d0f */
  if (pf) goto L_965d0f;
L_965d07: /* 965d07: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
L_965d0f: /* 965d0f: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965d16: jl 0x965d45 */
  if ((sf != of)) goto L_965d45;
L_965d18: /* 965d18: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 965d1c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 965d20: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 965d24: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 965d28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965d29: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 965d2f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 965d32: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 965d35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965d36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965d37: push 0xafdac4 */
  { uint32_t v = 0xafdac4u; esp -= 4; W32(esp, v); }
/* 965d3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965d3d: call 0x953470 */
  esp -= 4; W32(esp, 0x965d42u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965d42: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965d45: /* 965d45: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 965d49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965d4b: je 0x965d85 */
  if (zf) goto L_965d85;
L_965d4d: /* 965d4d: fld dword ptr [0xcf7a50] */
  { double v = F32((uint32_t)(0xcf7a50u)); FPUSH(v); }
/* 965d53: mov eax, dword ptr [0xcf7a48] */
  eax = R32((uint32_t)(0xcf7a48u));
/* 965d58: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 965d5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 965d5d: mov dword ptr [0xcf7a48], eax */
  W32((uint32_t)(0xcf7a48u), eax);
/* 965d62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965d64: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965d67: jp 0x965d73 */
  if (pf) goto L_965d73;
L_965d69: /* 965d69: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 965d6d: mov dword ptr [0xcf7a50], edx */
  W32((uint32_t)(0xcf7a50u), edx);
L_965d73: /* 965d73: fld dword ptr [0xcf7a4c] */
  { double v = F32((uint32_t)(0xcf7a4cu)); FPUSH(v); }
/* 965d79: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 965d7d: fstp dword ptr [0xcf7a4c] */
  WF32((uint32_t)(0xcf7a4cu), ST0); FPOP();
/* 965d83: jmp 0x965dba */
  goto L_965dba;
L_965d85: /* 965d85: fld dword ptr [0xcf7a68] */
  { double v = F32((uint32_t)(0xcf7a68u)); FPUSH(v); }
/* 965d8b: mov eax, dword ptr [0xcf7a60] */
  eax = R32((uint32_t)(0xcf7a60u));
/* 965d90: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 965d94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 965d95: mov dword ptr [0xcf7a60], eax */
  W32((uint32_t)(0xcf7a60u), eax);
/* 965d9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965d9c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965d9f: jp 0x965daa */
  if (pf) goto L_965daa;
L_965da1: /* 965da1: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 965da5: mov dword ptr [0xcf7a68], eax */
  W32((uint32_t)(0xcf7a68u), eax);
L_965daa: /* 965daa: fld dword ptr [0xcf7a64] */
  { double v = F32((uint32_t)(0xcf7a64u)); FPUSH(v); }
/* 965db0: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 965db4: fstp dword ptr [0xcf7a64] */
  WF32((uint32_t)(0xcf7a64u), ST0); FPOP();
L_965dba: /* 965dba: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 965dbe: cmp dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965dc2: je 0x965ed4 */
  if (zf) goto L_965ed4;
L_965dc8: /* 965dc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965dca: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 965dd2: je 0x965ed4 */
  if (zf) goto L_965ed4;
L_965dd8: /* 965dd8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 965ddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965ddc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 965de0: call 0x94f340 */
  esp -= 4; W32(esp, 0x965de5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 965de5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965de8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 965dea: jle 0x965ed0 */
  if ((zf || sf != of)) goto L_965ed0;
L_965df0: /* 965df0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 965df4: mov ebp, 4 */
  ebp = 0x4u;
/* 965df9: mov ebx, ebp */
  ebx = ebp;
/* 965dfb: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 965dff: nop  */
L_965e00: /* 965e00: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 965e04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965e05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965e06: call 0x94eed0 */
  esp -= 4; W32(esp, 0x965e0bu); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 965e0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965e0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965e10: jne 0x965eae */
  if (!zf) goto L_965eae;
L_965e16: /* 965e16: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 965e1a: mov ebp, dword ptr [eax + ebp] */
  ebp = R32((uint32_t)(eax + ebp));
/* 965e1d: mov eax, dword ptr [0xcf7894] */
  eax = R32((uint32_t)(0xcf7894u));
/* 965e22: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 965e26: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 965e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965e2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965e2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965e2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 965e2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965e2f: mov dword ptr [0xcf7894], eax */
  W32((uint32_t)(0xcf7894u), eax);
/* 965e34: call 0x962b60 */
  esp -= 4; W32(esp, 0x965e39u); SPILL(); f_962b60(); if (g_unwind) return; RELOAD();
/* 965e39: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 965e3f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965e42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965e44: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965e47: jp 0x965e4b */
  if (pf) goto L_965e4b;
L_965e49: /* 965e49: fchs  */
  ST0 = -ST0;
L_965e4b: /* 965e4b: fld dword ptr [0xcf7a44] */
  { double v = F32((uint32_t)(0xcf7a44u)); FPUSH(v); }
/* 965e51: mov eax, dword ptr [0xcf7a3c] */
  eax = R32((uint32_t)(0xcf7a3cu));
/* 965e56: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 965e57: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 965e59: mov dword ptr [0xcf7a3c], eax */
  W32((uint32_t)(0xcf7a3cu), eax);
/* 965e5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 965e60: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 965e63: jp 0x965e6b */
  if (pf) goto L_965e6b;
L_965e65: /* 965e65: fst dword ptr [0xcf7a44] */
  WF32((uint32_t)(0xcf7a44u), ST0);
L_965e6b: /* 965e6b: fld dword ptr [0xcf7a40] */
  { double v = F32((uint32_t)(0xcf7a40u)); FPUSH(v); }
/* 965e71: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 965e76: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 965e79: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 965e7b: fstp dword ptr [0xcf7a40] */
  WF32((uint32_t)(0xcf7a40u), ST0); FPOP();
/* 965e81: jl 0x965eac */
  if ((sf != of)) goto L_965eac;
L_965e83: /* 965e83: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 965e86: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 965e8a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 965e8e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 965e91: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 965e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965e95: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 965e9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965e9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965e9c: push 0xafda8c */
  { uint32_t v = 0xafda8cu; esp -= 4; W32(esp, v); }
/* 965ea1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965ea2: call 0x953470 */
  esp -= 4; W32(esp, 0x965ea7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 965ea7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965eaa: jmp 0x965eae */
  goto L_965eae;
L_965eac: /* 965eac: fstp st(0) */
  STI(0) = ST0; FPOP();
L_965eae: /* 965eae: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 965eb2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 965eb6: mov ecx, dword ptr [ebx + eax + 4] */
  ecx = R32((uint32_t)(ebx + eax + 0x4u));
/* 965eba: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 965ebd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 965ebe: mov ebp, ebx */
  ebp = ebx;
/* 965ec0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 965ec4: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 965ec8: jne 0x965e00 */
  if (!zf) goto L_965e00;
L_965ece: /* 965ece: jmp 0x965ed4 */
  goto L_965ed4;
L_965ed0: /* 965ed0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_965ed4: /* 965ed4: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 965ed8: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 965edc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 965ede: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 965ee2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 965ee4: je 0x965ef3 */
  if (zf) goto L_965ef3;
L_965ee6: /* 965ee6: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 965eea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965eeb: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x965ef0u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 965ef0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965ef3: /* 965ef3: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 965ef7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965ef8: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x965efdu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 965efd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965f00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 965f01: mov eax, esi */
  eax = esi;
/* 965f03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 965f04: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 965f05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 965f06: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965f09: ret  */
  esp += 4; SPILL(); return;
}

void f_965f10(void) {
  LOAD_REGS();
L_965f10: /* 965f10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965f11: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 965f16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965f17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965f18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965f19: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x965f1eu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 965f1e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 965f22: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 965f26: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 965f29: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965f2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965f2e: mov edi, 1 */
  edi = 0x1u;
/* 965f33: je 0x965f74 */
  if (zf) goto L_965f74;
L_965f35: /* 965f35: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 965f38: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 965f3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965f3c: je 0x965f74 */
  if (zf) goto L_965f74;
L_965f3e: /* 965f3e: mov edi, edi */
  edi = edi;
L_965f40: /* 965f40: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 965f43: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 965f46: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 965f49: je 0x965f6e */
  if (zf) goto L_965f6e;
L_965f4b: /* 965f4b: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 965f4e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965f50: je 0x965f5a */
  if (zf) goto L_965f5a;
L_965f52: /* 965f52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965f53: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 965f57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965f58: jmp 0x965f66 */
  goto L_965f66;
L_965f5a: /* 965f5a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965f5c: je 0x965f6e */
  if (zf) goto L_965f6e;
L_965f5e: /* 965f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965f5f: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 965f63: xor edi, edi */
  edi = 0;
/* 965f65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_965f66: /* 965f66: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x965f6bu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 965f6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_965f6e: /* 965f6e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 965f70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965f72: jne 0x965f40 */
  if (!zf) goto L_965f40;
L_965f74: /* 965f74: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 965f78: push 0x965fb0 */
  { uint32_t v = 0x965fb0u; esp -= 4; W32(esp, v); }
/* 965f7d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 965f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 965f80: call 0x94f340 */
  esp -= 4; W32(esp, 0x965f85u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 965f85: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 965f89: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965f8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965f8d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 965f90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 965f91: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x965f97u); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 965f97: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 965f9b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 965f9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 965f9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 965fa0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 965fa1: ret  */
  esp += 4; SPILL(); return;
}

void f_965fb0(void) {
  LOAD_REGS();
L_965fb0: /* 965fb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 965fb4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 965fb6: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 965fb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965fbb: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 965fbf: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 965fc1: jne 0x965fc8 */
  if (!zf) goto L_965fc8;
L_965fc3: /* 965fc3: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 965fc6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_965fc8: /* 965fc8: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 965fcb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 965fcd: jne 0x965fd4 */
  if (!zf) goto L_965fd4;
L_965fcf: /* 965fcf: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 965fd2: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_965fd4: /* 965fd4: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 965fd6: ret  */
  esp += 4; SPILL(); return;
}

void f_965fe0(void) {
  LOAD_REGS();
L_965fe0: /* 965fe0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 965fe3: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 965fe8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 965fe9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 965fea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 965feb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 965fec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 965fed: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x965ff2u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 965ff2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 965ff6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 965ffa: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 965ffd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966000: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966002: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 96600a: je 0x966031 */
  if (zf) goto L_966031;
L_96600c: /* 96600c: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 96600f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 966011: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966013: je 0x966031 */
  if (zf) goto L_966031;
L_966015: /* 966015: mov edx, 0xffffbfff */
  edx = 0xffffbfffu;
/* 96601a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_966020: /* 966020: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* 966023: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 966025: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 966028: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
/* 96602b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96602d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96602f: jne 0x966020 */
  if (!zf) goto L_966020;
L_966031: /* 966031: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 966035: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 966038: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96603a: mov ebx, 0x4000 */
  ebx = 0x4000u;
/* 96603f: je 0x9660ea */
  if (zf) goto L_9660ea;
L_966045: /* 966045: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 966048: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96604b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96604d: je 0x9660ea */
  if (zf) goto L_9660ea;
L_966053: /* 966053: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 966056: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 966059: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96605b: je 0x966068 */
  if (zf) goto L_966068;
L_96605d: /* 96605d: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 96605f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966061: jne 0x966053 */
  if (!zf) goto L_966053;
L_966063: /* 966063: jmp 0x9660ea */
  goto L_9660ea;
L_966068: /* 966068: mov edi, esi */
  edi = esi;
/* 96606a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_966070: /* 966070: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 966073: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 966075: mov eax, ecx */
  eax = ecx;
/* 966077: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96607a: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 96607d: je 0x9660ac */
  if (zf) goto L_9660ac;
L_96607f: /* 96607f: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 966082: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966084: je 0x96608e */
  if (zf) goto L_96608e;
L_966086: /* 966086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966087: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 96608b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96608c: jmp 0x9660a4 */
  goto L_9660a4;
L_96608e: /* 96608e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 966092: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966094: je 0x9660ac */
  if (zf) goto L_9660ac;
L_966096: /* 966096: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966097: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 96609b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9660a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_9660a4: /* 9660a4: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9660a9u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9660a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9660ac: /* 9660ac: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 9660af: xor esi, esi */
  esi = 0;
/* 9660b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660b3: je 0x9660e4 */
  if (zf) goto L_9660e4;
L_9660b5: /* 9660b5: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9660b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660ba: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 9660bd: je 0x9660e4 */
  if (zf) goto L_9660e4;
L_9660bf: /* 9660bf: nop  */
L_9660c0: /* 9660c0: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9660c3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9660c6: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660c8: jne 0x9660de */
  if (!zf) goto L_9660de;
L_9660ca: /* 9660ca: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9660cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9660ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9660cf: call 0x94eed0 */
  esp -= 4; W32(esp, 0x9660d4u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 9660d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9660d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660d9: jne 0x9660e4 */
  if (!zf) goto L_9660e4;
L_9660db: /* 9660db: or dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
L_9660de: /* 9660de: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 9660e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660e2: jne 0x9660c0 */
  if (!zf) goto L_9660c0;
L_9660e4: /* 9660e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660e6: mov edi, esi */
  edi = esi;
/* 9660e8: jne 0x966070 */
  if (!zf) goto L_966070;
L_9660ea: /* 9660ea: mov eax, dword ptr [0xcf8404] */
  eax = R32((uint32_t)(0xcf8404u));
/* 9660ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660f1: je 0x966146 */
  if (zf) goto L_966146;
L_9660f3: /* 9660f3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9660f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660f8: je 0x966146 */
  if (zf) goto L_966146;
L_9660fa: /* 9660fa: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9660fd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9660ff: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 966102: je 0x966146 */
  if (zf) goto L_966146;
L_966104: /* 966104: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 966107: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96610a: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96610c: jne 0x966140 */
  if (!zf) goto L_966140;
L_96610e: /* 96610e: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 966111: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 966114: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966116: call 0x95f210 */
  esp -= 4; W32(esp, 0x96611bu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96611b: mov ecx, dword ptr [0xcfb090] */
  ecx = R32((uint32_t)(0xcfb090u));
/* 966121: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966125: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 966128: push 0xafdb90 */
  { uint32_t v = 0xafdb90u; esp -= 4; W32(esp, v); }
/* 96612d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96612e: call 0x953470 */
  esp -= 4; W32(esp, 0x966133u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966133: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 966135: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966136: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 966138: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96613du); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96613d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966140: /* 966140: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 966142: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966144: jne 0x966104 */
  if (!zf) goto L_966104;
L_966146: /* 966146: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 96614a: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 96614d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96614f: je 0x966171 */
  if (zf) goto L_966171;
L_966151: /* 966151: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 966154: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 966156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966158: je 0x966171 */
  if (zf) goto L_966171;
L_96615a: /* 96615a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_966160: /* 966160: mov esi, dword ptr [eax + 0x3c] */
  esi = R32((uint32_t)(eax + 0x3cu));
/* 966163: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 966165: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 966168: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* 96616b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96616d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96616f: jne 0x966160 */
  if (!zf) goto L_966160;
L_966171: /* 966171: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 966175: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966176: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966177: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966178: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966179: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96617c: ret  */
  esp += 4; SPILL(); return;
}

void f_966180(void) {
  LOAD_REGS();
L_966180: /* 966180: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 966183: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
/* 966189: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96618d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96618e: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 966192: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966193: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966194: mov esi, dword ptr [0xcf8b80] */
  esi = R32((uint32_t)(0xcf8b80u));
/* 96619a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96619b: xor edi, edi */
  edi = 0;
/* 96619d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96619e: mov dword ptr [0xcf8bfc], edx */
  W32((uint32_t)(0xcf8bfcu), edx);
/* 9661a4: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 9661a7: or ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9661ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9661af: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 9661b3: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 9661b6: je 0x9661d5 */
  if (zf) goto L_9661d5;
L_9661b8: /* 9661b8: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 9661bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9661bf: je 0x9661d5 */
  if (zf) goto L_9661d5;
L_9661c1: /* 9661c1: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
L_9661c6: /* 9661c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9661c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9661ca: je 0x9661d5 */
  if (zf) goto L_9661d5;
L_9661cc: /* 9661cc: and dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 9661cf: mov eax, ecx */
  eax = ecx;
/* 9661d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9661d3: jne 0x9661c6 */
  if (!zf) goto L_9661c6;
L_9661d5: /* 9661d5: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 9661d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9661da: je 0x9661fc */
  if (zf) goto L_9661fc;
L_9661dc: /* 9661dc: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 9661df: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9661e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9661e3: je 0x9661fc */
  if (zf) goto L_9661fc;
L_9661e5: /* 9661e5: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 9661e8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9661eb: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9661ed: jae 0x9661f6 */
  if (!cf) goto L_9661f6;
L_9661ef: /* 9661ef: or dword ptr [eax + 0x3c], 0x2000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
L_9661f6: /* 9661f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9661f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9661fa: jne 0x9661e5 */
  if (!zf) goto L_9661e5;
L_9661fc: /* 9661fc: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 9661ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966201: je 0x966375 */
  if (zf) goto L_966375;
L_966207: /* 966207: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 96620a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96620c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96620e: je 0x966375 */
  if (zf) goto L_966375;
L_966214: /* 966214: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 966217: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96621a: test dh, 0x20 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96621d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 966221: je 0x96636b */
  if (zf) goto L_96636b;
L_966227: /* 966227: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 96622a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96622c: je 0x96636b */
  if (zf) goto L_96636b;
L_966232: /* 966232: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 966235: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 966238: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96623a: je 0x96636b */
  if (zf) goto L_96636b;
L_966240: /* 966240: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 966243: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 966246: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 96624a: mov eax, dword ptr [0xcf8bfc] */
  eax = R32((uint32_t)(0xcf8bfcu));
/* 96624f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966251: je 0x966355 */
  if (zf) goto L_966355;
L_966257: /* 966257: test byte ptr [esi + 0x17], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x17u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96625b: jne 0x966355 */
  if (!zf) goto L_966355;
L_966261: /* 966261: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 966264: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 966267: xor edi, edi */
  edi = 0;
/* 966269: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96626b: mov ebp, 1 */
  ebp = 0x1u;
/* 966270: mov edx, ebp */
  edx = ebp;
/* 966272: je 0x96629f */
  if (zf) goto L_96629f;
L_966274: /* 966274: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 966277: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 966279: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96627b: je 0x96629f */
  if (zf) goto L_96629f;
L_96627d: /* 96627d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_966280: /* 966280: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 966283: test byte ptr [eax + 0x3d], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3du))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966287: je 0x966299 */
  if (zf) goto L_966299;
L_966289: /* 966289: cmp dword ptr [eax + 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x34u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96628d: je 0x966292 */
  if (zf) goto L_966292;
L_96628f: /* 96628f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 966290: jmp 0x966299 */
  goto L_966299;
L_966292: /* 966292: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966294: je 0x966299 */
  if (zf) goto L_966299;
L_966296: /* 966296: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 966297: xor edx, edx */
  edx = 0;
L_966299: /* 966299: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96629b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96629d: jne 0x966280 */
  if (!zf) goto L_966280;
L_96629f: /* 96629f: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9662a4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9662a5: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9662a7: jl 0x966355 */
  if ((sf != of)) goto L_966355;
L_9662ad: /* 9662ad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9662af: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9662b3: je 0x9662c2 */
  if (zf) goto L_9662c2;
L_9662b5: /* 9662b5: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9662b8: je 0x966355 */
  if (zf) goto L_966355;
L_9662be: /* 9662be: xor ebp, ebp */
  ebp = 0;
/* 9662c0: jmp 0x9662ca */
  goto L_9662ca;
L_9662c2: /* 9662c2: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9662c4: je 0x966355 */
  if (zf) goto L_966355;
L_9662ca: /* 9662ca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9662ce: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9662d3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9662d4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9662d7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9662db: jl 0x96630b */
  if ((sf != of)) goto L_96630b;
L_9662dd: /* 9662dd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9662e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9662e1: call 0x95f210 */
  esp -= 4; W32(esp, 0x9662e6u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9662e6: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 9662e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9662ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9662ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9662ee: call 0x95f210 */
  esp -= 4; W32(esp, 0x9662f3u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9662f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9662f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9662f7: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9662fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9662fd: push 0xafdbd8 */
  { uint32_t v = 0xafdbd8u; esp -= 4; W32(esp, v); }
/* 966302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966303: call 0x953470 */
  esp -= 4; W32(esp, 0x966308u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966308: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96630b: /* 96630b: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 96630f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966311: je 0x966355 */
  if (zf) goto L_966355;
L_966313: /* 966313: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 966317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966319: je 0x966330 */
  if (zf) goto L_966330;
L_96631b: /* 96631b: cmp dword ptr [0xcf85cc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966322: jne 0x966330 */
  if (!zf) goto L_966330;
L_966324: /* 966324: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966325: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966326: call 0x965fe0 */
  esp -= 4; W32(esp, 0x96632bu); SPILL(); f_965fe0(); if (g_unwind) return; RELOAD();
/* 96632b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96632e: jmp 0x966339 */
  goto L_966339;
L_966330: /* 966330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966331: call 0x965f10 */
  esp -= 4; W32(esp, 0x966336u); SPILL(); f_965f10(); if (g_unwind) return; RELOAD();
/* 966336: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966339: /* 966339: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96633d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96633e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96633f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966341: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966342: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 966346: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x966348u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 966348: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 96634c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96634d: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x966352u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 966352: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966355: /* 966355: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 966359: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 96635b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96635d: jne 0x966240 */
  if (!zf) goto L_966240;
L_966363: /* 966363: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 966367: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_96636b: /* 96636b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96636d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96636f: jne 0x966214 */
  if (!zf) goto L_966214;
L_966375: /* 966375: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 966378: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96637a: je 0x9663a1 */
  if (zf) goto L_9663a1;
L_96637c: /* 96637c: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 96637f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 966381: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966383: je 0x9663a1 */
  if (zf) goto L_9663a1;
L_966385: /* 966385: mov edx, 0xffffdfff */
  edx = 0xffffdfffu;
/* 96638a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_966390: /* 966390: mov ebx, dword ptr [eax + 0x3c] */
  ebx = R32((uint32_t)(eax + 0x3cu));
/* 966393: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 966395: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 966398: mov dword ptr [eax + 0x3c], ebx */
  W32((uint32_t)(eax + 0x3cu), ebx);
/* 96639b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96639d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96639f: jne 0x966390 */
  if (!zf) goto L_966390;
L_9663a1: /* 9663a1: mov eax, edi */
  eax = edi;
/* 9663a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9663a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9663a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9663a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9663a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9663aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9663b0(void) {
  LOAD_REGS();
L_9663b0: /* 9663b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9663b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9663b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9663b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9663b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9663b5: mov ebp, 1 */
  ebp = 0x1u;
/* 9663ba: xor edi, edi */
  edi = 0;
/* 9663bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9663bd: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 9663c1: call 0x955dc0 */
  esp -= 4; W32(esp, 0x9663c6u); SPILL(); f_955dc0(); if (g_unwind) return; RELOAD();
/* 9663c6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9663c9: call 0x958540 */
  esp -= 4; W32(esp, 0x9663ceu); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
/* 9663ce: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 9663d3: cmp dword ptr [0xcf8bf8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bf8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9663d9: jae 0x9663e0 */
  if (!cf) goto L_9663e0;
L_9663db: /* 9663db: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
L_9663e0: /* 9663e0: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 9663e5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9663e7: je 0x966412 */
  if (zf) goto L_966412;
L_9663e9: /* 9663e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9663f0: /* 9663f0: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 9663f3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9663f5: je 0x966412 */
  if (zf) goto L_966412;
L_9663f7: /* 9663f7: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 9663fa: and edx, 0xffffdfff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 966400: or edx, 0x4000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 966406: mov dword ptr [eax + 0x34], edi */
  W32((uint32_t)(eax + 0x34u), edi);
/* 966409: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 96640c: mov eax, ecx */
  eax = ecx;
/* 96640e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966410: jne 0x9663f0 */
  if (!zf) goto L_9663f0;
L_966412: /* 966412: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 966417: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966419: je 0x96643d */
  if (zf) goto L_96643d;
L_96641b: /* 96641b: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 96641f: nop  */
L_966420: /* 966420: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 966423: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966425: je 0x96643d */
  if (zf) goto L_96643d;
L_966427: /* 966427: xor edx, edx */
  edx = 0;
/* 966429: mov dl, byte ptr [eax + 0x3e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3eu))) & 0xffu);
/* 96642c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 96642f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966431: jne 0x966437 */
  if (!zf) goto L_966437;
L_966433: /* 966433: mov dword ptr [eax + 0x34], ebp */
  W32((uint32_t)(eax + 0x34u), ebp);
/* 966436: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_966437: /* 966437: mov eax, ecx */
  eax = ecx;
/* 966439: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96643b: jne 0x966420 */
  if (!zf) goto L_966420;
L_96643d: /* 96643d: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 966442: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966444: je 0x96645f */
  if (zf) goto L_96645f;
L_966446: /* 966446: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
/* 96644b: nop  */
/* 96644c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_966450: /* 966450: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 966452: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966454: je 0x96645f */
  if (zf) goto L_96645f;
L_966456: /* 966456: and dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 966459: mov eax, ecx */
  eax = ecx;
/* 96645b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96645d: jne 0x966450 */
  if (!zf) goto L_966450;
L_96645f: /* 96645f: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 966465: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966467: je 0x9664a7 */
  if (zf) goto L_9664a7;
L_966469: /* 966469: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 96646d: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 966471: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_966475: /* 966475: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966478: je 0x96649d */
  if (zf) goto L_96649d;
L_96647a: /* 96647a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96647e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96647f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966480: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 966482: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966483: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966485: call 0x966180 */
  esp -= 4; W32(esp, 0x96648au); SPILL(); f_966180(); if (g_unwind) return; RELOAD();
/* 96648a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96648e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 966490: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 966492: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966495: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966497: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 96649b: jne 0x966475 */
  if (!zf) goto L_966475;
L_96649d: /* 96649d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9664a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9664a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9664a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9664a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9664a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9664a6: ret  */
  esp += 4; SPILL(); return;
L_9664a7: /* 9664a7: mov eax, edi */
  eax = edi;
/* 9664a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9664aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9664ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9664ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9664ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9664ae: ret  */
  esp += 4; SPILL(); return;
}

void f_9664b0(void) {
  LOAD_REGS();
L_9664b0: /* 9664b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9664b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9664b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9664b3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9664b7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9664ba: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9664bd: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9664c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9664c1: je 0x9664cb */
  if (zf) goto L_9664cb;
L_9664c3: /* 9664c3: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9664c6: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 9664c9: jmp 0x9664d1 */
  goto L_9664d1;
L_9664cb: /* 9664cb: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 9664ce: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
L_9664d1: /* 9664d1: mov edx, dword ptr [0xcf788c] */
  edx = R32((uint32_t)(0xcf788cu));
/* 9664d7: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 9664db: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9664de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9664df: mov dword ptr [0xcf788c], edx */
  W32((uint32_t)(0xcf788cu), edx);
/* 9664e5: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9664e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9664e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9664ea: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9664efu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9664ef: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9664f3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9664f7: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 9664fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9664fc: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 9664ff: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 966502: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966504: call 0x970e20 */
  esp -= 4; W32(esp, 0x966509u); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 966509: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96650d: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 966511: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966512: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 966514: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 966517: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966518: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966519: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96651eu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96651e: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 966521: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 966525: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966528: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96652a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96652d: jne 0x966536 */
  if (!zf) goto L_966536;
L_96652f: /* 96652f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 966533: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
L_966536: /* 966536: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96653a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 96653d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96653e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96653f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966540: call 0x970e20 */
  esp -= 4; W32(esp, 0x966545u); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 966545: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 966549: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96654c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96654d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96654e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96654f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 966551: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966552: ret  */
  esp += 4; SPILL(); return;
}

void f_966560(void) {
  LOAD_REGS();
L_966560: /* 966560: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 966566: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 96656b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96656c: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 966570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966571: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 966575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966576: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96657a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96657b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96657d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96657e: mov dword ptr [0xcf8bfc], ecx */
  W32((uint32_t)(0xcf8bfcu), ecx);
/* 966584: jne 0x9665df */
  if (!zf) goto L_9665df;
L_966586: /* 966586: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966588: je 0x9665df */
  if (zf) goto L_9665df;
L_96658a: /* 96658a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96658c: jne 0x9665df */
  if (!zf) goto L_9665df;
L_96658e: /* 96658e: mov eax, dword ptr [0xcf8b84] */
  eax = R32((uint32_t)(0xcf8b84u));
/* 966593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966594: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x966599u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 966599: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 96659f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9665a2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9665a4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9665a8: je 0x9666b6 */
  if (zf) goto L_9666b6;
L_9665ae: /* 9665ae: mov edi, edi */
  edi = edi;
L_9665b0: /* 9665b0: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9665b3: je 0x9666b2 */
  if (zf) goto L_9666b2;
L_9665b9: /* 9665b9: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 9665bf: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9665c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9665c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9665c5: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 9665c8: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9665cdu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9665cd: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9665cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9665d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9665d4: jne 0x9665b0 */
  if (!zf) goto L_9665b0;
L_9665d6: /* 9665d6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9665da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9665db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9665dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9665dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9665de: ret  */
  esp += 4; SPILL(); return;
L_9665df: /* 9665df: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 9665e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9665e5: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x9665eau); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 9665ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9665ed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9665ef: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9665f3: je 0x966652 */
  if (zf) goto L_966652;
L_9665f5: /* 9665f5: mov edi, esi */
  edi = esi;
L_9665f7: /* 9665f7: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 9665fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9665fc: je 0x96664e */
  if (zf) goto L_96664e;
L_9665fe: /* 9665fe: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966600: jne 0x96660f */
  if (!zf) goto L_96660f;
L_966602: /* 966602: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966603: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x966608u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 966608: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96660b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96660d: jne 0x966647 */
  if (!zf) goto L_966647;
L_96660f: /* 96660f: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 966612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966614: je 0x966647 */
  if (zf) goto L_966647;
L_966616: /* 966616: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 966619: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96661b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96661d: je 0x966647 */
  if (zf) goto L_966647;
L_96661f: /* 96661f: nop  */
L_966620: /* 966620: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 966626: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 966629: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96662c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96662e: je 0x966641 */
  if (zf) goto L_966641;
L_966630: /* 966630: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 966633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966634: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 966638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966639: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96663eu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96663e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966641: /* 966641: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 966643: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966645: jne 0x966620 */
  if (!zf) goto L_966620;
L_966647: /* 966647: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 96664a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96664c: jne 0x9665f7 */
  if (!zf) goto L_9665f7;
L_96664e: /* 96664e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_966652: /* 966652: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966654: je 0x9666b6 */
  if (zf) goto L_9666b6;
L_966656: /* 966656: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 966659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96665b: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* 96665e: je 0x9666b6 */
  if (zf) goto L_9666b6;
L_966660: /* 966660: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 966663: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966665: jne 0x966674 */
  if (!zf) goto L_966674;
L_966667: /* 966667: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966668: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x96666du); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 96666d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966672: jne 0x9666ac */
  if (!zf) goto L_9666ac;
L_966674: /* 966674: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 966677: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966679: je 0x9666ac */
  if (zf) goto L_9666ac;
L_96667b: /* 96667b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96667e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 966681: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966683: je 0x9666ac */
  if (zf) goto L_9666ac;
L_966685: /* 966685: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 96668b: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 96668e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 966691: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966693: je 0x9666a6 */
  if (zf) goto L_9666a6;
L_966695: /* 966695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966696: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96669a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96669b: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 96669e: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9666a3u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9666a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9666a6: /* 9666a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9666a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9666aa: jne 0x966685 */
  if (!zf) goto L_966685;
L_9666ac: /* 9666ac: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 9666ae: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9666b0: jne 0x966660 */
  if (!zf) goto L_966660;
L_9666b2: /* 9666b2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_9666b6: /* 9666b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9666b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9666b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9666b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9666ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9666c0(void) {
  LOAD_REGS();
L_9666c0: /* 9666c0: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 9666c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9666c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9666c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9666c9: jne 0x9666f5 */
  if (!zf) goto L_9666f5;
L_9666cb: /* 9666cb: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9666d1: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9666d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9666d9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9666dc: jnp 0x9666f5 */
  if (!pf) goto L_9666f5;
L_9666de: /* 9666de: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9666e2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9666e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9666e7: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9666ed: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 9666f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9666f4: ret  */
  esp += 4; SPILL(); return;
L_9666f5: /* 9666f5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 9666f9: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9666fd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 966701: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966702: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966703: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966704: call 0x964120 */
  esp -= 4; W32(esp, 0x966709u); SPILL(); f_964120(); if (g_unwind) return; RELOAD();
/* 966709: fld dword ptr [0xcf8bdc] */
  { double v = F32((uint32_t)(0xcf8bdcu)); FPUSH(v); }
/* 96670f: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 966715: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966718: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96671e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 966720: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 966723: jp 0x966735 */
  if (pf) goto L_966735;
L_966725: /* 966725: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 96672b: fsqrt  */
  ST0 = sqrt(ST0);
/* 96672d: fmul dword ptr [0xcf8bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8bb4u)));
/* 966733: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
L_966735: /* 966735: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 966737: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 966739: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 96673b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 96673d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 96673f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 966741: mov eax, dword ptr [0xcf8490] */
  eax = R32((uint32_t)(0xcf8490u));
/* 966746: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966748: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96674a: jne 0x966755 */
  if (!zf) goto L_966755;
L_96674c: /* 96674c: mov eax, dword ptr [0xcf852c] */
  eax = R32((uint32_t)(0xcf852cu));
/* 966751: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966753: je 0x966777 */
  if (zf) goto L_966777;
L_966755: /* 966755: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 96675b: fmul qword ptr [0xa21738] */
  ST0 = ST0 * (F64((uint32_t)(0xa21738u)));
/* 966761: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 966763: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 966765: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 966767: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 96676d: fmul qword ptr [0xa21738] */
  ST0 = ST0 * (F64((uint32_t)(0xa21738u)));
/* 966773: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 966775: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_966777: /* 966777: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966778: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966779: ret  */
  esp += 4; SPILL(); return;
}

void f_966780(void) {
  LOAD_REGS();
L_966780: /* 966780: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966781: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 966786: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966787: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x96678cu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 96678c: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 966790: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 966795: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966798: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96679b: jl 0x9667ca */
  if ((sf != of)) goto L_9667ca;
L_96679d: /* 96679d: fld dword ptr [0xcf844c] */
  { double v = F32((uint32_t)(0xcf844cu)); FPUSH(v); }
/* 9667a3: mov ecx, dword ptr [0xcf8448] */
  ecx = R32((uint32_t)(0xcf8448u));
/* 9667a9: mov edx, dword ptr [0xcf843c] */
  edx = R32((uint32_t)(0xcf843cu));
/* 9667af: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9667b4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9667b7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9667ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9667bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9667bc: push 0xafdc20 */
  { uint32_t v = 0xafdc20u; esp -= 4; W32(esp, v); }
/* 9667c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9667c2: call 0x953470 */
  esp -= 4; W32(esp, 0x9667c7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9667c7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9667ca: /* 9667ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9667cb: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9667cf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9667d1: je 0x9667fe */
  if (zf) goto L_9667fe;
L_9667d3: /* 9667d3: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9667d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9667d8: je 0x9667fe */
  if (zf) goto L_9667fe;
L_9667da: /* 9667da: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9667dd: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9667e0: jne 0x9667f7 */
  if (!zf) goto L_9667f7;
L_9667e2: /* 9667e2: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9667e7: je 0x9667f7 */
  if (zf) goto L_9667f7;
L_9667e9: /* 9667e9: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 9667ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9667ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9667ef: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9667f4u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9667f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9667f7: /* 9667f7: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 9667fa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9667fc: jne 0x9667d3 */
  if (!zf) goto L_9667d3;
L_9667fe: /* 9667fe: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 966802: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966803: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966804: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966805: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966806: call 0x94f340 */
  esp -= 4; W32(esp, 0x96680bu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96680b: mov ebx, dword ptr [0xcfb068] */
  ebx = R32((uint32_t)(0xcfb068u));
/* 966811: mov esi, eax */
  esi = eax;
/* 966813: mov eax, dword ptr [0xcf843c] */
  eax = R32((uint32_t)(0xcf843cu));
/* 966818: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96681b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96681d: mov ebp, 0xfffbffff */
  ebp = 0xfffbffffu;
/* 966822: je 0x966874 */
  if (zf) goto L_966874;
L_966824: /* 966824: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 966828: push 0x966960 */
  { uint32_t v = 0x966960u; esp -= 4; W32(esp, v); }
/* 96682d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96682f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 966832: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966834: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x966836u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 966836: mov edx, dword ptr [0xcf843c] */
  edx = R32((uint32_t)(0xcf843cu));
/* 96683c: mov ecx, esi */
  ecx = esi;
/* 96683e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 966840: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966843: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 966845: jle 0x966874 */
  if ((zf || sf != of)) goto L_966874;
L_966847: /* 966847: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 96684b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96684d: je 0x966878 */
  if (zf) goto L_966878;
L_96684f: /* 96684f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 966852: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966854: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 966857: je 0x966878 */
  if (zf) goto L_966878;
L_966859: /* 966859: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_966860: /* 966860: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* 966863: and edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 966865: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 966868: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 966869: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
/* 96686c: je 0x966874 */
  if (zf) goto L_966874;
L_96686e: /* 96686e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 966870: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966872: jne 0x966860 */
  if (!zf) goto L_966860;
L_966874: /* 966874: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_966878: /* 966878: mov eax, dword ptr [0xcf8448] */
  eax = R32((uint32_t)(0xcf8448u));
/* 96687d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96687f: je 0x9668c8 */
  if (zf) goto L_9668c8;
L_966881: /* 966881: push 0x9669b0 */
  { uint32_t v = 0x9669b0u; esp -= 4; W32(esp, v); }
/* 966886: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 966888: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966889: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96688c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96688d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x96688fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96688f: sub esi, dword ptr [0xcf8448] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8448u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 966895: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966898: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96689a: jle 0x9668c4 */
  if ((zf || sf != of)) goto L_9668c4;
L_96689c: /* 96689c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9668a0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9668a2: je 0x9668c8 */
  if (zf) goto L_9668c8;
L_9668a4: /* 9668a4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9668a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9668a9: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 9668ac: je 0x9668c8 */
  if (zf) goto L_9668c8;
L_9668ae: /* 9668ae: mov edi, edi */
  edi = edi;
L_9668b0: /* 9668b0: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 9668b3: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9668b5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9668b8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9668b9: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 9668bc: je 0x9668c4 */
  if (zf) goto L_9668c4;
L_9668be: /* 9668be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9668c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9668c2: jne 0x9668b0 */
  if (!zf) goto L_9668b0;
L_9668c4: /* 9668c4: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_9668c8: /* 9668c8: fld dword ptr [0xcf844c] */
  { double v = F32((uint32_t)(0xcf844cu)); FPUSH(v); }
/* 9668ce: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9668d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9668d6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9668d9: jp 0x966919 */
  if (pf) goto L_966919;
L_9668db: /* 9668db: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9668dd: je 0x966919 */
  if (zf) goto L_966919;
L_9668df: /* 9668df: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9668e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9668e4: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 9668e7: je 0x966919 */
  if (zf) goto L_966919;
L_9668e9: /* 9668e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9668f0: /* 9668f0: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 9668f3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9668f6: test edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9668fc: je 0x96690e */
  if (zf) goto L_96690e;
L_9668fe: /* 9668fe: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 966901: fcomp dword ptr [0xcf844c] */
  fpu_com(ST0, F32((uint32_t)(0xcf844cu)));
  FPOP();
/* 966907: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 966909: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96690c: jp 0x966913 */
  if (pf) goto L_966913;
L_96690e: /* 96690e: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 966910: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
L_966913: /* 966913: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 966915: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966917: jne 0x9668f0 */
  if (!zf) goto L_9668f0;
L_966919: /* 966919: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96691d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96691e: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x966923u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 966923: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 966927: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96692a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96692b: xor edx, edx */
  edx = 0;
/* 96692d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96692f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966930: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966931: je 0x96694a */
  if (zf) goto L_96694a;
L_966933: /* 966933: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 966936: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966938: je 0x96694a */
  if (zf) goto L_96694a;
L_96693a: /* 96693a: test dword ptr [eax + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966941: je 0x966944 */
  if (zf) goto L_966944;
L_966943: /* 966943: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_966944: /* 966944: mov eax, ecx */
  eax = ecx;
/* 966946: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966948: jne 0x966933 */
  if (!zf) goto L_966933;
L_96694a: /* 96694a: mov dword ptr [0xcf8b8c], edx */
  W32((uint32_t)(0xcf8b8cu), edx);
/* 966950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966951: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 966952: ret  */
  esp += 4; SPILL(); return;
}

void f_966960(void) {
  LOAD_REGS();
L_966960: /* 966960: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 966964: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 966966: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 96696a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 96696c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96696d: mov esi, dword ptr [ecx + 0x3c] */
  esi = R32((uint32_t)(ecx + 0x3cu));
/* 966970: mov eax, 0x80000 */
  eax = 0x80000u;
/* 966975: test eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966977: je 0x9669aa */
  if (zf) goto L_9669aa;
L_966979: /* 966979: test dword ptr [edx + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96697c: jne 0x966985 */
  if (!zf) goto L_966985;
L_96697e: /* 96697e: mov eax, 1 */
  eax = 0x1u;
/* 966983: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966984: ret  */
  esp += 4; SPILL(); return;
L_966985: /* 966985: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 966988: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 96698b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96698d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966990: jne 0x966999 */
  if (!zf) goto L_966999;
L_966992: /* 966992: mov eax, 1 */
  eax = 0x1u;
/* 966997: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966998: ret  */
  esp += 4; SPILL(); return;
L_966999: /* 966999: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 96699c: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 96699f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9669a1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9669a4: jp 0x9669aa */
  if (pf) goto L_9669aa;
L_9669a6: /* 9669a6: xor eax, eax */
  eax = 0;
/* 9669a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9669a9: ret  */
  esp += 4; SPILL(); return;
L_9669aa: /* 9669aa: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9669ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9669ae: ret  */
  esp += 4; SPILL(); return;
}

void f_9669b0(void) {
  LOAD_REGS();
L_9669b0: /* 9669b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9669b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9669b6: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9669ba: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 9669bd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 9669bf: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 9669c2: and eax, 0x1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9669c7: and edx, 0x1ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9669cd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9669cf: ret  */
  esp += 4; SPILL(); return;
}

void f_9669d0(void) {
  LOAD_REGS();
L_9669d0: /* 9669d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9669d3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9669d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9669d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9669d6: mov edi, dword ptr [0xcf8be8] */
  edi = R32((uint32_t)(0xcf8be8u));
/* 9669dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9669dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9669df: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9669e7: mov dword ptr [0xcf8be8], edi */
  W32((uint32_t)(0xcf8be8u), edi);
/* 9669ed: call 0x955dc0 */
  esp -= 4; W32(esp, 0x9669f2u); SPILL(); f_955dc0(); if (g_unwind) return; RELOAD();
/* 9669f2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9669f5: call 0x958540 */
  esp -= 4; W32(esp, 0x9669fau); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
/* 9669fa: call 0x957fe0 */
  esp -= 4; W32(esp, 0x9669ffu); SPILL(); f_957fe0(); if (g_unwind) return; RELOAD();
/* 9669ff: mov ecx, dword ptr [0xcf83f0] */
  ecx = R32((uint32_t)(0xcf83f0u));
/* 966a05: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a07: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 966a0b: je 0x966a1a */
  if (zf) goto L_966a1a;
L_966a0d: /* 966a0d: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 966a13: mov dword ptr [eax + ecx*4], 0 */
  W32((uint32_t)(eax + ecx*4), 0x0u);
L_966a1a: /* 966a1a: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 966a20: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 966a25: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 966a26: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 966a28: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 966a2e: jae 0x966a35 */
  if (!cf) goto L_966a35;
L_966a30: /* 966a30: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
L_966a35: /* 966a35: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 966a39: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a3b: je 0x966a73 */
  if (zf) goto L_966a73;
L_966a3d: /* 966a3d: mov edi, esi */
  edi = esi;
/* 966a3f: nop  */
L_966a40: /* 966a40: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 966a43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a45: je 0x966a73 */
  if (zf) goto L_966a73;
L_966a47: /* 966a47: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 966a4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a4d: jne 0x966a5c */
  if (!zf) goto L_966a5c;
L_966a4f: /* 966a4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966a50: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x966a55u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 966a55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966a58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a5a: jne 0x966a62 */
  if (!zf) goto L_966a62;
L_966a5c: /* 966a5c: test byte ptr [edi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966a60: je 0x966a6b */
  if (zf) goto L_966a6b;
L_966a62: /* 966a62: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 966a65: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a67: jne 0x966a40 */
  if (!zf) goto L_966a40;
L_966a69: /* 966a69: jmp 0x966a73 */
  goto L_966a73;
L_966a6b: /* 966a6b: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
L_966a73: /* 966a73: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 966a77: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a79: je 0x966ab4 */
  if (zf) goto L_966ab4;
L_966a7b: /* 966a7b: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 966a7e: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 966a81: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a83: je 0x966ab4 */
  if (zf) goto L_966ab4;
L_966a85: /* 966a85: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 966a89: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 966a8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a8e: jne 0x966a9d */
  if (!zf) goto L_966a9d;
L_966a90: /* 966a90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966a91: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x966a96u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 966a96: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966a99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966a9b: jne 0x966aa3 */
  if (!zf) goto L_966aa3;
L_966a9d: /* 966a9d: test byte ptr [edi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966aa1: je 0x966aac */
  if (zf) goto L_966aac;
L_966aa3: /* 966aa3: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 966aa6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966aa8: jne 0x966a85 */
  if (!zf) goto L_966a85;
L_966aaa: /* 966aaa: jmp 0x966ab4 */
  goto L_966ab4;
L_966aac: /* 966aac: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
L_966ab4: /* 966ab4: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 966ab9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966abb: je 0x966b08 */
  if (zf) goto L_966b08;
L_966abd: /* 966abd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_966ac0: /* 966ac0: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 966ac3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966ac5: je 0x966b08 */
  if (zf) goto L_966b08;
L_966ac7: /* 966ac7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 966aca: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966acc: je 0x966ae7 */
  if (zf) goto L_966ae7;
L_966ace: /* 966ace: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 966ad2: xor edx, edx */
  edx = 0;
/* 966ad4: mov dl, byte ptr [eax + 0x3e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3eu))) & 0xffu);
/* 966ad7: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 966ada: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966adc: jne 0x966ae7 */
  if (!zf) goto L_966ae7;
L_966ade: /* 966ade: mov dword ptr [eax + 0x34], 0 */
  W32((uint32_t)(eax + 0x34u), 0x0u);
/* 966ae5: jmp 0x966af0 */
  goto L_966af0;
L_966ae7: /* 966ae7: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 966aed: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
L_966af0: /* 966af0: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 966af3: and edx, 0xffffdfff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 966af9: or edx, 0x4000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 966aff: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 966b02: mov eax, ecx */
  eax = ecx;
/* 966b04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b06: jne 0x966ac0 */
  if (!zf) goto L_966ac0;
L_966b08: /* 966b08: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b0a: mov ebp, 1 */
  ebp = 0x1u;
/* 966b0f: je 0x966b38 */
  if (zf) goto L_966b38;
L_966b11: /* 966b11: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 966b14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b16: je 0x966b38 */
  if (zf) goto L_966b38;
L_966b18: /* 966b18: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 966b1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b1e: jne 0x966b2d */
  if (!zf) goto L_966b2d;
L_966b20: /* 966b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966b21: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x966b26u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 966b26: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966b29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b2b: jne 0x966b31 */
  if (!zf) goto L_966b31;
L_966b2d: /* 966b2d: mov dword ptr [esi + 0x34], ebp */
  W32((uint32_t)(esi + 0x34u), ebp);
/* 966b30: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_966b31: /* 966b31: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 966b34: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b36: jne 0x966b11 */
  if (!zf) goto L_966b11;
L_966b38: /* 966b38: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 966b3c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b3e: je 0x966b72 */
  if (zf) goto L_966b72;
L_966b40: /* 966b40: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 966b43: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 966b46: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b48: je 0x966b72 */
  if (zf) goto L_966b72;
L_966b4a: /* 966b4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_966b50: /* 966b50: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 966b54: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 966b57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b59: jne 0x966b68 */
  if (!zf) goto L_966b68;
L_966b5b: /* 966b5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966b5c: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x966b61u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 966b61: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966b64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b66: jne 0x966b6c */
  if (!zf) goto L_966b6c;
L_966b68: /* 966b68: mov dword ptr [esi + 0x34], ebp */
  W32((uint32_t)(esi + 0x34u), ebp);
/* 966b6b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_966b6c: /* 966b6c: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 966b6e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966b70: jne 0x966b50 */
  if (!zf) goto L_966b50;
L_966b72: /* 966b72: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 966b76: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 966b7a: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 966b7e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 966b80: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 966b82: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 966b89: jl 0x966ba0 */
  if ((sf != of)) goto L_966ba0;
L_966b8b: /* 966b8b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966b8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966b8d: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 966b92: push 0xafdc78 */
  { uint32_t v = 0xafdc78u; esp -= 4; W32(esp, v); }
/* 966b97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966b98: call 0x953470 */
  esp -= 4; W32(esp, 0x966b9du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966b9d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966ba0: /* 966ba0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 966ba4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966ba5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966ba6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966ba7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966baa: ret  */
  esp += 4; SPILL(); return;
}

void f_966bb0(void) {
  LOAD_REGS();
L_966bb0: /* 966bb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966bb1: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 966bb8: jl 0x966bdc */
  if ((sf != of)) goto L_966bdc;
L_966bba: /* 966bba: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 966bbe: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 966bc1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 966bc7: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 966bcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966bce: push 0xafdcf8 */
  { uint32_t v = 0xafdcf8u; esp -= 4; W32(esp, v); }
/* 966bd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966bd4: call 0x953470 */
  esp -= 4; W32(esp, 0x966bd9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966bd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966bdc: /* 966bdc: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 966be0: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 966be3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966be4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966be5: lea ebp, [eax + 0xc] */
  ebp = (uint32_t)(eax + 0xcu);
/* 966be8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966be9: call 0x94f340 */
  esp -= 4; W32(esp, 0x966beeu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 966bee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966bef: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x966bf4u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 966bf4: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 966bf7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966bf8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 966bfc: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x966c01u); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 966c01: mov ebx, eax */
  ebx = eax;
/* 966c03: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 966c07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966c08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966c09: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x966c0eu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 966c0e: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 966c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966c12: call 0x94f340 */
  esp -= 4; W32(esp, 0x966c17u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 966c17: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966c1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966c1c: je 0x966cb5 */
  if (zf) goto L_966cb5;
L_966c22: /* 966c22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966c23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_966c24: /* 966c24: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 966c27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966c29: je 0x966c6f */
  if (zf) goto L_966c6f;
L_966c2b: /* 966c2b: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 966c2e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966c30: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 966c33: je 0x966c6f */
  if (zf) goto L_966c6f;
L_966c35: /* 966c35: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 966c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966c39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966c3a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 966c3d: call 0x94eed0 */
  esp -= 4; W32(esp, 0x966c42u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 966c42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966c45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966c47: jne 0x966c51 */
  if (!zf) goto L_966c51;
L_966c49: /* 966c49: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 966c4b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966c4d: jne 0x966c35 */
  if (!zf) goto L_966c35;
L_966c4f: /* 966c4f: jmp 0x966c6f */
  goto L_966c6f;
L_966c51: /* 966c51: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 966c54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966c56: call 0x94ea40 */
  esp -= 4; W32(esp, 0x966c5bu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 966c5b: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 966c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966c60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966c61: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x966c66u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 966c66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966c69: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966c6b: mov ebx, esi */
  ebx = esi;
/* 966c6d: jne 0x966c9f */
  if (!zf) goto L_966c9f;
L_966c6f: /* 966c6f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 966c73: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 966c76: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 966c79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966c7a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 966c80: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 966c86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966c87: push 0xafdca8 */
  { uint32_t v = 0xafdca8u; esp -= 4; W32(esp, v); }
/* 966c8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966c8d: call 0x953470 */
  esp -= 4; W32(esp, 0x966c92u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966c92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 966c94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966c95: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 966c97: call 0x9535b0 */
  esp -= 4; W32(esp, 0x966c9cu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 966c9c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966c9f: /* 966c9f: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 966ca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966ca3: call 0x94f340 */
  esp -= 4; W32(esp, 0x966ca8u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 966ca8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966cab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966cad: jne 0x966c24 */
  if (!zf) goto L_966c24;
L_966cb3: /* 966cb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966cb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_966cb5: /* 966cb5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966cb6: call 0x94ee00 */
  esp -= 4; W32(esp, 0x966cbbu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 966cbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966cbe: call 0x94f4b0 */
  esp -= 4; W32(esp, 0x966cc3u); SPILL(); f_94f4b0(); if (g_unwind) return; RELOAD();
/* 966cc3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 966cc7: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
/* 966cca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966ccb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966ccc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 966ccd: ret  */
  esp += 4; SPILL(); return;
}

void f_966cd0(void) {
  LOAD_REGS();
L_966cd0: /* 966cd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 966cd1: mov ebp, esp */
  ebp = esp;
/* 966cd3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 966cd6: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 966cd9: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 966cdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966cde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 966cdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966ce0: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 966ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966ce4: jne 0x966cf7 */
  if (!zf) goto L_966cf7;
L_966ce6: /* 966ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966ce7: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x966cecu); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 966cec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966cef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966cf1: jne 0x9673df */
  if (!zf) goto L_9673df;
L_966cf7: /* 966cf7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 966cfa: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966cfd: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 966d00: je 0x966d14 */
  if (zf) goto L_966d14;
L_966d02: /* 966d02: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 966d07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966d09: je 0x966d14 */
  if (zf) goto L_966d14;
L_966d0b: /* 966d0b: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966d0e: jne 0x9673df */
  if (!zf) goto L_9673df;
L_966d14: /* 966d14: mov edx, dword ptr [0xcf8be8] */
  edx = R32((uint32_t)(0xcf8be8u));
/* 966d1a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 966d1b: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 966d1e: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 966d21: mov dword ptr [0xcf8be8], edx */
  W32((uint32_t)(0xcf8be8u), edx);
/* 966d27: ja 0x9673df */
  if ((!cf && !zf)) goto L_9673df;
L_966d2d: /* 966d2d: jmp dword ptr [eax*4 + 0x9673e8] */
  switch (R32((uint32_t)(eax*4 + 0x9673e8u))) {
    case 0x966d34u: goto L_966d34;
    case 0x966d81u: goto L_966d81;
    case 0x966dd8u: goto L_966dd8;
    case 0x966defu: goto L_966def;
    case 0x966e03u: goto L_966e03;
    case 0x966e17u: goto L_966e17;
    case 0x966f4du: goto L_966f4d;
    case 0x966f55u: goto L_966f55;
    case 0x966fc3u: goto L_966fc3;
    case 0x966fd9u: goto L_966fd9;
    case 0x966ffbu: goto L_966ffb;
    case 0x967004u: goto L_967004;
    case 0x9670cdu: goto L_9670cd;
    case 0x967111u: goto L_967111;
    case 0x967173u: goto L_967173;
    case 0x9672e0u: goto L_9672e0;
    case 0x967355u: goto L_967355;
    case 0x967383u: goto L_967383;
    case 0x9673dfu: goto L_9673df;
    default: guest_badjump(0x966d2d, R32((uint32_t)(eax*4 + 0x9673e8u))); return;
  }
L_966d34: /* 966d34: test dword ptr [esi + 0x3c], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966d3b: je 0x966d69 */
  if (zf) goto L_966d69;
L_966d3d: /* 966d3d: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 966d40: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 966d43: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 966d46: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 966d49: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 966d4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966d4f: call 0x953470 */
  esp -= 4; W32(esp, 0x966d54u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966d54: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 966d59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966d5a: call 0x953470 */
  esp -= 4; W32(esp, 0x966d5fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966d5f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966d62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966d63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966d64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966d65: mov esp, ebp */
  esp = ebp;
/* 966d67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966d68: ret  */
  esp += 4; SPILL(); return;
L_966d69: /* 966d69: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 966d6c: push 0xafddbc */
  { uint32_t v = 0xafddbcu; esp -= 4; W32(esp, v); }
/* 966d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966d72: call 0x953470 */
  esp -= 4; W32(esp, 0x966d77u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966d7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966d7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966d7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966d7d: mov esp, ebp */
  esp = ebp;
/* 966d7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966d80: ret  */
  esp += 4; SPILL(); return;
L_966d81: /* 966d81: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 966d84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966d85: call 0x94f340 */
  esp -= 4; W32(esp, 0x966d8au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 966d8a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 966d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966d8e: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 966d93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966d94: call 0x953470 */
  esp -= 4; W32(esp, 0x966d99u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966d99: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 966d9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966d9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966da1: je 0x9673d1 */
  if (zf) goto L_9673d1;
L_966da7: /* 966da7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 966daa: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 966dad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966daf: je 0x9673d1 */
  if (zf) goto L_9673d1;
L_966db5: /* 966db5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966db6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 966db9: call 0x95f210 */
  esp -= 4; W32(esp, 0x966dbeu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 966dbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966dbf: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 966dc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966dc5: call 0x953470 */
  esp -= 4; W32(esp, 0x966dcau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966dca: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 966dcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966dcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966dd1: jne 0x966db5 */
  if (!zf) goto L_966db5;
L_966dd3: /* 966dd3: jmp 0x9673d1 */
  goto L_9673d1;
L_966dd8: /* 966dd8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 966ddb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966ddc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 966dde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966ddf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966de0: call 0x968100 */
  esp -= 4; W32(esp, 0x966de5u); SPILL(); f_968100(); if (g_unwind) return; RELOAD();
/* 966de5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966dea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966deb: mov esp, ebp */
  esp = ebp;
/* 966ded: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966dee: ret  */
  esp += 4; SPILL(); return;
L_966def: /* 966def: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 966df2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966df3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966df4: call 0x968be0 */
  esp -= 4; W32(esp, 0x966df9u); SPILL(); f_968be0(); if (g_unwind) return; RELOAD();
/* 966df9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966dfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966dfe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966dff: mov esp, ebp */
  esp = ebp;
/* 966e01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966e02: ret  */
  esp += 4; SPILL(); return;
L_966e03: /* 966e03: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 966e06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966e08: call 0x969cb0 */
  esp -= 4; W32(esp, 0x966e0du); SPILL(); f_969cb0(); if (g_unwind) return; RELOAD();
/* 966e0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966e10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966e11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966e12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966e13: mov esp, ebp */
  esp = ebp;
/* 966e15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966e16: ret  */
  esp += 4; SPILL(); return;
L_966e17: /* 966e17: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 966e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966e1c: je 0x9673df */
  if (zf) goto L_9673df;
L_966e22: /* 966e22: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 966e28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966e2a: je 0x966e7e */
  if (zf) goto L_966e7e;
L_966e2c: /* 966e2c: mov edx, eax */
  edx = eax;
/* 966e2e: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 966e32: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_966e34: /* 966e34: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 966e35: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 966e38: fld dword ptr [esp + eax + 0x30] */
  { double v = F32((uint32_t)(esp + eax + 0x30u)); FPUSH(v); }
/* 966e3c: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 966e42: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 966e48: fst dword ptr [esp + ecx*4 + 0x30] */
  WF32((uint32_t)(esp + ecx*4 + 0x30u), ST0);
/* 966e4c: fcomp qword ptr [0xa14ed8] */
  fpu_com(ST0, F64((uint32_t)(0xa14ed8u)));
  FPOP();
/* 966e52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 966e54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 966e57: jp 0x966e61 */
  if (pf) goto L_966e61;
L_966e59: /* 966e59: mov dword ptr [esp + ecx*4 + 0x30], 0xbf800000 */
  W32((uint32_t)(esp + ecx*4 + 0x30u), 0xbf800000u);
L_966e61: /* 966e61: fld dword ptr [esp + ecx*4 + 0x30] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x30u)); FPUSH(v); }
/* 966e65: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 966e6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 966e6d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966e70: jne 0x966e7a */
  if (!zf) goto L_966e7a;
L_966e72: /* 966e72: mov dword ptr [esp + ecx*4 + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + ecx*4 + 0x30u), 0x3f800000u);
L_966e7a: /* 966e7a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 966e7c: jne 0x966e34 */
  if (!zf) goto L_966e34;
L_966e7e: /* 966e7e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 966e82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966e83: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 966e87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966e88: call 0x96c350 */
  esp -= 4; W32(esp, 0x966e8du); SPILL(); f_96c350(); if (g_unwind) return; RELOAD();
/* 966e8d: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 966e92: mov ecx, dword ptr [0xcf8494] */
  ecx = R32((uint32_t)(0xcf8494u));
/* 966e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966e9b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966e9d: je 0x966eb9 */
  if (zf) goto L_966eb9;
L_966e9f: /* 966e9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 966ea1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 966ea3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 966ea5: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 966ea9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 966eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966eac: call 0x970b20 */
  esp -= 4; W32(esp, 0x966eb1u); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 966eb1: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 966eb6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_966eb9: /* 966eb9: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 966ebc: jg 0x966ed7 */
  if ((!zf && sf == of)) goto L_966ed7;
L_966ebe: /* 966ebe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 966ec1: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 966ec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966ec6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966ec7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966ec8: call 0x968c10 */
  esp -= 4; W32(esp, 0x966ecdu); SPILL(); f_968c10(); if (g_unwind) return; RELOAD();
/* 966ecd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966ed0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966ed1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966ed2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966ed3: mov esp, ebp */
  esp = ebp;
/* 966ed5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966ed6: ret  */
  esp += 4; SPILL(); return;
L_966ed7: /* 966ed7: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966eda: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 966edd: jne 0x966f16 */
  if (!zf) goto L_966f16;
L_966edf: /* 966edf: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966ee2: je 0x966efd */
  if (zf) goto L_966efd;
L_966ee4: /* 966ee4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 966ee7: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 966eeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966eed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966eee: call 0x9692a0 */
  esp -= 4; W32(esp, 0x966ef3u); SPILL(); f_9692a0(); if (g_unwind) return; RELOAD();
/* 966ef3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966ef6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966ef7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966ef8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966ef9: mov esp, ebp */
  esp = ebp;
/* 966efb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966efc: ret  */
  esp += 4; SPILL(); return;
L_966efd: /* 966efd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 966f00: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 966f04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966f05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966f06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966f07: call 0x968ea0 */
  esp -= 4; W32(esp, 0x966f0cu); SPILL(); f_968ea0(); if (g_unwind) return; RELOAD();
/* 966f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966f0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966f10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966f11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966f12: mov esp, ebp */
  esp = ebp;
/* 966f14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966f15: ret  */
  esp += 4; SPILL(); return;
L_966f16: /* 966f16: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966f19: je 0x966f34 */
  if (zf) goto L_966f34;
L_966f1b: /* 966f1b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 966f1e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 966f22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966f23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966f24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966f25: call 0x9698d0 */
  esp -= 4; W32(esp, 0x966f2au); SPILL(); f_9698d0(); if (g_unwind) return; RELOAD();
/* 966f2a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966f2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966f2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966f2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966f30: mov esp, ebp */
  esp = ebp;
/* 966f32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966f33: ret  */
  esp += 4; SPILL(); return;
L_966f34: /* 966f34: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 966f37: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 966f3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966f3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966f3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966f3e: call 0x9696e0 */
  esp -= 4; W32(esp, 0x966f43u); SPILL(); f_9696e0(); if (g_unwind) return; RELOAD();
/* 966f43: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966f46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966f47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966f48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966f49: mov esp, ebp */
  esp = ebp;
/* 966f4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966f4c: ret  */
  esp += 4; SPILL(); return;
L_966f4d: /* 966f4d: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 966f50: jmp 0x966fe2 */
  goto L_966fe2;
L_966f55: /* 966f55: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 966f5a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966f5d: jne 0x966f79 */
  if (!zf) goto L_966f79;
L_966f5f: /* 966f5f: cmp edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966f62: je 0x966f79 */
  if (zf) goto L_966f79;
L_966f64: /* 966f64: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 966f67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966f68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966f69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966f6a: call 0x969650 */
  esp -= 4; W32(esp, 0x966f6fu); SPILL(); f_969650(); if (g_unwind) return; RELOAD();
/* 966f6f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966f72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966f73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966f74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966f75: mov esp, ebp */
  esp = ebp;
/* 966f77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966f78: ret  */
  esp += 4; SPILL(); return;
L_966f79: /* 966f79: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 966f7c: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 966f7f: jne 0x966fae */
  if (!zf) goto L_966fae;
L_966f81: /* 966f81: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966f84: je 0x966fae */
  if (zf) goto L_966fae;
L_966f86: /* 966f86: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 966f89: je 0x966fae */
  if (zf) goto L_966fae;
L_966f8b: /* 966f8b: mov eax, dword ptr [0xcf8be4] */
  eax = R32((uint32_t)(0xcf8be4u));
/* 966f90: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 966f93: mov ecx, eax */
  ecx = eax;
/* 966f95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966f97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 966f98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966f99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966f9a: mov dword ptr [0xcf8be4], eax */
  W32((uint32_t)(0xcf8be4u), eax);
/* 966f9f: call 0x969a90 */
  esp -= 4; W32(esp, 0x966fa4u); SPILL(); f_969a90(); if (g_unwind) return; RELOAD();
/* 966fa4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966fa7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966fa8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966fa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966faa: mov esp, ebp */
  esp = ebp;
/* 966fac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966fad: ret  */
  esp += 4; SPILL(); return;
L_966fae: /* 966fae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 966fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 966fb2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966fb4: call 0x969bb0 */
  esp -= 4; W32(esp, 0x966fb9u); SPILL(); f_969bb0(); if (g_unwind) return; RELOAD();
/* 966fb9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966fbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966fbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966fbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966fbf: mov esp, ebp */
  esp = ebp;
/* 966fc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966fc2: ret  */
  esp += 4; SPILL(); return;
L_966fc3: /* 966fc3: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 966fc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 966fc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 966fca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 966fcb: call 0x964120 */
  esp -= 4; W32(esp, 0x966fd0u); SPILL(); f_964120(); if (g_unwind) return; RELOAD();
/* 966fd0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 966fd3: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 966fd7: jmp 0x967018 */
  goto L_967018;
L_966fd9: /* 966fd9: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 966fdc: and edx, 0x1ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
L_966fe2: /* 966fe2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 966fe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 966fe6: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 966feb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 966fec: call 0x953470 */
  esp -= 4; W32(esp, 0x966ff1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 966ff1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 966ff4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 966ff5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 966ff6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 966ff7: mov esp, ebp */
  esp = ebp;
/* 966ff9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 966ffa: ret  */
  esp += 4; SPILL(); return;
L_966ffb: /* 966ffb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 966ffe: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 967002: jmp 0x96701f */
  goto L_96701f;
L_967004: /* 967004: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967006: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 96700a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96700b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96700c: call 0x964120 */
  esp -= 4; W32(esp, 0x967011u); SPILL(); f_964120(); if (g_unwind) return; RELOAD();
/* 967011: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 967014: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
L_967018: /* 967018: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 96701c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96701f: /* 96701f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 967022: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967024: jne 0x967042 */
  if (!zf) goto L_967042;
L_967026: /* 967026: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 967029: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 96702c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96702d: push 0xafdd9c */
  { uint32_t v = 0xafdd9cu; esp -= 4; W32(esp, v); }
/* 967032: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967033: call 0x953470 */
  esp -= 4; W32(esp, 0x967038u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967038: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96703b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96703c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96703d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96703e: mov esp, ebp */
  esp = ebp;
/* 967040: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967041: ret  */
  esp += 4; SPILL(); return;
L_967042: /* 967042: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 967047: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967049: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 96704c: je 0x967068 */
  if (zf) goto L_967068;
L_96704e: /* 96704e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 967052: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 967055: fchs  */
  ST0 = -ST0;
/* 967057: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96705a: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96705f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967060: call 0x953470 */
  esp -= 4; W32(esp, 0x967065u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967065: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967068: /* 967068: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96706d: xor edi, edi */
  edi = 0;
/* 96706f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 967071: jle 0x967097 */
  if ((zf || sf != of)) goto L_967097;
L_967073: /* 967073: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 967076: fld dword ptr [edx + edi*4] */
  { double v = F32((uint32_t)(edx + edi*4)); FPUSH(v); }
/* 967079: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96707c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96707f: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 967084: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967085: call 0x953470 */
  esp -= 4; W32(esp, 0x96708au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96708a: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96708f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967092: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 967093: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967095: jl 0x967073 */
  if ((sf != of)) goto L_967073;
L_967097: /* 967097: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 96709c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96709e: jne 0x9670b8 */
  if (!zf) goto L_9670b8;
L_9670a0: /* 9670a0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9670a4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9670a7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9670aa: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 9670af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9670b0: call 0x953470 */
  esp -= 4; W32(esp, 0x9670b5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9670b5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9670b8: /* 9670b8: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9670bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9670be: call 0x953470 */
  esp -= 4; W32(esp, 0x9670c3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9670c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9670c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9670c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9670c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9670c9: mov esp, ebp */
  esp = ebp;
/* 9670cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9670cc: ret  */
  esp += 4; SPILL(); return;
L_9670cd: /* 9670cd: cmp dword ptr [0xcf85cc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9670d4: mov eax, dword ptr [0xcf8be4] */
  eax = R32((uint32_t)(0xcf8be4u));
/* 9670d9: mov ecx, eax */
  ecx = eax;
/* 9670db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9670dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9670dd: jne 0x9670f8 */
  if (!zf) goto L_9670f8;
L_9670df: /* 9670df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9670e0: mov dword ptr [0xcf8be4], eax */
  W32((uint32_t)(0xcf8be4u), eax);
/* 9670e5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9670e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9670e9: call 0x968e10 */
  esp -= 4; W32(esp, 0x9670eeu); SPILL(); f_968e10(); if (g_unwind) return; RELOAD();
/* 9670ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9670f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9670f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9670f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9670f4: mov esp, ebp */
  esp = ebp;
/* 9670f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9670f7: ret  */
  esp += 4; SPILL(); return;
L_9670f8: /* 9670f8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9670fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9670fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9670fd: mov dword ptr [0xcf8be4], eax */
  W32((uint32_t)(0xcf8be4u), eax);
/* 967102: call 0x9694e0 */
  esp -= 4; W32(esp, 0x967107u); SPILL(); f_9694e0(); if (g_unwind) return; RELOAD();
/* 967107: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96710a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96710b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96710c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96710d: mov esp, ebp */
  esp = ebp;
/* 96710f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967110: ret  */
  esp += 4; SPILL(); return;
L_967111: /* 967111: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 967114: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967115: call 0x94f340 */
  esp -= 4; W32(esp, 0x96711au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96711a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96711d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96711e: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 967123: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967124: call 0x953470 */
  esp -= 4; W32(esp, 0x967129u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967129: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 96712c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96712f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967131: je 0x9673d1 */
  if (zf) goto L_9673d1;
L_967137: /* 967137: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96713a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96713d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96713f: je 0x9673d1 */
  if (zf) goto L_9673d1;
L_967145: /* 967145: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 967148: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96714b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96714d: je 0x967154 */
  if (zf) goto L_967154;
L_96714f: /* 96714f: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 967152: jmp 0x967159 */
  goto L_967159;
L_967154: /* 967154: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 967157: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_967159: /* 967159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96715a: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 96715f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967160: call 0x953470 */
  esp -= 4; W32(esp, 0x967165u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967165: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 967167: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96716a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96716c: jne 0x967145 */
  if (!zf) goto L_967145;
L_96716e: /* 96716e: jmp 0x9673d1 */
  goto L_9673d1;
L_967173: /* 967173: mov eax, dword ptr [0xcf85c0] */
  eax = R32((uint32_t)(0xcf85c0u));
/* 967178: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96717a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96717d: jne 0x967198 */
  if (!zf) goto L_967198;
L_96717f: /* 96717f: push 0xafdd50 */
  { uint32_t v = 0xafdd50u; esp -= 4; W32(esp, v); }
/* 967184: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967185: call 0x953470 */
  esp -= 4; W32(esp, 0x96718au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96718a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96718c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96718e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 967190: call 0x9535b0 */
  esp -= 4; W32(esp, 0x967195u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 967195: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967198: /* 967198: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 96719b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9671a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9671a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9671a6: je 0x9672ad */
  if (zf) goto L_9672ad;
L_9671ac: /* 9671ac: mov eax, dword ptr [0xcf8b40] */
  eax = R32((uint32_t)(0xcf8b40u));
/* 9671b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9671b2: call 0x9538c0 */
  esp -= 4; W32(esp, 0x9671b7u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 9671b7: fld dword ptr [0xcf8a2c] */
  { double v = F32((uint32_t)(0xcf8a2cu)); FPUSH(v); }
/* 9671bd: mov ecx, dword ptr [0xcf85c0] */
  ecx = R32((uint32_t)(0xcf85c0u));
/* 9671c3: fchs  */
  ST0 = -ST0;
/* 9671c5: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 9671c8: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 9671cb: mov edi, eax */
  edi = eax;
/* 9671cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9671d0: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 9671d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9671d6: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9671da: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9671dd: jne 0x967230 */
  if (!zf) goto L_967230;
L_9671df: /* 9671df: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 9671e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9671e7: je 0x967209 */
  if (zf) goto L_967209;
L_9671e9: /* 9671e9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9671ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9671f0: /* 9671f0: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 9671f2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9671f5: fdiv dword ptr [esi + 8] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x8u)));
/* 9671f8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9671fb: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9671fe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 9671ff: fchs  */
  ST0 = -ST0;
/* 967201: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 967204: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 967207: jne 0x9671f0 */
  if (!zf) goto L_9671f0;
L_967209: /* 967209: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 96720d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 967210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967214: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x967219u); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 967219: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 96721f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967221: call 0x953a60 */
  esp -= 4; W32(esp, 0x967226u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 967226: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967229: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96722a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96722b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96722c: mov esp, ebp */
  esp = ebp;
/* 96722e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96722f: ret  */
  esp += 4; SPILL(); return;
L_967230: /* 967230: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967235: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967237: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 96723b: je 0x967209 */
  if (zf) goto L_967209;
L_96723d: /* 96723d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_967240: /* 967240: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 967244: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 967246: mov ecx, dword ptr [0xcf8a28] */
  ecx = R32((uint32_t)(0xcf8a28u));
/* 96724c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96724d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 967251: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 967255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967256: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 96725a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 96725d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 967261: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967262: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967264: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 967267: call 0x962c10 */
  esp -= 4; W32(esp, 0x96726cu); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 96726c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 967270: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 967272: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 967275: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 967279: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96727c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 96727e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 967282: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 967285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967287: jne 0x967296 */
  if (!zf) goto L_967296;
L_967289: /* 967289: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96728d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96728f: jne 0x967240 */
  if (!zf) goto L_967240;
L_967291: /* 967291: jmp 0x967209 */
  goto L_967209;
L_967296: /* 967296: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 96729c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9672a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9672a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9672a2: call 0x953a60 */
  esp -= 4; W32(esp, 0x9672a7u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 9672a7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9672aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9672ad: /* 9672ad: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 9672b3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9672b5: je 0x9673d1 */
  if (zf) goto L_9673d1;
L_9672bb: /* 9672bb: nop  */
/* 9672bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9672c0: /* 9672c0: push 0xc02433b6 */
  { uint32_t v = 0xc02433b6u; esp -= 4; W32(esp, v); }
/* 9672c5: push 0x45a1cac1 */
  { uint32_t v = 0x45a1cac1u; esp -= 4; W32(esp, v); }
/* 9672ca: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 9672cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9672d0: call 0x953470 */
  esp -= 4; W32(esp, 0x9672d5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9672d5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9672d8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9672d9: jne 0x9672c0 */
  if (!zf) goto L_9672c0;
L_9672db: /* 9672db: jmp 0x9673d1 */
  goto L_9673d1;
L_9672e0: /* 9672e0: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 9672e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9672e5: je 0x9673df */
  if (zf) goto L_9673df;
L_9672eb: /* 9672eb: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9672ee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9672f0: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 9672f3: je 0x9673df */
  if (zf) goto L_9673df;
L_9672f9: /* 9672f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_967300: /* 967300: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 967304: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967305: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967307: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96730a: call 0x957b40 */
  esp -= 4; W32(esp, 0x96730fu); SPILL(); f_957b40(); if (g_unwind) return; RELOAD();
/* 96730f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 967312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967313: call 0x95f210 */
  esp -= 4; W32(esp, 0x967318u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 967318: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967319: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 96731d: call 0x95f210 */
  esp -= 4; W32(esp, 0x967322u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 967322: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 967326: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 967329: fstp qword ptr [esp + 0xc] */
  WF64((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 96732d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 967331: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967334: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967336: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 967339: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96733a: push 0xafdd38 */
  { uint32_t v = 0xafdd38u; esp -= 4; W32(esp, v); }
/* 96733f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967340: call 0x953470 */
  esp -= 4; W32(esp, 0x967345u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967345: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 967347: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96734a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96734c: jne 0x967300 */
  if (!zf) goto L_967300;
L_96734e: /* 96734e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96734f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967350: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967351: mov esp, ebp */
  esp = ebp;
/* 967353: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967354: ret  */
  esp += 4; SPILL(); return;
L_967355: /* 967355: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 96735a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96735c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 96735f: je 0x96736f */
  if (zf) goto L_96736f;
L_967361: /* 967361: push 0xafdd34 */
  { uint32_t v = 0xafdd34u; esp -= 4; W32(esp, v); }
/* 967366: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967367: call 0x953470 */
  esp -= 4; W32(esp, 0x96736cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96736c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96736f: /* 96736f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967370: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967373: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967374: call 0x968100 */
  esp -= 4; W32(esp, 0x967379u); SPILL(); f_968100(); if (g_unwind) return; RELOAD();
/* 967379: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96737c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96737d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96737e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96737f: mov esp, ebp */
  esp = ebp;
/* 967381: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967382: ret  */
  esp += 4; SPILL(); return;
L_967383: /* 967383: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 967386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967387: call 0x94f340 */
  esp -= 4; W32(esp, 0x96738cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96738c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96738f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967390: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 967395: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967396: call 0x953470 */
  esp -= 4; W32(esp, 0x96739bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96739b: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 96739e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9673a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9673a3: je 0x9673d1 */
  if (zf) goto L_9673d1;
L_9673a5: /* 9673a5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9673a8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9673ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9673ad: je 0x9673d1 */
  if (zf) goto L_9673d1;
L_9673af: /* 9673af: nop  */
L_9673b0: /* 9673b0: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9673b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9673b4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9673b7: call 0x95f210 */
  esp -= 4; W32(esp, 0x9673bcu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9673bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9673bd: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 9673c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9673c3: call 0x953470 */
  esp -= 4; W32(esp, 0x9673c8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9673c8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9673ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9673cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9673cf: jne 0x9673b0 */
  if (!zf) goto L_9673b0;
L_9673d1: /* 9673d1: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9673d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9673d7: call 0x953470 */
  esp -= 4; W32(esp, 0x9673dcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9673dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9673df: /* 9673df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9673e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9673e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9673e2: mov esp, ebp */
  esp = ebp;
/* 9673e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9673e5: ret  */
  esp += 4; SPILL(); return;
}

void f_967450(void) {
  LOAD_REGS();
L_967450: /* 967450: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 967453: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967454: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 967455: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 967459: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96745a: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 96745e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96745f: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 967463: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 967467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967468: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 96746c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96746d: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 967471: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967472: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 967476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967477: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 96747b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96747c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96747d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96747e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96747f: mov dword ptr [0xcf8be8], 0 */
  W32((uint32_t)(0xcf8be8u), 0x0u);
/* 967489: call 0x9657a0 */
  esp -= 4; W32(esp, 0x96748eu); SPILL(); f_9657a0(); if (g_unwind) return; RELOAD();
/* 96748e: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 967492: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967497: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96749a: cmp ebx, 0x19 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 96749d: ja 0x968063 */
  if ((!cf && !zf)) goto L_968063;
L_9674a3: /* 9674a3: jmp dword ptr [ebx*4 + 0x96808c] */
  switch (R32((uint32_t)(ebx*4 + 0x96808cu))) {
    case 0x9674aau: goto L_9674aa;
    case 0x9674c9u: goto L_9674c9;
    case 0x9674e8u: goto L_9674e8;
    case 0x967521u: goto L_967521;
    case 0x967546u: goto L_967546;
    case 0x967cd2u: goto L_967cd2;
    case 0x967d44u: goto L_967d44;
    case 0x967da1u: goto L_967da1;
    case 0x967debu: goto L_967deb;
    case 0x967e10u: goto L_967e10;
    case 0x967e2fu: goto L_967e2f;
    case 0x967fbcu: goto L_967fbc;
    case 0x967fdbu: goto L_967fdb;
    case 0x968044u: goto L_968044;
    case 0x968063u: goto L_968063;
    case 0x968083u: goto L_968083;
    default: guest_badjump(0x9674a3, R32((uint32_t)(ebx*4 + 0x96808cu))); return;
  }
L_9674aa: /* 9674aa: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9674ae: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9674b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9674b3: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 9674b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9674b9: call 0x953470 */
  esp -= 4; W32(esp, 0x9674beu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9674be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9674c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9674c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9674c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9674c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9674c5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9674c8: ret  */
  esp += 4; SPILL(); return;
L_9674c9: /* 9674c9: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9674cd: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9674d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9674d2: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 9674d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9674d8: call 0x953470 */
  esp -= 4; W32(esp, 0x9674ddu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9674dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9674e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9674e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9674e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9674e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9674e4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9674e7: ret  */
  esp += 4; SPILL(); return;
L_9674e8: /* 9674e8: mov eax, dword ptr [0xcf8ba8] */
  eax = R32((uint32_t)(0xcf8ba8u));
/* 9674ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9674ef: jne 0x9674fb */
  if (!zf) goto L_9674fb;
L_9674f1: /* 9674f1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9674f3: call 0x955dc0 */
  esp -= 4; W32(esp, 0x9674f8u); SPILL(); f_955dc0(); if (g_unwind) return; RELOAD();
/* 9674f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9674fb: /* 9674fb: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9674ff: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 967505: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 967509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96750a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96750b: push 0xafe0fc */
  { uint32_t v = 0xafe0fcu; esp -= 4; W32(esp, v); }
/* 967510: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967511: call 0x953470 */
  esp -= 4; W32(esp, 0x967516u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967516: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967519: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96751a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96751b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96751c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96751d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967520: ret  */
  esp += 4; SPILL(); return;
L_967521: /* 967521: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967523: je 0x968083 */
  if (zf) goto L_968083;
L_967529: /* 967529: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96752d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96752e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96752f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 967530: push 0xafe0e4 */
  { uint32_t v = 0xafe0e4u; esp -= 4; W32(esp, v); }
/* 967535: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967536: call 0x96ba70 */
  esp -= 4; W32(esp, 0x96753bu); SPILL(); f_96ba70(); if (g_unwind) return; RELOAD();
/* 96753b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96753e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96753f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967540: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967541: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967542: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967545: ret  */
  esp += 4; SPILL(); return;
L_967546: /* 967546: mov esi, 4 */
  esi = 0x4u;
/* 96754b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96754d: jg 0x968063 */
  if ((!zf && sf == of)) goto L_968063;
L_967553: /* 967553: mov ecx, dword ptr [0xcf85b0] */
  ecx = R32((uint32_t)(0xcf85b0u));
/* 967559: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96755b: je 0x967566 */
  if (zf) goto L_967566;
L_96755d: /* 96755d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967560: jg 0x968063 */
  if ((!zf && sf == of)) goto L_968063;
L_967566: /* 967566: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967569: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 96756d: jne 0x96759a */
  if (!zf) goto L_96759a;
L_96756f: /* 96756f: mov eax, dword ptr [0xcf8528] */
  eax = R32((uint32_t)(0xcf8528u));
/* 967574: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967576: jne 0x967581 */
  if (!zf) goto L_967581;
L_967578: /* 967578: mov eax, dword ptr [0xcf8414] */
  eax = R32((uint32_t)(0xcf8414u));
/* 96757d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96757f: je 0x9675d5 */
  if (zf) goto L_9675d5;
L_967581: /* 967581: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 967587: push 0xafe098 */
  { uint32_t v = 0xafe098u; esp -= 4; W32(esp, v); }
/* 96758c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96758d: call 0x953470 */
  esp -= 4; W32(esp, 0x967592u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967592: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967597: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96759a: /* 96759a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96759c: jne 0x9675d5 */
  if (!zf) goto L_9675d5;
L_96759e: /* 96759e: mov eax, dword ptr [0xcf84a0] */
  eax = R32((uint32_t)(0xcf84a0u));
/* 9675a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9675a5: jne 0x9675c1 */
  if (!zf) goto L_9675c1;
L_9675a7: /* 9675a7: mov eax, dword ptr [0xcf84b0] */
  eax = R32((uint32_t)(0xcf84b0u));
/* 9675ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9675ae: jne 0x9675c1 */
  if (!zf) goto L_9675c1;
L_9675b0: /* 9675b0: cmp dword ptr [0xcf8494], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9675b6: jne 0x967628 */
  if (!zf) goto L_967628;
L_9675b8: /* 9675b8: mov eax, dword ptr [0xcf848c] */
  eax = R32((uint32_t)(0xcf848cu));
/* 9675bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9675bf: je 0x9675dd */
  if (zf) goto L_9675dd;
L_9675c1: /* 9675c1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9675c7: push 0xafe040 */
  { uint32_t v = 0xafe040u; esp -= 4; W32(esp, v); }
/* 9675cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9675cd: call 0x953470 */
  esp -= 4; W32(esp, 0x9675d2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9675d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9675d5: /* 9675d5: cmp dword ptr [0xcf8494], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9675db: jne 0x967628 */
  if (!zf) goto L_967628;
L_9675dd: /* 9675dd: mov eax, dword ptr [0xcf852c] */
  eax = R32((uint32_t)(0xcf852cu));
/* 9675e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9675e4: je 0x967602 */
  if (zf) goto L_967602;
L_9675e6: /* 9675e6: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9675eb: push 0xafe004 */
  { uint32_t v = 0xafe004u; esp -= 4; W32(esp, v); }
/* 9675f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9675f1: call 0x953470 */
  esp -= 4; W32(esp, 0x9675f6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9675f6: mov eax, dword ptr [0xcf8494] */
  eax = R32((uint32_t)(0xcf8494u));
/* 9675fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9675fe: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967600: jne 0x967628 */
  if (!zf) goto L_967628;
L_967602: /* 967602: mov eax, dword ptr [0xcf8414] */
  eax = R32((uint32_t)(0xcf8414u));
/* 967607: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967609: je 0x967673 */
  if (zf) goto L_967673;
L_96760b: /* 96760b: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 967610: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967612: je 0x967673 */
  if (zf) goto L_967673;
L_967614: /* 967614: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96761a: push 0xafdfd0 */
  { uint32_t v = 0xafdfd0u; esp -= 4; W32(esp, v); }
/* 96761f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967620: call 0x953470 */
  esp -= 4; W32(esp, 0x967625u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967625: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967628: /* 967628: mov eax, dword ptr [0xcf8494] */
  eax = R32((uint32_t)(0xcf8494u));
/* 96762d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967630: jne 0x96764c */
  if (!zf) goto L_96764c;
L_967632: /* 967632: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 967637: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96763c: push 0xafdfa4 */
  { uint32_t v = 0xafdfa4u; esp -= 4; W32(esp, v); }
/* 967641: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967642: call 0x953470 */
  esp -= 4; W32(esp, 0x967647u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967647: jmp 0x96770e */
  goto L_96770e;
L_96764c: /* 96764c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96764f: jne 0x96766b */
  if (!zf) goto L_96766b;
L_967651: /* 967651: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 967656: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96765b: push 0xafdf6c */
  { uint32_t v = 0xafdf6cu; esp -= 4; W32(esp, v); }
/* 967660: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967661: call 0x953470 */
  esp -= 4; W32(esp, 0x967666u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967666: jmp 0x96770e */
  goto L_96770e;
L_96766b: /* 96766b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96766d: jne 0x967711 */
  if (!zf) goto L_967711;
L_967673: /* 967673: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 967679: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96767a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96767c: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 967682: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 96768a: je 0x9676b1 */
  if (zf) goto L_9676b1;
L_96768c: /* 96768c: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 967690: mov edi, ebp */
  edi = ebp;
L_967692: /* 967692: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 967695: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967697: je 0x9676b1 */
  if (zf) goto L_9676b1;
L_967699: /* 967699: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96769a: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 96769e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96769f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9676a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9676a2: call 0x968680 */
  esp -= 4; W32(esp, 0x9676a7u); SPILL(); f_968680(); if (g_unwind) return; RELOAD();
/* 9676a7: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 9676aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9676ad: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9676af: jne 0x967692 */
  if (!zf) goto L_967692;
L_9676b1: /* 9676b1: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9676b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9676b7: je 0x9676e0 */
  if (zf) goto L_9676e0;
L_9676b9: /* 9676b9: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 9676bc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9676be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9676c0: je 0x9676e0 */
  if (zf) goto L_9676e0;
L_9676c2: /* 9676c2: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
L_9676c6: /* 9676c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9676c7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9676cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9676cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9676cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9676cf: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9676d2: call 0x968680 */
  esp -= 4; W32(esp, 0x9676d7u); SPILL(); f_968680(); if (g_unwind) return; RELOAD();
/* 9676d7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9676d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9676dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9676de: jne 0x9676c6 */
  if (!zf) goto L_9676c6;
L_9676e0: /* 9676e0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9676e4: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 9676e9: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 9676ee: push 0xafdf5c */
  { uint32_t v = 0xafdf5cu; esp -= 4; W32(esp, v); }
/* 9676f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9676f4: mov dword ptr [0xcf8c54], edx */
  W32((uint32_t)(0xcf8c54u), edx);
/* 9676fa: mov dword ptr [0xcf8be4], 0 */
  W32((uint32_t)(0xcf8be4u), 0x0u);
/* 967704: call 0x953470 */
  esp -= 4; W32(esp, 0x967709u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967709: mov esi, 4 */
  esi = 0x4u;
L_96770e: /* 96770e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967711: /* 967711: mov eax, dword ptr [0xcf8498] */
  eax = R32((uint32_t)(0xcf8498u));
/* 967716: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967718: je 0x9678ce */
  if (zf) goto L_9678ce;
L_96771e: /* 96771e: mov edx, dword ptr [0xcf8be8] */
  edx = R32((uint32_t)(0xcf8be8u));
/* 967724: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 967729: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96772a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96772b: mov dword ptr [0xcf8be8], edx */
  W32((uint32_t)(0xcf8be8u), edx);
/* 967731: call 0x94f340 */
  esp -= 4; W32(esp, 0x967736u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 967736: mov edx, dword ptr [0xcf85d4] */
  edx = R32((uint32_t)(0xcf85d4u));
/* 96773c: mov ecx, dword ptr [0xcf8410] */
  ecx = R32((uint32_t)(0xcf8410u));
/* 967742: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 967744: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967747: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967749: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 96774d: je 0x96775e */
  if (zf) goto L_96775e;
L_96774f: /* 96774f: mov ecx, dword ptr [0xcf83f0] */
  ecx = R32((uint32_t)(0xcf83f0u));
/* 967755: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967757: je 0x96775e */
  if (zf) goto L_96775e;
L_967759: /* 967759: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96775a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_96775e: /* 96775e: cmp dword ptr [0xcf8494], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967766: jne 0x96776f */
  if (!zf) goto L_96776f;
L_967768: /* 967768: push 0xafdf4c */
  { uint32_t v = 0xafdf4cu; esp -= 4; W32(esp, v); }
/* 96776d: jmp 0x967774 */
  goto L_967774;
L_96776f: /* 96776f: push 0xafdf3c */
  { uint32_t v = 0xafdf3cu; esp -= 4; W32(esp, v); }
L_967774: /* 967774: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967775: call 0x953470 */
  esp -= 4; W32(esp, 0x96777au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96777a: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 96777e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967781: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967783: je 0x9677b4 */
  if (zf) goto L_9677b4;
L_967785: /* 967785: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 967786: mov eax, edi */
  eax = edi;
/* 967788: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 967789: mov ecx, 0x14 */
  ecx = 0x14u;
/* 96778e: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x96778e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 967790: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967792: jne 0x9677a2 */
  if (!zf) goto L_9677a2;
L_967794: /* 967794: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 967799: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96779a: call 0x953470 */
  esp -= 4; W32(esp, 0x96779fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96779f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9677a2: /* 9677a2: push 0xafdd34 */
  { uint32_t v = 0xafdd34u; esp -= 4; W32(esp, v); }
/* 9677a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9677a8: call 0x953470 */
  esp -= 4; W32(esp, 0x9677adu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9677ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9677b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9677b2: jne 0x967785 */
  if (!zf) goto L_967785;
L_9677b4: /* 9677b4: push 0xafdf24 */
  { uint32_t v = 0xafdf24u; esp -= 4; W32(esp, v); }
/* 9677b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9677ba: call 0x953470 */
  esp -= 4; W32(esp, 0x9677bfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9677bf: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9677c3: lea edi, [edx - 1] */
  edi = (uint32_t)(edx + 0xffffffffu);
/* 9677c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9677c9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9677cb: je 0x9677ff */
  if (zf) goto L_9677ff;
L_9677cd: /* 9677cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9677d0: /* 9677d0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9677d1: mov eax, edi */
  eax = edi;
/* 9677d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9677d4: mov ecx, 0x14 */
  ecx = 0x14u;
/* 9677d9: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x9677d9);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 9677db: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9677dd: jne 0x9677ed */
  if (!zf) goto L_9677ed;
L_9677df: /* 9677df: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9677e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9677e5: call 0x953470 */
  esp -= 4; W32(esp, 0x9677eau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9677ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9677ed: /* 9677ed: push 0xafdf20 */
  { uint32_t v = 0xafdf20u; esp -= 4; W32(esp, v); }
/* 9677f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9677f3: call 0x953470 */
  esp -= 4; W32(esp, 0x9677f8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9677f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9677fb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9677fd: jne 0x9677d0 */
  if (!zf) goto L_9677d0;
L_9677ff: /* 9677ff: push 0xafdf0c */
  { uint32_t v = 0xafdf0cu; esp -= 4; W32(esp, v); }
/* 967804: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967805: call 0x953470 */
  esp -= 4; W32(esp, 0x96780au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96780a: mov edx, dword ptr [0xcf85d4] */
  edx = R32((uint32_t)(0xcf85d4u));
/* 967810: imul edx, dword ptr [0xcf85cc] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(0xcf85ccu)));
  edx = (uint32_t)r;
  }
/* 967817: mov edi, dword ptr [0xcf85d8] */
  edi = R32((uint32_t)(0xcf85d8u));
/* 96781d: lea esi, [edi + edx*4] */
  esi = (uint32_t)(edi + edx*4);
/* 967820: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967823: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 967825: jae 0x96787a */
  if (!cf) goto L_96787a;
L_967827: /* 967827: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96782c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96782e: je 0x96784d */
  if (zf) goto L_96784d;
L_967830: /* 967830: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 967835: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967837: je 0x96784d */
  if (zf) goto L_96784d;
L_967839: /* 967839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96783a: call 0x95f210 */
  esp -= 4; W32(esp, 0x96783fu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96783f: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 967845: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967848: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 967849: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96784b: je 0x96786d */
  if (zf) goto L_96786d;
L_96784d: /* 96784d: cmp dword ptr [0xcf8494], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967854: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 967855: jne 0x967864 */
  if (!zf) goto L_967864;
L_967857: /* 967857: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967859: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96785a: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x96785fu); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 96785f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967862: jmp 0x96786d */
  goto L_96786d;
L_967864: /* 967864: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967865: call 0x96b280 */
  esp -= 4; W32(esp, 0x96786au); SPILL(); f_96b280(); if (g_unwind) return; RELOAD();
/* 96786a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96786d: /* 96786d: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 967873: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 967876: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 967878: jb 0x967827 */
  if (cf) goto L_967827;
L_96787a: /* 96787a: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 96787f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967881: je 0x9678bb */
  if (zf) goto L_9678bb;
L_967883: /* 967883: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 967886: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96788a: je 0x9678bb */
  if (zf) goto L_9678bb;
L_96788c: /* 96788c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_967890: /* 967890: mov ecx, dword ptr [0xcf8494] */
  ecx = R32((uint32_t)(0xcf8494u));
/* 967896: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 967899: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96789c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96789d: jne 0x9678ac */
  if (!zf) goto L_9678ac;
L_96789f: /* 96789f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9678a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9678a2: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x9678a7u); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 9678a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9678aa: jmp 0x9678b5 */
  goto L_9678b5;
L_9678ac: /* 9678ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9678ad: call 0x96b280 */
  esp -= 4; W32(esp, 0x9678b2u); SPILL(); f_96b280(); if (g_unwind) return; RELOAD();
/* 9678b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9678b5: /* 9678b5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9678b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9678b9: jne 0x967890 */
  if (!zf) goto L_967890;
L_9678bb: /* 9678bb: push 0xafdef0 */
  { uint32_t v = 0xafdef0u; esp -= 4; W32(esp, v); }
/* 9678c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9678c1: call 0x953470 */
  esp -= 4; W32(esp, 0x9678c6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9678c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9678c9: mov esi, 4 */
  esi = 0x4u;
L_9678ce: /* 9678ce: cmp dword ptr [0xcf8494], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9678d4: jne 0x9678f7 */
  if (!zf) goto L_9678f7;
L_9678d6: /* 9678d6: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 9678db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9678dd: jne 0x9678f7 */
  if (!zf) goto L_9678f7;
L_9678df: /* 9678df: mov eax, dword ptr [0xcf8c54] */
  eax = R32((uint32_t)(0xcf8c54u));
/* 9678e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9678e5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9678e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9678e9: push 0xafdee0 */
  { uint32_t v = 0xafdee0u; esp -= 4; W32(esp, v); }
/* 9678ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9678ef: call 0x953470 */
  esp -= 4; W32(esp, 0x9678f4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9678f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9678f7: /* 9678f7: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 9678fd: mov ecx, dword ptr [0xcf8488] */
  ecx = R32((uint32_t)(0xcf8488u));
/* 967903: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967905: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 967907: mov edx, dword ptr [0xcf8484] */
  edx = R32((uint32_t)(0xcf8484u));
/* 96790d: fstp dword ptr [0xcf8bd8] */
  WF32((uint32_t)(0xcf8bd8u), ST0); FPOP();
/* 967913: je 0x96791d */
  if (zf) goto L_96791d;
L_967915: /* 967915: fld dword ptr [0xcf8460] */
  { double v = F32((uint32_t)(0xcf8460u)); FPUSH(v); }
/* 96791b: jmp 0x967927 */
  goto L_967927;
L_96791d: /* 96791d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96791f: je 0x967946 */
  if (zf) goto L_967946;
L_967921: /* 967921: fld dword ptr [0xcf8464] */
  { double v = F32((uint32_t)(0xcf8464u)); FPUSH(v); }
L_967927: /* 967927: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 96792d: fld dword ptr [0xcf8bd8] */
  { double v = F32((uint32_t)(0xcf8bd8u)); FPUSH(v); }
/* 967933: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 967935: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 967937: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96793a: jp 0x967944 */
  if (pf) goto L_967944;
L_96793c: /* 96793c: fstp dword ptr [0xcf8bd8] */
  WF32((uint32_t)(0xcf8bd8u), ST0); FPOP();
/* 967942: jmp 0x967946 */
  goto L_967946;
L_967944: /* 967944: fstp st(0) */
  STI(0) = ST0; FPOP();
L_967946: /* 967946: mov eax, dword ptr [0xcf8bd8] */
  eax = R32((uint32_t)(0xcf8bd8u));
/* 96794b: mov esi, dword ptr [0xcf8490] */
  esi = R32((uint32_t)(0xcf8490u));
/* 967951: mov edi, dword ptr [0xcf852c] */
  edi = R32((uint32_t)(0xcf852cu));
/* 967957: mov dword ptr [0xcf8bdc], eax */
  W32((uint32_t)(0xcf8bdcu), eax);
/* 96795c: lea eax, [esi + edi] */
  eax = (uint32_t)(esi + edi);
/* 96795f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967961: je 0x967988 */
  if (zf) goto L_967988;
L_967963: /* 967963: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 967969: fmul qword ptr [0xa21740] */
  ST0 = ST0 * (F64((uint32_t)(0xa21740u)));
/* 96796f: fld dword ptr [0xcf8bd8] */
  { double v = F32((uint32_t)(0xcf8bd8u)); FPUSH(v); }
/* 967975: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 967977: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 967979: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96797c: jp 0x967986 */
  if (pf) goto L_967986;
L_96797e: /* 96797e: fstp dword ptr [0xcf8bdc] */
  WF32((uint32_t)(0xcf8bdcu), ST0); FPOP();
/* 967984: jmp 0x967988 */
  goto L_967988;
L_967986: /* 967986: fstp st(0) */
  STI(0) = ST0; FPOP();
L_967988: /* 967988: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
/* 96798e: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 967994: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 967996: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 967999: jp 0x9679a9 */
  if (pf) goto L_9679a9;
L_96799b: /* 96799b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9679a1: fsub dword ptr [0xcf8408] */
  ST0 = ST0 - (F32((uint32_t)(0xcf8408u)));
/* 9679a7: jmp 0x9679d0 */
  goto L_9679d0;
L_9679a9: /* 9679a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9679ab: jne 0x9679ef */
  if (!zf) goto L_9679ef;
L_9679ad: /* 9679ad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9679af: je 0x9679ef */
  if (zf) goto L_9679ef;
L_9679b1: /* 9679b1: fld dword ptr [0xcf840c] */
  { double v = F32((uint32_t)(0xcf840cu)); FPUSH(v); }
/* 9679b7: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9679bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9679bf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9679c2: jp 0x9679ef */
  if (pf) goto L_9679ef;
L_9679c4: /* 9679c4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9679ca: fsub dword ptr [0xcf840c] */
  ST0 = ST0 - (F32((uint32_t)(0xcf840cu)));
L_9679d0: /* 9679d0: fmul dword ptr [0xcf8a18] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8a18u)));
/* 9679d6: fld dword ptr [0xcf8bdc] */
  { double v = F32((uint32_t)(0xcf8bdcu)); FPUSH(v); }
/* 9679dc: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9679de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9679e0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9679e3: jp 0x9679ed */
  if (pf) goto L_9679ed;
L_9679e5: /* 9679e5: fstp dword ptr [0xcf8bdc] */
  WF32((uint32_t)(0xcf8bdcu), ST0); FPOP();
/* 9679eb: jmp 0x9679ef */
  goto L_9679ef;
L_9679ed: /* 9679ed: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9679ef: /* 9679ef: fld dword ptr [0xcf8bdc] */
  { double v = F32((uint32_t)(0xcf8bdcu)); FPUSH(v); }
/* 9679f5: fcomp dword ptr [0xcf846c] */
  fpu_com(ST0, F32((uint32_t)(0xcf846cu)));
  FPOP();
/* 9679fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9679fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 967a00: jp 0x967a0e */
  if (pf) goto L_967a0e;
L_967a02: /* 967a02: mov ecx, dword ptr [0xcf846c] */
  ecx = R32((uint32_t)(0xcf846cu));
/* 967a08: mov dword ptr [0xcf8bdc], ecx */
  W32((uint32_t)(0xcf8bdcu), ecx);
L_967a0e: /* 967a0e: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 967a14: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 967a1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 967a1c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 967a1f: jp 0x967a3b */
  if (pf) goto L_967a3b;
L_967a21: /* 967a21: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 967a27: fsqrt  */
  ST0 = sqrt(ST0);
/* 967a29: fmul dword ptr [0xcf8bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8bb4u)));
/* 967a2f: fadd dword ptr [0xcf8bdc] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8bdcu)));
/* 967a35: fstp dword ptr [0xcf8bdc] */
  WF32((uint32_t)(0xcf8bdcu), ST0); FPOP();
L_967a3b: /* 967a3b: cmp dword ptr [0xcf8494], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967a42: je 0x967cbf */
  if (zf) goto L_967cbf;
L_967a48: /* 967a48: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967a4a: jne 0x967a5d */
  if (!zf) goto L_967a5d;
L_967a4c: /* 967a4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967a4e: jne 0x967a5d */
  if (!zf) goto L_967a5d;
L_967a50: /* 967a50: mov eax, dword ptr [0xcf848c] */
  eax = R32((uint32_t)(0xcf848cu));
/* 967a55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967a57: je 0x967cbf */
  if (zf) goto L_967cbf;
L_967a5d: /* 967a5d: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 967a61: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 967a65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967a67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 967a68: call 0x966560 */
  esp -= 4; W32(esp, 0x967a6du); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 967a6d: mov ecx, dword ptr [0xcf852c] */
  ecx = R32((uint32_t)(0xcf852cu));
/* 967a73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967a76: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967a78: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 967a7c: je 0x967a9c */
  if (zf) goto L_967a9c;
L_967a7e: /* 967a7e: cmp dword ptr [0xcf8494], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967a85: jg 0x967a9c */
  if ((!zf && sf == of)) goto L_967a9c;
L_967a87: /* 967a87: mov ecx, dword ptr [0xcf8bdc] */
  ecx = R32((uint32_t)(0xcf8bdcu));
/* 967a8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967a8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967a8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967a90: call 0x96b750 */
  esp -= 4; W32(esp, 0x967a95u); SPILL(); f_96b750(); if (g_unwind) return; RELOAD();
/* 967a95: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 967a99: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967a9c: /* 967a9c: mov ecx, dword ptr [0xcf8490] */
  ecx = R32((uint32_t)(0xcf8490u));
/* 967aa2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967aa4: jne 0x967ab4 */
  if (!zf) goto L_967ab4;
L_967aa6: /* 967aa6: mov edx, dword ptr [0xcf848c] */
  edx = R32((uint32_t)(0xcf848cu));
/* 967aac: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967aae: je 0x967cb2 */
  if (zf) goto L_967cb2;
L_967ab4: /* 967ab4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967ab6: mov dword ptr [0xcf8c38], 1 */
  W32((uint32_t)(0xcf8c38u), 0x1u);
/* 967ac0: je 0x967b06 */
  if (zf) goto L_967b06;
L_967ac2: /* 967ac2: mov ecx, dword ptr [0xcf852c] */
  ecx = R32((uint32_t)(0xcf852cu));
/* 967ac8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967aca: jne 0x967b06 */
  if (!zf) goto L_967b06;
L_967acc: /* 967acc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967ace: je 0x967b06 */
  if (zf) goto L_967b06;
L_967ad0: /* 967ad0: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 967ad3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967ad5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967ad7: je 0x967b06 */
  if (zf) goto L_967b06;
L_967ad9: /* 967ad9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_967ae0: /* 967ae0: mov edx, dword ptr [0xcf8bdc] */
  edx = R32((uint32_t)(0xcf8bdcu));
/* 967ae6: mov ecx, dword ptr [0xcf8b3c] */
  ecx = R32((uint32_t)(0xcf8b3cu));
/* 967aec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967aed: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 967af0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967af1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967af3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967af4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967af5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 967af8: call 0x96b630 */
  esp -= 4; W32(esp, 0x967afdu); SPILL(); f_96b630(); if (g_unwind) return; RELOAD();
/* 967afd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967aff: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967b02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b04: jne 0x967ae0 */
  if (!zf) goto L_967ae0;
L_967b06: /* 967b06: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b08: je 0x967bdb */
  if (zf) goto L_967bdb;
L_967b0e: /* 967b0e: mov esi, ebp */
  esi = ebp;
L_967b10: /* 967b10: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 967b13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b15: je 0x967bdb */
  if (zf) goto L_967bdb;
L_967b1b: /* 967b1b: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 967b1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b21: jne 0x967b34 */
  if (!zf) goto L_967b34;
L_967b23: /* 967b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967b24: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x967b29u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 967b29: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967b2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b2e: jne 0x967bd0 */
  if (!zf) goto L_967bd0;
L_967b34: /* 967b34: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 967b37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b39: je 0x967bd0 */
  if (zf) goto L_967bd0;
L_967b3f: /* 967b3f: mov eax, dword ptr [0xcf848c] */
  eax = R32((uint32_t)(0xcf848cu));
/* 967b44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b46: je 0x967b61 */
  if (zf) goto L_967b61;
L_967b48: /* 967b48: cmp dword ptr [0xcf8494], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967b4f: jg 0x967b61 */
  if ((!zf && sf == of)) goto L_967b61;
L_967b51: /* 967b51: mov eax, dword ptr [0xcf8bd8] */
  eax = R32((uint32_t)(0xcf8bd8u));
/* 967b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967b57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967b58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967b59: call 0x968260 */
  esp -= 4; W32(esp, 0x967b5eu); SPILL(); f_968260(); if (g_unwind) return; RELOAD();
/* 967b5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967b61: /* 967b61: mov eax, dword ptr [0xcf8490] */
  eax = R32((uint32_t)(0xcf8490u));
/* 967b66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b68: je 0x967bd0 */
  if (zf) goto L_967bd0;
L_967b6a: /* 967b6a: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 967b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b6f: je 0x967ba0 */
  if (zf) goto L_967ba0;
L_967b71: /* 967b71: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 967b74: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967b76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b78: je 0x967ba0 */
  if (zf) goto L_967ba0;
L_967b7a: /* 967b7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_967b80: /* 967b80: mov ecx, dword ptr [0xcf8bdc] */
  ecx = R32((uint32_t)(0xcf8bdcu));
/* 967b86: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 967b89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967b8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967b8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967b8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967b8f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 967b92: call 0x96b630 */
  esp -= 4; W32(esp, 0x967b97u); SPILL(); f_96b630(); if (g_unwind) return; RELOAD();
/* 967b97: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967b99: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967b9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967b9e: jne 0x967b80 */
  if (!zf) goto L_967b80;
L_967ba0: /* 967ba0: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 967ba3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967ba5: je 0x967bd0 */
  if (zf) goto L_967bd0;
L_967ba7: /* 967ba7: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 967baa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967bac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967bae: je 0x967bd0 */
  if (zf) goto L_967bd0;
L_967bb0: /* 967bb0: mov ecx, dword ptr [0xcf8bdc] */
  ecx = R32((uint32_t)(0xcf8bdcu));
/* 967bb6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 967bb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967bba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967bbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967bbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967bbf: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 967bc2: call 0x96b630 */
  esp -= 4; W32(esp, 0x967bc7u); SPILL(); f_96b630(); if (g_unwind) return; RELOAD();
/* 967bc7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967bc9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967bcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967bce: jne 0x967bb0 */
  if (!zf) goto L_967bb0;
L_967bd0: /* 967bd0: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 967bd3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967bd5: jne 0x967b10 */
  if (!zf) goto L_967b10;
L_967bdb: /* 967bdb: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 967bdf: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967be1: je 0x967cb2 */
  if (zf) goto L_967cb2;
L_967be7: /* 967be7: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 967bea: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 967bed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967bef: je 0x967cb2 */
  if (zf) goto L_967cb2;
L_967bf5: /* 967bf5: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 967bf9: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 967bfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967bfe: jne 0x967c11 */
  if (!zf) goto L_967c11;
L_967c00: /* 967c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967c01: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x967c06u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 967c06: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967c09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c0b: jne 0x967ca7 */
  if (!zf) goto L_967ca7;
L_967c11: /* 967c11: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 967c14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c16: je 0x967ca7 */
  if (zf) goto L_967ca7;
L_967c1c: /* 967c1c: mov eax, dword ptr [0xcf848c] */
  eax = R32((uint32_t)(0xcf848cu));
/* 967c21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c23: je 0x967c3e */
  if (zf) goto L_967c3e;
L_967c25: /* 967c25: cmp dword ptr [0xcf8494], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967c2c: jg 0x967c3e */
  if ((!zf && sf == of)) goto L_967c3e;
L_967c2e: /* 967c2e: mov eax, dword ptr [0xcf8bd8] */
  eax = R32((uint32_t)(0xcf8bd8u));
/* 967c33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967c34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967c35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967c36: call 0x968260 */
  esp -= 4; W32(esp, 0x967c3bu); SPILL(); f_968260(); if (g_unwind) return; RELOAD();
/* 967c3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967c3e: /* 967c3e: mov eax, dword ptr [0xcf8490] */
  eax = R32((uint32_t)(0xcf8490u));
/* 967c43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c45: je 0x967ca7 */
  if (zf) goto L_967ca7;
L_967c47: /* 967c47: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 967c4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c4c: je 0x967c77 */
  if (zf) goto L_967c77;
L_967c4e: /* 967c4e: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 967c51: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967c53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c55: je 0x967c77 */
  if (zf) goto L_967c77;
L_967c57: /* 967c57: mov ecx, dword ptr [0xcf8bdc] */
  ecx = R32((uint32_t)(0xcf8bdcu));
/* 967c5d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 967c60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967c61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967c63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967c65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967c66: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 967c69: call 0x96b630 */
  esp -= 4; W32(esp, 0x967c6eu); SPILL(); f_96b630(); if (g_unwind) return; RELOAD();
/* 967c6e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967c70: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967c73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c75: jne 0x967c57 */
  if (!zf) goto L_967c57;
L_967c77: /* 967c77: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 967c7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c7c: je 0x967ca7 */
  if (zf) goto L_967ca7;
L_967c7e: /* 967c7e: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 967c81: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967c83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967c85: je 0x967ca7 */
  if (zf) goto L_967ca7;
L_967c87: /* 967c87: mov ecx, dword ptr [0xcf8bdc] */
  ecx = R32((uint32_t)(0xcf8bdcu));
/* 967c8d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 967c90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967c91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967c93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967c94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967c95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 967c96: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 967c99: call 0x96b630 */
  esp -= 4; W32(esp, 0x967c9eu); SPILL(); f_96b630(); if (g_unwind) return; RELOAD();
/* 967c9e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 967ca0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967ca3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967ca5: jne 0x967c87 */
  if (!zf) goto L_967c87;
L_967ca7: /* 967ca7: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 967caa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967cac: jne 0x967bf5 */
  if (!zf) goto L_967bf5;
L_967cb2: /* 967cb2: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 967cb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967cb7: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x967cbcu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 967cbc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967cbf: /* 967cbf: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 967cc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967cc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967cc6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 967cc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967cc8: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 967ccd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967cce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967cd1: ret  */
  esp += 4; SPILL(); return;
L_967cd2: /* 967cd2: mov eax, dword ptr [0xcf85b0] */
  eax = R32((uint32_t)(0xcf85b0u));
/* 967cd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967cd9: je 0x967cee */
  if (zf) goto L_967cee;
L_967cdb: /* 967cdb: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 967ce0: push 0xafde98 */
  { uint32_t v = 0xafde98u; esp -= 4; W32(esp, v); }
/* 967ce5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967ce6: call 0x953470 */
  esp -= 4; W32(esp, 0x967cebu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967ceb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967cee: /* 967cee: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967cf3: mov ecx, dword ptr [0xcf8b98] */
  ecx = R32((uint32_t)(0xcf8b98u));
/* 967cf9: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967cfc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 967d00: mov dword ptr [0xcf8be4], ecx */
  W32((uint32_t)(0xcf8be4u), ecx);
/* 967d06: jg 0x967d23 */
  if ((!zf && sf == of)) goto L_967d23;
L_967d08: /* 967d08: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 967d0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967d0d: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 967d12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967d13: call 0x953470 */
  esp -= 4; W32(esp, 0x967d18u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967d18: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967d1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967d1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967d1d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967d1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967d1f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967d22: ret  */
  esp += 4; SPILL(); return;
L_967d23: /* 967d23: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 967d27: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 967d2b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 967d2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967d2e: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 967d33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967d34: call 0x953470 */
  esp -= 4; W32(esp, 0x967d39u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967d39: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967d3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967d3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967d3e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967d3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967d40: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967d43: ret  */
  esp += 4; SPILL(); return;
L_967d44: /* 967d44: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 967d49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967d4b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 967d4f: je 0x967d7e */
  if (zf) goto L_967d7e;
L_967d51: /* 967d51: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 967d57: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 967d5b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 967d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967d5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967d5e: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 967d63: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 967d68: push 0xafde78 */
  { uint32_t v = 0xafde78u; esp -= 4; W32(esp, v); }
/* 967d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967d6e: call 0x953470 */
  esp -= 4; W32(esp, 0x967d73u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967d73: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967d76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967d77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967d78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967d79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967d7a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967d7d: ret  */
  esp += 4; SPILL(); return;
L_967d7e: /* 967d7e: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 967d82: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 967d88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967d89: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 967d8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967d8b: push 0xafe0fc */
  { uint32_t v = 0xafe0fcu; esp -= 4; W32(esp, v); }
/* 967d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967d91: call 0x953470 */
  esp -= 4; W32(esp, 0x967d96u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967d96: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967d99: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967d9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967d9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967d9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967d9d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967da0: ret  */
  esp += 4; SPILL(); return;
L_967da1: /* 967da1: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967da4: jg 0x968063 */
  if ((!zf && sf == of)) goto L_968063;
L_967daa: /* 967daa: mov eax, dword ptr [0xcf85b0] */
  eax = R32((uint32_t)(0xcf85b0u));
/* 967daf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967db1: je 0x967dc7 */
  if (zf) goto L_967dc7;
L_967db3: /* 967db3: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 967db9: push 0xafde40 */
  { uint32_t v = 0xafde40u; esp -= 4; W32(esp, v); }
/* 967dbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967dbf: call 0x953470 */
  esp -= 4; W32(esp, 0x967dc4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967dc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967dc7: /* 967dc7: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 967dcb: push 0xafde3c */
  { uint32_t v = 0xafde3cu; esp -= 4; W32(esp, v); }
/* 967dd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967dd1: call 0x953470 */
  esp -= 4; W32(esp, 0x967dd6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967dd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967dd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967dda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967ddb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967ddc: mov dword ptr [0xcf8be4], 0 */
  W32((uint32_t)(0xcf8be4u), 0x0u);
/* 967de6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967de7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967dea: ret  */
  esp += 4; SPILL(); return;
L_967deb: /* 967deb: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 967def: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967df4: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 967df8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967df9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967dfa: push 0xafe0fc */
  { uint32_t v = 0xafe0fcu; esp -= 4; W32(esp, v); }
/* 967dff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967e00: call 0x953470 */
  esp -= 4; W32(esp, 0x967e05u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967e05: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967e08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967e09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967e0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967e0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967e0c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967e0f: ret  */
  esp += 4; SPILL(); return;
L_967e10: /* 967e10: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 967e14: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 967e18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967e19: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 967e1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967e1f: call 0x953470 */
  esp -= 4; W32(esp, 0x967e24u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967e24: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967e27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967e28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967e29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967e2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967e2b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967e2e: ret  */
  esp += 4; SPILL(); return;
L_967e2f: /* 967e2f: mov ecx, dword ptr [0xcf85b0] */
  ecx = R32((uint32_t)(0xcf85b0u));
/* 967e35: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967e37: jne 0x968063 */
  if (!zf) goto L_968063;
L_967e3d: /* 967e3d: cmp ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967e40: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967e45: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 967e49: je 0x967eab */
  if (zf) goto L_967eab;
L_967e4b: /* 967e4b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967e4e: je 0x967eab */
  if (zf) goto L_967eab;
L_967e50: /* 967e50: mov ecx, dword ptr [0xcf8c14] */
  ecx = R32((uint32_t)(0xcf8c14u));
/* 967e56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967e57: call 0x94f340 */
  esp -= 4; W32(esp, 0x967e5cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 967e5c: mov edx, dword ptr [0xcf85d4] */
  edx = R32((uint32_t)(0xcf85d4u));
/* 967e62: mov ecx, eax */
  ecx = eax;
/* 967e64: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 967e69: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 967e6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967e6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967e70: mov dword ptr [0xcf8be4], ecx */
  W32((uint32_t)(0xcf8be4u), ecx);
/* 967e76: je 0x967e7c */
  if (zf) goto L_967e7c;
L_967e78: /* 967e78: dec dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_967e7c: /* 967e7c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 967e80: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 967e81: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 967e83: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 967e87: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 967e89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967e8a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 967e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 967e90: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 967e92: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 967e96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967e97: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 967e99: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 967e9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967e9e: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 967ea2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967ea3: push 0xafde2c */
  { uint32_t v = 0xafde2cu; esp -= 4; W32(esp, v); }
/* 967ea8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967ea9: jmp 0x967ee0 */
  goto L_967ee0;
L_967eab: /* 967eab: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 967eaf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 967eb0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 967eb2: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 967eb6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 967eb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967eb9: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 967ebe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967ec0: call 0x94f340 */
  esp -= 4; W32(esp, 0x967ec5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 967ec5: mov ebp, dword ptr [0xcf85d4] */
  ebp = R32((uint32_t)(0xcf85d4u));
/* 967ecb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 967ecf: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 967ed3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967ed6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 967ed8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967ed9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967eda: push 0xafde2c */
  { uint32_t v = 0xafde2cu; esp -= 4; W32(esp, v); }
/* 967edf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_967ee0: /* 967ee0: call 0x953470 */
  esp -= 4; W32(esp, 0x967ee5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967ee5: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 967eea: imul eax, dword ptr [0xcf85cc] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xcf85ccu)));
  eax = (uint32_t)r;
  }
/* 967ef1: mov esi, dword ptr [0xcf85d8] */
  esi = R32((uint32_t)(0xcf85d8u));
/* 967ef7: lea edi, [esi + eax*4] */
  edi = (uint32_t)(esi + eax*4);
/* 967efa: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967efd: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 967eff: jae 0x967f26 */
  if (!cf) goto L_967f26;
L_967f01: /* 967f01: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 967f05: mov edx, dword ptr [0xcf8b34] */
  edx = R32((uint32_t)(0xcf8b34u));
/* 967f0b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 967f0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967f0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967f11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967f12: call 0x96b1f0 */
  esp -= 4; W32(esp, 0x967f17u); SPILL(); f_96b1f0(); if (g_unwind) return; RELOAD();
/* 967f17: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967f1c: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 967f1f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967f22: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 967f24: jb 0x967f01 */
  if (cf) goto L_967f01;
L_967f26: /* 967f26: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 967f2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967f2d: je 0x967f5a */
  if (zf) goto L_967f5a;
L_967f2f: /* 967f2f: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 967f32: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 967f34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967f36: je 0x967f5a */
  if (zf) goto L_967f5a;
L_967f38: /* 967f38: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 967f3c: mov edx, dword ptr [0xcf8b34] */
  edx = R32((uint32_t)(0xcf8b34u));
/* 967f42: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 967f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967f45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967f46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967f48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967f49: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 967f4c: call 0x96b1f0 */
  esp -= 4; W32(esp, 0x967f51u); SPILL(); f_96b1f0(); if (g_unwind) return; RELOAD();
/* 967f51: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 967f53: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967f56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967f58: jne 0x967f38 */
  if (!zf) goto L_967f38;
L_967f5a: /* 967f5a: cmp ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 967f5d: jne 0x968083 */
  if (!zf) goto L_968083;
L_967f63: /* 967f63: cmp dword ptr [0xcf85cc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 967f6a: jle 0x968083 */
  if ((zf || sf != of)) goto L_968083;
L_967f70: /* 967f70: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 967f76: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967f78: je 0x968083 */
  if (zf) goto L_968083;
L_967f7e: /* 967f7e: mov edi, 0x1000 */
  edi = 0x1000u;
L_967f83: /* 967f83: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 967f86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967f88: je 0x968083 */
  if (zf) goto L_968083;
L_967f8e: /* 967f8e: test dword ptr [esi + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967f91: jne 0x967fad */
  if (!zf) goto L_967fad;
L_967f93: /* 967f93: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 967f96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967f98: je 0x967fad */
  if (zf) goto L_967fad;
L_967f9a: /* 967f9a: mov eax, dword ptr [0xcf8b34] */
  eax = R32((uint32_t)(0xcf8b34u));
/* 967f9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 967fa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 967fa2: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 967fa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 967fa5: call 0x968100 */
  esp -= 4; W32(esp, 0x967faau); SPILL(); f_968100(); if (g_unwind) return; RELOAD();
/* 967faa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_967fad: /* 967fad: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 967fb0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967fb2: jne 0x967f83 */
  if (!zf) goto L_967f83;
L_967fb4: /* 967fb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967fb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967fb6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967fb7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967fb8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967fbb: ret  */
  esp += 4; SPILL(); return;
L_967fbc: /* 967fbc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 967fc0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 967fc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 967fc5: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 967fca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 967fcb: call 0x953470 */
  esp -= 4; W32(esp, 0x967fd0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 967fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967fd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 967fd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 967fd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 967fd6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 967fd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 967fda: ret  */
  esp += 4; SPILL(); return;
L_967fdb: /* 967fdb: mov ecx, dword ptr [0xcf85b0] */
  ecx = R32((uint32_t)(0xcf85b0u));
/* 967fe1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967fe3: je 0x968063 */
  if (zf) goto L_968063;
L_967fe9: /* 967fe9: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 967fee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 967ff0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 967ff4: je 0x968021 */
  if (zf) goto L_968021;
L_967ff6: /* 967ff6: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 967ffb: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 967fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968000: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968001: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 968006: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96800b: push 0xafde10 */
  { uint32_t v = 0xafde10u; esp -= 4; W32(esp, v); }
/* 968010: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968011: call 0x953470 */
  esp -= 4; W32(esp, 0x968016u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968016: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968019: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96801a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96801b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96801c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96801d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968020: ret  */
  esp += 4; SPILL(); return;
L_968021: /* 968021: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 968025: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96802b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96802c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96802d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96802e: push 0xafe0fc */
  { uint32_t v = 0xafe0fcu; esp -= 4; W32(esp, v); }
/* 968033: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968034: call 0x953470 */
  esp -= 4; W32(esp, 0x968039u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968039: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96803c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96803d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96803e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96803f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968040: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968043: ret  */
  esp += 4; SPILL(); return;
L_968044: /* 968044: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 968048: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96804c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96804d: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 968052: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968053: call 0x953470 */
  esp -= 4; W32(esp, 0x968058u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968058: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96805b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96805c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96805d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96805e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96805f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968062: ret  */
  esp += 4; SPILL(); return;
L_968063: /* 968063: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 968069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96806a: push 0xafddc0 */
  { uint32_t v = 0xafddc0u; esp -= 4; W32(esp, v); }
/* 96806f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968070: call 0x953470 */
  esp -= 4; W32(esp, 0x968075u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968075: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 968077: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 968079: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96807b: call 0x9535b0 */
  esp -= 4; W32(esp, 0x968080u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 968080: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968083: /* 968083: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968084: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 968085: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 968086: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968087: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96808a: ret  */
  esp += 4; SPILL(); return;
}
