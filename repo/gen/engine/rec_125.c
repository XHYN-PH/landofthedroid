#include "recomp.h"
#include "rec_mod.h"

void f_926890(void) {
  LOAD_REGS();
L_926890: /* 926890: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 926893: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 926897: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926898: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926899: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92689eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92689e: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 9268a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9268a3: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 9268a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9268a8: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 9268ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9268ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9268ae: call 0x92a920 */
  esp -= 4; W32(esp, 0x9268b3u); SPILL(); f_92a920(); if (g_unwind) return; RELOAD();
/* 9268b3: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 9268b7: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 9268bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9268bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9268bd: call 0x90eea0 */
  esp -= 4; W32(esp, 0x9268c2u); SPILL(); f_90eea0(); if (g_unwind) return; RELOAD();
/* 9268c2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9268c6: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 9268ca: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 9268ce: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9268d2: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 9268d6: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 9268da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9268db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9268dc: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9268e0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9268e4: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 9268e8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9268ec: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9268f0: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 9268f4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9268f8: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9268fc: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 926900: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 926904: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 926908: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 92690c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 926910: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 926914: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 926918: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 92691c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 926920: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 926924: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 926928: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92692c: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 926930: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 926934: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 926938: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 92693c: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 926940: call 0x90eb70 */
  esp -= 4; W32(esp, 0x926945u); SPILL(); f_90eb70(); if (g_unwind) return; RELOAD();
/* 926945: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 926949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92694a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92694b: call 0x90eb90 */
  esp -= 4; W32(esp, 0x926950u); SPILL(); f_90eb90(); if (g_unwind) return; RELOAD();
/* 926950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926951: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 926954: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_926960(void) {
  LOAD_REGS();
L_926960: /* 926960: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 926963: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926964: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 926968: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92696a: je 0x926a78 */
  if (zf) goto L_926a78;
L_926970: /* 926970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926971: call 0x925ce0 */
  esp -= 4; W32(esp, 0x926976u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 926976: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926978: je 0x926a78 */
  if (zf) goto L_926a78;
L_92697e: /* 92697e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92697f: call 0x9287f0 */
  esp -= 4; W32(esp, 0x926984u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 926984: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926986: je 0x926a78 */
  if (zf) goto L_926a78;
L_92698c: /* 92698c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92698d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92698e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x926993u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 926993: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926994: mov edi, eax */
  edi = eax;
/* 926996: call 0x925ce0 */
  esp -= 4; W32(esp, 0x92699bu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 92699b: mov esi, eax */
  esi = eax;
/* 92699d: call 0x92a970 */
  esp -= 4; W32(esp, 0x9269a2u); SPILL(); f_92a970(); if (g_unwind) return; RELOAD();
/* 9269a2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9269a4: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9269aa: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9269ad: je 0x9269c6 */
  if (zf) goto L_9269c6;
L_9269af: /* 9269af: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 9269b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9269b4: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 9269b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9269b9: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 9269bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9269be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9269bf: call 0x92a920 */
  esp -= 4; W32(esp, 0x9269c4u); SPILL(); f_92a920(); if (g_unwind) return; RELOAD();
/* 9269c4: jmp 0x926a0e */
  goto L_926a0e;
L_9269c6: /* 9269c6: mov dword ptr [esp + 8], 0x3ecccccd */
  W32((uint32_t)(esp + 0x8u), 0x3ecccccdu);
/* 9269ce: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 9269d6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9269de: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9269e6: mov dword ptr [esp + 0x18], 0x3ecccccd */
  W32((uint32_t)(esp + 0x18u), 0x3ecccccdu);
/* 9269ee: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 9269f6: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 9269fe: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 926a06: mov dword ptr [esp + 0x28], 0x3ecccccd */
  W32((uint32_t)(esp + 0x28u), 0x3ecccccdu);
L_926a0e: /* 926a0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926a0f: call 0x90e1a0 */
  esp -= 4; W32(esp, 0x926a14u); SPILL(); f_90e1a0(); if (g_unwind) return; RELOAD();
/* 926a14: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 926a18: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a1a: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 926a1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926a1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926a20: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 926a24: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 926a28: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a2a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 926a2e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 926a32: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a34: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 926a38: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 926a3c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a3e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 926a42: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 926a46: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a48: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 926a4c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 926a50: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a52: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 926a56: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 926a5a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a5c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 926a60: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 926a64: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 926a66: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 926a6a: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 926a6e: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 926a72: call 0x90eb90 */
  esp -= 4; W32(esp, 0x926a77u); SPILL(); f_90eb90(); if (g_unwind) return; RELOAD();
/* 926a77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_926a78: /* 926a78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926a79: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 926a7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926a80(void) {
  LOAD_REGS();
L_926a80: /* 926a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926a81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926a85: mov eax, dword ptr [esi + 0x234] */
  eax = R32((uint32_t)(esi + 0x234u));
/* 926a8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926a8d: je 0x926aa9 */
  if (zf) goto L_926aa9;
L_926a8f: /* 926a8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926a90: call 0x9285f0 */
  esp -= 4; W32(esp, 0x926a95u); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 926a95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926a97: je 0x926aa9 */
  if (zf) goto L_926aa9;
L_926a99: /* 926a99: mov eax, dword ptr [esi + 0x234] */
  eax = R32((uint32_t)(esi + 0x234u));
/* 926a9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926aa0: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 926aa4: jmp 0x92b150 */
  SPILL(); f_92b150(); return;
L_926aa9: /* 926aa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926aaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926ab0(void) {
  LOAD_REGS();
L_926ab0: /* 926ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926ab1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926ab5: mov eax, dword ptr [esi + 0x234] */
  eax = R32((uint32_t)(esi + 0x234u));
/* 926abb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926abd: je 0x926ad9 */
  if (zf) goto L_926ad9;
L_926abf: /* 926abf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926ac0: call 0x9285f0 */
  esp -= 4; W32(esp, 0x926ac5u); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 926ac5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926ac7: je 0x926ad9 */
  if (zf) goto L_926ad9;
L_926ac9: /* 926ac9: mov eax, dword ptr [esi + 0x234] */
  eax = R32((uint32_t)(esi + 0x234u));
/* 926acf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926ad0: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 926ad4: jmp 0x92b170 */
  SPILL(); f_92b170(); return;
L_926ad9: /* 926ad9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926ada: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926ae0(void) {
  LOAD_REGS();
L_926ae0: /* 926ae0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926ae4: mov eax, dword ptr [eax + 0x174] */
  eax = R32((uint32_t)(eax + 0x174u));
/* 926aea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926aec: je 0x926af5 */
  if (zf) goto L_926af5;
L_926aee: /* 926aee: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
L_926af5: /* 926af5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926b00(void) {
  LOAD_REGS();
L_926b00: /* 926b00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926b04: mov dword ptr [eax + 0x1d0], 0x926a80 */
  W32((uint32_t)(eax + 0x1d0u), 0x926a80u);
/* 926b0e: mov dword ptr [eax + 0x1cc], 0x926ab0 */
  W32((uint32_t)(eax + 0x1ccu), 0x926ab0u);
/* 926b18: mov dword ptr [eax + 0x1d4], 0x926ae0 */
  W32((uint32_t)(eax + 0x1d4u), 0x926ae0u);
/* 926b22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926b30(void) {
  LOAD_REGS();
L_926b30: /* 926b30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926b31: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 926b33: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x926b39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 926b39: mov ebx, eax */
  ebx = eax;
/* 926b3b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926b3d: jne 0x926b43 */
  if (!zf) goto L_926b43;
L_926b3f: /* 926b3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 926b40: ret 4 */
  esp += 8; SPILL(); return;
L_926b43: /* 926b43: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 926b44: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 926b48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926b49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926b4a: mov ecx, 9 */
  ecx = 0x9u;
/* 926b4f: mov esi, ebp */
  esi = ebp;
/* 926b51: mov edi, ebx */
  edi = ebx;
/* 926b53: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 926b55: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 926b58: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 926b5b: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 926b5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926b5f: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 926b62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926b63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926b65: call 0x912a50 */
  esp -= 4; W32(esp, 0x926b6au); SPILL(); f_912a50(); if (g_unwind) return; RELOAD();
/* 926b6a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 926b6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926b6d: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 926b70: call 0x912ff0 */
  esp -= 4; W32(esp, 0x926b75u); SPILL(); f_912ff0(); if (g_unwind) return; RELOAD();
/* 926b75: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 926b78: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 926b7b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 926b7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926b7f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 926b82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926b83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926b84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926b85: call 0x929990 */
  esp -= 4; W32(esp, 0x926b8au); SPILL(); f_929990(); if (g_unwind) return; RELOAD();
/* 926b8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926b8b: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 926b8e: call 0x92f570 */
  esp -= 4; W32(esp, 0x926b93u); SPILL(); f_92f570(); if (g_unwind) return; RELOAD();
/* 926b93: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 926b96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926b97: call 0x92f4f0 */
  esp -= 4; W32(esp, 0x926b9cu); SPILL(); f_92f4f0(); if (g_unwind) return; RELOAD();
/* 926b9c: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 926b9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926ba0: call 0x926cf0 */
  esp -= 4; W32(esp, 0x926ba5u); SPILL(); f_926cf0(); if (g_unwind) return; RELOAD();
/* 926ba5: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 926ba8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926ba9: call 0x928470 */
  esp -= 4; W32(esp, 0x926baeu); SPILL(); f_928470(); if (g_unwind) return; RELOAD();
/* 926bae: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 926bb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926bb2: call 0x92a980 */
  esp -= 4; W32(esp, 0x926bb7u); SPILL(); f_92a980(); if (g_unwind) return; RELOAD();
/* 926bb7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 926bba: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 926bbd: mov edx, dword ptr [0xaf3ea0] */
  edx = R32((uint32_t)(0xaf3ea0u));
/* 926bc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926bc4: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 926bc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926bc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926bca: call 0x92af80 */
  esp -= 4; W32(esp, 0x926bcfu); SPILL(); f_92af80(); if (g_unwind) return; RELOAD();
/* 926bcf: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 926bd2: mov dword ptr [ebx + 0x2c], eax */
  W32((uint32_t)(ebx + 0x2cu), eax);
/* 926bd5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 926bd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926bd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926bda: call 0x925cf0 */
  esp -= 4; W32(esp, 0x926bdfu); SPILL(); f_925cf0(); if (g_unwind) return; RELOAD();
/* 926bdf: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 926be2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926be3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926be4: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
/* 926be7: call 0x926180 */
  esp -= 4; W32(esp, 0x926becu); SPILL(); f_926180(); if (g_unwind) return; RELOAD();
/* 926bec: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 926bef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926bf0: call 0x926b00 */
  esp -= 4; W32(esp, 0x926bf5u); SPILL(); f_926b00(); if (g_unwind) return; RELOAD();
/* 926bf5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926bf6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926bf7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 926bf8: mov eax, ebx */
  eax = ebx;
/* 926bfa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 926bfb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926c00(void) {
  LOAD_REGS();
L_926c00: /* 926c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926c01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926c05: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 926c08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926c09: call 0x912bb0 */
  esp -= 4; W32(esp, 0x926c0eu); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 926c0e: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 926c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926c12: call 0x92afe0 */
  esp -= 4; W32(esp, 0x926c17u); SPILL(); f_92afe0(); if (g_unwind) return; RELOAD();
/* 926c17: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 926c1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926c1b: call 0x929aa0 */
  esp -= 4; W32(esp, 0x926c20u); SPILL(); f_929aa0(); if (g_unwind) return; RELOAD();
/* 926c20: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 926c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926c24: call 0x929b30 */
  esp -= 4; W32(esp, 0x926c29u); SPILL(); f_929b30(); if (g_unwind) return; RELOAD();
/* 926c29: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 926c2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926c2d: call 0x925d90 */
  esp -= 4; W32(esp, 0x926c32u); SPILL(); f_925d90(); if (g_unwind) return; RELOAD();
/* 926c32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926c33: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x926c39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 926c39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926c3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926c40(void) {
  LOAD_REGS();
L_926c40: /* 926c40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926c41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926c43: push 0xaf2f48 */
  { uint32_t v = 0xaf2f48u; esp -= 4; W32(esp, v); }
/* 926c48: call 0x976470 */
  esp -= 4; W32(esp, 0x926c4du); SPILL(); f_976470(); if (g_unwind) return; RELOAD();
/* 926c4d: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926c51: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 926c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926c55: call 0x92b1b0 */
  esp -= 4; W32(esp, 0x926c5au); SPILL(); f_92b1b0(); if (g_unwind) return; RELOAD();
/* 926c5a: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 926c5d: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 926c60: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 926c63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926c64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926c65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926c66: call 0x925e30 */
  esp -= 4; W32(esp, 0x926c6bu); SPILL(); f_925e30(); if (g_unwind) return; RELOAD();
/* 926c6b: push 0xaf2f48 */
  { uint32_t v = 0xaf2f48u; esp -= 4; W32(esp, v); }
/* 926c70: call 0x9765b0 */
  esp -= 4; W32(esp, 0x926c75u); SPILL(); f_9765b0(); if (g_unwind) return; RELOAD();
/* 926c75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926c77: push 0xaf2f3c */
  { uint32_t v = 0xaf2f3cu; esp -= 4; W32(esp, v); }
/* 926c7c: call 0x976470 */
  esp -= 4; W32(esp, 0x926c81u); SPILL(); f_976470(); if (g_unwind) return; RELOAD();
/* 926c81: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 926c85: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 926c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926c89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926c8a: call 0x913280 */
  esp -= 4; W32(esp, 0x926c8fu); SPILL(); f_913280(); if (g_unwind) return; RELOAD();
/* 926c8f: push 0xaf2f3c */
  { uint32_t v = 0xaf2f3cu; esp -= 4; W32(esp, v); }
/* 926c94: call 0x9765b0 */
  esp -= 4; W32(esp, 0x926c99u); SPILL(); f_9765b0(); if (g_unwind) return; RELOAD();
/* 926c99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926c9a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_926ca0(void) {
  LOAD_REGS();
L_926ca0: /* 926ca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926ca4: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 926ca7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926cb0(void) {
  LOAD_REGS();
L_926cb0: /* 926cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926cb4: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 926cb7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926cc0(void) {
  LOAD_REGS();
L_926cc0: /* 926cc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926cc4: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 926cc7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926cd0(void) {
  LOAD_REGS();
L_926cd0: /* 926cd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926cd4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 926cd7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926ce0(void) {
  LOAD_REGS();
L_926ce0: /* 926ce0: mov ax, 8 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x8u) & 0xffffu);
/* 926ce4: ret  */
  esp += 4; SPILL(); return;
}

void f_926cf0(void) {
  LOAD_REGS();
L_926cf0: /* 926cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926cf4: push 0x928390 */
  { uint32_t v = 0x928390u; esp -= 4; W32(esp, v); }
/* 926cf9: push 0x927180 */
  { uint32_t v = 0x927180u; esp -= 4; W32(esp, v); }
/* 926cfe: push 0x927170 */
  { uint32_t v = 0x927170u; esp -= 4; W32(esp, v); }
/* 926d03: push 0x927160 */
  { uint32_t v = 0x927160u; esp -= 4; W32(esp, v); }
/* 926d08: push 0x926f30 */
  { uint32_t v = 0x926f30u; esp -= 4; W32(esp, v); }
/* 926d0d: push 0x926ee0 */
  { uint32_t v = 0x926ee0u; esp -= 4; W32(esp, v); }
/* 926d12: push 0xaf2f54 */
  { uint32_t v = 0xaf2f54u; esp -= 4; W32(esp, v); }
/* 926d17: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 926d19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926d1a: call 0x929d50 */
  esp -= 4; W32(esp, 0x926d1fu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 926d1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926d30(void) {
  LOAD_REGS();
L_926d30: /* 926d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926d31: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 926d33: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 926d35: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x926d3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 926d3b: mov esi, eax */
  esi = eax;
/* 926d3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926d3f: jne 0x926d45 */
  if (!zf) goto L_926d45;
L_926d41: /* 926d41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926d42: ret 8 */
  esp += 12; SPILL(); return;
L_926d45: /* 926d45: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 926d49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926d4a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 926d4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926d4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926d4e: call 0x92a720 */
  esp -= 4; W32(esp, 0x926d53u); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 926d53: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 926d57: mov ecx, edi */
  ecx = edi;
/* 926d59: imul ecx, ecx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x44u);
  ecx = (uint32_t)r;
  }
/* 926d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926d5d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x926d63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 926d63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 926d65: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 926d68: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 926d6b: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 926d72: jle 0x926d89 */
  if ((zf || sf != of)) goto L_926d89;
L_926d74: /* 926d74: xor eax, eax */
  eax = 0;
/* 926d76: mov ecx, edi */
  ecx = edi;
L_926d78: /* 926d78: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 926d7b: mov dword ptr [edx + eax + 0x40], 0 */
  W32((uint32_t)(edx + eax + 0x40u), 0x0u);
/* 926d83: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 926d86: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 926d87: jne 0x926d78 */
  if (!zf) goto L_926d78;
L_926d89: /* 926d89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926d8a: mov eax, esi */
  eax = esi;
/* 926d8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926d8d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_926d90(void) {
  LOAD_REGS();
L_926d90: /* 926d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926d91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926d92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 926d96: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 926d99: xor esi, esi */
  esi = 0;
/* 926d9b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 926d9d: jle 0x926db2 */
  if ((zf || sf != of)) goto L_926db2;
L_926d9f: /* 926d9f: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 926da2: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_926da5: /* 926da5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 926da8: je 0x926db2 */
  if (zf) goto L_926db2;
L_926daa: /* 926daa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 926dab: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 926dae: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926db0: jl 0x926da5 */
  if ((sf != of)) goto L_926da5;
L_926db2: /* 926db2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926db4: jl 0x926dbe */
  if ((sf != of)) goto L_926dbe;
L_926db6: /* 926db6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926db7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 926dba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926dbb: ret 0xc */
  esp += 16; SPILL(); return;
L_926dbe: /* 926dbe: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 926dc1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 926dc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926dc6: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 926dc8: mov edx, esi */
  edx = esi;
/* 926dca: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* 926dcd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 926dcf: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 926dd1: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 926dd4: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 926dd7: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 926dda: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 926ddd: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* 926de0: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 926de3: mov ebx, dword ptr [ecx + 0x10] */
  ebx = R32((uint32_t)(ecx + 0x10u));
/* 926de6: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 926de9: mov ebx, dword ptr [ecx + 0x14] */
  ebx = R32((uint32_t)(ecx + 0x14u));
/* 926dec: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 926def: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* 926df2: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 926df5: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* 926df8: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 926dfb: mov ebx, dword ptr [ecx + 0x20] */
  ebx = R32((uint32_t)(ecx + 0x20u));
/* 926dfe: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 926e01: mov ebx, dword ptr [ecx + 0x24] */
  ebx = R32((uint32_t)(ecx + 0x24u));
/* 926e04: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 926e07: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 926e0a: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 926e0d: mov ebx, dword ptr [ecx + 0x2c] */
  ebx = R32((uint32_t)(ecx + 0x2cu));
/* 926e10: mov dword ptr [eax + 0x2c], ebx */
  W32((uint32_t)(eax + 0x2cu), ebx);
/* 926e13: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* 926e16: mov dword ptr [eax + 0x30], ebx */
  W32((uint32_t)(eax + 0x30u), ebx);
/* 926e19: mov ebx, dword ptr [ecx + 0x34] */
  ebx = R32((uint32_t)(ecx + 0x34u));
/* 926e1c: mov dword ptr [eax + 0x34], ebx */
  W32((uint32_t)(eax + 0x34u), ebx);
/* 926e1f: mov ebx, dword ptr [ecx + 0x38] */
  ebx = R32((uint32_t)(ecx + 0x38u));
/* 926e22: mov dword ptr [eax + 0x38], ebx */
  W32((uint32_t)(eax + 0x38u), ebx);
/* 926e25: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 926e28: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 926e2b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 926e2f: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 926e32: mov dword ptr [ecx + edx + 0x40], eax */
  W32((uint32_t)(ecx + edx + 0x40u), eax);
/* 926e36: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 926e39: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 926e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926e3b: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 926e3e: call 0x92a7e0 */
  esp -= 4; W32(esp, 0x926e43u); SPILL(); f_92a7e0(); if (g_unwind) return; RELOAD();
/* 926e43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 926e44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926e45: mov eax, esi */
  eax = esi;
/* 926e47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926e48: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_926e50(void) {
  LOAD_REGS();
L_926e50: /* 926e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926e51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 926e55: imul esi, esi, 0x44 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x44u);
  esi = (uint32_t)r;
  }
/* 926e58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926e59: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 926e5d: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 926e60: mov ecx, dword ptr [esi + eax + 0x40] */
  ecx = R32((uint32_t)(esi + eax + 0x40u));
/* 926e64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926e65: call 0x92a7f0 */
  esp -= 4; W32(esp, 0x926e6au); SPILL(); f_92a7f0(); if (g_unwind) return; RELOAD();
/* 926e6a: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 926e6d: mov dword ptr [esi + edx + 0x40], 0 */
  W32((uint32_t)(esi + edx + 0x40u), 0x0u);
/* 926e75: dec dword ptr [edi + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi + 0x14u), r);
  }
/* 926e78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926e79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926e7a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_926e80(void) {
  LOAD_REGS();
L_926e80: /* 926e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926e84: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 926e87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926e90(void) {
  LOAD_REGS();
L_926e90: /* 926e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926e94: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 926e97: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926ea0(void) {
  LOAD_REGS();
L_926ea0: /* 926ea0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 926ea4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 926ea8: cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926eab: jl 0x926eb2 */
  if ((sf != of)) goto L_926eb2;
L_926ead: /* 926ead: xor eax, eax */
  eax = 0;
/* 926eaf: ret 8 */
  esp += 12; SPILL(); return;
L_926eb2: /* 926eb2: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 926eb5: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* 926eb8: mov eax, dword ptr [eax + ecx + 0x40] */
  eax = R32((uint32_t)(eax + ecx + 0x40u));
/* 926ebc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_926ec0(void) {
  LOAD_REGS();
L_926ec0: /* 926ec0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 926ec4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 926ec8: cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926ecb: jl 0x926ed2 */
  if ((sf != of)) goto L_926ed2;
L_926ecd: /* 926ecd: xor eax, eax */
  eax = 0;
/* 926ecf: ret 8 */
  esp += 12; SPILL(); return;
L_926ed2: /* 926ed2: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 926ed5: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* 926ed8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 926eda: ret 8 */
  esp += 12; SPILL(); return;
}

void f_926ee0(void) {
  LOAD_REGS();
L_926ee0: /* 926ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926ee1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926ee5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926ee7: je 0x926f24 */
  if (zf) goto L_926f24;
L_926ee9: /* 926ee9: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 926eec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926eed: xor ebx, ebx */
  ebx = 0;
/* 926eef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 926ef1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926ef2: jle 0x926f12 */
  if ((zf || sf != of)) goto L_926f12;
L_926ef4: /* 926ef4: xor edi, edi */
  edi = 0;
L_926ef6: /* 926ef6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 926ef9: mov eax, dword ptr [eax + edi + 0x40] */
  eax = R32((uint32_t)(eax + edi + 0x40u));
/* 926efd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926eff: je 0x926f12 */
  if (zf) goto L_926f12;
L_926f01: /* 926f01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926f02: call 0x92a7f0 */
  esp -= 4; W32(esp, 0x926f07u); SPILL(); f_92a7f0(); if (g_unwind) return; RELOAD();
/* 926f07: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 926f0a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 926f0b: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 926f0e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926f10: jl 0x926ef6 */
  if ((sf != of)) goto L_926ef6;
L_926f12: /* 926f12: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 926f15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926f16: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x926f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 926f1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926f1d: call 0x92a770 */
  esp -= 4; W32(esp, 0x926f22u); SPILL(); f_92a770(); if (g_unwind) return; RELOAD();
/* 926f22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926f23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_926f24: /* 926f24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926f25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926f30(void) {
  LOAD_REGS();
L_926f30: /* 926f30: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 926f36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926f37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926f38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926f39: mov edi, dword ptr [esp + 0xa4] */
  edi = R32((uint32_t)(esp + 0xa4u));
/* 926f40: xor esi, esi */
  esi = 0;
/* 926f42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926f43: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 926f47: call 0x92acc0 */
  esp -= 4; W32(esp, 0x926f4cu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 926f4c: mov ecx, 0x7f7fffff */
  ecx = 0x7f7fffffu;
/* 926f51: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 926f54: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 926f57: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 926f5a: mov ecx, 0xff7fffff */
  ecx = 0xff7fffffu;
/* 926f5f: mov dword ptr [edi + 0x14], ecx */
  W32((uint32_t)(edi + 0x14u), ecx);
/* 926f62: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* 926f65: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 926f68: cmp dword ptr [eax + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926f6b: mov ebx, dword ptr [edi + 0x30] */
  ebx = R32((uint32_t)(edi + 0x30u));
/* 926f6e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 926f72: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 926f76: jle 0x92714a */
  if ((zf || sf != of)) goto L_92714a;
L_926f7c: /* 926f7c: xor edx, edx */
  edx = 0;
/* 926f7e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 926f7f: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_926f83: /* 926f83: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 926f86: mov esi, dword ptr [edx + ecx + 0x40] */
  esi = R32((uint32_t)(edx + ecx + 0x40u));
/* 926f8a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926f8c: je 0x927127 */
  if (zf) goto L_927127;
L_926f92: /* 926f92: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 926f95: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926f97: jne 0x926fa0 */
  if (!zf) goto L_926fa0;
L_926f99: /* 926f99: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 926f9d: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
L_926fa0: /* 926fa0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 926fa3: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 926fa6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 926fa8: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 926fab: lea ebp, [ecx + 0x20] */
  ebp = (uint32_t)(ecx + 0x20u);
/* 926fae: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 926fb1: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 926fb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_926fc0: /* 926fc0: mov eax, ebp */
  eax = ebp;
/* 926fc2: mov esi, 4 */
  esi = 0x4u;
L_926fc7: /* 926fc7: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 926fca: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 926fcd: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 926fd0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 926fd3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 926fd4: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 926fd7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 926fda: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 926fdc: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 926fdf: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 926fe2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 926fe4: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 926fe7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 926fe9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 926feb: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 926fee: jne 0x926fc7 */
  if (!zf) goto L_926fc7;
L_926ff0: /* 926ff0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 926ff4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 926ff7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 926ff8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 926ffc: jne 0x926fc0 */
  if (!zf) goto L_926fc0;
L_926ffe: /* 926ffe: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 927005: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 927007: je 0x92706e */
  if (zf) goto L_92706e;
L_927009: /* 927009: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92700d: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 927010: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 927014: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 927018: add eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92701c: lea ebp, [ecx + 0x20] */
  ebp = (uint32_t)(ecx + 0x20u);
/* 92701f: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 927023: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 927026: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 92702e: mov edi, edi */
  edi = edi;
L_927030: /* 927030: mov eax, ebp */
  eax = ebp;
/* 927032: mov esi, 4 */
  esi = 0x4u;
L_927037: /* 927037: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 92703a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92703d: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 927040: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 927043: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 927044: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 927047: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 92704a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92704c: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 92704f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 927052: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927054: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 927057: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927059: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92705b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 92705e: jne 0x927037 */
  if (!zf) goto L_927037;
L_927060: /* 927060: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 927064: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 927067: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 927068: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92706c: jne 0x927030 */
  if (!zf) goto L_927030;
L_92706e: /* 92706e: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 927075: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 927079: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92707a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92707b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92707c: call 0x92acd0 */
  esp -= 4; W32(esp, 0x927081u); SPILL(); f_92acd0(); if (g_unwind) return; RELOAD();
/* 927081: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 927084: fcomp dword ptr [ebx + 8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x8u)));
  FPOP();
/* 927087: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 927089: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92708c: jp 0x927093 */
  if (pf) goto L_927093;
L_92708e: /* 92708e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 927091: jmp 0x927096 */
  goto L_927096;
L_927093: /* 927093: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
L_927096: /* 927096: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 927099: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 92709c: fcomp dword ptr [ebx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0xcu)));
  FPOP();
/* 92709f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9270a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9270a4: jp 0x9270ab */
  if (pf) goto L_9270ab;
L_9270a6: /* 9270a6: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 9270a9: jmp 0x9270ae */
  goto L_9270ae;
L_9270ab: /* 9270ab: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
L_9270ae: /* 9270ae: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 9270b1: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 9270b4: fcomp dword ptr [ebx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x10u)));
  FPOP();
/* 9270b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9270b9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9270bc: jp 0x9270c3 */
  if (pf) goto L_9270c3;
L_9270be: /* 9270be: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 9270c1: jmp 0x9270c6 */
  goto L_9270c6;
L_9270c3: /* 9270c3: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
L_9270c6: /* 9270c6: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 9270c9: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 9270cc: fcomp dword ptr [ebx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x14u)));
  FPOP();
/* 9270cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9270d1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9270d4: jne 0x9270db */
  if (!zf) goto L_9270db;
L_9270d6: /* 9270d6: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 9270d9: jmp 0x9270de */
  goto L_9270de;
L_9270db: /* 9270db: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
L_9270de: /* 9270de: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 9270e1: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 9270e4: fcomp dword ptr [ebx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x18u)));
  FPOP();
/* 9270e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9270e9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9270ec: jne 0x9270f3 */
  if (!zf) goto L_9270f3;
L_9270ee: /* 9270ee: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 9270f1: jmp 0x9270f6 */
  goto L_9270f6;
L_9270f3: /* 9270f3: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
L_9270f6: /* 9270f6: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 9270f9: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 9270fc: fcomp dword ptr [ebx + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x1cu)));
  FPOP();
/* 9270ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 927101: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 927104: jne 0x92710b */
  if (!zf) goto L_92710b;
L_927106: /* 927106: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 927109: jmp 0x92710e */
  goto L_92710e;
L_92710b: /* 92710b: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
L_92710e: /* 92710e: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 927111: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 927114: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 927118: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92711a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92711e: jne 0x927127 */
  if (!zf) goto L_927127;
L_927120: /* 927120: mov dword ptr [ebx + 4], 0 */
  W32((uint32_t)(ebx + 0x4u), 0x0u);
L_927127: /* 927127: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92712b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 92712f: mov esi, dword ptr [eax + 0x18] */
  esi = R32((uint32_t)(eax + 0x18u));
/* 927132: mov ebx, dword ptr [ebx + 0x28] */
  ebx = R32((uint32_t)(ebx + 0x28u));
/* 927135: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 927136: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 927139: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92713b: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 92713f: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 927143: jl 0x926f83 */
  if ((sf != of)) goto L_926f83;
L_927149: /* 927149: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_92714a: /* 92714a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92714b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92714c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92714d: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 927153: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927160(void) {
  LOAD_REGS();
L_927160: /* 927160: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927170(void) {
  LOAD_REGS();
L_927170: /* 927170: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927180(void) {
  LOAD_REGS();
L_927180: /* 927180: sub esp, 0x124 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x124u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 927186: mov eax, dword ptr [esp + 0x134] */
  eax = R32((uint32_t)(esp + 0x134u));
/* 92718d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92718e: xor ebx, ebx */
  ebx = 0;
/* 927190: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 927192: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 927193: mov ebp, dword ptr [esp + 0x130] */
  ebp = R32((uint32_t)(esp + 0x130u));
/* 92719a: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 92719f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9271a0: mov esi, dword ptr [esp + 0x138] */
  esi = R32((uint32_t)(esp + 0x138u));
/* 9271a7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9271a9: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 9271ac: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 9271af: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 9271b2: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 9271b5: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 9271b8: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 9271bb: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 9271be: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 9271c1: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 9271c4: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 9271c7: mov dword ptr [esi + 0x2c], ebx */
  W32((uint32_t)(esi + 0x2cu), ebx);
/* 9271ca: mov dword ptr [esi + 0x30], ebx */
  W32((uint32_t)(esi + 0x30u), ebx);
/* 9271cd: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 9271d0: mov dword ptr [esi + 0x38], ebx */
  W32((uint32_t)(esi + 0x38u), ebx);
/* 9271d3: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 9271d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9271d7: mov edi, dword ptr [esp + 0x140] */
  edi = R32((uint32_t)(esp + 0x140u));
/* 9271de: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 9271e1: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 9271e4: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 9271e7: mov dword ptr [edi + 0x14], ebx */
  W32((uint32_t)(edi + 0x14u), ebx);
/* 9271ea: mov dword ptr [edi + 0x18], ebx */
  W32((uint32_t)(edi + 0x18u), ebx);
/* 9271ed: mov dword ptr [edi + 0x1c], ebx */
  W32((uint32_t)(edi + 0x1cu), ebx);
/* 9271f0: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 9271f2: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 9271f5: mov dword ptr [edi + 0x20], ebx */
  W32((uint32_t)(edi + 0x20u), ebx);
/* 9271f8: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9271fb: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 927203: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 927207: jle 0x927260 */
  if ((zf || sf != of)) goto L_927260;
L_927209: /* 927209: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 92720d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_927210: /* 927210: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 927214: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 927215: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 927218: lea edx, [esp + 0xd4] */
  edx = (uint32_t)(esp + 0xd4u);
/* 92721f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 927220: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 927224: lea eax, [esp + 0xfc] */
  eax = (uint32_t)(esp + 0xfcu);
/* 92722b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92722c: mov eax, dword ptr [edx + ecx + 0x40] */
  eax = R32((uint32_t)(edx + ecx + 0x40u));
/* 927230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 927231: call 0x92a920 */
  esp -= 4; W32(esp, 0x927236u); SPILL(); f_92a920(); if (g_unwind) return; RELOAD();
/* 927236: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92723a: mov eax, dword ptr [esp + 0x144] */
  eax = R32((uint32_t)(esp + 0x144u));
/* 927241: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 927243: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 927247: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92724a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92724e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 927250: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 927254: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 927257: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 927258: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92725a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92725e: jl 0x927210 */
  if ((sf != of)) goto L_927210;
L_927260: /* 927260: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 927266: mov ecx, dword ptr [esp + 0x144] */
  ecx = R32((uint32_t)(esp + 0x144u));
/* 92726d: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
/* 92726f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 927272: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 927274: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 92727c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 927280: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 927284: jle 0x9274d9 */
  if ((zf || sf != of)) goto L_9274d9;
L_92728a: /* 92728a: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 92728e: jmp 0x927294 */
  goto L_927294;
L_927290: /* 927290: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_927294: /* 927294: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 927297: mov eax, dword ptr [ebx + edx + 0x40] */
  eax = R32((uint32_t)(ebx + edx + 0x40u));
/* 92729b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 92729f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9272a0: lea edx, [esp + 0xd4] */
  edx = (uint32_t)(esp + 0xd4u);
/* 9272a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9272a8: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 9272ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9272ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9272ae: mov dword ptr [esp + 0x3c], 0x3f800000 */
  W32((uint32_t)(esp + 0x3cu), 0x3f800000u);
/* 9272b6: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 9272be: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 9272c6: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 9272ce: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 9272d6: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 9272de: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 9272e6: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 9272ee: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 9272f6: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 9272fe: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* 927306: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 92730e: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 927316: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 92731e: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 927326: mov dword ptr [esp + 0x78], 0x3f800000 */
  W32((uint32_t)(esp + 0x78u), 0x3f800000u);
/* 92732e: call 0x92a920 */
  esp -= 4; W32(esp, 0x927333u); SPILL(); f_92a920(); if (g_unwind) return; RELOAD();
/* 927333: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 927336: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 927338: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92733b: lea edx, [esp + 0xf4] */
  edx = (uint32_t)(esp + 0xf4u);
/* 927342: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 927346: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 92734a: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
L_927352: /* 927352: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 927356: mov ebx, 4 */
  ebx = 0x4u;
/* 92735b: nop  */
/* 92735c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_927360: /* 927360: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 927363: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 927366: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 927369: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92736c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 92736d: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 927370: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 927373: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927375: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 927378: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92737b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92737d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92737f: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 927382: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927384: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 927387: jne 0x927360 */
  if (!zf) goto L_927360;
L_927389: /* 927389: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92738d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 927390: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 927391: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 927395: jne 0x927352 */
  if (!zf) goto L_927352;
L_927397: /* 927397: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92739b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 92739f: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9273a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9273a4: lea eax, [esp + 0x70] */
  eax = (uint32_t)(esp + 0x70u);
/* 9273a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9273a9: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 9273b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9273b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9273b2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9273b6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9273b9: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 9273c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9273c1: lea eax, [esp + 0x108] */
  eax = (uint32_t)(esp + 0x108u);
/* 9273c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9273c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9273ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9273cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9273cc: call 0x927500 */
  esp -= 4; W32(esp, 0x9273d1u); SPILL(); f_927500(); if (g_unwind) return; RELOAD();
/* 9273d1: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 9273d8: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 9273df: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 9273e6: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 9273e8: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 9273ef: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9273f2: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 9273f9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 9273fc: mov edx, dword ptr [esp + 0xa8] */
  edx = R32((uint32_t)(esp + 0xa8u));
/* 927403: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 927406: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 92740d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 927410: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 927417: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 92741a: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 927421: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 927424: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 92742b: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 92742e: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 927435: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 927438: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* 92743f: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 927442: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 927449: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 92744c: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* 927453: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 927456: mov edx, dword ptr [esp + 0xcc] */
  edx = R32((uint32_t)(esp + 0xccu));
/* 92745d: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 927460: mov ecx, dword ptr [esp + 0xc8] */
  ecx = R32((uint32_t)(esp + 0xc8u));
/* 927467: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 92746a: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 92746e: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 927471: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 927475: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 927478: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 92747c: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 92747e: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 927482: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 927485: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 92748c: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 92748f: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 927493: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 927496: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 92749d: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 9274a0: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 9274a7: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 9274aa: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 9274b1: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 9274b4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9274b8: mov dword ptr [edi + 0x20], edx */
  W32((uint32_t)(edi + 0x20u), edx);
/* 9274bb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9274bf: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 9274c2: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9274c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9274c6: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9274c9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9274cb: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9274cf: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9274d3: jl 0x927290 */
  if ((sf != of)) goto L_927290;
L_9274d9: /* 9274d9: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9274dc: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 9274df: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 9274e2: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 9274e5: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 9274e8: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
/* 9274eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9274ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9274ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9274ee: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 9274f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9274f2: add esp, 0x124 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x124u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9274f8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_927500(void) {
  LOAD_REGS();
L_927500: /* 927500: sub esp, 0x168 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x168u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 927506: mov eax, dword ptr [esp + 0x184] */
  eax = R32((uint32_t)(esp + 0x184u));
/* 92750d: fld dword ptr [esp + 0x174] */
  { double v = F32((uint32_t)(esp + 0x174u)); FPUSH(v); }
/* 927514: fadd dword ptr [esp + 0x180] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x180u)));
/* 92751b: xor ecx, ecx */
  ecx = 0;
/* 92751d: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 927520: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 927523: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 927525: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 927528: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92752b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92752e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 927531: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 927534: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 927537: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 92753a: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 92753d: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 927540: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 927543: mov ecx, dword ptr [esp + 0x18c] */
  ecx = R32((uint32_t)(esp + 0x18cu));
/* 92754a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92754b: mov ebx, dword ptr [esp + 0x170] */
  ebx = R32((uint32_t)(esp + 0x170u));
/* 927552: lea edx, [eax + 0x30] */
  edx = (uint32_t)(eax + 0x30u);
/* 927555: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 927556: mov ebp, dword ptr [esp + 0x180] */
  ebp = R32((uint32_t)(esp + 0x180u));
/* 92755d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92755e: mov esi, 0x3f800000 */
  esi = 0x3f800000u;
/* 927563: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 927565: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 927568: mov dword ptr [eax + 0x28], esi */
  W32((uint32_t)(eax + 0x28u), esi);
/* 92756b: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* 92756e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 927570: fld dword ptr [esp + 0x18c] */
  { double v = F32((uint32_t)(esp + 0x18cu)); FPUSH(v); }
/* 927577: lea esi, [ebp + 0x30] */
  esi = (uint32_t)(ebp + 0x30u);
/* 92757a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92757c: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 927580: fld dword ptr [esp + 0x180] */
  { double v = F32((uint32_t)(esp + 0x180u)); FPUSH(v); }
/* 927587: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 927588: fmul dword ptr [ebx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x30u)));
/* 92758b: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 92758f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927591: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 927593: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 927595: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 927597: fld dword ptr [esp + 0x184] */
  { double v = F32((uint32_t)(esp + 0x184u)); FPUSH(v); }
/* 92759e: fmul dword ptr [ebx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x34u)));
/* 9275a1: fld dword ptr [esp + 0x190] */
  { double v = F32((uint32_t)(esp + 0x190u)); FPUSH(v); }
/* 9275a8: fmul dword ptr [ebp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x34u)));
/* 9275ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9275ad: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
/* 9275af: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 9275b2: fld dword ptr [esp + 0x184] */
  { double v = F32((uint32_t)(esp + 0x184u)); FPUSH(v); }
/* 9275b9: fmul dword ptr [ebx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x38u)));
/* 9275bc: fld dword ptr [esp + 0x190] */
  { double v = F32((uint32_t)(esp + 0x190u)); FPUSH(v); }
/* 9275c3: fmul dword ptr [ebp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x38u)));
/* 9275c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9275c8: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
/* 9275ca: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 9275cd: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 9275d0: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9275d2: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 9275d6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9275d9: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 9275dc: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9275e0: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 9275e3: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 9275e7: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 9275ea: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 9275ee: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 9275f1: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 9275f5: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 9275f8: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 9275fc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 927600: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 927604: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 927607: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 92760b: mov ecx, 9 */
  ecx = 0x9u;
/* 927610: lea esi, [esp + 0x40] */
  esi = (uint32_t)(esp + 0x40u);
/* 927614: lea edi, [esp + 0x88] */
  edi = (uint32_t)(esp + 0x88u);
/* 92761b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 92761d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 927621: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 927628: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 92762f: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 927636: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 92763a: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 927641: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 927645: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 92764c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 927650: lea ecx, [esp + 0x130] */
  ecx = (uint32_t)(esp + 0x130u);
/* 927657: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 92765b: mov edx, dword ptr [esp + 0x180] */
  edx = R32((uint32_t)(esp + 0x180u));
/* 927662: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 927663: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 927667: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 927668: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 92766c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92766d: call 0x927bf0 */
  esp -= 4; W32(esp, 0x927672u); SPILL(); f_927bf0(); if (g_unwind) return; RELOAD();
/* 927672: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 927675: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 927678: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 92767b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 92767e: fst dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0);
/* 927682: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 927686: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 927689: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 92768d: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 927690: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 927694: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 927697: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 92769b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 92769e: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 9276a2: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 9276a5: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 9276ac: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 9276b0: mov dword ptr [esp + 0x84], edx */
  W32((uint32_t)(esp + 0x84u), edx);
/* 9276b7: mov ecx, 9 */
  ecx = 0x9u;
/* 9276bc: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* 9276c0: lea edi, [esp + 0xb8] */
  edi = (uint32_t)(esp + 0xb8u);
/* 9276c7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9276c9: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 9276cd: mov eax, dword ptr [esp + 0xd0] */
  eax = R32((uint32_t)(esp + 0xd0u));
/* 9276d4: mov edx, dword ptr [esp + 0xd4] */
  edx = R32((uint32_t)(esp + 0xd4u));
/* 9276db: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 9276e2: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 9276e6: mov eax, dword ptr [esp + 0xc0] */
  eax = R32((uint32_t)(esp + 0xc0u));
/* 9276ed: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 9276f1: mov ecx, dword ptr [esp + 0xcc] */
  ecx = R32((uint32_t)(esp + 0xccu));
/* 9276f8: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 9276fc: lea edx, [esp + 0x154] */
  edx = (uint32_t)(esp + 0x154u);
/* 927703: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 927707: mov eax, dword ptr [esp + 0x18c] */
  eax = R32((uint32_t)(esp + 0x18cu));
/* 92770e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92770f: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 927716: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 927717: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 92771b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92771c: call 0x927bf0 */
  esp -= 4; W32(esp, 0x927721u); SPILL(); f_927bf0(); if (g_unwind) return; RELOAD();
/* 927721: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 927725: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 927729: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 92772b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92772c: fsub dword ptr [ebx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x30u)));
/* 92772f: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 927736: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 927737: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 92773e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 927741: fsub dword ptr [ebx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x34u)));
/* 927744: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 92774b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92774e: fsub dword ptr [ebx + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x38u)));
/* 927751: fstp dword ptr [esp + 0xbc] */
  WF32((uint32_t)(esp + 0xbcu), ST0); FPOP();
/* 927758: call 0x927bb0 */
  esp -= 4; W32(esp, 0x92775du); SPILL(); f_927bb0(); if (g_unwind) return; RELOAD();
/* 92775d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 927761: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 927765: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 927769: mov ecx, dword ptr [esp + 0x184] */
  ecx = R32((uint32_t)(esp + 0x184u));
/* 927770: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 927774: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 927775: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 927779: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 927780: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 927784: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 927785: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 927787: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 927789: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 927790: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 927794: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 927798: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 92779c: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9277a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9277a2: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9277a6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9277a8: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 9277af: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9277b3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 9277b7: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9277bb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9277bf: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9277c3: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9277c7: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9277cb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9277cd: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 9277d4: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9277d8: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 9277dc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9277de: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 9277e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9277e4: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 9277eb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9277ef: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9277f3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9277f7: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9277fb: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9277ff: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 927803: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 927805: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 92780c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92780e: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 927812: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 927816: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92781a: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 92781e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 927820: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 927824: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927826: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 92782d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 927831: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 927835: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 927839: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 92783d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92783f: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 927846: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 92784a: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 92784e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 927850: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 927854: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927856: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 92785d: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 927861: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 927865: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 927869: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 92786b: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 927872: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 927874: call 0x927b50 */
  esp -= 4; W32(esp, 0x927879u); SPILL(); f_927b50(); if (g_unwind) return; RELOAD();
/* 927879: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 92787d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92787e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92787f: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 927886: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 927887: call 0x927930 */
  esp -= 4; W32(esp, 0x92788cu); SPILL(); f_927930(); if (g_unwind) return; RELOAD();
/* 92788c: lea edx, [esp + 0x10c] */
  edx = (uint32_t)(esp + 0x10cu);
/* 927893: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 927894: lea eax, [esp + 0xe0] */
  eax = (uint32_t)(esp + 0xe0u);
/* 92789b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92789c: call 0x927bb0 */
  esp -= 4; W32(esp, 0x9278a1u); SPILL(); f_927bb0(); if (g_unwind) return; RELOAD();
/* 9278a1: lea ecx, [esp + 0x10c] */
  ecx = (uint32_t)(esp + 0x10cu);
/* 9278a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9278a9: lea edx, [esp + 0x110] */
  edx = (uint32_t)(esp + 0x110u);
/* 9278b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9278b1: lea eax, [esp + 0xf0] */
  eax = (uint32_t)(esp + 0xf0u);
/* 9278b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9278b9: call 0x927a60 */
  esp -= 4; W32(esp, 0x9278beu); SPILL(); f_927a60(); if (g_unwind) return; RELOAD();
/* 9278be: mov ecx, dword ptr [esp + 0x190] */
  ecx = R32((uint32_t)(esp + 0x190u));
/* 9278c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9278c6: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 9278cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9278ce: call 0x927b50 */
  esp -= 4; W32(esp, 0x9278d3u); SPILL(); f_927b50(); if (g_unwind) return; RELOAD();
/* 9278d3: mov esi, dword ptr [esp + 0x198] */
  esi = R32((uint32_t)(esp + 0x198u));
/* 9278da: lea eax, [esp + 0x130] */
  eax = (uint32_t)(esp + 0x130u);
/* 9278e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9278e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9278e3: call 0x927960 */
  esp -= 4; W32(esp, 0x9278e8u); SPILL(); f_927960(); if (g_unwind) return; RELOAD();
/* 9278e8: lea ecx, [esp + 0x154] */
  ecx = (uint32_t)(esp + 0x154u);
/* 9278ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9278f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9278f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9278f2: call 0x927a00 */
  esp -= 4; W32(esp, 0x9278f7u); SPILL(); f_927a00(); if (g_unwind) return; RELOAD();
/* 9278f7: lea edx, [esp + 0x88] */
  edx = (uint32_t)(esp + 0x88u);
/* 9278fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9278ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 927900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 927901: call 0x9279a0 */
  esp -= 4; W32(esp, 0x927906u); SPILL(); f_9279a0(); if (g_unwind) return; RELOAD();
/* 927906: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 92790d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92790e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92790f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 927910: call 0x9279a0 */
  esp -= 4; W32(esp, 0x927915u); SPILL(); f_9279a0(); if (g_unwind) return; RELOAD();
/* 927915: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 927916: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 927917: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 927918: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 927919: add esp, 0x168 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x168u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92791f: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_927930(void) {
  LOAD_REGS();
L_927930: /* 927930: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 927934: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 927936: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92793a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 92793c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 927940: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 927942: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 927945: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 927948: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 92794b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92794e: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 927951: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 927954: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927960(void) {
  LOAD_REGS();
L_927960: /* 927960: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 927964: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 927966: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92796a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92796c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 92796f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 927972: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 927975: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 927978: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92797b: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 92797e: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 927981: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 927984: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 927987: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 92798a: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 92798d: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 927990: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 927993: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 927996: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 927999: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 92799c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9279a0(void) {
  LOAD_REGS();
L_9279a0: /* 9279a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9279a4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9279a6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9279aa: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 9279ac: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9279b0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9279b2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9279b5: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 9279b8: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 9279bb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9279be: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 9279c1: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9279c4: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 9279c7: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 9279ca: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 9279cd: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 9279d0: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 9279d3: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 9279d6: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 9279d9: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 9279dc: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* 9279df: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 9279e2: fsub dword ptr [ecx + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x18u)));
/* 9279e5: fstp dword ptr [edx + 0x18] */
  WF32((uint32_t)(edx + 0x18u), ST0); FPOP();
/* 9279e8: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 9279eb: fsub dword ptr [ecx + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x1cu)));
/* 9279ee: fstp dword ptr [edx + 0x1c] */
  WF32((uint32_t)(edx + 0x1cu), ST0); FPOP();
/* 9279f1: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 9279f4: fsub dword ptr [ecx + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x20u)));
/* 9279f7: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 9279fa: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927a00(void) {
  LOAD_REGS();
L_927a00: /* 927a00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 927a04: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 927a06: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 927a0a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 927a0c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 927a10: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 927a12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 927a15: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 927a18: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 927a1b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 927a1e: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 927a21: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 927a24: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 927a27: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 927a2a: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 927a2d: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 927a30: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 927a33: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 927a36: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 927a39: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 927a3c: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* 927a3f: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 927a42: fadd dword ptr [ecx + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x18u)));
/* 927a45: fstp dword ptr [edx + 0x18] */
  WF32((uint32_t)(edx + 0x18u), ST0); FPOP();
/* 927a48: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 927a4b: fadd dword ptr [ecx + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1cu)));
/* 927a4e: fstp dword ptr [edx + 0x1c] */
  WF32((uint32_t)(edx + 0x1cu), ST0); FPOP();
/* 927a51: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 927a54: fadd dword ptr [ecx + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x20u)));
/* 927a57: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 927a5a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927a60(void) {
  LOAD_REGS();
L_927a60: /* 927a60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 927a64: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 927a68: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 927a6b: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 927a6e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 927a72: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 927a74: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927a76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927a78: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 927a7b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 927a7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927a80: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 927a82: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 927a85: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 927a88: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 927a8b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 927a8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927a90: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 927a93: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 927a95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927a97: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 927a9a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 927a9d: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 927aa0: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 927aa3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 927aa6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927aa8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 927aab: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 927aad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927aaf: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 927ab2: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 927ab5: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 927ab8: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 927abb: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 927abe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927ac0: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 927ac3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927ac5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927ac7: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 927aca: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 927acd: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 927ad0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 927ad3: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 927ad6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927ad8: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 927adb: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 927ade: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927ae0: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 927ae3: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 927ae6: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 927ae9: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 927aec: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 927aef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927af1: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 927af4: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 927af7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927af9: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* 927afc: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 927aff: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927b01: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 927b04: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 927b07: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927b09: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 927b0c: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 927b0f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927b11: fstp dword ptr [edx + 0x18] */
  WF32((uint32_t)(edx + 0x18u), ST0); FPOP();
/* 927b14: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 927b17: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 927b1a: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 927b1d: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 927b20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927b22: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 927b25: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 927b28: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927b2a: fstp dword ptr [edx + 0x1c] */
  WF32((uint32_t)(edx + 0x1cu), ST0); FPOP();
/* 927b2d: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 927b30: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 927b33: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 927b36: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 927b39: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927b3b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 927b3e: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 927b41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927b43: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 927b46: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927b50(void) {
  LOAD_REGS();
L_927b50: /* 927b50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 927b54: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b58: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 927b5a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 927b5c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b60: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 927b63: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 927b66: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b6a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 927b6d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 927b70: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b74: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 927b77: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 927b7a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b7e: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 927b81: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 927b84: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b88: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 927b8b: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 927b8e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b92: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 927b95: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 927b98: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927b9c: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 927b9f: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 927ba2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927ba6: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 927ba9: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 927bac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_927bb0(void) {
  LOAD_REGS();
L_927bb0: /* 927bb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 927bb4: xor ecx, ecx */
  ecx = 0;
/* 927bb6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 927bb8: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 927bbb: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 927bbe: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 927bc2: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 927bc5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 927bc8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 927bcb: fchs  */
  ST0 = -ST0;
/* 927bcd: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 927bd0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 927bd3: fchs  */
  ST0 = -ST0;
/* 927bd5: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 927bd8: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 927bdb: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 927bde: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 927be0: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 927be3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 927be5: fchs  */
  ST0 = -ST0;
/* 927be7: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 927bea: ret 8 */
  esp += 12; SPILL(); return;
}

void f_927bf0(void) {
  LOAD_REGS();
L_927bf0: /* 927bf0: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 927bf3: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 927bf7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 927bf9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 927bfc: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 927c00: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 927c03: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 927c07: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 927c0a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 927c0e: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 927c11: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 927c15: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 927c18: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 927c1c: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 927c1f: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 927c23: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 927c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 927c27: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 927c2b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 927c2f: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 927c32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 927c33: mov ecx, 9 */
  ecx = 0x9u;
/* 927c38: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 927c3c: lea edi, [esp + 0x50] */
  edi = (uint32_t)(esp + 0x50u);
/* 927c40: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 927c44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 927c46: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 927c4a: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 927c4e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 927c51: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 927c55: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 927c58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927c5a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927c5e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927c60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927c62: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 927c66: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 927c69: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 927c6d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 927c70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927c72: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 927c76: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927c78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927c7a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 927c7e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 927c81: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 927c85: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 927c88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927c8a: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 927c8e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927c90: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927c92: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 927c96: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927c9a: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 927c9d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 927ca1: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 927ca4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927ca6: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 927caa: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 927cad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927caf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 927cb3: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 927cb6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 927cba: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 927cbd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927cbf: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 927cc3: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 927cc6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927cc8: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 927ccc: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 927cd0: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 927cd3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 927cd7: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 927cda: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927cdc: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 927ce0: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 927ce3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927ce5: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 927ce9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 927ced: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 927cf0: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 927cf4: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 927cf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927cf9: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 927cfd: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 927d00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d02: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 927d06: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 927d09: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 927d0d: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 927d10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d12: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 927d16: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 927d19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d1b: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 927d1f: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 927d23: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 927d26: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 927d2a: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 927d2d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d2f: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 927d33: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 927d36: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 927d3d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d3f: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 927d43: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 927d45: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 927d48: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 927d4a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 927d4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d4f: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 927d51: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 927d53: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d55: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 927d57: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 927d5b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 927d5e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 927d60: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 927d62: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d64: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 927d68: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 927d6b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d6d: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 927d70: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 927d74: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 927d77: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 927d7b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 927d7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d7f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 927d83: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 927d86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d88: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 927d8b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 927d8d: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 927d90: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 927d92: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 927d95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d97: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 927d99: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 927d9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927d9e: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 927da1: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 927da5: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 927da8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 927daa: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 927dad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927daf: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 927db3: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 927db6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927db8: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 927dbb: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 927dbf: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 927dc2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 927dc6: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 927dc9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927dcb: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 927dcf: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 927dd2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927dd4: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 927dd7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 927dd9: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 927ddc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 927dde: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 927de1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927de3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 927de4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 927de6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 927de7: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 927dea: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 927dec: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 927dee: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 927df1: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 927df4: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 927df8: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 927dfb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927dfd: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 927e01: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 927e04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927e06: fstp dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0); FPOP();
/* 927e09: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 927e0d: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 927e10: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 927e14: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 927e17: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927e19: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 927e1d: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 927e20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927e22: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 927e25: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 927e28: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_927e30(void) {
  LOAD_REGS();
L_927e30: /* 927e30: mov eax, 0x3f9c */
  eax = 0x3f9cu;
/* 927e35: call 0x99cc00 */
  esp -= 4; W32(esp, 0x927e3au); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 927e3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 927e3b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 927e3c: mov ebp, dword ptr [esp + 0x3fa8] */
  ebp = R32((uint32_t)(esp + 0x3fa8u));
/* 927e43: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 927e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 927e47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 927e48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 927e49: call 0x928720 */
  esp -= 4; W32(esp, 0x927e4eu); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 927e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 927e4f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 927e53: call 0x92acc0 */
  esp -= 4; W32(esp, 0x927e58u); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 927e58: xor ecx, ecx */
  ecx = 0;
/* 927e5a: mov ebx, eax */
  ebx = eax;
/* 927e5c: mov eax, dword ptr [esp + 0x3fb4] */
  eax = R32((uint32_t)(esp + 0x3fb4u));
/* 927e63: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 927e66: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 927e69: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 927e6c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 927e6f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 927e72: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 927e76: mov ecx, 0x1e */
  ecx = 0x1eu;
/* 927e7b: lea edi, [esp + 0x74] */
  edi = (uint32_t)(esp + 0x74u);
/* 927e7f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 927e81: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 927e85: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 927e89: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 927e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 927e8e: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 927e92: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 927e96: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 927e9a: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 927e9e: call 0x928720 */
  esp -= 4; W32(esp, 0x927ea3u); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 927ea3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 927ea7: mov ebp, dword ptr [edx + 0x30] */
  ebp = R32((uint32_t)(edx + 0x30u));
/* 927eaa: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 927eae: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 927eb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 927eb3: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 927ebb: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 927ec3: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 927ecb: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 927ed3: jle 0x92814c */
  if ((zf || sf != of)) goto L_92814c;
L_927ed9: /* 927ed9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_927ee1: /* 927ee1: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 927ee4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 927ee8: mov edx, dword ptr [ecx + eax + 0x40] */
  edx = R32((uint32_t)(ecx + eax + 0x40u));
/* 927eec: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 927eee: je 0x928113 */
  if (zf) goto L_928113;
L_927ef4: /* 927ef4: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 927ef8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 927ef9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 927efa: call 0x92ade0 */
  esp -= 4; W32(esp, 0x927effu); SPILL(); f_92ade0(); if (g_unwind) return; RELOAD();
/* 927eff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 927f01: je 0x928113 */
  if (zf) goto L_928113;
L_927f07: /* 927f07: mov ecx, 0xd */
  ecx = 0xdu;
/* 927f0c: mov esi, ebp */
  esi = ebp;
/* 927f0e: lea edi, [esp + 0xb4] */
  edi = (uint32_t)(esp + 0xb4u);
/* 927f15: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 927f17: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 927f1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 927f20: jne 0x927f93 */
  if (!zf) goto L_927f93;
L_927f22: /* 927f22: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 927f26: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 927f2a: lea eax, [esp + 0xec] */
  eax = (uint32_t)(esp + 0xecu);
/* 927f31: mov dword ptr [esp + 0xb8], eax */
  W32((uint32_t)(esp + 0xb8u), eax);
/* 927f38: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 927f3b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 927f3e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 927f40: lea edi, [ecx + 0x20] */
  edi = (uint32_t)(ecx + 0x20u);
/* 927f43: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 927f4a: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 927f4d: mov ebx, 4 */
  ebx = 0x4u;
L_927f52: /* 927f52: mov eax, edi */
  eax = edi;
/* 927f54: mov esi, 4 */
  esi = 0x4u;
/* 927f59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_927f60: /* 927f60: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 927f63: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 927f66: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 927f69: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 927f6c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 927f6d: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 927f70: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 927f73: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927f75: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 927f78: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 927f7b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927f7d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 927f80: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 927f82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 927f84: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 927f87: jne 0x927f60 */
  if (!zf) goto L_927f60;
L_927f89: /* 927f89: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 927f8c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 927f8d: jne 0x927f52 */
  if (!zf) goto L_927f52;
L_927f8f: /* 927f8f: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
L_927f93: /* 927f93: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 927f97: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 927f9a: lea eax, [esp + edx*8 + 0x12c] */
  eax = (uint32_t)(esp + edx*8 + 0x12cu);
/* 927fa1: mov ecx, 0x190 */
  ecx = 0x190u;
/* 927fa6: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 927faa: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 927fac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 927fad: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 927fb5: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 927fb9: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 927fbd: call 0x929f70 */
  esp -= 4; W32(esp, 0x927fc2u); SPILL(); f_929f70(); if (g_unwind) return; RELOAD();
/* 927fc2: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 927fc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 927fc7: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 927fcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 927fcc: call 0x92a010 */
  esp -= 4; W32(esp, 0x927fd1u); SPILL(); f_92a010(); if (g_unwind) return; RELOAD();
/* 927fd1: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 927fd5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 927fd6: call 0x929fd0 */
  esp -= 4; W32(esp, 0x927fdbu); SPILL(); f_929fd0(); if (g_unwind) return; RELOAD();
/* 927fdb: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 927fdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 927fe1: je 0x928113 */
  if (zf) goto L_928113;
L_927fe7: /* 927fe7: mov eax, dword ptr [esp + 0x3fb4] */
  eax = R32((uint32_t)(esp + 0x3fb4u));
/* 927fee: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 927ff2: mov esi, 1 */
  esi = 0x1u;
/* 927ff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 927ff8: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 927ffb: call 0x9285d0 */
  esp -= 4; W32(esp, 0x928000u); SPILL(); f_9285d0(); if (g_unwind) return; RELOAD();
/* 928000: cmp ax, 6 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x6u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 928004: je 0x92800c */
  if (zf) goto L_92800c;
L_928006: /* 928006: cmp ax, 8 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x8u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 92800a: jne 0x92800e */
  if (!zf) goto L_92800e;
L_92800c: /* 92800c: xor esi, esi */
  esi = 0;
L_92800e: /* 92800e: mov eax, dword ptr [esp + 0x3fb0] */
  eax = R32((uint32_t)(esp + 0x3fb0u));
/* 928015: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 928019: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92801c: jne 0x92804f */
  if (!zf) goto L_92804f;
L_92801e: /* 92801e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928020: je 0x9280d9 */
  if (zf) goto L_9280d9;
L_928026: /* 928026: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 92802a: xor eax, eax */
  eax = 0;
/* 92802c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92802e: jle 0x9280d9 */
  if ((zf || sf != of)) goto L_9280d9;
L_928034: /* 928034: xor ecx, ecx */
  ecx = 0;
L_928036: /* 928036: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 92803a: mov dword ptr [ecx + edx + 0x20], ebp */
  W32((uint32_t)(ecx + edx + 0x20u), ebp);
/* 92803e: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 928042: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 928043: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 928046: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928048: jl 0x928036 */
  if ((sf != of)) goto L_928036;
L_92804a: /* 92804a: jmp 0x9280d9 */
  goto L_9280d9;
L_92804f: /* 92804f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 928053: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 928057: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 92805d: xor edx, edx */
  edx = 0;
/* 92805f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 928061: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 928065: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 928069: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 92806f: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 928073: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 928077: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 92807d: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 928081: jle 0x9280d9 */
  if ((zf || sf != of)) goto L_9280d9;
L_928083: /* 928083: xor ecx, ecx */
  ecx = 0;
L_928085: /* 928085: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928087: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 92808b: fld dword ptr [ecx + eax + 0xc] */
  { double v = F32((uint32_t)(ecx + eax + 0xcu)); FPUSH(v); }
/* 92808f: lea eax, [ecx + eax + 0xc] */
  eax = (uint32_t)(ecx + eax + 0xcu);
/* 928093: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 928099: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92809b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92809e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9280a4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9280a7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9280aa: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9280b0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9280b3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9280b7: mov edi, dword ptr [ecx + eax + 0x20] */
  edi = R32((uint32_t)(ecx + eax + 0x20u));
/* 9280bb: mov dword ptr [ecx + eax + 0x24], edi */
  W32((uint32_t)(ecx + eax + 0x24u), edi);
/* 9280bf: je 0x9280c9 */
  if (zf) goto L_9280c9;
L_9280c1: /* 9280c1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9280c5: mov dword ptr [ecx + eax + 0x20], ebp */
  W32((uint32_t)(ecx + eax + 0x20u), ebp);
L_9280c9: /* 9280c9: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9280cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9280ce: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9280d1: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9280d3: jl 0x928085 */
  if ((sf != of)) goto L_928085;
L_9280d5: /* 9280d5: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_9280d9: /* 9280d9: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9280dd: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9280e1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9280e5: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9280e7: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 9280eb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9280ed: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 9280f1: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9280f5: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9280f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9280fb: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 9280ff: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 928103: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 928107: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 928109: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 92810d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 928111: fstp st(0) */
  STI(0) = ST0; FPOP();
L_928113: /* 928113: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 928117: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92811b: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 92811e: mov ebp, dword ptr [ebp + 0x28] */
  ebp = R32((uint32_t)(ebp + 0x28u));
/* 928121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 928122: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 928125: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928127: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 92812b: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92812f: jl 0x927ee1 */
  if ((sf != of)) goto L_927ee1;
L_928135: /* 928135: mov ecx, dword ptr [esp + 0x3fb4] */
  ecx = R32((uint32_t)(esp + 0x3fb4u));
/* 92813c: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 92813f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928141: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 928142: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 928143: add esp, 0x3f9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3f9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928149: ret 8 */
  esp += 12; SPILL(); return;
L_92814c: /* 92814c: mov edx, dword ptr [esp + 0x3fb4] */
  edx = R32((uint32_t)(esp + 0x3fb4u));
/* 928153: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 928156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928157: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928158: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 928159: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92815a: add esp, 0x3f9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3f9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928160: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928170(void) {
  LOAD_REGS();
L_928170: /* 928170: sub esp, 0xe8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 928176: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928177: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 928178: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928179: mov esi, dword ptr [esp + 0xf8] */
  esi = R32((uint32_t)(esp + 0xf8u));
/* 928180: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928182: call 0x9287f0 */
  esp -= 4; W32(esp, 0x928187u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 928187: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928188: mov ebx, eax */
  ebx = eax;
/* 92818a: call 0x928720 */
  esp -= 4; W32(esp, 0x92818fu); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 92818f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928190: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 928194: call 0x928730 */
  esp -= 4; W32(esp, 0x928199u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 928199: mov ebp, dword ptr [esp + 0x108] */
  ebp = R32((uint32_t)(esp + 0x108u));
/* 9281a0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9281a4: mov dword ptr [ebp + 0x1c], 0x7f7fffff */
  W32((uint32_t)(ebp + 0x1cu), 0x7f7fffffu);
/* 9281ab: mov ecx, 0x1e */
  ecx = 0x1eu;
/* 9281b0: lea edi, [esp + 0x40] */
  edi = (uint32_t)(esp + 0x40u);
/* 9281b4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9281b6: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 9281b9: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 9281bc: xor edx, edx */
  edx = 0;
/* 9281be: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9281c0: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9281c4: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9281c8: jle 0x928303 */
  if ((zf || sf != of)) goto L_928303;
L_9281ce: /* 9281ce: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_9281d2: /* 9281d2: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 9281d5: mov ecx, dword ptr [edx + eax + 0x40] */
  ecx = R32((uint32_t)(edx + eax + 0x40u));
/* 9281d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9281db: je 0x9282d9 */
  if (zf) goto L_9282d9;
L_9281e1: /* 9281e1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9281e5: mov ecx, 0xd */
  ecx = 0xdu;
/* 9281ea: lea edi, [esp + 0x80] */
  edi = (uint32_t)(esp + 0x80u);
/* 9281f1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9281f3: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 9281fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9281fc: jne 0x92826d */
  if (!zf) goto L_92826d;
L_9281fe: /* 9281fe: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 928202: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 928209: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 928210: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 928213: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 928216: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928218: lea edi, [ecx + 0x20] */
  edi = (uint32_t)(ecx + 0x20u);
/* 92821b: lea edx, [esp + 0xb8] */
  edx = (uint32_t)(esp + 0xb8u);
/* 928222: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 928225: mov ebp, 4 */
  ebp = 0x4u;
/* 92822a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_928230: /* 928230: mov eax, edi */
  eax = edi;
/* 928232: mov esi, 4 */
  esi = 0x4u;
L_928237: /* 928237: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 92823a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92823d: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 928240: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928243: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 928244: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 928247: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 92824a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92824c: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 92824f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 928252: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 928254: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 928257: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 928259: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92825b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 92825e: jne 0x928237 */
  if (!zf) goto L_928237;
L_928260: /* 928260: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 928263: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 928264: jne 0x928230 */
  if (!zf) goto L_928230;
L_928266: /* 928266: mov ebp, dword ptr [esp + 0x108] */
  ebp = R32((uint32_t)(esp + 0x108u));
L_92826d: /* 92826d: mov edx, dword ptr [esp + 0x104] */
  edx = R32((uint32_t)(esp + 0x104u));
/* 928274: mov eax, dword ptr [esp + 0x100] */
  eax = R32((uint32_t)(esp + 0x100u));
/* 92827b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 92827f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928280: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928282: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 928286: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928287: call 0x92a270 */
  esp -= 4; W32(esp, 0x92828cu); SPILL(); f_92a270(); if (g_unwind) return; RELOAD();
/* 92828c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92828e: je 0x9282d9 */
  if (zf) goto L_9282d9;
L_928290: /* 928290: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 928294: fcomp dword ptr [ebp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x1cu)));
  FPOP();
/* 928297: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 928299: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92829c: jp 0x9282d9 */
  if (pf) goto L_9282d9;
L_92829e: /* 92829e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9282a2: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9282a6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9282aa: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 9282ad: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9282b1: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 9282b4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9282b8: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 9282bb: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9282bf: mov dword ptr [ebp + 4], edx */
  W32((uint32_t)(ebp + 0x4u), edx);
/* 9282c2: mov edx, dword ptr [esp + 0xfc] */
  edx = R32((uint32_t)(esp + 0xfcu));
/* 9282c9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 9282cc: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9282d0: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 9282d3: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 9282d6: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_9282d9: /* 9282d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9282dd: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 9282e0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9282e4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9282e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9282e9: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9282ed: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 9282f0: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9282f3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9282f5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9282f9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9282fd: jl 0x9281d2 */
  if ((sf != of)) goto L_9281d2;
L_928303: /* 928303: cmp dword ptr [ebp + 0x1c], 0x7f7fffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x7f7fffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92830a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92830b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92830c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92830d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92830e: je 0x92831e */
  if (zf) goto L_92831e;
L_928310: /* 928310: mov eax, 1 */
  eax = 0x1u;
/* 928315: add esp, 0xe8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92831b: ret 0x10 */
  esp += 20; SPILL(); return;
L_92831e: /* 92831e: xor eax, eax */
  eax = 0;
/* 928320: add esp, 0xe8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928326: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_928330(void) {
  LOAD_REGS();
L_928330: /* 928330: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 928333: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928334: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928335: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 928339: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92833b: xor esi, esi */
  esi = 0;
/* 92833d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92833f: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 928343: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 928347: mov dword ptr [esp + 0x10], 0x927e30 */
  W32((uint32_t)(esp + 0x10u), 0x927e30u);
/* 92834f: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 928353: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
/* 92835b: jle 0x928375 */
  if ((zf || sf != of)) goto L_928375;
L_92835d: /* 92835d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_928360: /* 928360: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 928364: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928366: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 928368: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928369: call 0x929df0 */
  esp -= 4; W32(esp, 0x92836eu); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 92836e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 928370: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 928371: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928373: jl 0x928360 */
  if ((sf != of)) goto L_928360;
L_928375: /* 928375: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928376: mov eax, 1 */
  eax = 0x1u;
/* 92837b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92837c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92837f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928390(void) {
  LOAD_REGS();
L_928390: /* 928390: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 928393: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928394: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 928398: cmp byte ptr [ebx], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92839b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92839c: jne 0x928440 */
  if (!zf) goto L_928440;
L_9283a2: /* 9283a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9283a3: xor edi, edi */
  edi = 0;
/* 9283a5: call 0x926e80 */
  esp -= 4; W32(esp, 0x9283aau); SPILL(); f_926e80(); if (g_unwind) return; RELOAD();
/* 9283aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9283ac: jle 0x928440 */
  if ((zf || sf != of)) goto L_928440;
L_9283b2: /* 9283b2: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 9283b6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9283b7: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9283ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9283bb: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 9283bf: nop  */
L_9283c0: /* 9283c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9283c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9283c2: call 0x926ea0 */
  esp -= 4; W32(esp, 0x9283c7u); SPILL(); f_926ea0(); if (g_unwind) return; RELOAD();
/* 9283c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9283c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9283c9: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 9283cd: call 0x926ec0 */
  esp -= 4; W32(esp, 0x9283d2u); SPILL(); f_926ec0(); if (g_unwind) return; RELOAD();
/* 9283d2: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9283d6: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 9283d9: mov ebp, 4 */
  ebp = 0x4u;
/* 9283de: mov edi, edi */
  edi = edi;
L_9283e0: /* 9283e0: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 9283e4: mov esi, 4 */
  esi = 0x4u;
/* 9283e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9283f0: /* 9283f0: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 9283f3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9283f6: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 9283f9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9283fc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9283fd: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 928400: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 928403: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 928405: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 928408: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92840b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92840d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 928410: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 928412: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 928414: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 928417: jne 0x9283f0 */
  if (!zf) goto L_9283f0;
L_928419: /* 928419: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92841c: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 92841d: jne 0x9283e0 */
  if (!zf) goto L_9283e0;
L_92841f: /* 92841f: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 928423: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 928427: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928428: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 92842c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92842d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92842e: call 0x92a940 */
  esp -= 4; W32(esp, 0x928433u); SPILL(); f_92a940(); if (g_unwind) return; RELOAD();
/* 928433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928434: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 928435: call 0x926e80 */
  esp -= 4; W32(esp, 0x92843au); SPILL(); f_926e80(); if (g_unwind) return; RELOAD();
/* 92843a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92843c: jl 0x9283c0 */
  if ((sf != of)) goto L_9283c0;
L_92843e: /* 92843e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92843f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_928440: /* 928440: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928441: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 928442: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928445: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_928450(void) {
  LOAD_REGS();
L_928450: /* 928450: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928454: push 0x928170 */
  { uint32_t v = 0x928170u; esp -= 4; W32(esp, v); }
/* 928459: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 92845b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92845c: call 0x929ec0 */
  esp -= 4; W32(esp, 0x928461u); SPILL(); f_929ec0(); if (g_unwind) return; RELOAD();
/* 928461: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928470(void) {
  LOAD_REGS();
L_928470: /* 928470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928471: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 928475: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928476: call 0x928330 */
  esp -= 4; W32(esp, 0x92847bu); SPILL(); f_928330(); if (g_unwind) return; RELOAD();
/* 92847b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92847c: call 0x928450 */
  esp -= 4; W32(esp, 0x928481u); SPILL(); f_928450(); if (g_unwind) return; RELOAD();
/* 928481: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928482: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928490(void) {
  LOAD_REGS();
L_928490: /* 928490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928491: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 928495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928497: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928498: call 0x92a850 */
  esp -= 4; W32(esp, 0x92849du); SPILL(); f_92a850(); if (g_unwind) return; RELOAD();
/* 92849d: mov edi, eax */
  edi = eax;
/* 92849f: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* 9284a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9284a3: call dword ptr [0xb02214] */
  { uint32_t t = R32((uint32_t)(0xb02214u)); esp -= 4; W32(esp, 0x9284a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9284a9: mov esi, eax */
  esi = eax;
/* 9284ab: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9284ad: je 0x928500 */
  if (zf) goto L_928500;
L_9284af: /* 9284af: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 9284b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9284b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9284b4: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 9284b7: call 0x928590 */
  esp -= 4; W32(esp, 0x9284bcu); SPILL(); f_928590(); if (g_unwind) return; RELOAD();
/* 9284bc: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 9284bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9284c0: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* 9284c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9284c4: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 9284c7: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 9284c9: call 0x92ab90 */
  esp -= 4; W32(esp, 0x9284ceu); SPILL(); f_92ab90(); if (g_unwind) return; RELOAD();
/* 9284ce: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 9284d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9284d3: jne 0x9284e6 */
  if (!zf) goto L_9284e6;
L_9284d5: /* 9284d5: mov dword ptr [esi + 4], esi */
  W32((uint32_t)(esi + 0x4u), esi);
/* 9284d8: mov dword ptr [esi + 8], esi */
  W32((uint32_t)(esi + 0x8u), esi);
/* 9284db: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 9284de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9284df: mov eax, esi */
  eax = esi;
/* 9284e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9284e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9284e3: ret 4 */
  esp += 8; SPILL(); return;
L_9284e6: /* 9284e6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 9284e9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9284ec: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9284ef: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 9284f2: mov edx, eax */
  edx = eax;
/* 9284f4: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 9284f7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9284fa: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 9284fd: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
L_928500: /* 928500: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928501: mov eax, esi */
  eax = esi;
/* 928503: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928504: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 928505: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928510(void) {
  LOAD_REGS();
L_928510: /* 928510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928511: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 928515: test byte ptr [esi + 0x3c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928519: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92851a: je 0x92853a */
  if (zf) goto L_92853a;
L_92851c: /* 92851c: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 92851f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928520: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x928526u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 928526: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 928529: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92852a: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92852fu); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92852f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928530: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x928536u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 928536: and dword ptr [esi + 0x3c], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
L_92853a: /* 92853a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92853c: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* 92853f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928540: call 0x92ab90 */
  esp -= 4; W32(esp, 0x928545u); SPILL(); f_92ab90(); if (g_unwind) return; RELOAD();
/* 928545: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 928547: cmp dword ptr [edi + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92854a: jne 0x92855c */
  if (!zf) goto L_92855c;
L_92854c: /* 92854c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 92854f: xor ecx, ecx */
  ecx = 0;
/* 928551: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 928553: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 928556: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 928557: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 928559: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_92855c: /* 92855c: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 92855f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 928562: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 928565: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 928568: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 92856b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 92856e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 928570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928571: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928574: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928575: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x92857bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92857b: dec dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi + 0x10u), r);
  }
/* 92857e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92857f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928580: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928590(void) {
  LOAD_REGS();
L_928590: /* 928590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928594: xor ecx, ecx */
  ecx = 0;
/* 928596: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 928599: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 92859c: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 92859f: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 9285a2: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9285a5: mov dword ptr [eax + 0x1c], 0xffffffff */
  W32((uint32_t)(eax + 0x1cu), 0xffffffffu);
/* 9285ac: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
/* 9285af: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 9285b2: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 9285b5: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 9285b8: mov word ptr [eax + 0x20], cx */
  W16((uint32_t)(eax + 0x20u), (ecx & 0xffffu));
/* 9285bc: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 9285bf: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 9285c2: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9285c5: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 9285c9: jmp 0x92aab0 */
  SPILL(); f_92aab0(); return;
}

void f_9285d0(void) {
  LOAD_REGS();
L_9285d0: /* 9285d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9285d4: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 9285d7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9285d9: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9285de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9285f0(void) {
  LOAD_REGS();
L_9285f0: /* 9285f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9285f4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9285f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928600(void) {
  LOAD_REGS();
L_928600: /* 928600: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 928604: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928608: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 92860b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928610(void) {
  LOAD_REGS();
L_928610: /* 928610: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928614: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 928617: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928620(void) {
  LOAD_REGS();
L_928620: /* 928620: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 928624: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 928627: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 92862b: jmp 0x92aaf0 */
  goto L_92aaf0;
L_92aaf0: /* 92aaf0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92aaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92aaf4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 92aaf8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 92aafa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92aafc: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92aaff: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 92ab02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ab03: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 92ab07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ab08: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* 92ab0c: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92ab11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ab12: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92ab15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ab16: call dword ptr [edx + eax*8 + 8] */
  { uint32_t t = R32((uint32_t)(edx + eax*8 + 0x8u)); esp -= 4; W32(esp, 0x92ab1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92ab1a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92ab1e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 92ab21: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 92ab24: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92ab28: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92ab2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ab2d: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 92ab30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ab31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ab33: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 92ab37: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92ab39: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ab3b: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92ab3e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92ab40: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92ab44: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 92ab47: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 92ab4b: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 92ab4e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ab50: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 92ab54: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92ab57: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ab59: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92ab5c: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92ab5f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92ab63: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 92ab66: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 92ab6a: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 92ab6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ab6f: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 92ab73: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92ab76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ab78: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92ab7b: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92ab7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ab81: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_928630(void) {
  LOAD_REGS();
L_928630: /* 928630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928631: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 928635: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 928638: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92863a: je 0x92863f */
  if (zf) goto L_92863f;
L_92863c: /* 92863c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92863d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92863fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_92863f: /* 92863f: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 928642: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928644: je 0x92864c */
  if (zf) goto L_92864c;
L_928646: /* 928646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928647: call 0x928990 */
  esp -= 4; W32(esp, 0x92864cu); SPILL(); f_928990(); if (g_unwind) return; RELOAD();
L_92864c: /* 92864c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92864e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 928650: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
/* 928653: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928654: call 0x92acd0 */
  esp -= 4; W32(esp, 0x928659u); SPILL(); f_92acd0(); if (g_unwind) return; RELOAD();
/* 928659: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 92865c: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 92865f: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 928662: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 928665: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 928668: fstp dword ptr [esi + 0x4c] */
  WF32((uint32_t)(esi + 0x4cu), ST0); FPOP();
/* 92866b: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 92866e: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 928671: fstp dword ptr [esi + 0x50] */
  WF32((uint32_t)(esi + 0x50u), ST0); FPOP();
/* 928674: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 928677: fadd dword ptr [esi + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x54u)));
/* 92867a: fstp dword ptr [esi + 0x54] */
  WF32((uint32_t)(esi + 0x54u), ST0); FPOP();
/* 92867d: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 928680: fadd dword ptr [esi + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x58u)));
/* 928683: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
/* 928686: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 928689: fadd dword ptr [esi + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5cu)));
/* 92868c: fstp dword ptr [esi + 0x5c] */
  WF32((uint32_t)(esi + 0x5cu), ST0); FPOP();
/* 92868f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928690: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9286a0(void) {
  LOAD_REGS();
L_9286a0: /* 9286a0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9286a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9286a4: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 9286a8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9286ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9286ad: je 0x9286b2 */
  if (zf) goto L_9286b2;
L_9286af: /* 9286af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9286b0: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9286b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9286b2: /* 9286b2: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 9286b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9286b7: je 0x9286bf */
  if (zf) goto L_9286bf;
L_9286b9: /* 9286b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9286ba: call 0x928990 */
  esp -= 4; W32(esp, 0x9286bfu); SPILL(); f_928990(); if (g_unwind) return; RELOAD();
L_9286bf: /* 9286bf: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9286c2: xor edx, edx */
  edx = 0;
/* 9286c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9286c6: je 0x9286ed */
  if (zf) goto L_9286ed;
L_9286c8: /* 9286c8: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9286cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9286cd: je 0x9286ed */
  if (zf) goto L_9286ed;
L_9286cf: /* 9286cf: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 9286d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9286d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9286d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9286d5: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 9286d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9286da: push 0x38d1b717 */
  { uint32_t v = 0x38d1b717u; esp -= 4; W32(esp, v); }
/* 9286df: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9286e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9286e4: call 0x9743d0 */
  esp -= 4; W32(esp, 0x9286e9u); SPILL(); f_9743d0(); if (g_unwind) return; RELOAD();
/* 9286e9: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
L_9286ed: /* 9286ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9286ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9286f0: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9286f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9286f4: call 0x92acd0 */
  esp -= 4; W32(esp, 0x9286f9u); SPILL(); f_92acd0(); if (g_unwind) return; RELOAD();
/* 9286f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9286fa: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9286fd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928700(void) {
  LOAD_REGS();
L_928700: /* 928700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928705: call 0x928630 */
  esp -= 4; W32(esp, 0x92870au); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 92870a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928710(void) {
  LOAD_REGS();
L_928710: /* 928710: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 928714: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 928717: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 92871b: jmp 0x92ad30 */
  SPILL(); f_92ad30(); return;
}

void f_928720(void) {
  LOAD_REGS();
L_928720: /* 928720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928724: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928727: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928730(void) {
  LOAD_REGS();
L_928730: /* 928730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928734: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928737: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92873b: jmp 0x92ad70 */
  SPILL(); f_92ad70(); return;
}

void f_928740(void) {
  LOAD_REGS();
L_928740: /* 928740: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 928744: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 928747: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 92874b: jmp 0x92ad80 */
  SPILL(); f_92ad80(); return;
}

void f_928750(void) {
  LOAD_REGS();
L_928750: /* 928750: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 928754: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 928758: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 92875b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928760(void) {
  LOAD_REGS();
L_928760: /* 928760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928764: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 928767: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928770(void) {
  LOAD_REGS();
L_928770: /* 928770: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 928774: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 928778: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 92877b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928780(void) {
  LOAD_REGS();
L_928780: /* 928780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928784: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 928787: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928790(void) {
  LOAD_REGS();
L_928790: /* 928790: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 928794: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 928798: mov dword ptr [ecx + 0x74], eax */
  W32((uint32_t)(ecx + 0x74u), eax);
/* 92879b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9287a0(void) {
  LOAD_REGS();
L_9287a0: /* 9287a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9287a4: mov eax, dword ptr [eax + 0x74] */
  eax = R32((uint32_t)(eax + 0x74u));
/* 9287a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9287b0(void) {
  LOAD_REGS();
L_9287b0: /* 9287b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9287b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9287b5: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9287b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9287b9: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9287bd: jne 0x9287dc */
  if (!zf) goto L_9287dc;
L_9287bf: /* 9287bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9287c0: call 0x9285f0 */
  esp -= 4; W32(esp, 0x9287c5u); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 9287c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9287c7: je 0x9287dc */
  if (zf) goto L_9287dc;
L_9287c9: /* 9287c9: mov eax, dword ptr [0xcf2f88] */
  eax = R32((uint32_t)(0xcf2f88u));
/* 9287ce: push 0xaf2f68 */
  { uint32_t v = 0xaf2f68u; esp -= 4; W32(esp, v); }
/* 9287d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9287d4: call 0x971e40 */
  esp -= 4; W32(esp, 0x9287d9u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 9287d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9287dc: /* 9287dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9287dd: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9287e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9287e1: call 0x92ab90 */
  esp -= 4; W32(esp, 0x9287e6u); SPILL(); f_92ab90(); if (g_unwind) return; RELOAD();
/* 9287e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9287e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9287e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9287f0(void) {
  LOAD_REGS();
L_9287f0: /* 9287f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9287f4: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9287f7: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 9287fb: jmp 0x92acc0 */
  SPILL(); f_92acc0(); return;
}

void f_928800(void) {
  LOAD_REGS();
L_928800: /* 928800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928804: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 928807: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928810(void) {
  LOAD_REGS();
L_928810: /* 928810: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 928814: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 928818: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 92881b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928820(void) {
  LOAD_REGS();
L_928820: /* 928820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928821: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 928825: test byte ptr [esi + 0x3c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928829: je 0x928849 */
  if (zf) goto L_928849;
L_92882b: /* 92882b: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 92882e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92882f: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x928835u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 928835: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 928838: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928839: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92883eu); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92883e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92883f: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x928845u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 928845: and dword ptr [esi + 0x3c], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
L_928849: /* 928849: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92884d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92884f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 928853: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 928856: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 928859: je 0x928888 */
  if (zf) goto L_928888;
L_92885b: /* 92885b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 92885f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928860: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
/* 928863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928864: call 0x92ad80 */
  esp -= 4; W32(esp, 0x928869u); SPILL(); f_92ad80(); if (g_unwind) return; RELOAD();
/* 928869: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92886d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92886f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 928872: je 0x92887e */
  if (zf) goto L_92887e;
L_928874: /* 928874: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 928877: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 92887a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92887b: ret 0x14 */
  esp += 24; SPILL(); return;
L_92887e: /* 92887e: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 928881: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 928884: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928885: ret 0x14 */
  esp += 24; SPILL(); return;
L_928888: /* 928888: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928889: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92888c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92888d: call 0x92ad80 */
  esp -= 4; W32(esp, 0x928892u); SPILL(); f_92ad80(); if (g_unwind) return; RELOAD();
/* 928892: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928893: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_9288a0(void) {
  LOAD_REGS();
L_9288a0: /* 9288a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9288a4: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 9288a7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9288ab: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 9288ad: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 9288b0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9288b4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9288b6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9288c0(void) {
  LOAD_REGS();
L_9288c0: /* 9288c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9288c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9288c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9288c7: je 0x92895a */
  if (zf) goto L_92895a;
L_9288cd: /* 9288cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9288ce: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9288d0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9288d2: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x9288d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9288d8: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9288da: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9288dc: mov edi, eax */
  edi = eax;
/* 9288de: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x9288e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9288e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9288e6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9288e8: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9288eb: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9288ee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9288f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9288f4: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9288f7: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9288fa: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9288fd: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 928900: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 928903: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 928906: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 928909: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 92890c: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 92890f: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 928912: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 928915: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 928918: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 92891b: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 92891e: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 928921: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 928924: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 928927: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 92892a: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 92892d: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 928930: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 928933: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 928936: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 928939: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92893b: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 92893e: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 928941: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 928945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928947: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 92894a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 92894e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92894f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928950: call 0x928820 */
  esp -= 4; W32(esp, 0x928955u); SPILL(); f_928820(); if (g_unwind) return; RELOAD();
/* 928955: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928956: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928957: ret 0xc */
  esp += 16; SPILL(); return;
L_92895a: /* 92895a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92895e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 928962: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 928964: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 928966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928967: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 928969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92896a: call 0x928820 */
  esp -= 4; W32(esp, 0x92896fu); SPILL(); f_928820(); if (g_unwind) return; RELOAD();
/* 92896f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928970: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_928980(void) {
  LOAD_REGS();
L_928980: /* 928980: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928984: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 928987: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928990(void) {
  LOAD_REGS();
L_928990: /* 928990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928994: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 928997: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 92899a: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 92899d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92899e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92899f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9289a0: call 0x974930 */
  esp -= 4; W32(esp, 0x9289a5u); SPILL(); f_974930(); if (g_unwind) return; RELOAD();
/* 9289a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9289b0(void) {
  LOAD_REGS();
L_9289b0: /* 9289b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9289b4: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9289b7: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 9289bb: jmp 0x92ad90 */
  goto L_92ad90;
L_92ad90: /* 92ad90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92ad94: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92ad98: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 92ad9b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9289c0(void) {
  LOAD_REGS();
L_9289c0: /* 9289c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9289c4: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9289c7: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 9289cb: jmp 0x92ada0 */
  goto L_92ada0;
L_92ada0: /* 92ada0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ada4: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 92ada7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9289d0(void) {
  LOAD_REGS();
L_9289d0: /* 9289d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9289d4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9289d8: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 9289db: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9289e0(void) {
  LOAD_REGS();
L_9289e0: /* 9289e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9289e4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 9289e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9289f0(void) {
  LOAD_REGS();
L_9289f0: /* 9289f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9289f4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9289f8: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 9289fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928a00(void) {
  LOAD_REGS();
L_928a00: /* 928a00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928a04: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 928a07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928a10(void) {
  LOAD_REGS();
L_928a10: /* 928a10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 928a14: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 928a18: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* 928a1b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928a20(void) {
  LOAD_REGS();
L_928a20: /* 928a20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928a24: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 928a27: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928a30(void) {
  LOAD_REGS();
L_928a30: /* 928a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 928a34: mov ax, word ptr [eax + 0x20] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x20u))) & 0xffffu);
/* 928a38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_928a40(void) {
  LOAD_REGS();
L_928a40: /* 928a40: mov ax, word ptr [esp + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
/* 928a45: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 928a49: mov word ptr [ecx + 0x20], ax */
  W16((uint32_t)(ecx + 0x20u), (eax & 0xffffu));
/* 928a4d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_928a50(void) {
  LOAD_REGS();
L_928a50: /* 928a50: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 928a53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928a54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 928a55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928a56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928a57: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 928a5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928a5c: call 0x92acc0 */
  esp -= 4; W32(esp, 0x928a61u); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 928a61: mov ebx, dword ptr [esp + 0x60] */
  ebx = R32((uint32_t)(esp + 0x60u));
/* 928a65: mov ebp, dword ptr [edi + 0x30] */
  ebp = R32((uint32_t)(edi + 0x30u));
/* 928a68: mov esi, eax */
  esi = eax;
/* 928a6a: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 928a6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928a6f: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 928a73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928a74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928a75: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 928a79: call 0x92ad30 */
  esp -= 4; W32(esp, 0x928a7eu); SPILL(); f_92ad30(); if (g_unwind) return; RELOAD();
/* 928a7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928a7f: call 0x92ae40 */
  esp -= 4; W32(esp, 0x928a84u); SPILL(); f_92ae40(); if (g_unwind) return; RELOAD();
/* 928a84: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 928a87: movsx edx, ax */
  edx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 928a8a: xor eax, eax */
  eax = 0;
/* 928a8c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928a8e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 928a92: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 928a96: jle 0x928d7d */
  if ((zf || sf != of)) goto L_928d7d;
L_928a9c: /* 928a9c: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 928aa0: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
L_928aa4: /* 928aa4: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 928aa7: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 928aab: mov edx, dword ptr [ecx + eax + 0x40] */
  edx = R32((uint32_t)(ecx + eax + 0x40u));
/* 928aaf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928ab1: je 0x928d5b */
  if (zf) goto L_928d5b;
L_928ab7: /* 928ab7: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 928abb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928abc: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 928ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928ac1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 928ac2: call 0x92ad30 */
  esp -= 4; W32(esp, 0x928ac7u); SPILL(); f_92ad30(); if (g_unwind) return; RELOAD();
/* 928ac7: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 928acb: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 928acf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 928ad1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928ad4: je 0x928d5b */
  if (zf) goto L_928d5b;
L_928ada: /* 928ada: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 928ade: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 928ae2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 928ae4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928ae7: je 0x928d5b */
  if (zf) goto L_928d5b;
L_928aed: /* 928aed: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 928af1: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 928af5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 928af7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928afa: je 0x928d5b */
  if (zf) goto L_928d5b;
L_928b00: /* 928b00: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 928b04: fcomp dword ptr [esp + 0x44] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x44u)));
  FPOP();
/* 928b08: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 928b0a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928b0d: je 0x928d5b */
  if (zf) goto L_928d5b;
L_928b13: /* 928b13: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 928b17: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 928b1b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 928b1d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928b20: je 0x928d5b */
  if (zf) goto L_928d5b;
L_928b26: /* 928b26: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 928b2a: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 928b2e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 928b30: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 928b33: je 0x928d5b */
  if (zf) goto L_928d5b;
L_928b39: /* 928b39: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 928b3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928b3e: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* 928b41: jne 0x928bdb */
  if (!zf) goto L_928bdb;
L_928b47: /* 928b47: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 928b4a: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 928b4d: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 928b50: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 928b52: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 928b54: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 928b57: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 928b5a: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 928b5d: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* 928b60: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 928b64: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 928b68: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 928b69: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 928b6c: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 928b6f: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 928b72: add ecx, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 928b76: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 928b78: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 928b7b: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 928b7f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 928b82: mov dword ptr [esp + 0x54], 4 */
  W32((uint32_t)(esp + 0x54u), 0x4u);
/* 928b8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_928b90: /* 928b90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 928b94: mov esi, 4 */
  esi = 0x4u;
/* 928b99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_928ba0: /* 928ba0: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 928ba3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 928ba6: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 928ba9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928bac: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 928bad: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 928bb0: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 928bb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 928bb5: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 928bb8: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 928bbb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 928bbd: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 928bc0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 928bc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 928bc4: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 928bc7: jne 0x928ba0 */
  if (!zf) goto L_928ba0;
L_928bc9: /* 928bc9: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 928bcd: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 928bd0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 928bd1: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 928bd5: jne 0x928b90 */
  if (!zf) goto L_928b90;
L_928bd7: /* 928bd7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_928bdb: /* 928bdb: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 928bdf: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 928be2: mov ecx, dword ptr [eax + edx + 0x40] */
  ecx = R32((uint32_t)(eax + edx + 0x40u));
/* 928be6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 928be8: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 928bed: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 928bf0: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 928bf4: jne 0x928c22 */
  if (!zf) goto L_928c22;
L_928bf6: /* 928bf6: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 928bfa: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 928bfe: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 928c02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928c03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928c04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928c05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_928c06: /* 928c06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928c07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928c08: call 0x928a50 */
  esp -= 4; W32(esp, 0x928c0du); SPILL(); f_928a50(); if (g_unwind) return; RELOAD();
/* 928c0d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928c12: jne 0x928d5b */
  if (!zf) goto L_928d5b;
L_928c18: /* 928c18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928c19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928c1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 928c1b: xor eax, eax */
  eax = 0;
/* 928c1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 928c1e: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928c21: ret  */
  esp += 4; SPILL(); return;
L_928c22: /* 928c22: cmp dword ptr [esp + 0x10], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 928c27: jne 0x928c3e */
  if (!zf) goto L_928c3e;
L_928c29: /* 928c29: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 928c2d: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 928c31: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 928c35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928c36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928c37: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 928c38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928c39: or ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 928c3c: jmp 0x928c06 */
  goto L_928c06;
L_928c3e: /* 928c3e: mov esi, dword ptr [edi + 0x28] */
  esi = R32((uint32_t)(edi + 0x28u));
/* 928c41: cmp esi, dword ptr [edi + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928c44: jge 0x928c18 */
  if ((sf == of)) goto L_928c18;
L_928c46: /* 928c46: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 928c49: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 928c4c: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 928c4f: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 928c51: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 928c55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928c56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928c57: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 928c5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928c5b: call 0x929e60 */
  esp -= 4; W32(esp, 0x928c60u); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 928c60: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 928c63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928c65: jne 0x928cc7 */
  if (!zf) goto L_928cc7;
L_928c67: /* 928c67: mov cx, word ptr [esp + 0x54] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x54u))) & 0xffffu);
/* 928c6c: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 928c70: mov word ptr [esi + 0x14], cx */
  W16((uint32_t)(esi + 0x14u), (ecx & 0xffffu));
/* 928c74: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 928c77: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 928c7a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 928c7d: mov cx, word ptr [esp + 0x10] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x10u))) & 0xffffu);
/* 928c82: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 928c85: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 928c87: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 928c8a: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 928c8d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 928c90: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 928c94: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 928c97: mov word ptr [esi + 0x2c], cx */
  W16((uint32_t)(esi + 0x2cu), (ecx & 0xffffu));
/* 928c9b: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 928c9e: lea eax, [ebx + 8] */
  eax = (uint32_t)(ebx + 0x8u);
/* 928ca1: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 928ca4: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 928ca7: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 928caa: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 928cac: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 928cb0: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 928cb3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 928cb6: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 928cb9: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 928cbc: mov dword ptr [esi + 0x48], ebp */
  W32((uint32_t)(esi + 0x48u), ebp);
/* 928cbf: mov dword ptr [esi + 0x4c], ebx */
  W32((uint32_t)(esi + 0x4cu), ebx);
/* 928cc2: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 928cc5: jmp 0x928d31 */
  goto L_928d31;
L_928cc7: /* 928cc7: mov dx, word ptr [esp + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x10u))) & 0xffffu);
/* 928ccc: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 928cd0: mov word ptr [esi + 0x14], dx */
  W16((uint32_t)(esi + 0x14u), (edx & 0xffffu));
/* 928cd4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 928cd7: lea edx, [ebx + 0x14] */
  edx = (uint32_t)(ebx + 0x14u);
/* 928cda: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 928cdd: mov dx, word ptr [esp + 0x54] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x54u))) & 0xffffu);
/* 928ce2: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 928ce5: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 928ce7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 928ce9: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 928cec: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 928cef: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 928cf3: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 928cf6: mov word ptr [esi + 0x2c], dx */
  W16((uint32_t)(esi + 0x2cu), (edx & 0xffffu));
/* 928cfa: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 928cfd: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 928d00: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 928d03: lea edx, [ebp + 0x14] */
  edx = (uint32_t)(ebp + 0x14u);
/* 928d06: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 928d09: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 928d0c: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 928d0f: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 928d13: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 928d16: mov edx, eax */
  edx = eax;
/* 928d18: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 928d1b: or edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 928d1e: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 928d20: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 928d22: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 928d25: xor edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 928d28: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* 928d2b: mov dword ptr [esi + 0x4c], ebp */
  W32((uint32_t)(esi + 0x4cu), ebp);
/* 928d2e: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
L_928d31: /* 928d31: movzx ecx, word ptr [esi + 0x14] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x14u)));
/* 928d35: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 928d38: movzx edx, word ptr [esi + 0x2c] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x2cu)));
/* 928d3c: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 928d3f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 928d42: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928d44: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 928d47: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 928d4a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 928d4d: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 928d50: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 928d53: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 928d57: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 928d58: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
L_928d5b: /* 928d5b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 928d5f: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 928d63: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 928d66: mov ebp, dword ptr [ebp + 0x28] */
  ebp = R32((uint32_t)(ebp + 0x28u));
/* 928d69: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 928d6a: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 928d6d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928d6f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 928d73: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 928d77: jl 0x928aa4 */
  if ((sf != of)) goto L_928aa4;
L_928d7d: /* 928d7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 928d7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 928d7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 928d80: mov eax, 1 */
  eax = 0x1u;
/* 928d85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 928d86: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928d89: ret  */
  esp += 4; SPILL(); return;
}

void f_928d90(void) {
  LOAD_REGS();
L_928d90: /* 928d90: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 928d93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 928d94: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 928d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928d96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928d97: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 928d9b: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 928d9e: mov esi, ecx */
  esi = ecx;
/* 928da0: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 928da3: xor edx, edx */
  edx = 0;
/* 928da5: xor eax, eax */
  eax = 0;
/* 928da7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 928da9: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
/* 928dac: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
/* 928daf: mov dword ptr [edi + 0x3c], 1 */
  W32((uint32_t)(edi + 0x3cu), 0x1u);
/* 928db6: mov dword ptr [edi + 0x34], edx */
  W32((uint32_t)(edi + 0x34u), edx);
/* 928db9: jle 0x928dd3 */
  if ((zf || sf != of)) goto L_928dd3;
L_928dbb: /* 928dbb: nop  */
/* 928dbc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_928dc0: /* 928dc0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 928dc3: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 928dc6: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 928dc9: mov esi, ecx */
  esi = ecx;
/* 928dcb: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 928dce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 928dcf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928dd1: jl 0x928dc0 */
  if ((sf != of)) goto L_928dc0;
L_928dd3: /* 928dd3: xor eax, eax */
  eax = 0;
L_928dd5: /* 928dd5: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 928dd8: mov dword ptr [eax + ecx + 4], edx */
  W32((uint32_t)(eax + ecx + 0x4u), edx);
/* 928ddc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928ddf: cmp eax, 0xc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928de4: jle 0x928dd5 */
  if ((zf || sf != of)) goto L_928dd5;
L_928de6: /* 928de6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 928dea: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 928ded: cmp edx, dword ptr [eax + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928df0: jge 0x92901f */
  if ((sf == of)) goto L_92901f;
L_928df6: /* 928df6: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 928df9: cmp eax, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928dfc: jge 0x929091 */
  if ((sf == of)) goto L_929091;
L_928e02: /* 928e02: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 928e05: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 928e08: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 928e0b: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 928e0e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 928e12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 928e14: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 928e17: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 928e19: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 928e1b: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 928e1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928e1f: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 928e23: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 928e27: call 0x92b190 */
  esp -= 4; W32(esp, 0x928e2cu); SPILL(); f_92b190(); if (g_unwind) return; RELOAD();
/* 928e2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928e2e: je 0x928e46 */
  if (zf) goto L_928e46;
L_928e30: /* 928e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 928e31: call 0x92b190 */
  esp -= 4; W32(esp, 0x928e36u); SPILL(); f_92b190(); if (g_unwind) return; RELOAD();
/* 928e36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928e38: je 0x928e46 */
  if (zf) goto L_928e46;
L_928e3a: /* 928e3a: mov dword ptr [ebx + 0x10], 8 */
  W32((uint32_t)(ebx + 0x10u), 0x8u);
/* 928e41: jmp 0x929000 */
  goto L_929000;
L_928e46: /* 928e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928e47: call 0x928720 */
  esp -= 4; W32(esp, 0x928e4cu); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 928e4c: mov ebp, eax */
  ebp = eax;
/* 928e4e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 928e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928e53: call 0x928720 */
  esp -= 4; W32(esp, 0x928e58u); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 928e58: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 928e5b: mov ecx, eax */
  ecx = eax;
/* 928e5d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 928e5f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 928e63: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 928e65: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 928e67: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 928e6c: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 928e72: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 928e75: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 928e79: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 928e7d: je 0x928f42 */
  if (zf) goto L_928f42;
L_928e83: /* 928e83: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 928e86: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 928e89: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 928e8c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 928e8e: cmp eax, dword ptr [edi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928e91: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 928e95: jge 0x929091 */
  if ((sf == of)) goto L_929091;
L_928e9b: /* 928e9b: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 928e9e: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 928ea1: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 928ea4: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 928ea6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 928eaa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 928eab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928eac: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 928eaf: call 0x928610 */
  esp -= 4; W32(esp, 0x928eb4u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 928eb4: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 928eb7: mov ax, word ptr [esp + 0x18] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x18u))) & 0xffffu);
/* 928ebc: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 928ebf: lea edx, [ebp + 0x14] */
  edx = (uint32_t)(ebp + 0x14u);
/* 928ec2: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 928ec5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 928ec9: mov word ptr [esi + 0x14], ax */
  W16((uint32_t)(esi + 0x14u), (eax & 0xffffu));
/* 928ecd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 928ecf: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 928ed2: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 928ed5: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 928ed8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928ed9: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 928edc: call 0x928610 */
  esp -= 4; W32(esp, 0x928ee1u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 928ee1: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 928ee4: mov ax, word ptr [esp + 0x1c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x1cu))) & 0xffffu);
/* 928ee9: mov word ptr [esi + 0x2c], ax */
  W16((uint32_t)(esi + 0x2cu), (eax & 0xffffu));
/* 928eed: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 928ef1: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 928ef4: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 928ef7: lea edx, [eax + 0x14] */
  edx = (uint32_t)(eax + 0x14u);
/* 928efa: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 928efd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 928eff: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 928f02: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 928f05: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 928f08: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 928f0b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 928f0f: mov dword ptr [esi + 0x48], ebp */
  W32((uint32_t)(esi + 0x48u), ebp);
/* 928f12: mov dword ptr [esi + 0x5c], ebx */
  W32((uint32_t)(esi + 0x5cu), ebx);
/* 928f15: xor ecx, ecx */
  ecx = 0;
/* 928f17: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 928f1a: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 928f1d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 928f20: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 928f23: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 928f26: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 928f29: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 928f2c: mov eax, 1 */
  eax = 0x1u;
/* 928f31: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 928f34: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 928f37: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 928f3a: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 928f3d: jmp 0x929000 */
  goto L_929000;
L_928f42: /* 928f42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 928f43: call 0x928610 */
  esp -= 4; W32(esp, 0x928f48u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 928f48: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 928f4c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 928f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928f51: call 0x928610 */
  esp -= 4; W32(esp, 0x928f56u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 928f56: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 928f5a: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 928f5d: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 928f60: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 928f63: mov esi, eax */
  esi = eax;
/* 928f65: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 928f68: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 928f6c: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 928f6f: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 928f72: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928f74: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 928f78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 928f79: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 928f7d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 928f81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 928f82: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 928f85: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 928f89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 928f8a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 928f8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 928f8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 928f8e: call 0x928a50 */
  esp -= 4; W32(esp, 0x928f93u); SPILL(); f_928a50(); if (g_unwind) return; RELOAD();
/* 928f93: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 928f96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928f98: je 0x92902c */
  if (zf) goto L_92902c;
L_928f9e: /* 928f9e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 928fa1: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 928fa4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928fa6: jle 0x928fb0 */
  if ((zf || sf != of)) goto L_928fb0;
L_928fa8: /* 928fa8: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 928fab: cmp edx, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928fae: jge 0x92902c */
  if ((sf == of)) goto L_92902c;
L_928fb0: /* 928fb0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 928fb2: xor ecx, ecx */
  ecx = 0;
/* 928fb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 928fb6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 928fb9: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 928fbc: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* 928fc3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 928fc4: or ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 928fc7: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928fca: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 928fcd: jle 0x928fda */
  if ((zf || sf != of)) goto L_928fda;
L_928fcf: /* 928fcf: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 928fd2: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 928fd5: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 928fd8: jmp 0x928fdc */
  goto L_928fdc;
L_928fda: /* 928fda: xor edx, edx */
  edx = 0;
L_928fdc: /* 928fdc: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 928fdf: xor ecx, ecx */
  ecx = 0;
/* 928fe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 928fe3: jle 0x929000 */
  if ((zf || sf != of)) goto L_929000;
L_928fe5: /* 928fe5: xor eax, eax */
  eax = 0;
L_928fe7: /* 928fe7: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 928fea: mov dword ptr [eax + esi + 0x5c], ebx */
  W32((uint32_t)(eax + esi + 0x5cu), ebx);
/* 928fee: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 928ff1: mov dword ptr [eax + esi + 0x50], edx */
  W32((uint32_t)(eax + esi + 0x50u), edx);
/* 928ff5: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 928ff8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 928ff9: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 928ffc: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 928ffe: jl 0x928fe7 */
  if ((sf != of)) goto L_928fe7;
L_929000: /* 929000: mov ebx, dword ptr [edi + 0x44] */
  ebx = R32((uint32_t)(edi + 0x44u));
/* 929003: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 929006: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92900a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 92900b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 92900c: mov dword ptr [edi + 0x44], ebx */
  W32((uint32_t)(edi + 0x44u), ebx);
/* 92900f: mov dword ptr [edi + 0x34], esi */
  W32((uint32_t)(edi + 0x34u), esi);
/* 929012: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 929015: mov eax, ebx */
  eax = ebx;
/* 929017: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929019: jl 0x928df6 */
  if ((sf != of)) goto L_928df6;
L_92901f: /* 92901f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929020: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929021: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 929022: mov eax, 1 */
  eax = 0x1u;
/* 929027: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929028: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92902b: ret  */
  esp += 4; SPILL(); return;
L_92902c: /* 92902c: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 92902f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 929030: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929032: jl 0x929065 */
  if ((sf != of)) goto L_929065;
L_929034: /* 929034: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 929037: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 929039: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 92903c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92903d: mov edx, eax */
  edx = eax;
/* 92903f: nop  */
L_929040: /* 929040: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 929043: movzx ebx, word ptr [eax + ecx + 0x14] */
  ebx = (uint32_t)(R16((uint32_t)(eax + ecx + 0x14u)));
/* 929048: imul ebx, dword ptr [edi + 0xc] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0xcu)));
  ebx = (uint32_t)r;
  }
/* 92904c: movzx ebp, word ptr [eax + ecx + 0x2c] */
  ebp = (uint32_t)(R16((uint32_t)(eax + ecx + 0x2cu)));
/* 929051: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929053: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 929056: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 929058: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 92905b: sub ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 92905e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 92905f: mov dword ptr [ebp + ebx*4], eax */
  W32((uint32_t)(ebp + ebx*4), eax);
/* 929063: jne 0x929040 */
  if (!zf) goto L_929040;
L_929065: /* 929065: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 929069: cmp ecx, dword ptr [edi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92906c: mov dword ptr [edi + 0x28], esi */
  W32((uint32_t)(edi + 0x28u), esi);
/* 92906f: mov eax, ecx */
  eax = ecx;
/* 929071: jge 0x929087 */
  if ((sf == of)) goto L_929087;
L_929073: /* 929073: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 929076: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 929079: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 92907f: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 929082: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 929083: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929085: jl 0x929073 */
  if ((sf != of)) goto L_929073;
L_929087: /* 929087: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92908b: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 92908e: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
L_929091: /* 929091: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929092: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929093: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 929094: xor eax, eax */
  eax = 0;
/* 929096: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929097: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92909a: ret  */
  esp += 4; SPILL(); return;
}

void f_9290a0(void) {
  LOAD_REGS();
L_9290a0: /* 9290a0: sub esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9290a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9290a7: mov ebx, dword ptr [esp + 0x140] */
  ebx = R32((uint32_t)(esp + 0x140u));
/* 9290ae: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9290b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9290b2: mov ebp, dword ptr [esp + 0x14c] */
  ebp = R32((uint32_t)(esp + 0x14cu));
/* 9290b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9290ba: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 9290bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9290be: mov edi, dword ptr [esp + 0x150] */
  edi = R32((uint32_t)(esp + 0x150u));
/* 9290c5: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 9290c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9290c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9290ca: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9290cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9290cd: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 9290d1: call 0x929e60 */
  esp -= 4; W32(esp, 0x9290d6u); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 9290d6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9290d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9290db: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9290df: jne 0x929122 */
  if (!zf) goto L_929122;
L_9290e1: /* 9290e1: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9290e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9290e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9290e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9290e7: call 0x929e80 */
  esp -= 4; W32(esp, 0x9290ecu); SPILL(); f_929e80(); if (g_unwind) return; RELOAD();
/* 9290ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9290ee: jne 0x929122 */
  if (!zf) goto L_929122;
L_9290f0: /* 9290f0: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 9290f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9290f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9290f5: call 0x929c40 */
  esp -= 4; W32(esp, 0x9290fau); SPILL(); f_929c40(); if (g_unwind) return; RELOAD();
/* 9290fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9290fb: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9290fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9290ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929100: call 0x929c40 */
  esp -= 4; W32(esp, 0x929105u); SPILL(); f_929c40(); if (g_unwind) return; RELOAD();
/* 929105: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929106: push 0xaf2fb4 */
  { uint32_t v = 0xaf2fb4u; esp -= 4; W32(esp, v); }
/* 92910b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92910d: call 0x971e20 */
  esp -= 4; W32(esp, 0x929112u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 929112: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 929115: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929118: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92911a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92911b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92911c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92911d: call 0x929ea0 */
  esp -= 4; W32(esp, 0x929122u); SPILL(); f_929ea0(); if (g_unwind) return; RELOAD();
L_929122: /* 929122: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 929125: mov esi, dword ptr [edx + esi*4] */
  esi = R32((uint32_t)(edx + esi*4));
/* 929128: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92912a: je 0x9292b9 */
  if (zf) goto L_9292b9;
L_929130: /* 929130: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 929133: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 929136: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 929139: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 92913c: lea ebp, [edx + ecx*4] */
  ebp = (uint32_t)(edx + ecx*4);
/* 92913f: xor ecx, ecx */
  ecx = 0;
/* 929141: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929143: jne 0x929158 */
  if (!zf) goto L_929158;
L_929145: /* 929145: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 929148: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 92914b: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929150: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929152: jl 0x9292c9 */
  if ((sf != of)) goto L_9292c9;
L_929158: /* 929158: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 92915b: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 929162: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 929165: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 92916c: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 92916f: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 929173: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 929175: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 929177: mov eax, dword ptr [edx + 0x74] */
  eax = R32((uint32_t)(edx + 0x74u));
/* 92917a: mov dword ptr [esp + 0xcc], eax */
  W32((uint32_t)(esp + 0xccu), eax);
/* 929181: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 929184: mov dword ptr [esp + 0x114], edx */
  W32((uint32_t)(esp + 0x114u), edx);
/* 92918b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 92918e: mov dword ptr [esp + 0x110], eax */
  W32((uint32_t)(esp + 0x110u), eax);
/* 929195: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 929198: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 92919f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9291a1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9291a4: mov eax, dword ptr [edx + 0x74] */
  eax = R32((uint32_t)(edx + 0x74u));
/* 9291a7: mov dword ptr [esp + 0x144], eax */
  W32((uint32_t)(esp + 0x144u), eax);
/* 9291ae: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9291b1: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 9291b8: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 9291bc: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 9291c0: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 9291c4: lea eax, [esp + 0xd0] */
  eax = (uint32_t)(esp + 0xd0u);
/* 9291cb: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9291cf: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9291d1: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 9291d4: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 9291d8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9291da: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 9291dd: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 9291e1: test byte ptr [edi + 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x10u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9291e5: je 0x9291ed */
  if (zf) goto L_9291ed;
L_9291e7: /* 9291e7: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 9291eb: jmp 0x9291f6 */
  goto L_9291f6;
L_9291ed: /* 9291ed: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9291ef: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 9291f2: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
L_9291f6: /* 9291f6: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9291f9: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 9291fc: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9291ff: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 929202: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 929206: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 929209: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 92920c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92920e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 929212: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 929216: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929218: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 92921c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 929220: je 0x929232 */
  if (zf) goto L_929232;
L_929222: /* 929222: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 929226: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929227: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 92922b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92922c: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92922eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92922e: xor ecx, ecx */
  ecx = 0;
/* 929230: jmp 0x92923a */
  goto L_92923a;
L_929232: /* 929232: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 929236: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
L_92923a: /* 92923a: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 92923e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 929240: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 929243: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 929246: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 929249: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92924c: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 92924f: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 929252: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 929256: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 929259: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 92925c: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92925f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 929262: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 929263: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929265: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 929268: jne 0x929276 */
  if (!zf) goto L_929276;
L_92926a: /* 92926a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 92926d: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 929270: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 929273: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
L_929276: /* 929276: cmp dword ptr [esi + 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929279: je 0x92929e */
  if (zf) goto L_92929e;
L_92927b: /* 92927b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 92927f: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 929282: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 929286: add dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x4u), r);
  }
/* 929289: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 92928d: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 929290: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 929294: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 929297: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 92929b: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
L_92929e: /* 92929e: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9292a1: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 9292a4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9292a8: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 9292ab: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9292ae: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 9292b1: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9292b3: jne 0x929130 */
  if (!zf) goto L_929130;
L_9292b9: /* 9292b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9292ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9292bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9292bc: mov eax, 1 */
  eax = 0x1u;
/* 9292c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9292c2: add esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9292c8: ret  */
  esp += 4; SPILL(); return;
L_9292c9: /* 9292c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9292ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9292cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9292cc: xor eax, eax */
  eax = 0;
/* 9292ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9292cf: add esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9292d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9292e0(void) {
  LOAD_REGS();
L_9292e0: /* 9292e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9292e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9292e4: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 9292e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9292e9: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9292ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9292ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9292ef: xor edi, edi */
  edi = 0;
/* 9292f1: mov dword ptr [ebx + 0x10], edi */
  W32((uint32_t)(ebx + 0x10u), edi);
/* 9292f4: mov dword ptr [ebx + 0xc], edi */
  W32((uint32_t)(ebx + 0xcu), edi);
/* 9292f7: lea esi, [ebx + 0x14] */
  esi = (uint32_t)(ebx + 0x14u);
/* 9292fa: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 9292fc: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 9292ff: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 929302: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 929305: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929308: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 92930b: jne 0x929319 */
  if (!zf) goto L_929319;
L_92930d: /* 92930d: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 929310: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 929314: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 929317: jmp 0x929334 */
  goto L_929334;
L_929319: /* 929319: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 92931c: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 929320: mov edi, dword ptr [edi + 0x38] */
  edi = R32((uint32_t)(edi + 0x38u));
/* 929323: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 929326: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 929329: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 92932b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 92932e: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 929332: xor edi, edi */
  edi = 0;
L_929334: /* 929334: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 929337: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92933a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92933e: mov ecx, eax */
  ecx = eax;
/* 929340: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 929342: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 929344: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 929348: jae 0x92943b */
  if (!cf) goto L_92943b;
L_92934e: /* 92934e: lea eax, [ecx + 0x38] */
  eax = (uint32_t)(ecx + 0x38u);
L_929351: /* 929351: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929354: je 0x929411 */
  if (zf) goto L_929411;
L_92935a: /* 92935a: mov dword ptr [ebx + 0x10], 1 */
  W32((uint32_t)(ebx + 0x10u), 0x1u);
/* 929361: cmp dword ptr [eax + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929364: jle 0x9293f9 */
  if ((zf || sf != of)) goto L_9293f9;
L_92936a: /* 92936a: xor edx, edx */
  edx = 0;
/* 92936c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_929370: /* 929370: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 929373: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 929376: je 0x9293c7 */
  if (zf) goto L_9293c7;
L_929378: /* 929378: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92937b: fld dword ptr [edx + ecx + 0xc] */
  { double v = F32((uint32_t)(edx + ecx + 0xcu)); FPUSH(v); }
/* 92937f: lea ecx, [edx + ecx + 0xc] */
  ecx = (uint32_t)(edx + ecx + 0xcu);
/* 929383: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 929389: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92938b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92938e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 929394: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 929397: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92939a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9293a0: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 9293a3: mov cl, byte ptr [eax + 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1cu))) & 0xffu);
/* 9293a6: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9293a9: je 0x9293b5 */
  if (zf) goto L_9293b5;
L_9293ab: /* 9293ab: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9293ae: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 9293b1: mov dword ptr [edx + ecx + 0x24], ebx */
  W32((uint32_t)(edx + ecx + 0x24u), ebx);
L_9293b5: /* 9293b5: test byte ptr [eax + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9293b9: je 0x9293e6 */
  if (zf) goto L_9293e6;
L_9293bb: /* 9293bb: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9293be: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 9293c1: mov dword ptr [edx + ecx + 0x20], ebx */
  W32((uint32_t)(edx + ecx + 0x20u), ebx);
/* 9293c5: jmp 0x9293e6 */
  goto L_9293e6;
L_9293c7: /* 9293c7: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9293ca: je 0x9293d6 */
  if (zf) goto L_9293d6;
L_9293cc: /* 9293cc: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9293cf: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 9293d2: mov dword ptr [ecx + edx + 0x20], ebx */
  W32((uint32_t)(ecx + edx + 0x20u), ebx);
L_9293d6: /* 9293d6: test byte ptr [eax + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9293da: je 0x9293e6 */
  if (zf) goto L_9293e6;
L_9293dc: /* 9293dc: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9293df: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 9293e2: mov dword ptr [ecx + edx + 0x24], ebx */
  W32((uint32_t)(ecx + edx + 0x24u), ebx);
L_9293e6: /* 9293e6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9293e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9293ea: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9293ed: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9293ef: jl 0x929370 */
  if ((sf != of)) goto L_929370;
L_9293f5: /* 9293f5: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_9293f9: /* 9293f9: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 9293fc: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 9293fe: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 929400: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 929403: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 929406: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 929409: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92940c: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 92940e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_929411: /* 929411: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 929415: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 929418: add edi, 0x60 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92941b: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 92941f: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 929422: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 929425: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 929429: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92942c: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92942e: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929431: xor edi, edi */
  edi = 0;
/* 929433: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 929435: jb 0x929351 */
  if (cf) goto L_929351;
L_92943b: /* 92943b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92943f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929441: jle 0x9294c7 */
  if ((zf || sf != of)) goto L_9294c7;
L_929447: /* 929447: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 92944d: xor eax, eax */
  eax = 0;
/* 92944f: nop  */
L_929450: /* 929450: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 929453: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 929454: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929457: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 929459: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92945b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92945d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92945f: jl 0x929450 */
  if ((sf != of)) goto L_929450;
L_929461: /* 929461: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 929467: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 929469: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92946c: jne 0x92948c */
  if (!zf) goto L_92948c;
L_92946e: /* 92946e: fsqrt  */
  ST0 = sqrt(ST0);
/* 929470: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 929476: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 929478: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92947a: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 92947c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92947e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 929481: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 929484: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 929487: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92948a: jmp 0x92949a */
  goto L_92949a;
L_92948c: /* 92948c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92948e: mov dword ptr [esi], 0x3f800000 */
  W32((uint32_t)(esi), 0x3f800000u);
/* 929494: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 929497: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
L_92949a: /* 92949a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 92949e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 9294a1: mov edx, dword ptr [edx + 0x80] */
  edx = R32((uint32_t)(edx + 0x80u));
/* 9294a7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9294a9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9294ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9294ad: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9294b0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9294b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9294b3: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9294b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9294b7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9294bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9294bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9294bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9294be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9294bf: call 0x92bb80 */
  esp -= 4; W32(esp, 0x9294c4u); SPILL(); f_92bb80(); if (g_unwind) return; RELOAD();
/* 9294c4: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
L_9294c7: /* 9294c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9294c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9294c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9294ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9294cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9294ce: ret  */
  esp += 4; SPILL(); return;
}

void f_9294d0(void) {
  LOAD_REGS();
L_9294d0: /* 9294d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9294d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9294d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9294d3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9294d7: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* 9294da: cmp eax, dword ptr [ebp + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9294dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9294de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9294df: jge 0x929613 */
  if ((sf == of)) goto L_929613;
L_9294e5: /* 9294e5: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* 9294e8: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 9294eb: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 9294ee: mov eax, dword ptr [edx + ecx*4 + 0x10] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x10u));
/* 9294f2: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9294f5: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 9294f8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9294fc: jne 0x9295ff */
  if (!zf) goto L_9295ff;
L_929502: /* 929502: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 929504: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 929507: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92950b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 92950d: cmp eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929511: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 929514: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 929518: jge 0x9296ba */
  if ((sf == of)) goto L_9296ba;
L_92951e: /* 92951e: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 929522: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 929524: add ebx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 929526: cmp ebx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92952a: jge 0x9296ba */
  if ((sf == of)) goto L_9296ba;
L_929530: /* 929530: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 929534: lea edi, [eax + eax*8] */
  edi = (uint32_t)(eax + eax*8);
/* 929537: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 929538: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 92953a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 92953c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 929540: lea ebx, [ebx + edi*4] */
  ebx = (uint32_t)(ebx + edi*4);
/* 929543: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 929547: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 929549: xor edx, edx */
  edx = 0;
/* 92954b: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 92954e: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 929551: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 929553: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 929556: lea eax, [edi + eax*8] */
  eax = (uint32_t)(edi + eax*8);
/* 929559: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 92955c: cmp dword ptr [esi + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92955f: je 0x9295f8 */
  if (zf) goto L_9295f8;
L_929565: /* 929565: mov dword ptr [ebx + 0x10], 1 */
  W32((uint32_t)(ebx + 0x10u), 0x1u);
/* 92956c: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 92956f: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 929572: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 929575: lea edi, [ebx + 0x14] */
  edi = (uint32_t)(ebx + 0x14u);
/* 929578: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 92957b: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 92957e: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 929581: movzx ecx, word ptr [esi + 0x2c] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x2cu)));
/* 929585: movzx edx, word ptr [esi + 0x14] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x14u)));
/* 929589: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 92958c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92958d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92958e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92958f: call 0x929e60 */
  esp -= 4; W32(esp, 0x929594u); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 929594: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 929597: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929599: je 0x9295c7 */
  if (zf) goto L_9295c7;
L_92959b: /* 92959b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 92959e: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 9295a4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9295a8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9295ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9295ac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9295ae: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9295b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9295b2: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 9295b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9295b6: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 9295b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9295ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9295bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9295bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9295bd: call 0x92bb80 */
  esp -= 4; W32(esp, 0x9295c2u); SPILL(); f_92bb80(); if (g_unwind) return; RELOAD();
/* 9295c2: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 9295c5: jmp 0x9295e7 */
  goto L_9295e7;
L_9295c7: /* 9295c7: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 9295ca: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 9295cd: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 9295d0: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9295d3: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 9295d6: mov esi, dword ptr [esi + 0x44] */
  esi = R32((uint32_t)(esi + 0x44u));
/* 9295d9: mov eax, ecx */
  eax = ecx;
/* 9295db: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9295de: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9295e0: mov ecx, eax */
  ecx = eax;
/* 9295e2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9295e5: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
L_9295e7: /* 9295e7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9295eb: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9295ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9295f0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9295f2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9295f6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_9295f8: /* 9295f8: mov dword ptr [ecx + 0x10], 3 */
  W32((uint32_t)(ecx + 0x10u), 0x3u);
L_9295ff: /* 9295ff: mov edx, dword ptr [ebp + 0x48] */
  edx = R32((uint32_t)(ebp + 0x48u));
/* 929602: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 929605: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 929606: mov eax, edx */
  eax = edx;
/* 929608: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92960a: mov dword ptr [ebp + 0x48], edx */
  W32((uint32_t)(ebp + 0x48u), edx);
/* 92960d: jl 0x9294e5 */
  if ((sf != of)) goto L_9294e5;
L_929613: /* 929613: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 929616: cmp edx, dword ptr [ebp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929619: jge 0x9296af */
  if ((sf == of)) goto L_9296af;
L_92961f: /* 92961f: nop  */
L_929620: /* 929620: mov eax, dword ptr [ebp + 0x4c] */
  eax = R32((uint32_t)(ebp + 0x4cu));
/* 929623: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 929626: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 929629: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 92962c: cmp dword ptr [edi + 0x10], 0x12 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929630: jne 0x92969b */
  if (!zf) goto L_92969b;
L_929632: /* 929632: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 929636: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 929638: cmp eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92963c: je 0x9296ba */
  if (zf) goto L_9296ba;
L_92963e: /* 92963e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 929640: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 929643: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 929647: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 929649: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 92964b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92964d: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929651: jge 0x9296ba */
  if ((sf == of)) goto L_9296ba;
L_929653: /* 929653: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 929657: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 92965a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92965b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92965d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92965f: lea esi, [esi + edx*4] */
  esi = (uint32_t)(esi + edx*4);
/* 929662: xor ecx, ecx */
  ecx = 0;
/* 929664: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 929666: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 929669: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 92966c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 92966e: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 929671: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 929675: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 929678: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 92967b: cmp dword ptr [edi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92967e: je 0x929694 */
  if (zf) goto L_929694;
L_929680: /* 929680: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929682: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 929683: call 0x9292e0 */
  esp -= 4; W32(esp, 0x929688u); SPILL(); f_9292e0(); if (g_unwind) return; RELOAD();
/* 929688: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92968b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 92968d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929690: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 929692: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
L_929694: /* 929694: mov dword ptr [edi + 0x10], 0x13 */
  W32((uint32_t)(edi + 0x10u), 0x13u);
L_92969b: /* 92969b: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 92969e: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 9296a1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9296a2: mov eax, edx */
  eax = edx;
/* 9296a4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9296a6: mov dword ptr [ebp + 0x4c], edx */
  W32((uint32_t)(ebp + 0x4cu), edx);
/* 9296a9: jl 0x929620 */
  if ((sf != of)) goto L_929620;
L_9296af: /* 9296af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9296b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9296b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9296b2: mov eax, 1 */
  eax = 0x1u;
/* 9296b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9296b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9296b9: ret  */
  esp += 4; SPILL(); return;
L_9296ba: /* 9296ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9296bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9296bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9296bd: xor eax, eax */
  eax = 0;
/* 9296bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9296c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9296c1: ret  */
  esp += 4; SPILL(); return;
}

void f_9296d0(void) {
  LOAD_REGS();
L_9296d0: /* 9296d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9296d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9296d2: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 9296d4: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9296dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9296da: mov esi, eax */
  esi = eax;
/* 9296dc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9296e0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9296e3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9296e5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9296e7: push 0xfa00 */
  { uint32_t v = 0xfa00u; esp -= 4; W32(esp, v); }
/* 9296ec: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 9296ef: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x9296f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9296f5: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 9296fa: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 9296fd: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x929703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929703: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 929706: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 929709: mov ecx, eax */
  ecx = eax;
/* 92970b: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 92970e: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 929711: mov edi, 0x3e8 */
  edi = 0x3e8u;
/* 929716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929717: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 92971a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x929720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929720: push 0x17700 */
  { uint32_t v = 0x17700u; esp -= 4; W32(esp, v); }
/* 929725: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 929728: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92972eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92972e: push 0x4e20 */
  { uint32_t v = 0x4e20u; esp -= 4; W32(esp, v); }
/* 929733: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 929736: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 929739: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92973fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92973f: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 929744: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 929747: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 92974a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x929750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929750: push 0xa000 */
  { uint32_t v = 0xa000u; esp -= 4; W32(esp, v); }
/* 929755: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 929758: mov dword ptr [esi + 0x40], 0x11 */
  W32((uint32_t)(esi + 0x40u), 0x11u);
/* 92975f: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x929765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929765: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 929768: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 92976a: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 92976d: mov dword ptr [eax + 8], 0x400 */
  W32((uint32_t)(eax + 0x8u), 0x400u);
/* 929774: mov edi, 0xc */
  edi = 0xcu;
/* 929779: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_929780: /* 929780: push 0x1400 */
  { uint32_t v = 0x1400u; esp -= 4; W32(esp, v); }
/* 929785: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92978bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92978b: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 92978e: mov dword ptr [edi + ecx], eax */
  W32((uint32_t)(edi + ecx), eax);
/* 929791: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 929794: mov dword ptr [edx + edi + 8], 0x80 */
  W32((uint32_t)(edx + edi + 0x8u), 0x80u);
/* 92979c: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92979f: cmp edi, 0xc0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9297a5: jle 0x929780 */
  if ((zf || sf != of)) goto L_929780;
L_9297a7: /* 9297a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9297a8: mov eax, esi */
  eax = esi;
/* 9297aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9297ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9297b0(void) {
  LOAD_REGS();
L_9297b0: /* 9297b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9297b4: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9297ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9297c0(void) {
  LOAD_REGS();
L_9297c0: /* 9297c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9297c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9297c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9297c6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9297c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9297ca: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9297d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9297d0: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 9297d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9297d4: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x9297dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9297da: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 9297dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9297de: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9297e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9297e4: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 9297e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9297e8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9297eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9297ee: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 9297f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9297f2: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9297f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9297f8: xor esi, esi */
  esi = 0;
/* 9297fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_929800: /* 929800: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 929803: mov eax, dword ptr [esi + edx] */
  eax = R32((uint32_t)(esi + edx));
/* 929806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929807: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92980du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92980d: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 929810: cmp esi, 0xc0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929816: jle 0x929800 */
  if ((zf || sf != of)) goto L_929800;
L_929818: /* 929818: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 92981b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92981c: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x929822u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929822: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929823: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x929829u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929829: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92982a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92982b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929830(void) {
  LOAD_REGS();
L_929830: /* 929830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929831: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 929835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929836: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 92983a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92983b: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 92983f: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 929845: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 92984b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92984d: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92984f: jne 0x9298a4 */
  if (!zf) goto L_9298a4;
L_929851: /* 929851: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 929853: jne 0x92987d */
  if (!zf) goto L_92987d;
L_929855: /* 929855: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929857: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92985b: jne 0x929863 */
  if (!zf) goto L_929863;
L_92985d: /* 92985d: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 929860: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
L_929863: /* 929863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929865: call 0x928d90 */
  esp -= 4; W32(esp, 0x92986au); SPILL(); f_928d90(); if (g_unwind) return; RELOAD();
/* 92986a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92986d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92986f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 929871: je 0x929878 */
  if (zf) goto L_929878;
L_929873: /* 929873: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 929876: jmp 0x92987b */
  goto L_92987b;
L_929878: /* 929878: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_92987b: /* 92987b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_92987d: /* 92987d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92987e: call 0x929920 */
  esp -= 4; W32(esp, 0x929883u); SPILL(); f_929920(); if (g_unwind) return; RELOAD();
/* 929883: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929886: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929888: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92988a: je 0x929891 */
  if (zf) goto L_929891;
L_92988c: /* 92988c: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92988f: jmp 0x929894 */
  goto L_929894;
L_929891: /* 929891: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_929894: /* 929894: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 929896: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
/* 92989d: mov dword ptr [esi + 0x4c], 0 */
  W32((uint32_t)(esi + 0x4cu), 0x0u);
L_9298a4: /* 9298a4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9298a8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9298ac: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9298b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9298b1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9298b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9298b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9298b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9298b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9298b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9298ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9298bb: call 0x9294d0 */
  esp -= 4; W32(esp, 0x9298c0u); SPILL(); f_9294d0(); if (g_unwind) return; RELOAD();
/* 9298c0: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9298c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9298c5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9298c7: je 0x9298ce */
  if (zf) goto L_9298ce;
L_9298c9: /* 9298c9: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9298cc: jmp 0x9298d1 */
  goto L_9298d1;
L_9298ce: /* 9298ce: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_9298d1: /* 9298d1: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9298d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9298d5: jne 0x92990b */
  if (!zf) goto L_92990b;
L_9298d7: /* 9298d7: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9298da: xor eax, eax */
  eax = 0;
/* 9298dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9298de: jle 0x9298f4 */
  if ((zf || sf != of)) goto L_9298f4;
L_9298e0: /* 9298e0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9298e3: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 9298e6: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 9298ec: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9298ef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9298f0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9298f2: jl 0x9298e0 */
  if ((sf != of)) goto L_9298e0;
L_9298f4: /* 9298f4: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9298f7: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 9298fe: jne 0x92990b */
  if (!zf) goto L_92990b;
L_929900: /* 929900: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929901: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929902: mov eax, 1 */
  eax = 0x1u;
/* 929907: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929908: ret 0x20 */
  esp += 36; SPILL(); return;
L_92990b: /* 92990b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92990c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92990d: xor eax, eax */
  eax = 0;
/* 92990f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929910: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_929920(void) {
  LOAD_REGS();
L_929920: /* 929920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929922: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929923: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 929927: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 92992a: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 929931: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 929934: xor ebx, ebx */
  ebx = 0;
/* 929936: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 929938: jbe 0x929973 */
  if ((cf | zf)) goto L_929973;
L_92993a: /* 92993a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_929940: /* 929940: xor esi, esi */
  esi = 0;
/* 929942: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 929944: jbe 0x92996b */
  if ((cf | zf)) goto L_92996b;
L_929946: /* 929946: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 929949: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 92994c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92994e: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929952: je 0x929963 */
  if (zf) goto L_929963;
L_929954: /* 929954: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929955: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929956: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929957: call 0x9290a0 */
  esp -= 4; W32(esp, 0x92995cu); SPILL(); f_9290a0(); if (g_unwind) return; RELOAD();
/* 92995c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92995f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929961: je 0x92997c */
  if (zf) goto L_92997c;
L_929963: /* 929963: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 929966: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 929967: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 929969: jb 0x929946 */
  if (cf) goto L_929946;
L_92996b: /* 92996b: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92996e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 92996f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 929971: jb 0x929940 */
  if (cf) goto L_929940;
L_929973: /* 929973: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929974: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929975: mov eax, 1 */
  eax = 0x1u;
/* 92997a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92997b: ret  */
  esp += 4; SPILL(); return;
L_92997c: /* 92997c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92997d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92997e: xor eax, eax */
  eax = 0;
/* 929980: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929981: ret  */
  esp += 4; SPILL(); return;
}

void f_929990(void) {
  LOAD_REGS();
L_929990: /* 929990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929991: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929992: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929993: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 929998: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92999eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92999e: mov esi, eax */
  esi = eax;
/* 9299a0: xor ebx, ebx */
  ebx = 0;
/* 9299a2: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 9299a5: call 0x975ba0 */
  esp -= 4; W32(esp, 0x9299aau); SPILL(); f_975ba0(); if (g_unwind) return; RELOAD();
/* 9299aa: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 9299b0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9299b4: add eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9299b7: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 9299ba: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9299bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9299be: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9299c0: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 9299c3: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9299c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9299c9: mov edi, eax */
  edi = eax;
/* 9299cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9299cd: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 9299d0: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9299d3: mov edx, ecx */
  edx = ecx;
/* 9299d5: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9299d8: xor eax, eax */
  eax = 0;
/* 9299da: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 9299dd: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9299df: mov ecx, edx */
  ecx = edx;
/* 9299e1: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9299e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9299e5: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 9299e7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9299eb: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 9299ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9299ee: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 9299f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9299f2: call dword ptr [0xb02208] */
  { uint32_t t = R32((uint32_t)(0xb02208u)); esp -= 4; W32(esp, 0x9299f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9299f8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9299fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9299fd: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 9299ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 929a00: lea eax, [esi + 0x60] */
  eax = (uint32_t)(esi + 0x60u);
/* 929a03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929a04: call dword ptr [0xb02208] */
  { uint32_t t = R32((uint32_t)(0xb02208u)); esp -= 4; W32(esp, 0x929a0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929a0a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 929a0c: mov ecx, eax */
  ecx = eax;
/* 929a0e: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 929a11: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 929a14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929a15: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x929a1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929a1b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 929a1d: imul ecx, ecx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ecx);
  ecx = (uint32_t)r;
  }
/* 929a20: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 929a23: mov edx, ecx */
  edx = ecx;
/* 929a25: mov edi, eax */
  edi = eax;
/* 929a27: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 929a2a: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 929a2d: xor eax, eax */
  eax = 0;
/* 929a2f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 929a31: mov ecx, edx */
  ecx = edx;
/* 929a33: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 929a36: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 929a38: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 929a3a: mov dword ptr [esi + 0x40], ebx */
  W32((uint32_t)(esi + 0x40u), ebx);
/* 929a3d: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 929a40: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x929a46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929a46: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 929a4a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 929a4e: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 929a54: fmul dword ptr [0xa15904] */
  ST0 = ST0 * (F32((uint32_t)(0xa15904u)));
/* 929a5a: mov dword ptr [eax], 4 */
  W32((uint32_t)(eax), 0x4u);
/* 929a60: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 929a66: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 929a69: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 929a6f: fstp dword ptr [esi + 0x7c] */
  WF32((uint32_t)(esi + 0x7cu), ST0); FPOP();
/* 929a72: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 929a78: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 929a7b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 929a7e: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 929a81: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 929a84: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 929a8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929a8b: mov eax, esi */
  eax = esi;
/* 929a8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929a8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929a8f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_929aa0(void) {
  LOAD_REGS();
L_929aa0: /* 929aa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929aa1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 929aa5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 929aa8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 929aa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929aaa: xor ebp, ebp */
  ebp = 0;
/* 929aac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929aae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929aaf: je 0x929abe */
  if (zf) goto L_929abe;
L_929ab1: /* 929ab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929ab2: call 0x928510 */
  esp -= 4; W32(esp, 0x929ab7u); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 929ab7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 929aba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929abc: jne 0x929ab1 */
  if (!zf) goto L_929ab1;
L_929abe: /* 929abe: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 929ac1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929ac3: je 0x929b03 */
  if (zf) goto L_929b03;
L_929ac5: /* 929ac5: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 929ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929ac9: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x929aceu); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 929ace: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929ad0: jne 0x929ad8 */
  if (!zf) goto L_929ad8;
L_929ad2: /* 929ad2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929ad3: call 0x92a810 */
  esp -= 4; W32(esp, 0x929ad8u); SPILL(); f_92a810(); if (g_unwind) return; RELOAD();
L_929ad8: /* 929ad8: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 929adb: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929add: jne 0x929ae7 */
  if (!zf) goto L_929ae7;
L_929adf: /* 929adf: mov ecx, ebp */
  ecx = ebp;
/* 929ae1: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 929ae2: cmp ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929ae5: jg 0x929af4 */
  if ((!zf && sf == of)) goto L_929af4;
L_929ae7: /* 929ae7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929ae9: mov esi, edi */
  esi = edi;
/* 929aeb: jne 0x929ac5 */
  if (!zf) goto L_929ac5;
L_929aed: /* 929aed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929aee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929aef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 929af0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929af1: ret 4 */
  esp += 8; SPILL(); return;
L_929af4: /* 929af4: push 0xaf2fe0 */
  { uint32_t v = 0xaf2fe0u; esp -= 4; W32(esp, v); }
/* 929af9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 929afb: call 0x971e20 */
  esp -= 4; W32(esp, 0x929b00u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 929b00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_929b03: /* 929b03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929b04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929b05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 929b06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929b07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929b10(void) {
  LOAD_REGS();
L_929b10: /* 929b10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929b14: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 929b17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929b20(void) {
  LOAD_REGS();
L_929b20: /* 929b20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929b24: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 929b27: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929b30(void) {
  LOAD_REGS();
L_929b30: /* 929b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929b31: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 929b35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929b36: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 929b39: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929b3b: je 0x929b4d */
  if (zf) goto L_929b4d;
L_929b3d: /* 929b3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_929b40: /* 929b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929b41: call dword ptr [edi] */
  { uint32_t t = R32((uint32_t)(edi)); esp -= 4; W32(esp, 0x929b43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929b43: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 929b46: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929b49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929b4b: jne 0x929b40 */
  if (!zf) goto L_929b40;
L_929b4d: /* 929b4d: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 929b50: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929b52: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 929b55: je 0x929b5e */
  if (zf) goto L_929b5e;
L_929b57: /* 929b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929b58: call dword ptr [0xb0220c] */
  { uint32_t t = R32((uint32_t)(0xb0220cu)); esp -= 4; W32(esp, 0x929b5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_929b5e: /* 929b5e: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 929b61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929b62: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 929b68: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 929b6f: call dword ptr [0xb0220c] */
  { uint32_t t = R32((uint32_t)(0xb0220cu)); esp -= 4; W32(esp, 0x929b75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929b75: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 929b78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929b79: call dword ptr [0xb0220c] */
  { uint32_t t = R32((uint32_t)(0xb0220cu)); esp -= 4; W32(esp, 0x929b7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929b7f: mov edx, dword ptr [esi + 0x84] */
  edx = R32((uint32_t)(esi + 0x84u));
/* 929b85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 929b86: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x929b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929b8c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 929b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929b90: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x929b96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929b96: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 929b99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929b9a: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x929ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929ba0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 929ba3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929ba5: je 0x929bae */
  if (zf) goto L_929bae;
L_929ba7: /* 929ba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929ba8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x929baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_929bae: /* 929bae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929baf: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x929bb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929bb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929bb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929bb7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929bc0(void) {
  LOAD_REGS();
L_929bc0: /* 929bc0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 929bc2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x929bc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 929bc8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 929bcc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 929bce: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 929bd2: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 929bd5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 929bd8: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 929bdb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_929be0(void) {
  LOAD_REGS();
L_929be0: /* 929be0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 929be4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929be8: fstp dword ptr [eax + 0x7c] */
  WF32((uint32_t)(eax + 0x7cu), ST0); FPOP();
/* 929beb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_929bf0(void) {
  LOAD_REGS();
L_929bf0: /* 929bf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929bf4: fld dword ptr [eax + 0x7c] */
  { double v = F32((uint32_t)(eax + 0x7cu)); FPUSH(v); }
/* 929bf7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929c00(void) {
  LOAD_REGS();
L_929c00: /* 929c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929c04: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 929c0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929c10(void) {
  LOAD_REGS();
L_929c10: /* 929c10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 929c14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 929c16: jl 0x929c36 */
  if ((sf != of)) goto L_929c36;
L_929c18: /* 929c18: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 929c1c: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929c1e: jge 0x929c36 */
  if ((sf == of)) goto L_929c36;
L_929c20: /* 929c20: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 929c23: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 929c26: mov edx, dword ptr [ecx + eax*8 + 0x24] */
  edx = R32((uint32_t)(ecx + eax*8 + 0x24u));
/* 929c2a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929c2c: je 0x929c36 */
  if (zf) goto L_929c36;
L_929c2e: /* 929c2e: mov eax, 1 */
  eax = 0x1u;
/* 929c33: ret 8 */
  esp += 12; SPILL(); return;
L_929c36: /* 929c36: xor eax, eax */
  eax = 0;
/* 929c38: ret 8 */
  esp += 12; SPILL(); return;
}

void f_929c40(void) {
  LOAD_REGS();
L_929c40: /* 929c40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929c41: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 929c45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929c46: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 929c4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929c4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929c4c: call 0x929c10 */
  esp -= 4; W32(esp, 0x929c51u); SPILL(); f_929c10(); if (g_unwind) return; RELOAD();
/* 929c51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929c53: jne 0x929c5f */
  if (!zf) goto L_929c5f;
L_929c55: /* 929c55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929c56: mov eax, 0xaf3038 */
  eax = 0xaf3038u;
/* 929c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929c5c: ret 8 */
  esp += 12; SPILL(); return;
L_929c5f: /* 929c5f: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 929c62: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 929c65: mov eax, dword ptr [ecx + eax*8 + 0x20] */
  eax = R32((uint32_t)(ecx + eax*8 + 0x20u));
/* 929c69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929c6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929c6b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_929c70(void) {
  LOAD_REGS();
L_929c70: /* 929c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929c71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929c72: push 0xaf3088 */
  { uint32_t v = 0xaf3088u; esp -= 4; W32(esp, v); }
/* 929c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 929c79: call 0x971de0 */
  esp -= 4; W32(esp, 0x929c7eu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 929c7e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 929c82: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 929c85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929c86: push 0xaf3068 */
  { uint32_t v = 0xaf3068u; esp -= 4; W32(esp, v); }
/* 929c8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 929c8d: call 0x971de0 */
  esp -= 4; W32(esp, 0x929c92u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 929c92: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 929c95: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929c98: xor esi, esi */
  esi = 0;
/* 929c9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 929c9c: jle 0x929cc5 */
  if ((zf || sf != of)) goto L_929cc5;
L_929c9e: /* 929c9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929c9f: xor ebx, ebx */
  ebx = 0;
L_929ca1: /* 929ca1: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 929ca4: mov edx, dword ptr [ecx + ebx + 0x20] */
  edx = R32((uint32_t)(ecx + ebx + 0x20u));
/* 929ca8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 929ca9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929caa: push 0xaf3054 */
  { uint32_t v = 0xaf3054u; esp -= 4; W32(esp, v); }
/* 929caf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 929cb1: call 0x971de0 */
  esp -= 4; W32(esp, 0x929cb6u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 929cb6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 929cb9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929cbc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 929cbd: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 929cc0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929cc2: jl 0x929ca1 */
  if ((sf != of)) goto L_929ca1;
L_929cc4: /* 929cc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_929cc5: /* 929cc5: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 929cca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 929ccc: call 0x971de0 */
  esp -= 4; W32(esp, 0x929cd1u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 929cd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929cd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929cd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929cd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929ce0(void) {
  LOAD_REGS();
L_929ce0: /* 929ce0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 929ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 929ce6: jl 0x929d06 */
  if ((sf != of)) goto L_929d06;
L_929ce8: /* 929ce8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 929cec: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929cee: jge 0x929d06 */
  if ((sf == of)) goto L_929d06;
L_929cf0: /* 929cf0: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 929cf3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 929cf6: mov edx, dword ptr [ecx + eax*8 + 0x24] */
  edx = R32((uint32_t)(ecx + eax*8 + 0x24u));
/* 929cfa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929cfc: je 0x929d06 */
  if (zf) goto L_929d06;
L_929cfe: /* 929cfe: mov eax, 1 */
  eax = 0x1u;
/* 929d03: ret 8 */
  esp += 12; SPILL(); return;
L_929d06: /* 929d06: xor eax, eax */
  eax = 0;
/* 929d08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_929d10(void) {
  LOAD_REGS();
L_929d10: /* 929d10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929d14: mov ax, word ptr [eax + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 929d18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929d20(void) {
  LOAD_REGS();
L_929d20: /* 929d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929d24: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 929d2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929d30(void) {
  LOAD_REGS();
L_929d30: /* 929d30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 929d34: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 929d38: mov dword ptr [ecx + 0x88], eax */
  W32((uint32_t)(ecx + 0x88u), eax);
/* 929d3e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_929d50(void) {
  LOAD_REGS();
L_929d50: /* 929d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929d51: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 929d55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 929d57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929d58: movsx edi, word ptr [esp + 0x10] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x10u)));
/* 929d5d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929d5f: jg 0x929d84 */
  if ((!zf && sf == of)) goto L_929d84;
L_929d61: /* 929d61: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* 929d66: push 0xaf30d8 */
  { uint32_t v = 0xaf30d8u; esp -= 4; W32(esp, v); }
/* 929d6b: push 0xaf30c0 */
  { uint32_t v = 0xaf30c0u; esp -= 4; W32(esp, v); }
/* 929d70: push 0xaf30a0 */
  { uint32_t v = 0xaf30a0u; esp -= 4; W32(esp, v); }
/* 929d75: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 929d77: push 0xaf3270 */
  { uint32_t v = 0xaf3270u; esp -= 4; W32(esp, v); }
/* 929d7c: call 0x92ae50 */
  esp -= 4; W32(esp, 0x929d81u); SPILL(); f_92ae50(); if (g_unwind) return; RELOAD();
/* 929d81: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_929d84: /* 929d84: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 929d87: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 929d8a: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 929d8d: mov dword ptr [ecx + eax + 0x24], 1 */
  W32((uint32_t)(ecx + eax + 0x24u), 0x1u);
/* 929d95: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 929d98: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 929d9c: mov dword ptr [eax + edx], ecx */
  W32((uint32_t)(eax + edx), ecx);
/* 929d9f: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 929da2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 929da6: mov dword ptr [edx + eax + 4], ecx */
  W32((uint32_t)(edx + eax + 0x4u), ecx);
/* 929daa: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 929dad: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 929db1: mov dword ptr [edx + eax + 8], ecx */
  W32((uint32_t)(edx + eax + 0x8u), ecx);
/* 929db5: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 929db8: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 929dbc: mov dword ptr [edx + eax + 0xc], ecx */
  W32((uint32_t)(edx + eax + 0xcu), ecx);
/* 929dc0: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 929dc3: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 929dc7: mov dword ptr [edx + eax + 0x10], ecx */
  W32((uint32_t)(edx + eax + 0x10u), ecx);
/* 929dcb: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 929dce: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 929dd2: mov dword ptr [edx + eax + 0x18], ecx */
  W32((uint32_t)(edx + eax + 0x18u), ecx);
/* 929dd6: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 929dd9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 929ddd: mov dword ptr [edx + eax + 0x20], ecx */
  W32((uint32_t)(edx + eax + 0x20u), ecx);
/* 929de1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 929de4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 929de5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929de6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 929de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929dea: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_929df0(void) {
  LOAD_REGS();
L_929df0: /* 929df0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 929df4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 929df6: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 929df9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929dfa: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 929dfe: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 929e01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 929e02: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 929e06: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929e08: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 929e0b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929e0d: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 929e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929e10: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 929e14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929e15: mov ecx, 7 */
  ecx = 0x7u;
/* 929e1a: mov edi, eax */
  edi = eax;
/* 929e1c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 929e1e: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* 929e25: je 0x929e4a */
  if (zf) goto L_929e4a;
L_929e27: /* 929e27: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 929e29: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 929e2c: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 929e2f: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 929e33: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929e35: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 929e38: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929e3a: mov ecx, 7 */
  ecx = 0x7u;
/* 929e3f: mov edi, eax */
  edi = eax;
/* 929e41: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 929e43: mov dword ptr [eax + 0x10], 1 */
  W32((uint32_t)(eax + 0x10u), 0x1u);
L_929e4a: /* 929e4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929e4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929e4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 929e4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929e4e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_929e60(void) {
  LOAD_REGS();
L_929e60: /* 929e60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 929e64: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 929e66: imul eax, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  eax = (uint32_t)r;
  }
/* 929e6b: add eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929e6f: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 929e72: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 929e75: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 929e77: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_929e80(void) {
  LOAD_REGS();
L_929e80: /* 929e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929e84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 929e86: imul ecx, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  ecx = (uint32_t)r;
  }
/* 929e8b: add ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 929e8f: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 929e92: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 929e95: mov eax, dword ptr [ecx + edx + 0x18] */
  eax = R32((uint32_t)(ecx + edx + 0x18u));
/* 929e99: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_929ea0(void) {
  LOAD_REGS();
L_929ea0: /* 929ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 929ea4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 929ea6: imul ecx, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  ecx = (uint32_t)r;
  }
/* 929eab: add ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 929eaf: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 929eb2: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 929eb5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 929eb9: mov dword ptr [ecx + edx + 0x18], eax */
  W32((uint32_t)(ecx + edx + 0x18u), eax);
/* 929ebd: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_929ec0(void) {
  LOAD_REGS();
L_929ec0: /* 929ec0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 929ec4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 929ec8: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 929ecb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 929ecf: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 929ed2: mov dword ptr [edx + eax*8 + 0x1c], ecx */
  W32((uint32_t)(edx + eax*8 + 0x1cu), ecx);
/* 929ed6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_929ee0(void) {
  LOAD_REGS();
L_929ee0: /* 929ee0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 929ee4: xor eax, eax */
  eax = 0;
/* 929ee6: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 929ee8: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 929eeb: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 929eee: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 929ef3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 929ef6: mov eax, dword ptr [edx + eax*8 + 0x1c] */
  eax = R32((uint32_t)(edx + eax*8 + 0x1cu));
/* 929efa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929f00(void) {
  LOAD_REGS();
L_929f00: /* 929f00: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 929f03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929f04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929f05: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 929f09: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 929f0b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 929f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929f10: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 929f14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929f15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 929f16: mov esi, 1 */
  esi = 0x1u;
/* 929f1b: call 0x928710 */
  esp -= 4; W32(esp, 0x929f20u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 929f20: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 929f23: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 929f27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929f28: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 929f2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929f2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 929f2e: call 0x928710 */
  esp -= 4; W32(esp, 0x929f33u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 929f33: xor ecx, ecx */
  ecx = 0;
L_929f35: /* 929f35: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 929f38: jge 0x929f61 */
  if ((sf == of)) goto L_929f61;
L_929f3a: /* 929f3a: fld dword ptr [esp + ecx + 8] */
  { double v = F32((uint32_t)(esp + ecx + 0x8u)); FPUSH(v); }
/* 929f3e: fcomp dword ptr [esp + ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + ecx + 0x14u)));
  FPOP();
/* 929f42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 929f44: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 929f47: jnp 0x929f58 */
  if (!pf) goto L_929f58;
L_929f49: /* 929f49: fld dword ptr [esp + ecx + 0x20] */
  { double v = F32((uint32_t)(esp + ecx + 0x20u)); FPUSH(v); }
/* 929f4d: fcomp dword ptr [esp + ecx + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + ecx + 0x2cu)));
  FPOP();
/* 929f51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 929f53: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 929f56: jne 0x929f5a */
  if (!zf) goto L_929f5a;
L_929f58: /* 929f58: xor esi, esi */
  esi = 0;
L_929f5a: /* 929f5a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 929f5d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929f5f: jne 0x929f35 */
  if (!zf) goto L_929f35;
L_929f61: /* 929f61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929f62: mov eax, esi */
  eax = esi;
/* 929f64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929f65: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 929f68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929f70(void) {
  LOAD_REGS();
L_929f70: /* 929f70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 929f71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929f72: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 929f76: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 929f79: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 929f7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 929f7e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 929f80: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 929f83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929f84: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 929f86: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 929f88: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 929f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929f8f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 929f94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929f95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929f96: call 0x929e60 */
  esp -= 4; W32(esp, 0x929f9bu); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 929f9b: mov ebx, eax */
  ebx = eax;
/* 929f9d: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 929fa0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929fa2: je 0x929fae */
  if (zf) goto L_929fae;
L_929fa4: /* 929fa4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 929fa6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 929fa9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 929fab: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_929fae: /* 929fae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 929faf: call 0x929d20 */
  esp -= 4; W32(esp, 0x929fb4u); SPILL(); f_929d20(); if (g_unwind) return; RELOAD();
/* 929fb4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 929fb7: mov edi, dword ptr [edi + 0x40] */
  edi = R32((uint32_t)(edi + 0x40u));
/* 929fba: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929fbc: je 0x929fc1 */
  if (zf) goto L_929fc1;
L_929fbe: /* 929fbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929fbf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x929fc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_929fc1: /* 929fc1: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 929fc3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929fc5: je 0x929fca */
  if (zf) goto L_929fca;
L_929fc7: /* 929fc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929fc8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x929fcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_929fca: /* 929fca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 929fcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 929fcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 929fcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_929fd0(void) {
  LOAD_REGS();
L_929fd0: /* 929fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 929fd1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 929fd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 929fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929fd9: call 0x9285d0 */
  esp -= 4; W32(esp, 0x929fdeu); SPILL(); f_9285d0(); if (g_unwind) return; RELOAD();
/* 929fde: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 929fe0: movsx ecx, ax */
  ecx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 929fe3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 929fe4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 929fe5: call 0x9285d0 */
  esp -= 4; W32(esp, 0x929feau); SPILL(); f_9285d0(); if (g_unwind) return; RELOAD();
/* 929fea: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 929fec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 929fee: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 929ff1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 929ff2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 929ff3: call 0x929e60 */
  esp -= 4; W32(esp, 0x929ff8u); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 929ff8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 929ffb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 929ffd: je 0x92a002 */
  if (zf) goto L_92a002;
L_929fff: /* 929fff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a000: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92a002u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_92a002: /* 92a002: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a003: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a010(void) {
  LOAD_REGS();
L_92a010: /* 92a010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92a011: mov ebp, esp */
  ebp = esp;
/* 92a013: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a014: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a016: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 92a019: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92a01b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a01c: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 92a01e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a01f: call 0x9285d0 */
  esp -= 4; W32(esp, 0x92a024u); SPILL(); f_9285d0(); if (g_unwind) return; RELOAD();
/* 92a024: movsx ebx, ax */
  ebx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 92a027: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 92a02a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a02b: call 0x9285d0 */
  esp -= 4; W32(esp, 0x92a030u); SPILL(); f_9285d0(); if (g_unwind) return; RELOAD();
/* 92a030: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 92a033: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 92a036: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 92a039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a03a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a03b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a03c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 92a03f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 92a041: call 0x929e60 */
  esp -= 4; W32(esp, 0x92a046u); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 92a046: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 92a049: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a04b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 92a04e: jne 0x92a0a5 */
  if (!zf) goto L_92a0a5;
L_92a050: /* 92a050: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 92a053: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a054: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a055: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a056: call 0x929e80 */
  esp -= 4; W32(esp, 0x92a05bu); SPILL(); f_929e80(); if (g_unwind) return; RELOAD();
/* 92a05b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a05d: jne 0x92a0a2 */
  if (!zf) goto L_92a0a2;
L_92a05f: /* 92a05f: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 92a062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a063: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a064: call 0x929c40 */
  esp -= 4; W32(esp, 0x92a069u); SPILL(); f_929c40(); if (g_unwind) return; RELOAD();
/* 92a069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a06a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a06b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a06c: call 0x929c40 */
  esp -= 4; W32(esp, 0x92a071u); SPILL(); f_929c40(); if (g_unwind) return; RELOAD();
/* 92a071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a072: push 0xaf2fb4 */
  { uint32_t v = 0xaf2fb4u; esp -= 4; W32(esp, v); }
/* 92a077: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92a079: call 0x971e20 */
  esp -= 4; W32(esp, 0x92a07eu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 92a07e: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 92a081: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92a084: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92a086: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a087: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a088: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a089: call 0x929ea0 */
  esp -= 4; W32(esp, 0x92a08eu); SPILL(); f_929ea0(); if (g_unwind) return; RELOAD();
/* 92a08e: xor eax, eax */
  eax = 0;
/* 92a090: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 92a093: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 92a096: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* 92a099: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a09a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a09b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92a09c: mov esp, ebp */
  esp = ebp;
/* 92a09e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92a09f: ret 8 */
  esp += 12; SPILL(); return;
L_92a0a2: /* 92a0a2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_92a0a5: /* 92a0a5: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 92a0a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a0aa: je 0x92a0c3 */
  if (zf) goto L_92a0c3;
L_92a0ac: /* 92a0ac: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 92a0af: mov eax, 0x5000 */
  eax = 0x5000u;
/* 92a0b4: call 0x99cc00 */
  esp -= 4; W32(esp, 0x92a0b9u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 92a0b9: mov eax, esp */
  eax = esp;
/* 92a0bb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 92a0be: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 92a0c1: jmp 0x92a0c6 */
  goto L_92a0c6;
L_92a0c3: /* 92a0c3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_92a0c6: /* 92a0c6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 92a0c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a0ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a0cb: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x92a0ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a0ce: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 92a0d1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 92a0d4: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 92a0d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a0d9: je 0x92a107 */
  if (zf) goto L_92a107;
L_92a0db: /* 92a0db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 92a0de: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92a0e1: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* 92a0e7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 92a0ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a0eb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92a0ed: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92a0f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a0f1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92a0f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a0f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a0f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a0f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a0f8: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 92a0fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a0fc: call 0x92bb80 */
  esp -= 4; W32(esp, 0x92a101u); SPILL(); f_92bb80(); if (g_unwind) return; RELOAD();
/* 92a101: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 92a104: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
L_92a107: /* 92a107: mov eax, 1 */
  eax = 0x1u;
/* 92a10c: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* 92a10f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a110: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a111: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92a112: mov esp, ebp */
  esp = ebp;
/* 92a114: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92a115: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a120(void) {
  LOAD_REGS();
L_92a120: /* 92a120: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92a126: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a127: mov ebx, dword ptr [esp + 0x8c] */
  ebx = R32((uint32_t)(esp + 0x8cu));
/* 92a12e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92a12f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a130: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 92a132: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a133: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 92a136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a137: call 0x928730 */
  esp -= 4; W32(esp, 0x92a13cu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92a13c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a13d: mov ebp, eax */
  ebp = eax;
/* 92a13f: call 0x928730 */
  esp -= 4; W32(esp, 0x92a144u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92a144: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 92a147: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 92a14e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92a14f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92a153: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 92a156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a157: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a158: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a159: push 0x38d1b717 */
  { uint32_t v = 0x38d1b717u; esp -= 4; W32(esp, v); }
/* 92a15e: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 92a162: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a163: call 0x9743d0 */
  esp -= 4; W32(esp, 0x92a168u); SPILL(); f_9743d0(); if (g_unwind) return; RELOAD();
/* 92a168: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92a16c: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 92a16f: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 92a172: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a173: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 92a17a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a17b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a17c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a17d: push 0x38d1b717 */
  { uint32_t v = 0x38d1b717u; esp -= 4; W32(esp, v); }
/* 92a182: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 92a186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a187: call 0x9743d0 */
  esp -= 4; W32(esp, 0x92a18cu); SPILL(); f_9743d0(); if (g_unwind) return; RELOAD();
/* 92a18c: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 92a190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a192: call 0x928740 */
  esp -= 4; W32(esp, 0x92a197u); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 92a197: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 92a19b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a19c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a19d: call 0x928740 */
  esp -= 4; W32(esp, 0x92a1a2u); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 92a1a2: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 92a1a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a1aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a1ab: call 0x92a010 */
  esp -= 4; W32(esp, 0x92a1b0u); SPILL(); f_92a010(); if (g_unwind) return; RELOAD();
/* 92a1b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92a1b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a1b2: mov ebx, eax */
  ebx = eax;
/* 92a1b4: call 0x928740 */
  esp -= 4; W32(esp, 0x92a1b9u); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 92a1b9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92a1bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a1be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a1bf: call 0x928740 */
  esp -= 4; W32(esp, 0x92a1c4u); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 92a1c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a1c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a1c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92a1c7: mov eax, ebx */
  eax = ebx;
/* 92a1c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92a1ca: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92a1d0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a1e0(void) {
  LOAD_REGS();
L_92a1e0: /* 92a1e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a1e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a1e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 92a1e6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92a1e9: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 92a1ec: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92a1ee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92a1f0: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 92a1f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a1f4: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92a1fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a1fb: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92a1fd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92a1ff: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92a205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a206: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a207: call 0x929e60 */
  esp -= 4; W32(esp, 0x92a20cu); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 92a20c: mov edi, eax */
  edi = eax;
/* 92a20e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92a211: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a213: je 0x92a253 */
  if (zf) goto L_92a253;
L_92a215: /* 92a215: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 92a217: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 92a21a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a21c: je 0x92a253 */
  if (zf) goto L_92a253;
L_92a21e: /* 92a21e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92a221: mov ebx, dword ptr [ecx + 0x10] */
  ebx = R32((uint32_t)(ecx + 0x10u));
/* 92a224: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a226: je 0x92a253 */
  if (zf) goto L_92a253;
L_92a228: /* 92a228: mov ebx, dword ptr [edx + 0x14] */
  ebx = R32((uint32_t)(edx + 0x14u));
/* 92a22b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a22d: je 0x92a253 */
  if (zf) goto L_92a253;
L_92a22f: /* 92a22f: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 92a232: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a234: je 0x92a253 */
  if (zf) goto L_92a253;
L_92a236: /* 92a236: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 92a23a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 92a23e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a23f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a241: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92a243u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a243: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 92a246: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a247: xor eax, eax */
  eax = 0;
/* 92a249: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a24b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a24c: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 92a24f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92a250: ret 0xc */
  esp += 16; SPILL(); return;
L_92a253: /* 92a253: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92a257: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92a25b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92a25e: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 92a261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a262: xor eax, eax */
  eax = 0;
/* 92a264: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a266: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a267: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 92a26a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92a26b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a270(void) {
  LOAD_REGS();
L_92a270: /* 92a270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a271: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92a275: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a276: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 92a27a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a27b: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 92a27d: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92a282u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92a282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a283: call 0x92a860 */
  esp -= 4; W32(esp, 0x92a288u); SPILL(); f_92a860(); if (g_unwind) return; RELOAD();
/* 92a288: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a28a: je 0x92a2a8 */
  if (zf) goto L_92a2a8;
L_92a28c: /* 92a28c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92a290: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92a294: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a295: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a296: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a297: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a298: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92a29au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a29a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a29c: je 0x92a2a8 */
  if (zf) goto L_92a2a8;
L_92a29e: /* 92a29e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a29f: mov eax, 1 */
  eax = 0x1u;
/* 92a2a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a2a5: ret 0x10 */
  esp += 20; SPILL(); return;
L_92a2a8: /* 92a2a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a2a9: xor eax, eax */
  eax = 0;
/* 92a2ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a2ac: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92a2b0(void) {
  LOAD_REGS();
L_92a2b0: /* 92a2b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92a2b4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a2b8: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* 92a2bb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a2c0(void) {
  LOAD_REGS();
L_92a2c0: /* 92a2c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a2c4: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 92a2c7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a2d0(void) {
  LOAD_REGS();
L_92a2d0: /* 92a2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a2d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a2d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 92a2d6: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 92a2d9: cmp esi, dword ptr [edi + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a2dc: jge 0x92a2f3 */
  if ((sf == of)) goto L_92a2f3;
L_92a2de: /* 92a2de: mov edi, edi */
  edi = edi;
L_92a2e0: /* 92a2e0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92a2e2: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 92a2e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a2e6: call 0x929f70 */
  esp -= 4; W32(esp, 0x92a2ebu); SPILL(); f_929f70(); if (g_unwind) return; RELOAD();
/* 92a2eb: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 92a2ee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 92a2ef: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a2f1: jl 0x92a2e0 */
  if ((sf != of)) goto L_92a2e0;
L_92a2f3: /* 92a2f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a2f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a2f5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a300(void) {
  LOAD_REGS();
L_92a300: /* 92a300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a301: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a302: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 92a306: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92a309: xor esi, esi */
  esi = 0;
/* 92a30b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92a30d: jle 0x92a323 */
  if ((zf || sf != of)) goto L_92a323;
L_92a30f: /* 92a30f: nop  */
L_92a310: /* 92a310: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92a312: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 92a315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a316: call 0x929fd0 */
  esp -= 4; W32(esp, 0x92a31bu); SPILL(); f_929fd0(); if (g_unwind) return; RELOAD();
/* 92a31b: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92a31e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 92a31f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a321: jl 0x92a310 */
  if ((sf != of)) goto L_92a310;
L_92a323: /* 92a323: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a325: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a330(void) {
  LOAD_REGS();
L_92a330: /* 92a330: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92a333: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92a337: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92a338: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 92a33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92a33f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92a340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a341: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a342: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* 92a345: xor edx, edx */
  edx = 0;
/* 92a347: xor eax, eax */
  eax = 0;
/* 92a349: xor esi, esi */
  esi = 0;
/* 92a34b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a34d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92a351: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92a355: jge 0x92a3c1 */
  if ((sf == of)) goto L_92a3c1;
L_92a357: /* 92a357: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 92a35b: nop  */
/* 92a35c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92a360: /* 92a360: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92a362: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 92a365: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 92a369: mov ebp, dword ptr [ecx + 0xc] */
  ebp = R32((uint32_t)(ecx + 0xcu));
/* 92a36c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92a36e: cmp eax, dword ptr [ebp] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a371: jl 0x92a3bc */
  if ((sf != of)) goto L_92a3bc;
L_92a373: /* 92a373: cmp edx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a377: jge 0x92a3bc */
  if ((sf == of)) goto L_92a3bc;
L_92a379: /* 92a379: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 92a37d: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 92a380: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a381: lea edx, [ebp + edx*8] */
  edx = (uint32_t)(ebp + edx*8);
/* 92a385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a386: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 92a38a: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 92a38d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 92a390: call 0x92a010 */
  esp -= 4; W32(esp, 0x92a395u); SPILL(); f_92a010(); if (g_unwind) return; RELOAD();
/* 92a395: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 92a399: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92a39d: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 92a3a0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92a3a4: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 92a3a7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 92a3a8: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92a3ab: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92a3ad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 92a3ae: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a3b0: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92a3b4: jl 0x92a360 */
  if ((sf != of)) goto L_92a360;
L_92a3b6: /* 92a3b6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92a3ba: jmp 0x92a3c1 */
  goto L_92a3c1;
L_92a3bc: /* 92a3bc: mov eax, 1 */
  eax = 0x1u;
L_92a3c1: /* 92a3c1: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92a3c5: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 92a3c8: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92a3cc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92a3ce: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 92a3d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a3d3: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 92a3d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a3d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92a3d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92a3d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92a3db: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_92a3e0(void) {
  LOAD_REGS();
L_92a3e0: /* 92a3e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a3e1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 92a3e3: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92a3e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a3e9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92a3ed: mov esi, eax */
  esi = eax;
/* 92a3ef: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92a3f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a3f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a3f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a3f6: call 0x92a410 */
  esp -= 4; W32(esp, 0x92a3fbu); SPILL(); f_92a410(); if (g_unwind) return; RELOAD();
/* 92a3fb: mov eax, esi */
  eax = esi;
/* 92a3fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a3fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a410(void) {
  LOAD_REGS();
L_92a410: /* 92a410: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92a414: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92a418: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a419: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92a41d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 92a41f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 92a422: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92a424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a425: call 0x929d20 */
  esp -= 4; W32(esp, 0x92a42au); SPILL(); f_929d20(); if (g_unwind) return; RELOAD();
/* 92a42a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 92a42d: xor eax, eax */
  eax = 0;
/* 92a42f: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 92a432: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 92a435: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a436: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a440(void) {
  LOAD_REGS();
L_92a440: /* 92a440: jmp dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); SPILL(); call_ind(t); return; }
}

void f_92a450(void) {
  LOAD_REGS();
L_92a450: /* 92a450: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a454: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92a456: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92a45a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 92a45c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 92a45f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92a463: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92a465: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a470(void) {
  LOAD_REGS();
L_92a470: /* 92a470: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92a474: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a478: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 92a47b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a480(void) {
  LOAD_REGS();
L_92a480: /* 92a480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a484: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 92a487: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a490(void) {
  LOAD_REGS();
L_92a490: /* 92a490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a494: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 92a497: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a4a0(void) {
  LOAD_REGS();
L_92a4a0: /* 92a4a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92a4a4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a4a8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 92a4ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a4b0(void) {
  LOAD_REGS();
L_92a4b0: /* 92a4b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a4b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a4b2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 92a4b4: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92a4bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a4ba: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 92a4be: mov esi, eax */
  esi = eax;
/* 92a4c0: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 92a4c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a4c8: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92a4ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a4ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92a4cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a4d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a4d1: call 0x92a4e0 */
  esp -= 4; W32(esp, 0x92a4d6u); SPILL(); f_92a4e0(); if (g_unwind) return; RELOAD();
/* 92a4d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92a4d7: mov eax, esi */
  eax = esi;
/* 92a4d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a4da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a4e0(void) {
  LOAD_REGS();
L_92a4e0: /* 92a4e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a4e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92a4e8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92a4ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a4ed: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92a4ef: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 92a4f2: call 0x92a500 */
  esp -= 4; W32(esp, 0x92a4f7u); SPILL(); f_92a500(); if (g_unwind) return; RELOAD();
/* 92a4f7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a500(void) {
  LOAD_REGS();
L_92a500: /* 92a500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a504: xor ecx, ecx */
  ecx = 0;
/* 92a506: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92a509: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92a50c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 92a50f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92a512: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 92a515: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 92a518: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a520(void) {
  LOAD_REGS();
L_92a520: /* 92a520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a521: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92a525: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92a527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a528: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92a52eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a52e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a52f: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92a535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a535: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a536: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a540(void) {
  LOAD_REGS();
L_92a540: /* 92a540: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a544: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 92a547: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a550(void) {
  LOAD_REGS();
L_92a550: /* 92a550: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a554: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 92a557: sub eax, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92a55a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a560(void) {
  LOAD_REGS();
L_92a560: /* 92a560: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a564: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 92a567: sub eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92a56a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a570(void) {
  LOAD_REGS();
L_92a570: /* 92a570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a574: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 92a577: cmp dword ptr [eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92a57a: jne 0x92a581 */
  if (!zf) goto L_92a581;
L_92a57c: /* 92a57c: xor eax, eax */
  eax = 0;
/* 92a57e: ret 8 */
  esp += 12; SPILL(); return;
L_92a581: /* 92a581: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92a585: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92a586: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92a589: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 92a58b: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 92a58e: mov eax, 1 */
  eax = 0x1u;
/* 92a593: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a5a0(void) {
  LOAD_REGS();
L_92a5a0: /* 92a5a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a5a4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92a5a7: cmp ecx, dword ptr [eax + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92a5aa: jne 0x92a5b1 */
  if (!zf) goto L_92a5b1;
L_92a5ac: /* 92a5ac: xor eax, eax */
  eax = 0;
/* 92a5ae: ret 8 */
  esp += 12; SPILL(); return;
L_92a5b1: /* 92a5b1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92a5b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a5b4: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 92a5b8: mov dword ptr [edx + ecx*4], esi */
  W32((uint32_t)(edx + ecx*4), esi);
/* 92a5bb: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 92a5be: mov eax, 1 */
  eax = 0x1u;
/* 92a5c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a5c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a5d0(void) {
  LOAD_REGS();
L_92a5d0: /* 92a5d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a5d4: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 92a5d7: cmp dword ptr [eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92a5da: jne 0x92a5e1 */
  if (!zf) goto L_92a5e1;
L_92a5dc: /* 92a5dc: xor eax, eax */
  eax = 0;
/* 92a5de: ret 8 */
  esp += 12; SPILL(); return;
L_92a5e1: /* 92a5e1: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 92a5e4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 92a5e5: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 92a5e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a5e9: mov esi, edx */
  esi = edx;
/* 92a5eb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92a5ed: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92a5ee: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92a5f1: mov esi, dword ptr [edx + esi*4] */
  esi = R32((uint32_t)(edx + esi*4));
/* 92a5f4: mov dword ptr [edx + ecx*4], esi */
  W32((uint32_t)(edx + ecx*4), esi);
/* 92a5f7: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 92a5fa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92a5fc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92a600: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 92a603: mov eax, 1 */
  eax = 0x1u;
/* 92a608: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a609: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a610(void) {
  LOAD_REGS();
L_92a610: /* 92a610: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a614: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92a616: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92a61a: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 92a61c: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92a61f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92a621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a622: jge 0x92a629 */
  if ((sf == of)) goto L_92a629;
L_92a624: /* 92a624: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a627: jge 0x92a67b */
  if ((sf == of)) goto L_92a67b;
L_92a629: /* 92a629: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 92a62c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a62e: jge 0x92a63e */
  if ((sf == of)) goto L_92a63e;
L_92a630: /* 92a630: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 92a631: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 92a634: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 92a637: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 92a63a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a63b: ret 8 */
  esp += 12; SPILL(); return;
L_92a63e: /* 92a63e: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 92a641: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a643: jl 0x92a66b */
  if ((sf != of)) goto L_92a66b;
L_92a645: /* 92a645: mov esi, dword ptr [edx + esi*4] */
  esi = R32((uint32_t)(edx + esi*4));
/* 92a648: mov dword ptr [edx + ecx*4], esi */
  W32((uint32_t)(edx + ecx*4), esi);
/* 92a64b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92a64d: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 92a650: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 92a653: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 92a656: mov dword ptr [ecx + esi*4], edx */
  W32((uint32_t)(ecx + esi*4), edx);
/* 92a659: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 92a65c: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 92a65f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 92a660: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92a661: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 92a664: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92a667: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a668: ret 8 */
  esp += 12; SPILL(); return;
L_92a66b: /* 92a66b: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 92a66e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92a670: jl 0x92a67b */
  if ((sf != of)) goto L_92a67b;
L_92a672: /* 92a672: mov esi, dword ptr [edx + esi*4] */
  esi = R32((uint32_t)(edx + esi*4));
/* 92a675: mov dword ptr [edx + ecx*4], esi */
  W32((uint32_t)(edx + ecx*4), esi);
/* 92a678: inc dword ptr [eax + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x10u), r);
  }
L_92a67b: /* 92a67b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a67c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a680(void) {
  LOAD_REGS();
L_92a680: /* 92a680: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a684: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a685: call 0x92a540 */
  esp -= 4; W32(esp, 0x92a68au); SPILL(); f_92a540(); if (g_unwind) return; RELOAD();
/* 92a68a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92a68e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 92a690: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92a692: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a6a0(void) {
  LOAD_REGS();
L_92a6a0: /* 92a6a0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92a6a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a6a5: call 0x92a550 */
  esp -= 4; W32(esp, 0x92a6aau); SPILL(); f_92a550(); if (g_unwind) return; RELOAD();
/* 92a6aa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92a6ae: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92a6b0: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 92a6b3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92a6b5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 92a6b8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a6c0(void) {
  LOAD_REGS();
L_92a6c0: /* 92a6c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92a6c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a6c5: call 0x92a560 */
  esp -= 4; W32(esp, 0x92a6cau); SPILL(); f_92a560(); if (g_unwind) return; RELOAD();
/* 92a6ca: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92a6ce: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92a6d0: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 92a6d3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92a6d5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 92a6d8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a6e0(void) {
  LOAD_REGS();
L_92a6e0: /* 92a6e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92a6e4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a6e8: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92a6ea: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 92a6ed: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 92a6f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a700(void) {
  LOAD_REGS();
L_92a700: /* 92a700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a704: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a706: jne 0x92a70b */
  if (!zf) goto L_92a70b;
L_92a708: /* 92a708: ret 4 */
  esp += 8; SPILL(); return;
L_92a70b: /* 92a70b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92a70d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92a710: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92a716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a717: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a718: call 0x929c10 */
  esp -= 4; W32(esp, 0x92a71du); SPILL(); f_929c10(); if (g_unwind) return; RELOAD();
/* 92a71d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a720(void) {
  LOAD_REGS();
L_92a720: /* 92a720: movsx edx, word ptr [esp + 0xc] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0xcu)));
/* 92a725: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92a729: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a72d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92a730: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92a732: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92a735: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a737: jne 0x92a748 */
  if (!zf) goto L_92a748;
L_92a739: /* 92a739: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 92a73c: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92a73f: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* 92a742: inc dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x14u), r);
  }
/* 92a745: ret 0xc */
  esp += 16; SPILL(); return;
L_92a748: /* 92a748: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 92a74b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 92a74e: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92a751: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 92a754: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 92a757: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 92a75a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92a75d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 92a760: inc dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x14u), r);
  }
/* 92a763: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a770(void) {
  LOAD_REGS();
L_92a770: /* 92a770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a774: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a775: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 92a778: cmp dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92a77b: jne 0x92a78c */
  if (!zf) goto L_92a78c;
L_92a77d: /* 92a77d: cmp dword ptr [eax + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92a780: jne 0x92a786 */
  if (!zf) goto L_92a786;
L_92a782: /* 92a782: xor ecx, ecx */
  ecx = 0;
/* 92a784: jmp 0x92a789 */
  goto L_92a789;
L_92a786: /* 92a786: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_92a789: /* 92a789: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_92a78c: /* 92a78c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 92a78f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 92a792: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92a795: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 92a798: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92a79b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a79c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 92a79f: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x92a7a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a7a5: dec dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x14u), r);
  }
/* 92a7a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a7a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a7b0(void) {
  LOAD_REGS();
L_92a7b0: /* 92a7b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a7b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92a7b6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92a7b9: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92a7bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a7c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a7c1: call 0x929c40 */
  esp -= 4; W32(esp, 0x92a7c6u); SPILL(); f_929c40(); if (g_unwind) return; RELOAD();
/* 92a7c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a7d0(void) {
  LOAD_REGS();
L_92a7d0: /* 92a7d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a7d4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 92a7d6: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92a7d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a7e0(void) {
  LOAD_REGS();
L_92a7e0: /* 92a7e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a7e4: add dword ptr [eax], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 92a7ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a7f0(void) {
  LOAD_REGS();
L_92a7f0: /* 92a7f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a7f4: add dword ptr [eax], 0xffffff00 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 92a7fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a800(void) {
  LOAD_REGS();
L_92a800: /* 92a800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a804: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 92a80a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92a810(void) {
  LOAD_REGS();
L_92a810: /* 92a810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a811: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92a815: test dword ptr [esi], 0xffffff00 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a81b: je 0x92a82c */
  if (zf) goto L_92a82c;
L_92a81d: /* 92a81d: push 0xaf30e8 */
  { uint32_t v = 0xaf30e8u; esp -= 4; W32(esp, v); }
/* 92a822: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92a824: call 0x971e20 */
  esp -= 4; W32(esp, 0x92a829u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 92a829: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92a82c: /* 92a82c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92a82e: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 92a831: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 92a834: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92a839: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92a83c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a83d: call dword ptr [edx + eax*8] */
  { uint32_t t = R32((uint32_t)(edx + eax*8)); esp -= 4; W32(esp, 0x92a840u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a840: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a841: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a850(void) {
  LOAD_REGS();
L_92a850: /* 92a850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a854: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 92a857: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a860(void) {
  LOAD_REGS();
L_92a860: /* 92a860: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a864: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92a866: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 92a869: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 92a86c: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92a871: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92a874: mov eax, dword ptr [edx + eax*8 + 0x1c] */
  eax = R32((uint32_t)(edx + eax*8 + 0x1cu));
/* 92a878: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a880(void) {
  LOAD_REGS();
L_92a880: /* 92a880: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92a883: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 92a887: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 92a88b: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 92a88f: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92a893: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 92a897: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a898: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 92a89c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a89d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 92a8a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a8a2: call 0x92ad30 */
  esp -= 4; W32(esp, 0x92a8a7u); SPILL(); f_92ad30(); if (g_unwind) return; RELOAD();
/* 92a8a7: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92a8aa: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92a8b0(void) {
  LOAD_REGS();
L_92a8b0: /* 92a8b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a8b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92a8b6: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92a8b9: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 92a8bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a8bd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92a8c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a8c2: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92a8c6: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92a8cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a8cc: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92a8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a8d0: call dword ptr [edx + eax*8 + 8] */
  { uint32_t t = R32((uint32_t)(edx + eax*8 + 0x8u)); esp -= 4; W32(esp, 0x92a8d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a8d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a8d5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a8e0(void) {
  LOAD_REGS();
L_92a8e0: /* 92a8e0: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92a8e3: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 92a8e7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92a8e9: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92a8ec: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 92a8ef: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92a8f4: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92a8f7: mov eax, dword ptr [edx + eax*8 + 0xc] */
  eax = R32((uint32_t)(edx + eax*8 + 0xcu));
/* 92a8fb: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 92a8ff: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 92a903: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 92a907: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a908: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 92a90c: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 92a910: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92a911: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 92a915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a916: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92a918u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a918: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92a91b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92a920(void) {
  LOAD_REGS();
L_92a920: /* 92a920: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a924: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92a926: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92a929: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 92a92c: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92a931: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92a934: mov eax, dword ptr [edx + eax*8 + 0x10] */
  eax = R32((uint32_t)(edx + eax*8 + 0x10u));
/* 92a938: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 92a93c: jmp eax */
  { uint32_t t = eax; SPILL(); call_ind(t); return; }
}

void f_92a940(void) {
  LOAD_REGS();
L_92a940: /* 92a940: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92a944: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92a946: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92a949: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 92a94c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a94d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92a951: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a952: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92a956: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92a95b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a95c: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92a95f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92a960: call dword ptr [edx + eax*8 + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + eax*8 + 0x18u)); esp -= 4; W32(esp, 0x92a964u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a964: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a965: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92a970(void) {
  LOAD_REGS();
L_92a970: /* 92a970: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 92a973: ret  */
  esp += 4; SPILL(); return;
}

void f_92a980(void) {
  LOAD_REGS();
L_92a980: /* 92a980: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92a984: push 0x92aa80 */
  { uint32_t v = 0x92aa80u; esp -= 4; W32(esp, v); }
/* 92a989: push 0x92aa60 */
  { uint32_t v = 0x92aa60u; esp -= 4; W32(esp, v); }
/* 92a98e: push 0x92aa40 */
  { uint32_t v = 0x92aa40u; esp -= 4; W32(esp, v); }
/* 92a993: push 0x92aa20 */
  { uint32_t v = 0x92aa20u; esp -= 4; W32(esp, v); }
/* 92a998: push 0x92aa00 */
  { uint32_t v = 0x92aa00u; esp -= 4; W32(esp, v); }
/* 92a99d: push 0x92a9f0 */
  { uint32_t v = 0x92a9f0u; esp -= 4; W32(esp, v); }
/* 92a9a2: push 0xaf3120 */
  { uint32_t v = 0xaf3120u; esp -= 4; W32(esp, v); }
/* 92a9a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92a9a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a9aa: call 0x929d50 */
  esp -= 4; W32(esp, 0x92a9afu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 92a9af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a9c0(void) {
  LOAD_REGS();
L_92a9c0: /* 92a9c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a9c1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 92a9c3: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 92a9c5: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x92a9cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92a9cb: mov esi, eax */
  esi = eax;
/* 92a9cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92a9cf: jne 0x92a9d5 */
  if (!zf) goto L_92a9d5;
L_92a9d1: /* 92a9d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a9d2: ret 4 */
  esp += 8; SPILL(); return;
L_92a9d5: /* 92a9d5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92a9d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92a9db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92a9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92a9dd: call 0x92a720 */
  esp -= 4; W32(esp, 0x92a9e2u); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 92a9e2: mov eax, esi */
  eax = esi;
/* 92a9e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92a9e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92a9f0(void) {
  LOAD_REGS();
L_92a9f0: /* 92a9f0: jmp 0x92a770 */
  SPILL(); f_92a770(); return;
}

void f_92aa00(void) {
  LOAD_REGS();
L_92aa00: /* 92aa00: push 0xaf3128 */
  { uint32_t v = 0xaf3128u; esp -= 4; W32(esp, v); }
/* 92aa05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92aa07: call 0x971e40 */
  esp -= 4; W32(esp, 0x92aa0cu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 92aa0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92aa0f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92aa20(void) {
  LOAD_REGS();
L_92aa20: /* 92aa20: push 0xaf3190 */
  { uint32_t v = 0xaf3190u; esp -= 4; W32(esp, v); }
/* 92aa25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92aa27: call 0x971e40 */
  esp -= 4; W32(esp, 0x92aa2cu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 92aa2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92aa2f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92aa40(void) {
  LOAD_REGS();
L_92aa40: /* 92aa40: push 0xaf31cc */
  { uint32_t v = 0xaf31ccu; esp -= 4; W32(esp, v); }
/* 92aa45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92aa47: call 0x971e40 */
  esp -= 4; W32(esp, 0x92aa4cu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 92aa4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92aa4f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92aa60(void) {
  LOAD_REGS();
L_92aa60: /* 92aa60: push 0xaf3204 */
  { uint32_t v = 0xaf3204u; esp -= 4; W32(esp, v); }
/* 92aa65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92aa67: call 0x971e40 */
  esp -= 4; W32(esp, 0x92aa6cu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 92aa6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92aa6f: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 92aa72: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92aa80(void) {
  LOAD_REGS();
L_92aa80: /* 92aa80: mov eax, dword ptr [0xaf311c] */
  eax = R32((uint32_t)(0xaf311cu));
/* 92aa85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92aa87: je 0x92aa98 */
  if (zf) goto L_92aa98;
L_92aa89: /* 92aa89: push 0xaf323c */
  { uint32_t v = 0xaf323cu; esp -= 4; W32(esp, v); }
/* 92aa8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92aa90: call 0x971e20 */
  esp -= 4; W32(esp, 0x92aa95u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 92aa95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92aa98: /* 92aa98: mov dword ptr [0xaf311c], 0 */
  W32((uint32_t)(0xaf311cu), 0x0u);
/* 92aaa2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92aab0(void) {
  LOAD_REGS();
L_92aab0: /* 92aab0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92aab4: xor ecx, ecx */
  ecx = 0;
/* 92aab6: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 92aab9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92aabc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92aabe: mov edx, 0x7f7fffff */
  edx = 0x7f7fffffu;
/* 92aac3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 92aac6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 92aac9: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 92aacc: mov edx, 0xff7fffff */
  edx = 0xff7fffffu;
/* 92aad1: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 92aad4: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 92aad7: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 92aada: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 92aadd: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 92aae0: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 92aae3: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 92aae6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ab90(void) {
  LOAD_REGS();
L_92ab90: /* 92ab90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ab91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92ab92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ab93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ab94: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 92ab98: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 92ab9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ab9d: je 0x92abc7 */
  if (zf) goto L_92abc7;
L_92ab9f: /* 92ab9f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92aba1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92aba2: call 0x92a850 */
  esp -= 4; W32(esp, 0x92aba7u); SPILL(); f_92a850(); if (g_unwind) return; RELOAD();
/* 92aba7: mov ebx, eax */
  ebx = eax;
/* 92aba9: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 92abac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92abae: je 0x92abc0 */
  if (zf) goto L_92abc0;
L_92abb0: /* 92abb0: mov esi, dword ptr [eax + 0x28] */
  esi = R32((uint32_t)(eax + 0x28u));
/* 92abb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92abb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92abb5: call 0x92ac80 */
  esp -= 4; W32(esp, 0x92abbau); SPILL(); f_92ac80(); if (g_unwind) return; RELOAD();
/* 92abba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92abbc: mov eax, esi */
  eax = esi;
/* 92abbe: jne 0x92abb0 */
  if (!zf) goto L_92abb0;
L_92abc0: /* 92abc0: mov dword ptr [edi + 0x30], 0 */
  W32((uint32_t)(edi + 0x30u), 0x0u);
L_92abc7: /* 92abc7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92abc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92abcb: je 0x92abd3 */
  if (zf) goto L_92abd3;
L_92abcd: /* 92abcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92abce: call 0x92a7f0 */
  esp -= 4; W32(esp, 0x92abd3u); SPILL(); f_92a7f0(); if (g_unwind) return; RELOAD();
L_92abd3: /* 92abd3: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 92abd7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92abd9: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 92abdb: je 0x92ac4f */
  if (zf) goto L_92ac4f;
L_92abdd: /* 92abdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92abde: call 0x92a7e0 */
  esp -= 4; W32(esp, 0x92abe3u); SPILL(); f_92a7e0(); if (g_unwind) return; RELOAD();
/* 92abe3: cmp byte ptr [esi], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92abe6: jne 0x92ac4f */
  if (!zf) goto L_92ac4f;
L_92abe8: /* 92abe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92abe9: call 0x926e90 */
  esp -= 4; W32(esp, 0x92abeeu); SPILL(); f_926e90(); if (g_unwind) return; RELOAD();
/* 92abee: mov ebp, eax */
  ebp = eax;
/* 92abf0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92abf2: je 0x92ac4f */
  if (zf) goto L_92ac4f;
L_92abf4: /* 92abf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92abf5: call 0x92a850 */
  esp -= 4; W32(esp, 0x92abfau); SPILL(); f_92a850(); if (g_unwind) return; RELOAD();
/* 92abfa: mov ebx, eax */
  ebx = eax;
/* 92abfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92abfd: call 0x92ac60 */
  esp -= 4; W32(esp, 0x92ac02u); SPILL(); f_92ac60(); if (g_unwind) return; RELOAD();
/* 92ac02: mov esi, eax */
  esi = eax;
/* 92ac04: lea eax, [ebp - 1] */
  eax = (uint32_t)(ebp + 0xffffffffu);
/* 92ac07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92ac09: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 92ac0c: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 92ac0f: jle 0x92ac2c */
  if ((zf || sf != of)) goto L_92ac2c;
L_92ac11: /* 92ac11: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_92ac15: /* 92ac15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ac16: call 0x92ac60 */
  esp -= 4; W32(esp, 0x92ac1bu); SPILL(); f_92ac60(); if (g_unwind) return; RELOAD();
/* 92ac1b: mov dword ptr [eax + 0x24], esi */
  W32((uint32_t)(eax + 0x24u), esi);
/* 92ac1e: mov dword ptr [eax + 0x2c], edi */
  W32((uint32_t)(eax + 0x2cu), edi);
/* 92ac21: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 92ac24: mov esi, eax */
  esi = eax;
/* 92ac26: dec dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 92ac2a: jne 0x92ac15 */
  if (!zf) goto L_92ac15;
L_92ac2c: /* 92ac2c: mov edi, dword ptr [edi + 0x30] */
  edi = R32((uint32_t)(edi + 0x30u));
/* 92ac2f: xor esi, esi */
  esi = 0;
/* 92ac31: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92ac33: jle 0x92ac4f */
  if ((zf || sf != of)) goto L_92ac4f;
L_92ac35: /* 92ac35: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 92ac39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ac3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ac3b: call 0x926ea0 */
  esp -= 4; W32(esp, 0x92ac40u); SPILL(); f_926ea0(); if (g_unwind) return; RELOAD();
/* 92ac40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ac41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ac42: call 0x92ab90 */
  esp -= 4; W32(esp, 0x92ac47u); SPILL(); f_92ab90(); if (g_unwind) return; RELOAD();
/* 92ac47: mov edi, dword ptr [edi + 0x28] */
  edi = R32((uint32_t)(edi + 0x28u));
/* 92ac4a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 92ac4b: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92ac4d: jl 0x92ac35 */
  if ((sf != of)) goto L_92ac35;
L_92ac4f: /* 92ac4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ac50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ac51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92ac52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92ac53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92ac60(void) {
  LOAD_REGS();
L_92ac60: /* 92ac60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ac64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ac65: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92ac68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ac69: call dword ptr [0xb02214] */
  { uint32_t t = R32((uint32_t)(0xb02214u)); esp -= 4; W32(esp, 0x92ac6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92ac6f: mov esi, eax */
  esi = eax;
/* 92ac71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ac72: call 0x92aab0 */
  esp -= 4; W32(esp, 0x92ac77u); SPILL(); f_92aab0(); if (g_unwind) return; RELOAD();
/* 92ac77: mov eax, esi */
  eax = esi;
/* 92ac79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ac7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ac80(void) {
  LOAD_REGS();
L_92ac80: /* 92ac80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ac81: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 92ac85: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 92ac88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ac8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ac8b: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 92ac8f: je 0x92aca3 */
  if (zf) goto L_92aca3;
L_92ac91: /* 92ac91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_92ac92: /* 92ac92: mov esi, dword ptr [eax + 0x28] */
  esi = R32((uint32_t)(eax + 0x28u));
/* 92ac95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ac96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ac97: call 0x92ac80 */
  esp -= 4; W32(esp, 0x92ac9cu); SPILL(); f_92ac80(); if (g_unwind) return; RELOAD();
/* 92ac9c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ac9e: mov eax, esi */
  eax = esi;
/* 92aca0: jne 0x92ac92 */
  if (!zf) goto L_92ac92;
L_92aca2: /* 92aca2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_92aca3: /* 92aca3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 92aca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92aca7: je 0x92acaf */
  if (zf) goto L_92acaf;
L_92aca9: /* 92aca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92acaa: call 0x92a7f0 */
  esp -= 4; W32(esp, 0x92acafu); SPILL(); f_92a7f0(); if (g_unwind) return; RELOAD();
L_92acaf: /* 92acaf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92acb0: add edi, 0x60 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92acb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92acb4: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x92acbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92acba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92acbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92acbc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92acc0(void) {
  LOAD_REGS();
L_92acc0: /* 92acc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92acc4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 92acc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92acd0(void) {
  LOAD_REGS();
L_92acd0: /* 92acd0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92acd4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92acd6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92acd8: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 92acdb: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 92acde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92acdf: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92ace3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ace4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92ace8: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92aced: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92acee: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92acf1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92acf2: call dword ptr [ecx + eax*8 + 4] */
  { uint32_t t = R32((uint32_t)(ecx + eax*8 + 0x4u)); esp -= 4; W32(esp, 0x92acf6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92acf6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92acf7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ad00(void) {
  LOAD_REGS();
L_92ad00: /* 92ad00: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92ad04: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92ad06: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92ad08: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 92ad0b: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 92ad0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ad0f: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92ad13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ad14: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92ad18: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92ad1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ad1e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92ad21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ad22: call dword ptr [ecx + eax*8 + 0xc] */
  { uint32_t t = R32((uint32_t)(ecx + eax*8 + 0xcu)); esp -= 4; W32(esp, 0x92ad26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92ad26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ad27: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ad30(void) {
  LOAD_REGS();
L_92ad30: /* 92ad30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ad34: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92ad37: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92ad3b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92ad3d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92ad40: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92ad43: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 92ad46: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 92ad49: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 92ad4c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92ad50: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92ad52: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 92ad55: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92ad58: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 92ad5b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 92ad5e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ad70(void) {
  LOAD_REGS();
L_92ad70: /* 92ad70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ad74: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 92ad77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ad80(void) {
  LOAD_REGS();
L_92ad80: /* 92ad80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92ad84: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92ad88: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 92ad8b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92adb0(void) {
  LOAD_REGS();
L_92adb0: /* 92adb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92adb4: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 92adb7: xor ecx, ecx */
  ecx = 0;
/* 92adb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92adbb: je 0x92add0 */
  if (zf) goto L_92add0;
L_92adbd: /* 92adbd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
L_92adc1: /* 92adc1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92adc3: jle 0x92add2 */
  if ((zf || sf != of)) goto L_92add2;
L_92adc5: /* 92adc5: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 92adc8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92adc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92adcb: jne 0x92adc1 */
  if (!zf) goto L_92adc1;
L_92adcd: /* 92adcd: ret 8 */
  esp += 12; SPILL(); return;
L_92add0: /* 92add0: mov eax, ecx */
  eax = ecx;
L_92add2: /* 92add2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92ade0(void) {
  LOAD_REGS();
L_92ade0: /* 92ade0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92ade4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ade5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 92ade9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92adea: lea edi, [edx + 0x14] */
  edi = (uint32_t)(edx + 0x14u);
/* 92aded: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 92adf0: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 92adf2: mov eax, 1 */
  eax = 0x1u;
/* 92adf7: mov esi, 3 */
  esi = 0x3u;
/* 92adfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92ae00: /* 92ae00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ae02: je 0x92ae23 */
  if (zf) goto L_92ae23;
L_92ae04: /* 92ae04: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 92ae07: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 92ae0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92ae0c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92ae0f: jp 0x92ae23 */
  if (pf) goto L_92ae23;
L_92ae11: /* 92ae11: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92ae13: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* 92ae15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92ae17: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92ae1a: jp 0x92ae23 */
  if (pf) goto L_92ae23;
L_92ae1c: /* 92ae1c: mov eax, 1 */
  eax = 0x1u;
/* 92ae21: jmp 0x92ae25 */
  goto L_92ae25;
L_92ae23: /* 92ae23: xor eax, eax */
  eax = 0;
L_92ae25: /* 92ae25: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92ae28: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92ae2b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 92ae2c: jne 0x92ae00 */
  if (!zf) goto L_92ae00;
L_92ae2e: /* 92ae2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ae2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ae30: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92ae40(void) {
  LOAD_REGS();
L_92ae40: /* 92ae40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ae44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92ae46: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92ae48: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92ae4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ae50(void) {
  LOAD_REGS();
L_92ae50: /* 92ae50: sub esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92ae56: mov eax, dword ptr [esp + 0x204] */
  eax = R32((uint32_t)(esp + 0x204u));
/* 92ae5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ae5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ae5f: mov esi, dword ptr [esp + 0x210] */
  esi = R32((uint32_t)(esp + 0x210u));
/* 92ae66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ae67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ae68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ae69: call 0x92af50 */
  esp -= 4; W32(esp, 0x92ae6eu); SPILL(); f_92af50(); if (g_unwind) return; RELOAD();
/* 92ae6e: mov cl, byte ptr [0xcf2eb4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf2eb4u))) & 0xffu);
/* 92ae74: mov byte ptr [esp + 0x14], cl */
  W8((uint32_t)(esp + 0x14u), (ecx & 0xffu));
/* 92ae78: mov ebx, eax */
  ebx = eax;
/* 92ae7a: xor eax, eax */
  eax = 0;
/* 92ae7c: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 92ae81: lea edi, [esp + 0x15] */
  edi = (uint32_t)(esp + 0x15u);
/* 92ae85: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 92ae87: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 92ae89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ae8c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92ae8e: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 92ae8f: jle 0x92ae9b */
  if ((zf || sf != of)) goto L_92ae9b;
L_92ae91: /* 92ae91: cmp esi, 0x26 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x26u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92ae94: jge 0x92ae9b */
  if ((sf == of)) goto L_92ae9b;
L_92ae96: /* 92ae96: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 92ae99: jmp 0x92aea0 */
  goto L_92aea0;
L_92ae9b: /* 92ae9b: mov eax, 0xaf3e78 */
  eax = 0xaf3e78u;
L_92aea0: /* 92aea0: cmp word ptr [ebx + 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x4u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 92aea5: jle 0x92af18 */
  if ((zf || sf != of)) goto L_92af18;
L_92aea7: /* 92aea7: mov edx, dword ptr [esp + 0x218] */
  edx = R32((uint32_t)(esp + 0x218u));
/* 92aeae: mov ecx, dword ptr [esp + 0x220] */
  ecx = R32((uint32_t)(esp + 0x220u));
/* 92aeb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92aeb6: mov edx, dword ptr [esp + 0x220] */
  edx = R32((uint32_t)(esp + 0x220u));
/* 92aebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92aebe: mov eax, dword ptr [esp + 0x22c] */
  eax = R32((uint32_t)(esp + 0x22cu));
/* 92aec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92aec6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92aec7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92aec8: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 92aecc: push 0xaf3e48 */
  { uint32_t v = 0xaf3e48u; esp -= 4; W32(esp, v); }
/* 92aed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92aed2: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x92aed8u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 92aed8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92aedb: cmp word ptr [ebx + 4], 1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x4u))); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 92aee0: jne 0x92aefa */
  if (!zf) goto L_92aefa;
L_92aee2: /* 92aee2: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92aee5: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92aee7: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* 92aeeb: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 92aeed: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 92aeee: mov ecx, 0xb */
  ecx = 0xbu;
/* 92aef3: mov esi, 0xaf3e1c */
  esi = 0xaf3e1cu;
/* 92aef8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_92aefa: /* 92aefa: movsx eax, word ptr [ebx + 2] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebx + 0x2u)));
/* 92aefe: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 92af01: je 0x92af3b */
  if (zf) goto L_92af3b;
L_92af03: /* 92af03: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 92af04: je 0x92af22 */
  if (zf) goto L_92af22;
L_92af06: /* 92af06: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 92af07: jne 0x92af18 */
  if (!zf) goto L_92af18;
L_92af09: /* 92af09: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 92af0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92af0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92af10: call 0x971de0 */
  esp -= 4; W32(esp, 0x92af15u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 92af15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92af18: /* 92af18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92af19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92af1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92af1b: add esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92af21: ret  */
  esp += 4; SPILL(); return;
L_92af22: /* 92af22: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 92af26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92af27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92af29: call 0x971e20 */
  esp -= 4; W32(esp, 0x92af2eu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 92af2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92af31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92af32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92af33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92af34: add esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92af3a: ret  */
  esp += 4; SPILL(); return;
L_92af3b: /* 92af3b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 92af3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92af40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92af42: call 0x971e40 */
  esp -= 4; W32(esp, 0x92af47u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 92af47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92af4a: jmp dword ptr [0xcfb088] */
  SPILL(); f_41278b(); return; /* MSVCR70!abort */
}

void f_92af50(void) {
  LOAD_REGS();
L_92af50: /* 92af50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92af54: xor ecx, ecx */
  ecx = 0;
/* 92af56: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 92af59: cmp cx, 0x26 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x26u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 92af5d: je 0x92af77 */
  if (zf) goto L_92af77;
L_92af5f: /* 92af5f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
L_92af63: /* 92af63: movsx ecx, cx */
  ecx = (uint32_t)(int32_t)(int16_t)((ecx & 0xffffu));
/* 92af66: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92af68: je 0x92af77 */
  if (zf) goto L_92af77;
L_92af6a: /* 92af6a: mov cx, word ptr [eax + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 92af6e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92af71: cmp cx, 0x26 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x26u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 92af75: jne 0x92af63 */
  if (!zf) goto L_92af63;
L_92af77: /* 92af77: ret  */
  esp += 4; SPILL(); return;
}

void f_92af80(void) {
  LOAD_REGS();
L_92af80: /* 92af80: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92af84: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92af88: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92af8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92af8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92af8e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92af92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92af93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92af94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92af95: call 0x92c170 */
  esp -= 4; W32(esp, 0x92af9au); SPILL(); f_92c170(); if (g_unwind) return; RELOAD();
/* 92af9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92af9d: mov esi, eax */
  esi = eax;
/* 92af9f: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 92afa2: push 0x92afd0 */
  { uint32_t v = 0x92afd0u; esp -= 4; W32(esp, v); }
/* 92afa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92afa8: mov dword ptr [esi + 0xc8], 0x928700 */
  W32((uint32_t)(esi + 0xc8u), 0x928700u);
/* 92afb2: call 0x99b210 */
  esp -= 4; W32(esp, 0x92afb7u); SPILL(); f_99b210(); if (g_unwind) return; RELOAD();
/* 92afb7: mov ecx, esi */
  ecx = esi;
/* 92afb9: call 0x92d270 */
  esp -= 4; W32(esp, 0x92afbeu); SPILL(); f_92d270(); if (g_unwind) return; RELOAD();
/* 92afbe: mov eax, esi */
  eax = esi;
/* 92afc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92afc1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92afd0(void) {
  LOAD_REGS();
L_92afd0: /* 92afd0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92afe0(void) {
  LOAD_REGS();
L_92afe0: /* 92afe0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92afe4: call 0x92c130 */
  esp -= 4; W32(esp, 0x92afe9u); SPILL(); f_92c130(); if (g_unwind) return; RELOAD();
/* 92afe9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92aff0(void) {
  LOAD_REGS();
L_92aff0: /* 92aff0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b000(void) {
  LOAD_REGS();
L_92b000: /* 92b000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b004: mov ecx, dword ptr [eax + 0xcc] */
  ecx = R32((uint32_t)(eax + 0xccu));
/* 92b00a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b00c: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 92b00f: xor eax, eax */
  eax = 0;
/* 92b011: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 92b013: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b020(void) {
  LOAD_REGS();
L_92b020: /* 92b020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b022: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92b026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b027: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b028: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92b02du); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92b02d: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92b030: je 0x92b07d */
  if (zf) goto L_92b07d;
L_92b032: /* 92b032: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92b035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b037: je 0x92b04c */
  if (zf) goto L_92b04c;
L_92b039: /* 92b039: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92b03d: xor ecx, ecx */
  ecx = 0;
/* 92b03f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b041: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 92b044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b045: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b046: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b047: mov eax, ecx */
  eax = ecx;
/* 92b049: ret 8 */
  esp += 12; SPILL(); return;
L_92b04c: /* 92b04c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 92b050: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b052: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b057: mov ecx, edi */
  ecx = edi;
/* 92b059: call 0x92c2d0 */
  esp -= 4; W32(esp, 0x92b05eu); SPILL(); f_92c2d0(); if (g_unwind) return; RELOAD();
/* 92b05e: mov ebx, eax */
  ebx = eax;
/* 92b060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b061: mov ecx, edi */
  ecx = edi;
/* 92b063: call 0x92c750 */
  esp -= 4; W32(esp, 0x92b068u); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92b068: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b06a: je 0x92b07d */
  if (zf) goto L_92b07d;
L_92b06c: /* 92b06c: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 92b06f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b070: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 92b073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b074: mov eax, 1 */
  eax = 0x1u;
/* 92b079: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b07a: ret 8 */
  esp += 12; SPILL(); return;
L_92b07d: /* 92b07d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b07e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b07f: xor eax, eax */
  eax = 0;
/* 92b081: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b082: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b090(void) {
  LOAD_REGS();
L_92b090: /* 92b090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b092: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92b096: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92b099: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b09b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b09c: je 0x92b0b1 */
  if (zf) goto L_92b0b1;
L_92b09e: /* 92b09e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92b0a2: xor ecx, ecx */
  ecx = 0;
/* 92b0a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b0a6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 92b0a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b0aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b0ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b0ac: mov eax, ecx */
  eax = ecx;
/* 92b0ae: ret 0x14 */
  esp += 24; SPILL(); return;
L_92b0b1: /* 92b0b1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92b0b5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 92b0b9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 92b0bd: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 92b0c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b0c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b0c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b0c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b0c5: mov ecx, edi */
  ecx = edi;
/* 92b0c7: call 0x92c2d0 */
  esp -= 4; W32(esp, 0x92b0ccu); SPILL(); f_92c2d0(); if (g_unwind) return; RELOAD();
/* 92b0cc: mov ebx, eax */
  ebx = eax;
/* 92b0ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b0cf: mov ecx, edi */
  ecx = edi;
/* 92b0d1: call 0x92c750 */
  esp -= 4; W32(esp, 0x92b0d6u); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92b0d6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b0d8: je 0x92b0eb */
  if (zf) goto L_92b0eb;
L_92b0da: /* 92b0da: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 92b0dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b0de: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 92b0e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b0e2: mov eax, 1 */
  eax = 0x1u;
/* 92b0e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b0e8: ret 0x14 */
  esp += 24; SPILL(); return;
L_92b0eb: /* 92b0eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b0ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b0ed: xor eax, eax */
  eax = 0;
/* 92b0ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b0f0: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_92b100(void) {
  LOAD_REGS();
L_92b100: /* 92b100: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92b104: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92b108: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92b10c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b10d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92b111: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b112: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b115: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b117: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92b11b: call 0x92d2d0 */
  esp -= 4; W32(esp, 0x92b120u); SPILL(); f_92d2d0(); if (g_unwind) return; RELOAD();
/* 92b120: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_92b130(void) {
  LOAD_REGS();
L_92b130: /* 92b130: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b134: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b139: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b13a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92b13d: call 0x92d190 */
  esp -= 4; W32(esp, 0x92b142u); SPILL(); f_92d190(); if (g_unwind) return; RELOAD();
/* 92b142: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b150(void) {
  LOAD_REGS();
L_92b150: /* 92b150: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b154: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b157: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b159: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b15a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92b15d: call 0x92c680 */
  esp -= 4; W32(esp, 0x92b162u); SPILL(); f_92c680(); if (g_unwind) return; RELOAD();
/* 92b162: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 92b165: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b170(void) {
  LOAD_REGS();
L_92b170: /* 92b170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b174: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b177: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92b179: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b17a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92b17d: call 0x92c680 */
  esp -= 4; W32(esp, 0x92b182u); SPILL(); f_92c680(); if (g_unwind) return; RELOAD();
/* 92b182: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 92b185: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b190(void) {
  LOAD_REGS();
L_92b190: /* 92b190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b194: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b197: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b198: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92b19b: call 0x92c700 */
  esp -= 4; W32(esp, 0x92b1a0u); SPILL(); f_92c700(); if (g_unwind) return; RELOAD();
/* 92b1a0: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92b1a2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 92b1a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92b1a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b1b0(void) {
  LOAD_REGS();
L_92b1b0: /* 92b1b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b1b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b1b6: call 0x92d1f0 */
  esp -= 4; W32(esp, 0x92b1bbu); SPILL(); f_92d1f0(); if (g_unwind) return; RELOAD();
/* 92b1bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b1c0(void) {
  LOAD_REGS();
L_92b1c0: /* 92b1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b1c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b1c3: push 0xaf3ea4 */
  { uint32_t v = 0xaf3ea4u; esp -= 4; W32(esp, v); }
/* 92b1c8: call 0x976470 */
  esp -= 4; W32(esp, 0x92b1cdu); SPILL(); f_976470(); if (g_unwind) return; RELOAD();
/* 92b1cd: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92b1d1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92b1d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b1d6: mov ecx, esi */
  ecx = esi;
/* 92b1d8: mov dword ptr [esi + 0xc8], 0x9286a0 */
  W32((uint32_t)(esi + 0xc8u), 0x9286a0u);
/* 92b1e2: call 0x92d1f0 */
  esp -= 4; W32(esp, 0x92b1e7u); SPILL(); f_92d1f0(); if (g_unwind) return; RELOAD();
/* 92b1e7: push 0xaf3ea4 */
  { uint32_t v = 0xaf3ea4u; esp -= 4; W32(esp, v); }
/* 92b1ec: mov dword ptr [esi + 0xc8], 0x928700 */
  W32((uint32_t)(esi + 0xc8u), 0x928700u);
/* 92b1f6: call 0x9765b0 */
  esp -= 4; W32(esp, 0x92b1fbu); SPILL(); f_9765b0(); if (g_unwind) return; RELOAD();
/* 92b1fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b1fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b200(void) {
  LOAD_REGS();
L_92b200: /* 92b200: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b204: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b208: mov dword ptr [ecx + 0xc8], eax */
  W32((uint32_t)(ecx + 0xc8u), eax);
/* 92b20e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b220(void) {
  LOAD_REGS();
L_92b220: /* 92b220: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b224: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b229: call 0x92c730 */
  esp -= 4; W32(esp, 0x92b22eu); SPILL(); f_92c730(); if (g_unwind) return; RELOAD();
/* 92b22e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b240(void) {
  LOAD_REGS();
L_92b240: /* 92b240: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b244: call 0x92c740 */
  esp -= 4; W32(esp, 0x92b249u); SPILL(); f_92c740(); if (g_unwind) return; RELOAD();
/* 92b249: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b250(void) {
  LOAD_REGS();
L_92b250: /* 92b250: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b254: mov dword ptr [eax], 0xffffffff */
  W32((uint32_t)(eax), 0xffffffffu);
/* 92b25a: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 92b261: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b270(void) {
  LOAD_REGS();
L_92b270: /* 92b270: jmp 0x92c930 */
  SPILL(); f_92c930(); return;
}

void f_92b280(void) {
  LOAD_REGS();
L_92b280: /* 92b280: jmp 0x92c940 */
  SPILL(); f_92c940(); return;
}

void f_92b290(void) {
  LOAD_REGS();
L_92b290: /* 92b290: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92b293: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b294: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92b295: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 92b299: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 92b29c: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 92b29f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b2a0: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 92b2a4: xor eax, eax */
  eax = 0;
/* 92b2a6: mov ecx, edx */
  ecx = edx;
/* 92b2a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b2a9: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 92b2ab: xor edi, edi */
  edi = 0;
/* 92b2ad: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b2af: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92b2b3: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 92b2b7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 92b2bb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 92b2bf: jle 0x92b372 */
  if ((zf || sf != of)) goto L_92b372;
L_92b2c5: /* 92b2c5: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 92b2c9: xor ebx, ebx */
  ebx = 0;
/* 92b2cb: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 92b2cf: jmp 0x92b2e0 */
  goto L_92b2e0;
L_92b2d1: /* 92b2d1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92b2d5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 92b2d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92b2e0: /* 92b2e0: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b2e2: jge 0x92b372 */
  if ((sf == of)) goto L_92b372;
L_92b2e8: /* 92b2e8: cmp dword ptr [esp + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b2ec: jge 0x92b372 */
  if ((sf == of)) goto L_92b372;
L_92b2f2: /* 92b2f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b2f3: mov ecx, ebp */
  ecx = ebp;
/* 92b2f5: call 0x92c750 */
  esp -= 4; W32(esp, 0x92b2fau); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92b2fa: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b2fc: je 0x92b359 */
  if (zf) goto L_92b359;
L_92b2fe: /* 92b2fe: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 92b301: mov esi, dword ptr [eax + ebx + 0xc] */
  esi = R32((uint32_t)(eax + ebx + 0xcu));
/* 92b305: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b307: je 0x92b359 */
  if (zf) goto L_92b359;
L_92b309: /* 92b309: cmp dword ptr [esi + 0x1c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b30d: je 0x92b359 */
  if (zf) goto L_92b359;
L_92b30f: /* 92b30f: cmp dword ptr [esi + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b312: jne 0x92b359 */
  if (!zf) goto L_92b359;
L_92b314: /* 92b314: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92b318: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92b319: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b31a: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 92b31e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92b323u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92b323: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b324: call 0x92a860 */
  esp -= 4; W32(esp, 0x92b329u); SPILL(); f_92a860(); if (g_unwind) return; RELOAD();
/* 92b329: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b32b: je 0x92b359 */
  if (zf) goto L_92b359;
L_92b32d: /* 92b32d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92b331: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 92b335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b336: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92b33a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b33b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b33c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b33d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92b33fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92b33f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b341: je 0x92b359 */
  if (zf) goto L_92b359;
L_92b343: /* 92b343: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 92b347: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92b34b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 92b34c: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 92b34e: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92b351: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92b355: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_92b359: /* 92b359: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92b35d: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 92b361: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92b362: add ebx, 0x98 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92b368: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b36a: mov eax, edx */
  eax = edx;
/* 92b36c: jl 0x92b2d1 */
  if ((sf != of)) goto L_92b2d1;
L_92b372: /* 92b372: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b373: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b374: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92b375: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b376: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92b379: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_92b380(void) {
  LOAD_REGS();
L_92b380: /* 92b380: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92b383: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b384: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 92b388: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 92b38b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92b38c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b38d: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 92b390: mov eax, ecx */
  eax = ecx;
/* 92b392: xor ebp, ebp */
  ebp = 0;
/* 92b394: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b395: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 92b399: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92b39b: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b39d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 92b3a1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92b3a5: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 92b3a9: mov dword ptr [edi + 0x1c], 0x69045951 */
  W32((uint32_t)(edi + 0x1cu), 0x69045951u);
/* 92b3b0: jle 0x92b47f */
  if ((zf || sf != of)) goto L_92b47f;
L_92b3b6: /* 92b3b6: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 92b3ba: jmp 0x92b3c0 */
  goto L_92b3c0;
L_92b3bc: /* 92b3bc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_92b3c0: /* 92b3c0: cmp dword ptr [esp + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b3c4: jge 0x92b47f */
  if ((sf == of)) goto L_92b47f;
L_92b3ca: /* 92b3ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92b3cb: mov ecx, ebx */
  ecx = ebx;
/* 92b3cd: call 0x92c750 */
  esp -= 4; W32(esp, 0x92b3d2u); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92b3d2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b3d4: je 0x92b464 */
  if (zf) goto L_92b464;
L_92b3da: /* 92b3da: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 92b3dd: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 92b3e1: mov esi, dword ptr [eax + ecx + 0xc] */
  esi = R32((uint32_t)(eax + ecx + 0xcu));
/* 92b3e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b3e7: je 0x92b464 */
  if (zf) goto L_92b464;
L_92b3e9: /* 92b3e9: cmp dword ptr [esi + 0x1c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b3ed: je 0x92b464 */
  if (zf) goto L_92b464;
L_92b3ef: /* 92b3ef: cmp dword ptr [esi + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b3f2: jne 0x92b464 */
  if (!zf) goto L_92b464;
L_92b3f4: /* 92b3f4: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 92b3f8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92b3f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b3fa: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 92b3fe: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92b403u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92b403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b404: call 0x92a860 */
  esp -= 4; W32(esp, 0x92b409u); SPILL(); f_92a860(); if (g_unwind) return; RELOAD();
/* 92b409: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b40b: je 0x92b464 */
  if (zf) goto L_92b464;
L_92b40d: /* 92b40d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 92b411: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 92b415: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b416: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 92b41a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b41b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b41c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b41d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92b41fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92b41f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b421: je 0x92b464 */
  if (zf) goto L_92b464;
L_92b423: /* 92b423: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 92b427: fcomp dword ptr [edi + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x1cu)));
  FPOP();
/* 92b42a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b42c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92b42f: jp 0x92b464 */
  if (pf) goto L_92b464;
L_92b431: /* 92b431: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 92b435: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92b439: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 92b43d: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 92b440: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 92b444: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 92b447: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92b44b: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 92b44e: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92b452: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 92b455: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 92b459: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 92b45b: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 92b45e: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 92b461: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
L_92b464: /* 92b464: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 92b468: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92b46c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 92b46d: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92b473: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b475: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 92b479: jl 0x92b3bc */
  if ((sf != of)) goto L_92b3bc;
L_92b47f: /* 92b47f: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 92b482: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b483: fcomp dword ptr [0xa20f78] */
  fpu_com(ST0, F32((uint32_t)(0xa20f78u)));
  FPOP();
/* 92b489: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b48a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92b48b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b48c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b48e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92b491: jp 0x92b49e */
  if (pf) goto L_92b49e;
L_92b493: /* 92b493: mov eax, 1 */
  eax = 0x1u;
/* 92b498: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92b49b: ret 0x10 */
  esp += 20; SPILL(); return;
L_92b49e: /* 92b49e: xor eax, eax */
  eax = 0;
/* 92b4a0: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92b4a3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92b4b0(void) {
  LOAD_REGS();
L_92b4b0: /* 92b4b0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92b4b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b4b4: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 92b4b8: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 92b4bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92b4bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b4bd: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 92b4c0: mov eax, ecx */
  eax = ecx;
/* 92b4c2: xor ebp, ebp */
  ebp = 0;
/* 92b4c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b4c5: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 92b4c9: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92b4cb: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b4cd: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 92b4d1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92b4d5: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 92b4d9: mov dword ptr [edi + 0x1c], 0x69045951 */
  W32((uint32_t)(edi + 0x1cu), 0x69045951u);
/* 92b4e0: jle 0x92b5c9 */
  if ((zf || sf != of)) goto L_92b5c9;
L_92b4e6: /* 92b4e6: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 92b4ea: jmp 0x92b4f0 */
  goto L_92b4f0;
L_92b4ec: /* 92b4ec: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_92b4f0: /* 92b4f0: cmp dword ptr [esp + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b4f4: jge 0x92b5c9 */
  if ((sf == of)) goto L_92b5c9;
L_92b4fa: /* 92b4fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92b4fb: mov ecx, ebx */
  ecx = ebx;
/* 92b4fd: call 0x92c750 */
  esp -= 4; W32(esp, 0x92b502u); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92b502: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b504: je 0x92b5ae */
  if (zf) goto L_92b5ae;
L_92b50a: /* 92b50a: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 92b50d: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 92b511: mov esi, dword ptr [eax + ecx + 0xc] */
  esi = R32((uint32_t)(eax + ecx + 0xcu));
/* 92b515: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b517: je 0x92b5ae */
  if (zf) goto L_92b5ae;
L_92b51d: /* 92b51d: cmp dword ptr [esi + 0x1c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b521: je 0x92b5ae */
  if (zf) goto L_92b5ae;
L_92b527: /* 92b527: cmp dword ptr [esi + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92b52a: jne 0x92b5ae */
  if (!zf) goto L_92b5ae;
L_92b530: /* 92b530: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 92b534: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 92b538: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b539: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92b53a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b53b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 92b53f: call dword ptr [esp + 0x50] */
  { uint32_t t = R32((uint32_t)(esp + 0x50u)); esp -= 4; W32(esp, 0x92b543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92b543: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b545: je 0x92b5ae */
  if (zf) goto L_92b5ae;
L_92b547: /* 92b547: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b548: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92b54du); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92b54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b54e: call 0x92a860 */
  esp -= 4; W32(esp, 0x92b553u); SPILL(); f_92a860(); if (g_unwind) return; RELOAD();
/* 92b553: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b555: je 0x92b5ae */
  if (zf) goto L_92b5ae;
L_92b557: /* 92b557: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 92b55b: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 92b55f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b560: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 92b564: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b566: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b567: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92b569u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92b569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b56b: je 0x92b5ae */
  if (zf) goto L_92b5ae;
L_92b56d: /* 92b56d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 92b571: fcomp dword ptr [edi + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x1cu)));
  FPOP();
/* 92b574: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b576: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92b579: jp 0x92b5ae */
  if (pf) goto L_92b5ae;
L_92b57b: /* 92b57b: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 92b57f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 92b583: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92b587: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
/* 92b58a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 92b58e: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 92b591: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 92b595: mov dword ptr [edi + 0x14], ecx */
  W32((uint32_t)(edi + 0x14u), ecx);
/* 92b598: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92b59c: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 92b59f: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 92b5a3: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 92b5a5: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 92b5a8: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 92b5ab: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
L_92b5ae: /* 92b5ae: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 92b5b2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92b5b6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 92b5b7: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92b5bd: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b5bf: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 92b5c3: jl 0x92b4ec */
  if ((sf != of)) goto L_92b4ec;
L_92b5c9: /* 92b5c9: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 92b5cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b5cd: fcomp dword ptr [0xa20f78] */
  fpu_com(ST0, F32((uint32_t)(0xa20f78u)));
  FPOP();
/* 92b5d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b5d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92b5d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b5d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b5d8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92b5db: jp 0x92b5e8 */
  if (pf) goto L_92b5e8;
L_92b5dd: /* 92b5dd: mov eax, 1 */
  eax = 0x1u;
/* 92b5e2: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92b5e5: ret 0x18 */
  esp += 28; SPILL(); return;
L_92b5e8: /* 92b5e8: xor eax, eax */
  eax = 0;
/* 92b5ea: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92b5ed: ret 0x18 */
  esp += 28; SPILL(); return;
}
