#include "recomp.h"
#include "rec_mod.h"

void f_52948d(void) {
  LOAD_REGS();
L_52948d: /* 52948d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5295ab(void) {
  LOAD_REGS();
L_5295ab: /* 5295ab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5295ae: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5295b3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5295b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5295b7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5295ba: call 0x554df6 */
  esp -= 4; W32(esp, 0x5295bfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5295bf(); return;
}

void f_5295bf(void) {
  LOAD_REGS();
L_5295bf: /* 5295bf: push 0x56cc84 */
  { uint32_t v = 0x56cc84u; esp -= 4; W32(esp, v); }
/* 5295c4: push 0x5a6d60 */
  { uint32_t v = 0x5a6d60u; esp -= 4; W32(esp, v); }
/* 5295c9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5295ceu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5295ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5295d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5295d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5295d5: call 0x554df6 */
  esp -= 4; W32(esp, 0x5295dau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5295da(); return;
}

void f_5295da(void) {
  LOAD_REGS();
L_5295da: /* 5295da: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5295dd: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5295e2: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 5295e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5295e6: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 5295e9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5295eeu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5295ee(); return;
}

void f_5295ee(void) {
  LOAD_REGS();
L_5295ee: /* 5295ee: push 0x56cc48 */
  { uint32_t v = 0x56cc48u; esp -= 4; W32(esp, v); }
/* 5295f3: push 0x5a6e14 */
  { uint32_t v = 0x5a6e14u; esp -= 4; W32(esp, v); }
/* 5295f8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5295fdu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5295fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529604: call 0x554df6 */
  esp -= 4; W32(esp, 0x529609u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_529609: guest_badaddr(0x529609); return;
}

void f_529850(void) {
  LOAD_REGS();
L_529850: /* 529850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 529851: mov ebp, esp */
  ebp = esp;
/* 529853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 529855: push 0x558210 */
  { uint32_t v = 0x558210u; esp -= 4; W32(esp, v); }
/* 52985a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 529860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 529868: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52986b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52986c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52986d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52986e: mov esi, ecx */
  esi = ecx;
/* 529870: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 529876: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 529879: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52987c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52987d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52987e: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 529881: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 529888: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x52988du); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 52988d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 529890: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529893: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 529895: jl 0x52989c */
  if ((sf != of)) goto L_52989c;
L_529897: /* 529897: cmp eax, dword ptr [esi - 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52989a: jl 0x5298b8 */
  if ((sf != of)) goto L_5298b8;
L_52989c: /* 52989c: mov ecx, dword ptr [esi - 0x44] */
  ecx = R32((uint32_t)(esi + 0xffffffbcu));
/* 52989f: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 5298a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5298a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5298a7: push 0x5a7604 */
  { uint32_t v = 0x5a7604u; esp -= 4; W32(esp, v); }
/* 5298ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5298ad: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5298b2u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5298b2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5298b5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5298b8: /* 5298b8: mov ecx, dword ptr [esi - 0x48] */
  ecx = R32((uint32_t)(esi + 0xffffffb8u));
/* 5298bb: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5298be: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5298c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5298c3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 5298c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5298c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5298c8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5298cb: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5298d0u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5298d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5298d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5298d6: lea eax, [esi - 0xb4] */
  eax = (uint32_t)(esi + 0xffffff4cu);
/* 5298dc: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 5298de: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 5298e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5298e1: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5298e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5298e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5298eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5298ec: mov esp, ebp */
  esp = ebp;
/* 5298ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5298ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5298f2(void) {
  LOAD_REGS();
L_5298f2: /* 5298f2: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5298f5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5298fa: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 5298fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5298fe: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 529901: call 0x554df6 */
  esp -= 4; W32(esp, 0x529906u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_529906(); return;
}

void f_529906(void) {
  LOAD_REGS();
L_529906: /* 529906: push 0x56ce2c */
  { uint32_t v = 0x56ce2cu; esp -= 4; W32(esp, v); }
/* 52990b: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 529910: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x529915u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 529915: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 529918: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52991a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52991d: mov ecx, esi */
  ecx = esi;
/* 52991f: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x529922u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529922: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529923: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529925: lea ecx, [esi - 0xb4] */
  ecx = (uint32_t)(esi + 0xffffff4cu);
/* 52992b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x529930u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 529930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529931: push 0x5a75ec */
  { uint32_t v = 0x5a75ecu; esp -= 4; W32(esp, v); }
/* 529936: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52993bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52993b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52993e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529940: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529942: call 0x554df6 */
  esp -= 4; W32(esp, 0x529947u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_529947: guest_badaddr(0x529947); return;
}

void f_529990(void) {
  LOAD_REGS();
L_529990: /* 529990: sub ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 529996: jmp 0x4e2c43 */
  SPILL(); f_4e2c43(); return;
}

void f_5299a0(void) {
  LOAD_REGS();
L_5299a0: /* 5299a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5299a1: mov esi, ecx */
  esi = ecx;
/* 5299a3: call 0x4e2126 */
  esp -= 4; W32(esp, 0x5299a8u); SPILL(); f_4e2126(); if (g_unwind) return; RELOAD();
/* 5299a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5299ad: je 0x5299bd */
  if (zf) goto L_5299bd;
L_5299af: /* 5299af: push 0x50c */
  { uint32_t v = 0x50cu; esp -= 4; W32(esp, v); }
/* 5299b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5299b5: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x5299bau); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 5299ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5299bd: /* 5299bd: mov eax, esi */
  eax = esi;
/* 5299bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5299c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5299e0(void) {
  LOAD_REGS();
L_5299e0: /* 5299e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5299e2: push 0x55825f */
  { uint32_t v = 0x55825fu; esp -= 4; W32(esp, v); }
/* 5299e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5299ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5299ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5299f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5299f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5299f7: mov esi, ecx */
  esi = ecx;
/* 5299f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5299fd: mov dword ptr [esi], 0x56cda8 */
  W32((uint32_t)(esi), 0x56cda8u);
/* 529a03: mov dword ptr [esi + 0xb4], 0x56cd38 */
  W32((uint32_t)(esi + 0xb4u), 0x56cd38u);
/* 529a0d: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 529a15: call 0x4e2559 */
  esp -= 4; W32(esp, 0x529a1au); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 529a1a: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 529a20: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 529a25: call 0x4e3067 */
  esp -= 4; W32(esp, 0x529a2au); SPILL(); f_4e3067(); if (g_unwind) return; RELOAD();
/* 529a2a: mov ecx, esi */
  ecx = esi;
/* 529a2c: mov dword ptr [esi + 0xb4], 0x569110 */
  W32((uint32_t)(esi + 0xb4u), 0x569110u);
/* 529a36: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 529a3e: call 0x4e25ea */
  esp -= 4; W32(esp, 0x529a43u); SPILL(); f_4e25ea(); if (g_unwind) return; RELOAD();
/* 529a43: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 529a47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 529a48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 529a4f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529a52: ret  */
  esp += 4; SPILL(); return;
}

void f_529a80(void) {
  LOAD_REGS();
L_529a80: /* 529a80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 529a81: mov ebp, esp */
  ebp = esp;
/* 529a83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 529a85: push 0x558280 */
  { uint32_t v = 0x558280u; esp -= 4; W32(esp, v); }
/* 529a8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 529a90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529a91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 529a98: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 529a9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 529a9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 529a9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529a9e: mov esi, ecx */
  esi = ecx;
/* 529aa0: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 529aa6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 529aa9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 529aac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529aad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 529aae: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 529ab1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 529ab8: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x529abdu); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 529abd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 529ac0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529ac3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529ac4: lea ecx, [esi - 0xb4] */
  ecx = (uint32_t)(esi + 0xffffff4cu);
/* 529aca: call 0x4e330f */
  esp -= 4; W32(esp, 0x529acfu); SPILL(); f_4e330f(); if (g_unwind) return; RELOAD();
/* 529acf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 529ad2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 529ad5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529ad7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 529ada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529adb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 529adc: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x529ae1u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 529ae1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 529ae4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529ae7: lea eax, [esi - 0xb4] */
  eax = (uint32_t)(esi + 0xffffff4cu);
/* 529aed: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 529aef: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 529af1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529af2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529af4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 529af5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 529afc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 529afd: mov esp, ebp */
  esp = ebp;
/* 529aff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 529b00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_529b03(void) {
  LOAD_REGS();
L_529b03: /* 529b03: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 529b06: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 529b0b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 529b0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529b0f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 529b12: call 0x554df6 */
  esp -= 4; W32(esp, 0x529b17u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_529b17(); return;
}

void f_529b17(void) {
  LOAD_REGS();
L_529b17: /* 529b17: push 0x56ce5c */
  { uint32_t v = 0x56ce5cu; esp -= 4; W32(esp, v); }
/* 529b1c: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 529b21: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x529b26u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 529b26: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 529b29: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 529b2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529b2e: mov ecx, esi */
  ecx = esi;
/* 529b30: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x529b33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529b33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529b34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529b36: lea ecx, [esi - 0xb4] */
  ecx = (uint32_t)(esi + 0xffffff4cu);
/* 529b3c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x529b41u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 529b41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529b42: push 0x5a75ec */
  { uint32_t v = 0x5a75ecu; esp -= 4; W32(esp, v); }
/* 529b47: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x529b4cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 529b4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529b4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529b53: call 0x554df6 */
  esp -= 4; W32(esp, 0x529b58u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_529b58: guest_badaddr(0x529b58); return;
}

void f_529ba0(void) {
  LOAD_REGS();
L_529ba0: /* 529ba0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 529ba4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 529ba8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 529baa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529bab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529bac: call 0x4e1a2d */
  esp -= 4; W32(esp, 0x529bb1u); SPILL(); f_4e1a2d(); if (g_unwind) return; RELOAD();
/* 529bb1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_529bd0(void) {
  LOAD_REGS();
L_529bd0: /* 529bd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 529bd4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 529bd6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 529bda: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 529bdc: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 529be0: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 529be2: ret  */
  esp += 4; SPILL(); return;
}

void f_529c00(void) {
  LOAD_REGS();
L_529c00: /* 529c00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 529c04: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 529c08: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 529c0a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 529c0c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 529c0f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 529c12: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 529c15: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 529c18: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 529c1a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 529c1c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 529c1e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 529c20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 529c22: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 529c24: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 529c26: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 529c28: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 529c2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 529c2c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 529c2e: ret  */
  esp += 4; SPILL(); return;
}

void f_529c40(void) {
  LOAD_REGS();
L_529c40: /* 529c40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 529c44: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 529c48: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 529c4a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 529c4d: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 529c51: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 529c53: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 529c56: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 529c58: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 529c5b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 529c5e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 529c60: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 529c63: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 529c65: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 529c67: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 529c6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 529c6c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 529c6f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 529c72: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 529c75: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 529c78: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 529c7a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 529c7c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 529c7e: ret  */
  esp += 4; SPILL(); return;
}

void f_529c90(void) {
  LOAD_REGS();
L_529c90: /* 529c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 529c91: mov ebp, esp */
  ebp = esp;
/* 529c93: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 529c96: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 529c99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 529c9a: mov eax, 0xc6ff7800 */
  eax = 0xc6ff7800u;
/* 529c9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 529ca0: mov esi, ecx */
  esi = ecx;
/* 529ca2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 529ca4: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 529ca7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 529caa: mov eax, 0x46ff7800 */
  eax = 0x46ff7800u;
/* 529caf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 529cb2: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 529cb5: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 529cb8: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 529cbb: mov ecx, eax */
  ecx = eax;
/* 529cbd: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 529cc5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 529cc9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 529ccb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 529cd3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 529cd7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 529cda: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 529ce2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 529ce6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529ce9: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 529cec: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 529cf4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 529cf8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 529cfa: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 529d02: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 529d06: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 529d09: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 529d11: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 529d15: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529d18: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 529d1b: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 529d23: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 529d27: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 529d29: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 529d31: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 529d35: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 529d38: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 529d40: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 529d44: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529d47: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529d4a: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 529d52: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 529d56: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 529d58: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 529d60: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 529d64: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 529d67: mov dword ptr [esp + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + 0x38u), 0x3f800000u);
/* 529d6f: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 529d73: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 529d76: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 529d79: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 529d81: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 529d85: mov edx, eax */
  edx = eax;
/* 529d87: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 529d89: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 529d91: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 529d95: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 529d98: mov dword ptr [esp + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + 0x38u), 0x3f800000u);
/* 529da0: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 529da4: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 529dab: mov byte ptr [eax + 0x10], 5 */
  W8((uint32_t)(eax + 0x10u), 0x5u);
/* 529daf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 529db2: lea eax, [esi + 0x5c] */
  eax = (uint32_t)(esi + 0x5cu);
/* 529db5: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 529dbd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 529dc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529dc2: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* 529dca: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 529dd2: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 529dda: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 529de2: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 529dea: mov dword ptr [esp + 0x24], 0xbf800000 */
  W32((uint32_t)(esp + 0x24u), 0xbf800000u);
/* 529df2: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 529dfa: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 529e02: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 529e0a: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 529e12: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 529e1a: mov edx, eax */
  edx = eax;
/* 529e1c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 529e1e: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 529e22: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 529e25: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 529e29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 529e2c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 529e30: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 529e33: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 529e35: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 529e39: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 529e3c: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 529e40: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 529e43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 529e47: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 529e4a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 529e4c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 529e50: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 529e53: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 529e57: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 529e5a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 529e5e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 529e62: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529e65: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 529e67: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 529e6b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 529e6e: xor edi, edi */
  edi = 0;
/* 529e70: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 529e73: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 529e77: lea ebx, [esi + 0x8c] */
  ebx = (uint32_t)(esi + 0x8cu);
/* 529e7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_529e80: /* 529e80: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 529e84: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 529e87: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 529e89: fmul qword ptr [0x56ce98] */
  ST0 = ST0 * (F64((uint32_t)(0x56ce98u)));
/* 529e8f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 529e92: call 0x4e3e0e */
  esp -= 4; W32(esp, 0x529e97u); SPILL(); f_4e3e0e(); if (g_unwind) return; RELOAD();
/* 529e97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529e9a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 529e9c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529e9d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 529ea0: cmp edi, 0x4000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529ea6: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 529eaa: jl 0x529e80 */
  if ((sf != of)) goto L_529e80;
L_529eac: /* 529eac: xor edi, edi */
  edi = 0;
/* 529eae: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 529eb2: lea ebx, [esi + 0x1008c] */
  ebx = (uint32_t)(esi + 0x1008cu);
/* 529eb8: jmp 0x529ec0 */
  goto L_529ec0;
L_529ec0: /* 529ec0: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 529ec4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 529ec7: fmul dword ptr [0x56ce90] */
  ST0 = ST0 * (F32((uint32_t)(0x56ce90u)));
/* 529ecd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 529ed0: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x529ed5u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 529ed5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529ed8: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 529eda: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529edb: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 529ede: cmp edi, 0x4000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529ee4: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 529ee8: jl 0x529ec0 */
  if ((sf != of)) goto L_529ec0;
L_529eea: /* 529eea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529eeb: mov eax, esi */
  eax = esi;
/* 529eed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 529eee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 529eef: mov esp, ebp */
  esp = ebp;
/* 529ef1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 529ef2: ret  */
  esp += 4; SPILL(); return;
}

void f_529eba(void) {
  LOAD_REGS();
L_529eba: /* 529eba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_529ec0: /* 529ec0: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 529ec4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 529ec7: fmul dword ptr [0x56ce90] */
  ST0 = ST0 * (F32((uint32_t)(0x56ce90u)));
/* 529ecd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 529ed0: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x529ed5u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 529ed5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529ed8: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 529eda: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529edb: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 529ede: cmp edi, 0x4000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529ee4: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 529ee8: jl 0x529ec0 */
  if ((sf != of)) goto L_529ec0;
L_529eea: /* 529eea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529eeb: mov eax, esi */
  eax = esi;
/* 529eed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 529eee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 529eef: mov esp, ebp */
  esp = ebp;
/* 529ef1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 529ef2: ret  */
  esp += 4; SPILL(); return;
}

void f_529fa0(void) {
  LOAD_REGS();
L_529fa0: /* 529fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 529fa1: mov esi, ecx */
  esi = ecx;
/* 529fa3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 529fa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529fa6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 529fa9: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 529fad: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 529fb0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 529fb3: call 0x4e2eff */
  esp -= 4; W32(esp, 0x529fb8u); SPILL(); f_4e2eff(); if (g_unwind) return; RELOAD();
/* 529fb8: fmul qword ptr [0x56cea8] */
  ST0 = ST0 * (F64((uint32_t)(0x56cea8u)));
/* 529fbe: call 0x554f00 */
  esp -= 4; W32(esp, 0x529fc3u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 529fc3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 529fc6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 529fc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529fcb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 529fcd: mov edi, eax */
  edi = eax;
/* 529fcf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 529fd1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 529fd3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 529fd5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 529fd7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 529fda: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 529fdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 529fde: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x529fe3u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 529fe3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 529fe6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 529fe9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 529fec: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 529fef: call 0x4e2eff */
  esp -= 4; W32(esp, 0x529ff4u); SPILL(); f_4e2eff(); if (g_unwind) return; RELOAD();
/* 529ff4: fmul qword ptr [0x56cea8] */
  ST0 = ST0 * (F64((uint32_t)(0x56cea8u)));
/* 529ffa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529ffd: call 0x554f00 */
  esp -= 4; W32(esp, 0x52a002u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 52a002: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 52a006: mov esi, edx */
  esi = edx;
/* 52a008: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 52a00a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 52a00d: xor ecx, ecx */
  ecx = 0;
/* 52a00f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52a010: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 52a013: mov eax, edx */
  eax = edx;
/* 52a015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a016: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52a040(void) {
  LOAD_REGS();
L_52a040: /* 52a040: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 52a043: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a046: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 52a049: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a04c: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a04f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a051: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 52a054: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 52a057: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a05a: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 52a05d: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a060: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a062: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a065: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a067: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a06a: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a06d: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 52a070: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a073: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a075: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 52a078: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a07a: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 52a080: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52a082: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52a085: jp 0x52a08f */
  if (pf) goto L_52a08f;
L_52a087: /* 52a087: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52a089: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
L_52a08f: /* 52a08f: fdivr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) / ST0;
/* 52a095: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 52a098: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 52a09b: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 52a09e: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 52a0a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a0a3: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 52a0a6: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a0a9: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 52a0ac: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 52a0af: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a0b1: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 52a0b4: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 52a0b7: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 52a0ba: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a0bd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a0bf: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 52a0c3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a0c5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52a0c7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 52a0cb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a0cd: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 52a0d1: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 52a0d5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a0d7: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 52a0db: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 52a0de: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a0e1: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 52a0e4: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a0e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a0e9: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 52a0ec: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a0ef: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 52a0f2: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a0f5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a0f7: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 52a0fa: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 52a0fd: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 52a100: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a103: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a105: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 52a109: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a10b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52a10d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 52a111: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a113: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 52a117: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 52a11b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a11d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 52a121: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 52a124: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 52a127: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 52a12a: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a12d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a12f: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 52a132: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 52a135: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 52a138: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a13b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a13d: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 52a140: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a143: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 52a146: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 52a149: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a14b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 52a14f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a151: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 52a155: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52a157: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52a158: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52a159: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52a15a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 52a15e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a160: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 52a164: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 52a168: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a16a: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 52a16e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52a170: call 0x4e24fa */
  esp -= 4; W32(esp, 0x52a175u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 52a175: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 52a179: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 52a17d: fchs  */
  ST0 = -ST0;
/* 52a17f: mov ecx, eax */
  ecx = eax;
/* 52a181: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 52a185: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 52a189: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 52a18d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52a18f: fchs  */
  ST0 = -ST0;
/* 52a191: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 52a195: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 52a199: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 52a19d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 52a1a0: fchs  */
  ST0 = -ST0;
/* 52a1a2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 52a1a6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 52a1aa: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 52a1ad: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 52a1b1: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 52a1b4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52a1b6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 52a1ba: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 52a1bd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 52a1c1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 52a1c4: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 52a1c8: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 52a1cb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52a1cd: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 52a1d1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 52a1d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 52a1d8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 52a1db: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 52a1df: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 52a1e2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52a1e4: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 52a1e8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 52a1eb: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 52a1ef: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 52a1f2: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a1f5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52a270(void) {
  LOAD_REGS();
L_52a270: /* 52a270: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a273: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a274: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 52a278: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a279: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 52a27d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52a27e: mov edi, ecx */
  edi = ecx;
/* 52a280: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a282: call 0x4e24fa */
  esp -= 4; W32(esp, 0x52a287u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 52a287: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 52a28b: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 52a28d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 52a291: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 52a295: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 52a299: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 52a29d: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 52a2a0: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 52a2a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52a2a5: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 52a2a9: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 52a2ad: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 52a2b1: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 52a2b4: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 52a2b8: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 52a2bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52a2bc: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 52a2c0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 52a2c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a2c5: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 52a2c9: call 0x4e24fa */
  esp -= 4; W32(esp, 0x52a2ceu); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 52a2ce: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 52a2d2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 52a2d6: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 52a2da: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 52a2de: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 52a2e2: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 52a2e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52a2e7: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 52a2ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52a2eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a2ec: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 52a2f0: call 0x4e24fa */
  esp -= 4; W32(esp, 0x52a2f5u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 52a2f5: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 52a2f9: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 52a2fd: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 52a301: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 52a305: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 52a309: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52a30a: add esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52a30d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a30e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a30f: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 52a313: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 52a317: call 0x4e24fa */
  esp -= 4; W32(esp, 0x52a31cu); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 52a31c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 52a320: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 52a324: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 52a328: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 52a32c: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 52a333: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 52a337: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a33a: mov ecx, 0xc */
  ecx = 0xcu;
/* 52a33f: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 52a343: mov edi, eax */
  edi = eax;
/* 52a345: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 52a349: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 52a34b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52a34c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a34d: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a350: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52a3a0(void) {
  LOAD_REGS();
L_52a3a0: /* 52a3a0: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a3a3: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 52a3a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a3a7: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 52a3aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a3ab: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a3ae: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a3b1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a3b3: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 52a3b6: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 52a3b9: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a3bc: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 52a3bf: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a3c2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a3c4: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a3c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a3c9: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a3cc: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a3cf: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 52a3d2: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a3d5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a3d7: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 52a3da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a3dc: fdivr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) / ST0;
/* 52a3e2: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a3e5: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a3e8: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 52a3eb: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 52a3ee: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a3f0: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 52a3f3: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 52a3f6: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 52a3f9: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a3fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a3fe: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 52a401: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a404: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a407: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 52a40a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a40c: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 52a410: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a412: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52a414: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 52a418: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 52a41c: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 52a420: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a422: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 52a426: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 52a42a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 52a42e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a430: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 52a434: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 52a438: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 52a43b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 52a43f: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a442: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 52a446: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 52a449: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 52a44c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a44e: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 52a451: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a454: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 52a457: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a45a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a45c: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 52a45f: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 52a462: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 52a465: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a468: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a46a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 52a46e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a470: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52a472: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 52a476: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 52a47a: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 52a47e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a480: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 52a484: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 52a488: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52a48c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a48e: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 52a492: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 52a496: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 52a499: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 52a49d: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 52a4a0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 52a4a4: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a4a7: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a4aa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a4ac: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 52a4af: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a4b2: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 52a4b5: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 52a4b8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a4ba: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 52a4bd: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 52a4c0: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 52a4c3: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a4c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a4c8: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 52a4cc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a4ce: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52a4d0: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 52a4d4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 52a4d8: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 52a4dc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a4de: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 52a4e2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 52a4e6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 52a4ea: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a4ec: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 52a4f0: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 52a4f4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 52a4f8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 52a4fc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52a4fe: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 52a502: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 52a504: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 52a508: fchs  */
  ST0 = -ST0;
/* 52a50a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 52a50e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 52a511: fchs  */
  ST0 = -ST0;
/* 52a513: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 52a517: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 52a51a: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 52a51e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52a51f: fchs  */
  ST0 = -ST0;
/* 52a521: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52a522: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 52a526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52a527: call 0x4e24fa */
  esp -= 4; W32(esp, 0x52a52cu); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 52a52c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 52a530: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a533: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 52a537: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 52a53b: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 52a53f: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 52a543: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 52a547: mov ecx, 0xc */
  ecx = 0xcu;
/* 52a54c: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 52a550: mov edi, eax */
  edi = eax;
/* 52a552: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 52a556: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 52a558: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52a559: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a55a: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a55d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52a5d0(void) {
  LOAD_REGS();
L_52a5d0: /* 52a5d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52a5d1: mov ebp, esp */
  ebp = esp;
/* 52a5d3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 52a5d6: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a5d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52a5da: mov ebx, ecx */
  ebx = ecx;
/* 52a5dc: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 52a5df: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 52a5e2: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 52a5e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a5e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a5e7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a5ea: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 52a5ee: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 52a5f2: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 52a5f5: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 52a5f9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52a5fc: call 0x4e2eff */
  esp -= 4; W32(esp, 0x52a601u); SPILL(); f_4e2eff(); if (g_unwind) return; RELOAD();
/* 52a601: fmul qword ptr [0x56ceb8] */
  ST0 = ST0 * (F64((uint32_t)(0x56ceb8u)));
/* 52a607: call 0x554f00 */
  esp -= 4; W32(esp, 0x52a60cu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 52a60c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 52a610: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 52a614: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a617: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 52a61b: mov esi, eax */
  esi = eax;
/* 52a61d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 52a621: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a623: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52a626: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x52a62bu); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 52a62b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52a62e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a631: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 52a634: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52a637: call 0x4e2eff */
  esp -= 4; W32(esp, 0x52a63cu); SPILL(); f_4e2eff(); if (g_unwind) return; RELOAD();
/* 52a63c: fmul qword ptr [0x56ceb8] */
  ST0 = ST0 * (F64((uint32_t)(0x56ceb8u)));
/* 52a642: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a645: call 0x554f00 */
  esp -= 4; W32(esp, 0x52a64au); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 52a64a: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 52a64e: mov ecx, 0xc */
  ecx = 0xcu;
/* 52a653: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 52a658: lea edi, [esp + 0x50] */
  edi = (uint32_t)(esp + 0x50u);
/* 52a65c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 52a660: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 52a662: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52a663: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 52a667: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 52a66b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 52a673: call 0x4e3a8f */
  esp -= 4; W32(esp, 0x52a678u); SPILL(); f_4e3a8f(); if (g_unwind) return; RELOAD();
/* 52a678: mov esi, eax */
  esi = eax;
/* 52a67a: mov ecx, 0xc */
  ecx = 0xcu;
/* 52a67f: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 52a683: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 52a685: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 52a689: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 52a68c: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 52a690: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 52a693: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a695: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 52a699: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 52a69c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a69e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a6a1: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 52a6a5: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 52a6a9: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 52a6ac: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 52a6b0: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 52a6b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a6b5: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 52a6b9: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 52a6bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a6be: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52a6c1: call 0x4e2eff */
  esp -= 4; W32(esp, 0x52a6c6u); SPILL(); f_4e2eff(); if (g_unwind) return; RELOAD();
/* 52a6c6: fmul qword ptr [0x56ceb8] */
  ST0 = ST0 * (F64((uint32_t)(0x56ceb8u)));
/* 52a6cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a6cf: call 0x554f00 */
  esp -= 4; W32(esp, 0x52a6d4u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 52a6d4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52a6d7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 52a6db: mov edx, ecx */
  edx = ecx;
/* 52a6dd: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 52a6df: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 52a6e3: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 52a6e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52a6e7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 52a6ea: mov eax, ecx */
  eax = ecx;
/* 52a6ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a6ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52a6ee: mov esp, ebp */
  esp = ebp;
/* 52a6f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52a6f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52a750(void) {
  LOAD_REGS();
L_52a750: /* 52a750: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a753: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 52a755: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 52a758: fchs  */
  ST0 = -ST0;
/* 52a75a: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 52a75d: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 52a761: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 52a765: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 52a768: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 52a76b: fchs  */
  ST0 = -ST0;
/* 52a76d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 52a771: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 52a773: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 52a776: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 52a779: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 52a77d: fchs  */
  ST0 = -ST0;
/* 52a77f: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 52a782: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 52a786: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 52a78a: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 52a78d: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 52a790: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a792: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 52a796: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 52a799: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 52a79c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a79d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 52a7a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a7a3: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 52a7a6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 52a7aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a7ab: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 52a7ae: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 52a7b2: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 52a7b6: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 52a7ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a7bc: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 52a7bf: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* 52a7c3: mov edi, eax */
  edi = eax;
/* 52a7c5: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 52a7c9: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 52a7d1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 52a7d3: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 52a7db: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 52a7dd: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 52a7e1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 52a7e5: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 52a7ed: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 52a7f0: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* 52a7f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a7fa: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 52a7fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a7ff: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a801: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 52a804: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a806: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 52a80a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a80c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 52a810: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 52a814: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 52a817: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52a819: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 52a81c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a81e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 52a822: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 52a825: mov ecx, 0x10 */
  ecx = 0x10u;
/* 52a82a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a82c: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 52a830: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 52a832: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52a833: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a834: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a837: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52a880(void) {
  LOAD_REGS();
L_52a880: /* 52a880: xor eax, eax */
  eax = 0;
/* 52a882: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52a883: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 52a887: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52a889: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a88a: mov esi, ecx */
  esi = ecx;
/* 52a88c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 52a88e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52a891: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52a894: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52a897: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 52a89a: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 52a89d: mov byte ptr [esi + 0x18], al */
  W8((uint32_t)(esi + 0x18u), (eax & 0xffu));
/* 52a8a0: jle 0x52a8b6 */
  if ((zf || sf != of)) goto L_52a8b6;
L_52a8a2: /* 52a8a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a8a3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_52a8a7: /* 52a8a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a8a8: mov ecx, esi */
  ecx = esi;
/* 52a8aa: call 0x4e1b09 */
  esp -= 4; W32(esp, 0x52a8afu); SPILL(); f_4e1b09(); if (g_unwind) return; RELOAD();
/* 52a8af: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52a8b2: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 52a8b3: jne 0x52a8a7 */
  if (!zf) goto L_52a8a7;
L_52a8b5: /* 52a8b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_52a8b6: /* 52a8b6: mov eax, esi */
  eax = esi;
/* 52a8b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a8b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52a8ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52a8d0(void) {
  LOAD_REGS();
L_52a8d0: /* 52a8d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52a8d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a8d2: mov esi, ecx */
  esi = ecx;
/* 52a8d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 52a8d7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 52a8da: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 52a8dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 52a8de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52a8e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 52a8e2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 52a8e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a8e6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 52a8e8: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 52a8ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a8ec: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 52a8ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52a8f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52a8f2: fcom qword ptr [0x5694b8] */
  fpu_com(ST0, F64((uint32_t)(0x5694b8u)));
/* 52a8f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52a8fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52a8fd: jp 0x52a914 */
  if (pf) goto L_52a914;
L_52a8ff: /* 52a8ff: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52a903: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52a905: xor ecx, ecx */
  ecx = 0;
/* 52a907: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 52a909: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 52a90c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 52a90f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a910: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52a911: ret 4 */
  esp += 8; SPILL(); return;
L_52a914: /* 52a914: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a917: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52a91a: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x52a91fu); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 52a91f: fdivr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) / ST0;
/* 52a925: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 52a929: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a92c: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 52a930: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 52a933: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 52a937: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 52a93a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 52a93e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 52a940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52a941: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 52a943: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 52a946: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 52a949: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52a94a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52a970(void) {
  LOAD_REGS();
L_52a970: /* 52a970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52a971: mov ebp, esp */
  ebp = esp;
/* 52a973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52a975: push 0x558290 */
  { uint32_t v = 0x558290u; esp -= 4; W32(esp, v); }
/* 52a97a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52a980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52a981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52a988: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a98b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52a98c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52a98d: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 52a990: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52a991: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52a994: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 52a996: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52a999: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 52a99c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52a99f: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 52a9a2: xor ebx, ebx */
  ebx = 0;
/* 52a9a4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 52a9a6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 52a9a9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a9ab: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 52a9ae: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 52a9b1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 52a9b3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 52a9b6: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 52a9b8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a9ba: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 52a9bd: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 52a9c0: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 52a9c3: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 52a9c6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 52a9c9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52a9cb: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 52a9ce: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 52a9d1: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 52a9d4: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 52a9d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a9d9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 52a9dc: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 52a9df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52a9e1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52a9e4: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x52a9e9u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 52a9e9: fst qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 52a9ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52a9ef: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 52a9f2: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 52a9f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52a9fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52a9fd: jp 0x52aa22 */
  if (pf) goto L_52aa22;
L_52a9ff: /* 52a9ff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52aa02: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 52aa04: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 52aa07: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 52aa0a: mov dword ptr [eax + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + 0xcu), 0x3f800000u);
/* 52aa11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52aa14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52aa1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52aa1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52aa1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52aa1e: mov esp, ebp */
  esp = ebp;
/* 52aa20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52aa21: ret  */
  esp += 4; SPILL(); return;
L_52aa22: /* 52aa22: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 52aa25: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52aa28: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52aa2b: call 0x4e1e0b */
  esp -= 4; W32(esp, 0x52aa30u); SPILL(); f_4e1e0b(); if (g_unwind) return; RELOAD();
/* 52aa30: fst qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 52aa33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52aa36: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 52aa39: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 52aa3c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 52aa3f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 52aa42: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52aa44: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 52aa46: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 52aa48: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52aa4a: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52aa50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52aa52: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52aa55: jp 0x52aa5d */
  if (pf) goto L_52aa5d;
L_52aa57: /* 52aa57: fsubr qword ptr [0x56bf10] */
  ST0 = (F64((uint32_t)(0x56bf10u))) - ST0;
L_52aa5d: /* 52aa5d: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 52aa63: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52aa66: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 52aa69: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52aa6c: call 0x4e3e0e */
  esp -= 4; W32(esp, 0x52aa71u); SPILL(); f_4e3e0e(); if (g_unwind) return; RELOAD();
/* 52aa71: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 52aa74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52aa77: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 52aa7a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52aa7d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 52aa80: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52aa83: call 0x4e1807 */
  esp -= 4; W32(esp, 0x52aa88u); SPILL(); f_4e1807(); if (g_unwind) return; RELOAD();
/* 52aa88: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 52aa8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52aa8e: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 52aa94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52aa97: fdiv dword ptr [ebp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x10u)));
/* 52aa9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52aa9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52aa9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52aa9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52aaa0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 52aaa3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52aaa5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 52aaa8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52aaaa: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 52aaad: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 52aab0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52aab2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 52aab5: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 52aab8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 52aaba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52aabc: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 52aabf: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 52aac2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 52aac5: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 52aac8: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 52aacb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 52aace: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 52aad1: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 52aad4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52aadb: mov esp, ebp */
  esp = ebp;
/* 52aadd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52aade: ret  */
  esp += 4; SPILL(); return;
}

void f_52aadf(void) {
  LOAD_REGS();
L_52aadf: /* 52aadf: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 52aae2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52aae7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 52aaea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52aaeb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 52aaee: call 0x554df6 */
  esp -= 4; W32(esp, 0x52aaf3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52aaf3(); return;
}

void f_52aaf3(void) {
  LOAD_REGS();
L_52aaf3: /* 52aaf3: push 0x56cec4 */
  { uint32_t v = 0x56cec4u; esp -= 4; W32(esp, v); }
/* 52aaf8: push 0x5a7650 */
  { uint32_t v = 0x5a7650u; esp -= 4; W32(esp, v); }
/* 52aafd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52ab02u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52ab02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ab05: xor ebx, ebx */
  ebx = 0;
/* 52ab07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ab08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ab09: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ab0eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52ab0e: guest_badaddr(0x52ab0e); return;
}

void f_52ab80(void) {
  LOAD_REGS();
L_52ab80: /* 52ab80: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52ab83: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 52ab87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ab88: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 52ab8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ab8d: mov ecx, 7 */
  ecx = 0x7u;
/* 52ab92: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 52ab96: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 52ab98: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 52ab9c: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 52ab9e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 52aba2: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 52aba6: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 52aba9: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 52abad: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 52abb1: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 52abb4: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 52abb8: mov edx, 1 */
  edx = 0x1u;
/* 52abbd: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 52abc5: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 52abc9: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 52abd1: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 52abd5: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 52abdd: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 52abdf: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 52abe3: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 52abe7: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 52abea: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 52abee: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 52abf2: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 52abf5: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 52abf9: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 52abfd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 52abff: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 52ac01: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 52ac05: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 52ac08: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 52ac0b: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 52ac0f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 52ac12: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 52ac15: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 52ac19: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 52ac1b: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 52ac1f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ac21: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52ac24: jp 0x52ac51 */
  if (pf) goto L_52ac51;
L_52ac26: /* 52ac26: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 52ac2a: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52ac30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ac32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52ac35: jnp 0x52af58 */
  if (!pf) goto L_52af58;
L_52ac3b: /* 52ac3b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 52ac3f: xor edx, edx */
  edx = 0;
/* 52ac41: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 52ac43: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 52ac4b: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 52ac4f: jmp 0x52ac87 */
  goto L_52ac87;
L_52ac51: /* 52ac51: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 52ac53: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 52ac57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ac59: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ac5c: jne 0x52ac81 */
  if (!zf) goto L_52ac81;
L_52ac5e: /* 52ac5e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 52ac62: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52ac68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ac6a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ac6d: je 0x52af58 */
  if (zf) goto L_52af58;
L_52ac73: /* 52ac73: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 52ac77: xor edx, edx */
  edx = 0;
/* 52ac79: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 52ac7b: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 52ac7f: jmp 0x52ac87 */
  goto L_52ac87;
L_52ac81: /* 52ac81: fld dword ptr [0x56947c] */
  { double v = F32((uint32_t)(0x56947cu)); FPUSH(v); }
L_52ac87: /* 52ac87: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 52ac8a: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 52ac8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ac90: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52ac93: jp 0x52acc5 */
  if (pf) goto L_52acc5;
L_52ac95: /* 52ac95: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 52ac99: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52ac9f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52aca1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52aca4: jnp 0x52ad94 */
  if (!pf) goto L_52ad94;
L_52acaa: /* 52acaa: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 52acae: xor edx, edx */
  edx = 0;
/* 52acb0: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 52acb3: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
/* 52acbb: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 52acbf: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 52acc3: jmp 0x52ad03 */
  goto L_52ad03;
L_52acc5: /* 52acc5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 52acc8: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 52accc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52acce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52acd1: jne 0x52acfb */
  if (!zf) goto L_52acfb;
L_52acd3: /* 52acd3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 52acd7: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52acdd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52acdf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ace2: je 0x52ad94 */
  if (zf) goto L_52ad94;
L_52ace8: /* 52ace8: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 52acec: xor edx, edx */
  edx = 0;
/* 52acee: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 52acf1: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 52acf5: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 52acf9: jmp 0x52ad03 */
  goto L_52ad03;
L_52acfb: /* 52acfb: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_52ad03: /* 52ad03: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 52ad06: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 52ad0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ad0c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52ad0f: jp 0x52ad75 */
  if (pf) goto L_52ad75;
L_52ad11: /* 52ad11: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 52ad15: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52ad1b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ad1d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52ad20: jnp 0x52ad94 */
  if (!pf) goto L_52ad94;
L_52ad22: /* 52ad22: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 52ad26: mov dword ptr [esp + 0x1c], 0xbf800000 */
  W32((uint32_t)(esp + 0x1cu), 0xbf800000u);
L_52ad2e: /* 52ad2e: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 52ad31: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
L_52ad35: /* 52ad35: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 52ad39: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 52ad3d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 52ad41: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 52ad43: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 52ad4b: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 52ad4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ad51: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ad54: jne 0x52ae0b */
  if (!zf) goto L_52ae0b;
L_52ad5a: /* 52ad5a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 52ad5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52ad60: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 52ad64: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 52ad68: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 52ad70: jmp 0x52ae1b */
  goto L_52ae1b;
L_52ad75: /* 52ad75: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 52ad78: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 52ad7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ad7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ad81: jne 0x52ada4 */
  if (!zf) goto L_52ada4;
L_52ad83: /* 52ad83: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 52ad87: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52ad8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ad8f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ad92: jne 0x52ad9e */
  if (!zf) goto L_52ad9e;
L_52ad94: /* 52ad94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ad95: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52ad97: xor eax, eax */
  eax = 0;
/* 52ad99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ad9a: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ad9d: ret  */
  esp += 4; SPILL(); return;
L_52ad9e: /* 52ad9e: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 52ada2: jmp 0x52ad2e */
  goto L_52ad2e;
L_52ada4: /* 52ada4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ada6: fld dword ptr [0x56947c] */
  { double v = F32((uint32_t)(0x56947cu)); FPUSH(v); }
/* 52adac: je 0x52ad35 */
  if (zf) goto L_52ad35;
L_52adae: /* 52adae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52adb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52adb2: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 52adb6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52adb8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 52adba: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 52adbd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 52adc0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 52adc3: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 52adc7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 52adca: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 52add2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 52add6: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 52add8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 52ade0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 52ade4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 52ade7: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 52adeb: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 52adf3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 52adf7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 52adfa: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_52ae00: /* 52ae00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ae01: mov eax, 1 */
  eax = 0x1u;
/* 52ae06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ae07: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ae0a: ret  */
  esp += 4; SPILL(); return;
L_52ae0b: /* 52ae0b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 52ae0f: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 52ae17: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_52ae1b: /* 52ae1b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 52ae1d: mov eax, esi */
  eax = esi;
/* 52ae1f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 52ae21: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 52ae25: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 52ae28: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 52ae2c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 52ae2f: fcom dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
/* 52ae31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ae33: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ae36: jne 0x52ae64 */
  if (!zf) goto L_52ae64;
L_52ae38: /* 52ae38: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 52ae3c: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 52ae3e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 52ae40: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 52ae44: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 52ae4c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 52ae50: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52ae53: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 52ae5b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 52ae5f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52ae62: jmp 0x52ae66 */
  goto L_52ae66;
L_52ae64: /* 52ae64: fstp st(0) */
  STI(0) = ST0; FPOP();
L_52ae66: /* 52ae66: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 52ae68: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52ae6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ae70: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ae73: jne 0x52af58 */
  if (!zf) goto L_52af58;
L_52ae79: /* 52ae79: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 52ae7b: fcomp dword ptr [0x5694a4] */
  fpu_com(ST0, F32((uint32_t)(0x5694a4u)));
  FPOP();
/* 52ae81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52ae83: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52ae86: jp 0x52af58 */
  if (pf) goto L_52af58;
L_52ae8c: /* 52ae8c: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 52ae8e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 52ae92: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 52ae94: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 52ae96: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 52ae9a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 52ae9e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 52aea0: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 52aea4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 52aea8: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 52aeaa: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 52aeae: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 52aeb2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 52aeb6: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 52aeb9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 52aebd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 52aec1: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 52aec4: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 52aec8: mov edx, ecx */
  edx = ecx;
/* 52aeca: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 52aecc: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 52aed0: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 52aed4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 52aed8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 52aedb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 52aedf: fsub dword ptr [0x56ceec] */
  ST0 = ST0 - (F32((uint32_t)(0x56ceecu)));
/* 52aee5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 52aee8: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 52aeea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52aeec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52aeef: jp 0x52af58 */
  if (pf) goto L_52af58;
L_52aef1: /* 52aef1: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 52aef5: fadd dword ptr [0x56ceec] */
  ST0 = ST0 + (F32((uint32_t)(0x56ceecu)));
/* 52aefb: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 52aefd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52aeff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52af02: jne 0x52af58 */
  if (!zf) goto L_52af58;
L_52af04: /* 52af04: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 52af08: fsub dword ptr [0x56ceec] */
  ST0 = ST0 - (F32((uint32_t)(0x56ceecu)));
/* 52af0e: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 52af11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52af13: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52af16: jp 0x52af58 */
  if (pf) goto L_52af58;
L_52af18: /* 52af18: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 52af1c: fadd dword ptr [0x56ceec] */
  ST0 = ST0 + (F32((uint32_t)(0x56ceecu)));
/* 52af22: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 52af25: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52af27: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52af2a: jne 0x52af58 */
  if (!zf) goto L_52af58;
L_52af2c: /* 52af2c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 52af30: fsub dword ptr [0x56ceec] */
  ST0 = ST0 - (F32((uint32_t)(0x56ceecu)));
/* 52af36: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 52af39: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52af3b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52af3e: jp 0x52af58 */
  if (pf) goto L_52af58;
L_52af40: /* 52af40: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 52af44: fadd dword ptr [0x56ceec] */
  ST0 = ST0 + (F32((uint32_t)(0x56ceecu)));
/* 52af4a: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 52af4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52af4f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52af52: je 0x52ae00 */
  if (zf) goto L_52ae00;
L_52af58: /* 52af58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52af59: xor eax, eax */
  eax = 0;
/* 52af5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52af5c: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52af5f: ret  */
  esp += 4; SPILL(); return;
}

void f_52b060(void) {
  LOAD_REGS();
L_52b060: /* 52b060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52b061: mov ebp, esp */
  ebp = esp;
/* 52b063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52b065: push 0x5582a0 */
  { uint32_t v = 0x5582a0u; esp -= 4; W32(esp, v); }
/* 52b06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52b070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52b078: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b07b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b07c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b07d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b07e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52b081: mov esi, ecx */
  esi = ecx;
/* 52b083: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52b08a: xor edi, edi */
  edi = 0;
/* 52b08c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52b090: /* 52b090: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b093: jge 0x52b0a7 */
  if ((sf == of)) goto L_52b0a7;
L_52b095: /* 52b095: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52b097: fld dword ptr [eax + edi*8] */
  { double v = F32((uint32_t)(eax + edi*8)); FPUSH(v); }
/* 52b09a: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 52b09d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b09f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52b0a2: jp 0x52b0a7 */
  if (pf) goto L_52b0a7;
L_52b0a4: /* 52b0a4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52b0a5: jmp 0x52b090 */
  goto L_52b090;
L_52b0a7: /* 52b0a7: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 52b0aa: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 52b0ad: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 52b0b0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b0b2: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 52b0b5: jle 0x52b0d3 */
  if ((zf || sf != of)) goto L_52b0d3;
L_52b0b7: /* 52b0b7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52b0ba: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52b0bb: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52b0be: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52b0c0: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52b0c3: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 52b0c7: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 52b0ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 52b0cc: mov ecx, esi */
  ecx = esi;
/* 52b0ce: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52b0d3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_52b0d3: /* 52b0d3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52b0d5: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 52b0d7: lea eax, [edx + edi*8] */
  eax = (uint32_t)(edx + edi*8);
/* 52b0da: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 52b0dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b0de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b0df: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52b0e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b0e3: call 0x4e195b */
  esp -= 4; W32(esp, 0x52b0e8u); SPILL(); f_4e195b(); if (g_unwind) return; RELOAD();
/* 52b0e8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52b0ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52b0ed: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52b0f0: mov dword ptr [edx + edi*8], eax */
  W32((uint32_t)(edx + edi*8), eax);
/* 52b0f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b0f6: mov dword ptr [edx + edi*8 + 4], ecx */
  W32((uint32_t)(edx + edi*8 + 0x4u), ecx);
/* 52b0fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b0fb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 52b0fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b102: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 52b105: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b10c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b10d: mov esp, ebp */
  esp = ebp;
/* 52b10f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b110: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52b113(void) {
  LOAD_REGS();
L_52b113: /* 52b113: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52b116: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52b11b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52b11e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b11f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52b122: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b127u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52b127(); return;
}

void f_52b127(void) {
  LOAD_REGS();
L_52b127: /* 52b127: push 0x56cef0 */
  { uint32_t v = 0x56cef0u; esp -= 4; W32(esp, v); }
/* 52b12c: push 0x5a7660 */
  { uint32_t v = 0x5a7660u; esp -= 4; W32(esp, v); }
/* 52b131: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52b136u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52b136: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b139: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b13b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b13d: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b142u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52b142: guest_badaddr(0x52b142); return;
}

void f_52b190(void) {
  LOAD_REGS();
L_52b190: /* 52b190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52b191: mov ebp, esp */
  ebp = esp;
/* 52b193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52b195: push 0x5582b0 */
  { uint32_t v = 0x5582b0u; esp -= 4; W32(esp, v); }
/* 52b19a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52b1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b1a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52b1a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b1ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b1ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b1ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b1ae: mov edi, ecx */
  edi = ecx;
/* 52b1b0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 52b1b3: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b1b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52b1b9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52b1c0: jl 0x52b2aa */
  if ((sf != of)) goto L_52b2aa;
L_52b1c6: /* 52b1c6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 52b1c8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 52b1cb: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 52b1cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b1cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52b1d2: jnp 0x52b2aa */
  if (!pf) goto L_52b2aa;
L_52b1d8: /* 52b1d8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 52b1db: fcomp dword ptr [ecx + edx*8 - 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + edx*8 + 0xfffffff8u)));
  FPOP();
/* 52b1df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b1e1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b1e4: je 0x52b2aa */
  if (zf) goto L_52b2aa;
L_52b1ea: /* 52b1ea: mov esi, 1 */
  esi = 0x1u;
/* 52b1ef: nop  */
L_52b1f0: /* 52b1f0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b1f2: jge 0x52b2aa */
  if ((sf == of)) goto L_52b2aa;
L_52b1f8: /* 52b1f8: fld dword ptr [ecx + esi*8] */
  { double v = F32((uint32_t)(ecx + esi*8)); FPUSH(v); }
/* 52b1fb: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 52b1fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b200: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b203: jne 0x52b2a4 */
  if (!zf) goto L_52b2a4;
L_52b209: /* 52b209: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 52b20c: lea eax, [ecx + esi*8 - 8] */
  eax = (uint32_t)(ecx + esi*8 + 0xfffffff8u);
/* 52b210: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 52b212: fld dword ptr [ecx + esi*8] */
  { double v = F32((uint32_t)(ecx + esi*8)); FPUSH(v); }
/* 52b215: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 52b217: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 52b219: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 52b21c: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52b222: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b224: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b227: jne 0x52b239 */
  if (!zf) goto L_52b239;
L_52b229: /* 52b229: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 52b22c: fcomp dword ptr [0x5694a4] */
  fpu_com(ST0, F32((uint32_t)(0x5694a4u)));
  FPOP();
/* 52b232: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b234: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52b237: jnp 0x52b250 */
  if (!pf) goto L_52b250;
L_52b239: /* 52b239: push 0x21e */
  { uint32_t v = 0x21eu; esp -= 4; W32(esp, v); }
/* 52b23e: push 0x5a7668 */
  { uint32_t v = 0x5a7668u; esp -= 4; W32(esp, v); }
/* 52b243: push 0x5a7674 */
  { uint32_t v = 0x5a7674u; esp -= 4; W32(esp, v); }
/* 52b248: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x52b24du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 52b24d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52b250: /* 52b250: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 52b252: fld dword ptr [eax + esi*8 + 4] */
  { double v = F32((uint32_t)(eax + esi*8 + 0x4u)); FPUSH(v); }
/* 52b256: lea eax, [eax + esi*8] */
  eax = (uint32_t)(eax + esi*8);
/* 52b259: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 52b25c: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 52b25f: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 52b262: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b265: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b26c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b26e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b26f: mov esp, ebp */
  esp = ebp;
/* 52b271: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b272: ret 4 */
  esp += 8; SPILL(); return;
L_52b2a4: /* 52b2a4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 52b2a5: jmp 0x52b1f0 */
  goto L_52b1f0;
L_52b2aa: /* 52b2aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b2ad: fld dword ptr [0x56947c] */
  { double v = F32((uint32_t)(0x56947cu)); FPUSH(v); }
/* 52b2b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b2b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b2b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b2bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b2bd: mov esp, ebp */
  esp = ebp;
/* 52b2bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b2c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52b275(void) {
  LOAD_REGS();
L_52b275: /* 52b275: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52b278: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52b27d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52b280: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52b281: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52b284: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b289u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52b289(); return;
}

void f_52b289(void) {
  LOAD_REGS();
  goto L_52b289;
L_52b1f0: /* 52b1f0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b1f2: jge 0x52b2aa */
  if ((sf == of)) goto L_52b2aa;
L_52b1f8: /* 52b1f8: fld dword ptr [ecx + esi*8] */
  { double v = F32((uint32_t)(ecx + esi*8)); FPUSH(v); }
/* 52b1fb: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 52b1fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b200: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b203: jne 0x52b2a4 */
  if (!zf) goto L_52b2a4;
L_52b209: /* 52b209: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 52b20c: lea eax, [ecx + esi*8 - 8] */
  eax = (uint32_t)(ecx + esi*8 + 0xfffffff8u);
/* 52b210: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 52b212: fld dword ptr [ecx + esi*8] */
  { double v = F32((uint32_t)(ecx + esi*8)); FPUSH(v); }
/* 52b215: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 52b217: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 52b219: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 52b21c: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 52b222: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b224: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b227: jne 0x52b239 */
  if (!zf) goto L_52b239;
L_52b229: /* 52b229: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 52b22c: fcomp dword ptr [0x5694a4] */
  fpu_com(ST0, F32((uint32_t)(0x5694a4u)));
  FPOP();
/* 52b232: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b234: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 52b237: jnp 0x52b250 */
  if (!pf) goto L_52b250;
L_52b239: /* 52b239: push 0x21e */
  { uint32_t v = 0x21eu; esp -= 4; W32(esp, v); }
/* 52b23e: push 0x5a7668 */
  { uint32_t v = 0x5a7668u; esp -= 4; W32(esp, v); }
/* 52b243: push 0x5a7674 */
  { uint32_t v = 0x5a7674u; esp -= 4; W32(esp, v); }
/* 52b248: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x52b24du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 52b24d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52b250: /* 52b250: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 52b252: fld dword ptr [eax + esi*8 + 4] */
  { double v = F32((uint32_t)(eax + esi*8 + 0x4u)); FPUSH(v); }
/* 52b256: lea eax, [eax + esi*8] */
  eax = (uint32_t)(eax + esi*8);
/* 52b259: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 52b25c: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 52b25f: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 52b262: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b265: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b26c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b26e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b26f: mov esp, ebp */
  esp = ebp;
/* 52b271: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b272: ret 4 */
  esp += 8; SPILL(); return;
L_52b289: /* 52b289: push 0x56cf28 */
  { uint32_t v = 0x56cf28u; esp -= 4; W32(esp, v); }
/* 52b28e: push 0x5a7690 */
  { uint32_t v = 0x5a7690u; esp -= 4; W32(esp, v); }
/* 52b293: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52b298u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52b298: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b29b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b29d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b29f: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b2a4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52b2a4: /* 52b2a4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 52b2a5: jmp 0x52b1f0 */
  goto L_52b1f0;
L_52b2aa: /* 52b2aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b2ad: fld dword ptr [0x56947c] */
  { double v = F32((uint32_t)(0x56947cu)); FPUSH(v); }
/* 52b2b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b2b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b2b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b2bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b2bd: mov esp, ebp */
  esp = ebp;
/* 52b2bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b2c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52b320(void) {
  LOAD_REGS();
L_52b320: /* 52b320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52b321: mov ebp, esp */
  ebp = esp;
/* 52b323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52b325: push 0x5582c0 */
  { uint32_t v = 0x5582c0u; esp -= 4; W32(esp, v); }
/* 52b32a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52b330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52b338: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b33b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b33c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b33d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b33e: mov edi, ecx */
  edi = ecx;
/* 52b340: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 52b342: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52b345: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 52b34b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52b352: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b354: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b357: je 0x52b35b */
  if (zf) goto L_52b35b;
L_52b359: /* 52b359: fchs  */
  ST0 = -ST0;
L_52b35b: /* 52b35b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 52b35e: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 52b361: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 52b367: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b369: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b36c: je 0x52b370 */
  if (zf) goto L_52b370;
L_52b36e: /* 52b36e: fchs  */
  ST0 = -ST0;
L_52b370: /* 52b370: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 52b373: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 52b379: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b37b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b37e: je 0x52b382 */
  if (zf) goto L_52b382;
L_52b380: /* 52b380: fchs  */
  ST0 = -ST0;
L_52b382: /* 52b382: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 52b385: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b387: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b38a: jne 0x52b3c4 */
  if (!zf) goto L_52b3c4;
L_52b38c: /* 52b38c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 52b38e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b390: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52b392: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b395: jne 0x52b3c8 */
  if (!zf) goto L_52b3c8;
L_52b397: /* 52b397: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52b39a: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 52b3a1: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 52b3a4: mov eax, esi */
  eax = esi;
/* 52b3a6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 52b3a8: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 52b3af: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 52b3b2: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 52b3b9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 52b3bc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 52b3bf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 52b3c2: jmp 0x52b3f3 */
  goto L_52b3f3;
L_52b3c4: /* 52b3c4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52b3c6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_52b3c8: /* 52b3c8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52b3cb: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 52b3d2: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 52b3d5: mov edx, esi */
  edx = esi;
/* 52b3d7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 52b3d9: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 52b3e0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 52b3e3: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 52b3ea: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 52b3ed: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 52b3f0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_52b3f3: /* 52b3f3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 52b3f6: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 52b3f9: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 52b3fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52b3fd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 52b3ff: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 52b402: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 52b404: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52b406: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 52b409: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 52b40c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52b40e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 52b410: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 52b413: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 52b416: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 52b418: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 52b41b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 52b41e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 52b420: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 52b423: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 52b426: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 52b429: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 52b42c: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 52b42f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 52b431: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 52b434: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 52b437: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 52b43a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 52b43d: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x52b442u); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 52b442: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52b444: mov edx, esi */
  edx = esi;
/* 52b446: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 52b448: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 52b44b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 52b44e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 52b451: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 52b454: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 52b457: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 52b45a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52b45d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 52b460: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 52b463: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52b465: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 52b468: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 52b46b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 52b46e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 52b470: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 52b472: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 52b475: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52b477: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 52b47a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 52b47c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 52b47f: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 52b482: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 52b485: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 52b487: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52b489: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 52b48c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b48d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 52b48f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b490: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b491: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 52b494: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 52b497: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 52b49a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b49d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b4a4: mov esp, ebp */
  esp = ebp;
/* 52b4a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b4a7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52b4aa(void) {
  LOAD_REGS();
L_52b4aa: /* 52b4aa: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52b4ad: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52b4b2: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 52b4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52b4b6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 52b4b9: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b4beu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52b4be(); return;
}

void f_52b4be(void) {
  LOAD_REGS();
L_52b4be: /* 52b4be: push 0x56cf58 */
  { uint32_t v = 0x56cf58u; esp -= 4; W32(esp, v); }
/* 52b4c3: push 0x5a7638 */
  { uint32_t v = 0x5a7638u; esp -= 4; W32(esp, v); }
/* 52b4c8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52b4cdu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52b4cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b4d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b4d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b4d4: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b4d9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52b4d9: guest_badaddr(0x52b4d9); return;
}

void f_52b550(void) {
  LOAD_REGS();
L_52b550: /* 52b550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52b551: mov ebp, esp */
  ebp = esp;
/* 52b553: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52b555: push 0x5582d0 */
  { uint32_t v = 0x5582d0u; esp -= 4; W32(esp, v); }
/* 52b55a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52b560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b561: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52b568: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b56b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 52b56e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b56f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b570: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b571: xor edi, edi */
  edi = 0;
/* 52b573: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52b575: mov esi, ecx */
  esi = ecx;
/* 52b577: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52b57a: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 52b57c: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 52b57f: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 52b582: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 52b585: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 52b588: je 0x52b658 */
  if (zf) goto L_52b658;
L_52b58e: /* 52b58e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b58f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52b592: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b593: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 52b596: call 0x4e143d */
  esp -= 4; W32(esp, 0x52b59bu); SPILL(); f_4e143d(); if (g_unwind) return; RELOAD();
/* 52b59b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 52b59e: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 52b5a1: mov ebx, esi */
  ebx = esi;
/* 52b5a3: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 52b5a6: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 52b5a9: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 52b5ac: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 52b5af: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 52b5b2: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 52b5b5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 52b5b8: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 52b5be: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 52b5c1: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 52b5c7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 52b5ca: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 52b5d0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 52b5d3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52b5d6: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 52b5d8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 52b5db: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52b5de: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 52b5e1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 52b5e4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52b5e7: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 52b5ea: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52b5ed: mov ecx, edi */
  ecx = edi;
/* 52b5ef: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52b5f2: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
L_52b5f5: /* 52b5f5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b5f7: jge 0x52b63b */
  if ((sf == of)) goto L_52b63b;
L_52b5f9: /* 52b5f9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 52b5fb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52b5fe: fsub dword ptr [edx + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax*4)));
/* 52b601: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 52b604: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 52b607: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 52b60a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 52b60d: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 52b610: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 52b612: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52b614: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 52b616: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 52b618: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52b61a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 52b61c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 52b61e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52b620: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 52b622: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52b624: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52b626: fcom dword ptr [esi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xcu)));
/* 52b629: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 52b62b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52b62e: jne 0x52b636 */
  if (!zf) goto L_52b636;
L_52b630: /* 52b630: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 52b633: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52b634: jmp 0x52b5f5 */
  goto L_52b5f5;
L_52b636: /* 52b636: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 52b638: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52b639: jmp 0x52b5f5 */
  goto L_52b5f5;
L_52b63b: /* 52b63b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 52b63e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b641: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52b644: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x52b649u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 52b649: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 52b64c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b64f: fmul qword ptr [0x56cfb0] */
  ST0 = ST0 * (F64((uint32_t)(0x56cfb0u)));
/* 52b655: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
L_52b658: /* 52b658: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b65b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b65c: mov eax, esi */
  eax = esi;
/* 52b65e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b65f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b666: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b667: mov esp, ebp */
  esp = ebp;
/* 52b669: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b66a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52b66d(void) {
  LOAD_REGS();
L_52b66d: /* 52b66d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 52b670: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52b675: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 52b678: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52b679: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 52b67c: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b681u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52b681(); return;
}

void f_52b681(void) {
  LOAD_REGS();
L_52b681: /* 52b681: push 0x56cf88 */
  { uint32_t v = 0x56cf88u; esp -= 4; W32(esp, v); }
/* 52b686: push 0x5a7640 */
  { uint32_t v = 0x5a7640u; esp -= 4; W32(esp, v); }
/* 52b68b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52b690u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52b690: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b693: xor edi, edi */
  edi = 0;
/* 52b695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b697: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b69cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52b69c: guest_badaddr(0x52b69c); return;
}

void f_52b700(void) {
  LOAD_REGS();
L_52b700: /* 52b700: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52b701: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b702: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b703: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 52b707: mov ecx, 0xc */
  ecx = 0xcu;
/* 52b70c: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 52b710: xor eax, eax */
  eax = 0;
/* 52b712: mov ebx, ecx */
  ebx = ecx;
/* 52b714: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52b717: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52b71a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52b71c: mov ecx, ebx */
  ecx = ebx;
/* 52b71e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 52b720: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 52b724: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b725: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b726: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52b727: ret  */
  esp += 4; SPILL(); return;
}

void f_52b740(void) {
  LOAD_REGS();
L_52b740: /* 52b740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52b744: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 52b747: xor eax, eax */
  eax = 0;
/* 52b749: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 52b74c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 52b74f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52b751: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52b770(void) {
  LOAD_REGS();
L_52b770: /* 52b770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52b771: mov ebp, esp */
  ebp = esp;
/* 52b773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52b775: push 0x5582e0 */
  { uint32_t v = 0x5582e0u; esp -= 4; W32(esp, v); }
/* 52b77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52b780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52b788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b78b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 52b78e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52b790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b793: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52b796: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52b79d: je 0x52b7b3 */
  if (zf) goto L_52b7b3;
L_52b79f: /* 52b79f: push 0x2a */
  { uint32_t v = 0x2au; esp -= 4; W32(esp, v); }
/* 52b7a1: push 0x5a7700 */
  { uint32_t v = 0x5a7700u; esp -= 4; W32(esp, v); }
/* 52b7a6: push 0x5a770c */
  { uint32_t v = 0x5a770cu; esp -= 4; W32(esp, v); }
/* 52b7ab: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x52b7b0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 52b7b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52b7b3: /* 52b7b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b7b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b7b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b7b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b7bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b7c0: mov esp, ebp */
  esp = ebp;
/* 52b7c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b7c3: ret  */
  esp += 4; SPILL(); return;
}

void f_52b7c4(void) {
  LOAD_REGS();
L_52b7c4: /* 52b7c4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52b7c7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52b7cc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52b7cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52b7d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52b7d3: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b7d8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52b7d8(); return;
}

void f_52b7d8(void) {
  LOAD_REGS();
L_52b7d8: /* 52b7d8: push 0x56cfbc */
  { uint32_t v = 0x56cfbcu; esp -= 4; W32(esp, v); }
/* 52b7dd: push 0x5a771c */
  { uint32_t v = 0x5a771cu; esp -= 4; W32(esp, v); }
/* 52b7e2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52b7e7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52b7e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b7ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b7ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b7ee: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b7f3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52b7f3: guest_badaddr(0x52b7f3); return;
}

void f_52b830(void) {
  LOAD_REGS();
L_52b830: /* 52b830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52b831: mov ebp, esp */
  ebp = esp;
/* 52b833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52b835: push 0x5582f0 */
  { uint32_t v = 0x5582f0u; esp -= 4; W32(esp, v); }
/* 52b83a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52b840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52b848: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b84b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b84c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b84d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b84e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52b851: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52b858: call 0x4e42fa */
  esp -= 4; W32(esp, 0x52b85du); SPILL(); f_4e42fa(); if (g_unwind) return; RELOAD();
/* 52b85d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_52b860: /* 52b860: mov eax, dword ptr [0x5f77d8] */
  eax = R32((uint32_t)(0x5f77d8u));
/* 52b865: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52b867: je 0x52b8ae */
  if (zf) goto L_52b8ae;
L_52b869: /* 52b869: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52b86b: mov dword ptr [0x5f77d8], ecx */
  W32((uint32_t)(0x5f77d8u), ecx);
/* 52b871: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52b877: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52b879: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b87a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x52b87du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52b87d: jmp 0x52b860 */
  goto L_52b860;
L_52b8ae: /* 52b8ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b8b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b8b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b8b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b8ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b8bb: mov esp, ebp */
  esp = ebp;
/* 52b8bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b8be: ret  */
  esp += 4; SPILL(); return;
}

void f_52b87f(void) {
  LOAD_REGS();
L_52b87f: /* 52b87f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52b882: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52b887: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52b88a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52b88b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52b88e: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b893u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52b893(); return;
}

void f_52b893(void) {
  LOAD_REGS();
L_52b893: /* 52b893: push 0x56cff0 */
  { uint32_t v = 0x56cff0u; esp -= 4; W32(esp, v); }
/* 52b898: push 0x5a7724 */
  { uint32_t v = 0x5a7724u; esp -= 4; W32(esp, v); }
/* 52b89d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52b8a2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52b8a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52b8a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b8a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52b8a9: call 0x554df6 */
  esp -= 4; W32(esp, 0x52b8aeu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 52b8ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52b8b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52b8b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b8b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52b8ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52b8bb: mov esp, ebp */
  esp = ebp;
/* 52b8bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52b8be: ret  */
  esp += 4; SPILL(); return;
}

void f_52b8f0(void) {
  LOAD_REGS();
L_52b8f0: /* 52b8f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b8f1: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 52b8f4: mov edx, esi */
  edx = esi;
/* 52b8f6: xor eax, eax */
  eax = 0;
/* 52b8f8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52b8fa: je 0x52b918 */
  if (zf) goto L_52b918;
L_52b8fc: /* 52b8fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b8fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_52b900: /* 52b900: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52b902: je 0x52b909 */
  if (zf) goto L_52b909;
L_52b904: /* 52b904: add eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52b907: jmp 0x52b911 */
  goto L_52b911;
L_52b909: /* 52b909: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 52b90b: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 52b90d: lea eax, [eax + edi - 8] */
  eax = (uint32_t)(eax + edi + 0xfffffff8u);
L_52b911: /* 52b911: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 52b913: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52b915: jne 0x52b900 */
  if (!zf) goto L_52b900;
L_52b917: /* 52b917: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_52b918: /* 52b918: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52b919: ret  */
  esp += 4; SPILL(); return;
}

void f_52b930(void) {
  LOAD_REGS();
L_52b930: /* 52b930: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52b934: cmp dword ptr [ecx + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52b937: je 0x52b95b */
  if (zf) goto L_52b95b;
L_52b939: /* 52b939: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b93a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_52b940: /* 52b940: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 52b943: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 52b945: mov dword ptr [ecx + 0xc], esi */
  W32((uint32_t)(ecx + 0xcu), esi);
/* 52b948: mov esi, dword ptr [0x5f77d8] */
  esi = R32((uint32_t)(0x5f77d8u));
/* 52b94e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 52b950: mov dword ptr [0x5f77d8], eax */
  W32((uint32_t)(0x5f77d8u), eax);
/* 52b955: cmp dword ptr [ecx + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52b958: jne 0x52b940 */
  if (!zf) goto L_52b940;
L_52b95a: /* 52b95a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_52b95b: /* 52b95b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 52b95e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52b960: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 52b966: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 52b96d: je 0x52b97c */
  if (zf) goto L_52b97c;
L_52b96f: /* 52b96f: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 52b972: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52b974: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 52b977: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52b979: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_52b97c: /* 52b97c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52b9a0(void) {
  LOAD_REGS();
L_52b9a0: /* 52b9a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52b9a1: mov ebp, esp */
  ebp = esp;
/* 52b9a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52b9a5: push 0x558300 */
  { uint32_t v = 0x558300u; esp -= 4; W32(esp, v); }
/* 52b9aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52b9b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52b9b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52b9b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52b9bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52b9bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52b9bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52b9c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52b9c1: mov edi, ecx */
  edi = ecx;
/* 52b9c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52b9c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52b9cd: xor ecx, ecx */
  ecx = 0;
/* 52b9cf: mov edx, 0x5f77d8 */
  edx = 0x5f77d8u;
L_52b9d4: /* 52b9d4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 52b9d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52b9d8: je 0x52b9e5 */
  if (zf) goto L_52b9e5;
L_52b9da: /* 52b9da: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b9dd: jl 0x52ba35 */
  if ((sf != of)) goto L_52ba35;
L_52b9df: /* 52b9df: mov ecx, eax */
  ecx = eax;
/* 52b9e1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52b9e3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
L_52b9e5: /* 52b9e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52b9e7: jne 0x52ba0d */
  if (!zf) goto L_52ba0d;
L_52b9e9: /* 52b9e9: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 52b9ec: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 52b9ef: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52b9f1: jge 0x52b9f5 */
  if ((sf == of)) goto L_52b9f5;
L_52b9f3: /* 52b9f3: mov esi, eax */
  esi = eax;
L_52b9f5: /* 52b9f5: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52b9fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52b9fd: push 0x5a7734 */
  { uint32_t v = 0x5a7734u; esp -= 4; W32(esp, v); }
/* 52ba02: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 52ba05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ba06: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52ba08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52ba08: mov ecx, eax */
  ecx = eax;
/* 52ba0a: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
L_52ba0d: /* 52ba0d: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 52ba10: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52ba12: lea eax, [ecx + 8] */
  eax = (uint32_t)(ecx + 0x8u);
/* 52ba15: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 52ba18: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 52ba1a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 52ba1d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ba1f: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 52ba22: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ba25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ba26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ba27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ba2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ba2f: mov esp, ebp */
  esp = ebp;
/* 52ba31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ba32: ret 4 */
  esp += 8; SPILL(); return;
L_52ba35: /* 52ba35: mov edx, eax */
  edx = eax;
/* 52ba37: jmp 0x52b9d4 */
  goto L_52b9d4;
}

void f_52ba39(void) {
  LOAD_REGS();
L_52ba39: /* 52ba39: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52ba3c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52ba41: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52ba44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52ba45: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52ba48: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ba4du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52ba4d(); return;
}

void f_52ba4d(void) {
  LOAD_REGS();
L_52ba4d: /* 52ba4d: push 0x56d018 */
  { uint32_t v = 0x56d018u; esp -= 4; W32(esp, v); }
/* 52ba52: push 0x5a7748 */
  { uint32_t v = 0x5a7748u; esp -= 4; W32(esp, v); }
/* 52ba57: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52ba5cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52ba5c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ba5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ba61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ba63: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ba68u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52ba68: guest_badaddr(0x52ba68); return;
}

void f_52bab0(void) {
  LOAD_REGS();
L_52bab0: /* 52bab0: movzx ax, byte ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(esp + 0x4u)))) & 0xffffu);
/* 52bab6: ret  */
  esp += 4; SPILL(); return;
}

void f_52bad0(void) {
  LOAD_REGS();
L_52bad0: /* 52bad0: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 52bad5: ret  */
  esp += 4; SPILL(); return;
}

void f_52baf0(void) {
  LOAD_REGS();
L_52baf0: /* 52baf0: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 52baf5: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52baf9: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 52bafc: jb 0x52bb03 */
  if (cf) goto L_52bb03;
L_52bafe: /* 52bafe: mov eax, 0x7f */
  eax = 0x7fu;
L_52bb03: /* 52bb03: ret  */
  esp += 4; SPILL(); return;
}

void f_52bb20(void) {
  LOAD_REGS();
L_52bb20: /* 52bb20: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 52bb25: ret  */
  esp += 4; SPILL(); return;
}

void f_52bb40(void) {
  LOAD_REGS();
L_52bb40: /* 52bb40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52bb44: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52bb47: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52bb4a: je 0x52bb62 */
  if (zf) goto L_52bb62;
L_52bb4c: /* 52bb4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52bb50: /* 52bb50: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52bb54: ja 0x52bb68 */
  if ((!cf && !zf)) goto L_52bb68;
L_52bb56: /* 52bb56: mov ax, word ptr [ecx + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 52bb5a: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52bb5d: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52bb60: jne 0x52bb50 */
  if (!zf) goto L_52bb50;
L_52bb62: /* 52bb62: mov eax, 1 */
  eax = 0x1u;
/* 52bb67: ret  */
  esp += 4; SPILL(); return;
L_52bb68: /* 52bb68: xor eax, eax */
  eax = 0;
/* 52bb6a: ret  */
  esp += 4; SPILL(); return;
}

void f_52bb80(void) {
  LOAD_REGS();
L_52bb80: /* 52bb80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bb81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52bb82: mov ecx, 0x28 */
  ecx = 0x28u;
/* 52bb87: mov edi, 0x5fa494 */
  edi = 0x5fa494u;
/* 52bb8c: xor eax, eax */
  eax = 0;
/* 52bb8e: mov ebx, ecx */
  ebx = ecx;
/* 52bb90: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52bb93: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52bb96: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52bb98: mov ecx, ebx */
  ecx = ebx;
/* 52bb9a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 52bb9c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52bba0: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 52bba2: push 0x5fa494 */
  { uint32_t v = 0x5fa494u; esp -= 4; W32(esp, v); }
/* 52bba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52bba8: call dword ptr [0x6ac614] */
  esp -= 4; W32(esp, 0x52bbaeu); SPILL(); f_416c11(); if (g_unwind) return; /* MSVCR70!_itow */ RELOAD();
/* 52bbae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52bbb1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52bbb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52bbb3: ret  */
  esp += 4; SPILL(); return;
}

void f_52bbd0(void) {
  LOAD_REGS();
L_52bbd0: /* 52bbd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52bbd1: mov ebp, esp */
  ebp = esp;
/* 52bbd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bbd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bbd5: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 52bbd8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52bbda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52bbdb: jne 0x52bbe1 */
  if (!zf) goto L_52bbe1;
L_52bbdd: /* 52bbdd: xor edi, edi */
  edi = 0;
/* 52bbdf: jmp 0x52bbf4 */
  goto L_52bbf4;
L_52bbe1: /* 52bbe1: lea eax, [esi + 7] */
  eax = (uint32_t)(esi + 0x7u);
/* 52bbe4: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 52bbe7: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bbea: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 52bbed: call 0x554f80 */
  esp -= 4; W32(esp, 0x52bbf2u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 52bbf2: mov edi, esp */
  edi = esp;
L_52bbf4: /* 52bbf4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 52bbf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bbf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bbf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52bbfa: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x52bbffu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 52bbff: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 52bc02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bc03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52bc04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bc05: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x52bc0au); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 52bc0a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52bc0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bc0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52bc0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52bc10: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x52bc15u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 52bc15: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52bc18: lea esp, [ebp - 0xc] */
  esp = (uint32_t)(ebp + 0xfffffff4u);
/* 52bc1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52bc1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52bc1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52bc1e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52bc1f: ret  */
  esp += 4; SPILL(); return;
}

void f_52bc40(void) {
  LOAD_REGS();
L_52bc40: /* 52bc40: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 52bc44: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52bc48: xor ecx, ecx */
  ecx = 0;
/* 52bc4a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52bc4c: not eax */
  eax = ~eax;
/* 52bc4e: jle 0x52bc76 */
  if ((zf || sf != of)) goto L_52bc76;
L_52bc50: /* 52bc50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bc51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bc52: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 52bc56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_52bc57: /* 52bc57: movzx edi, byte ptr [ecx + esi] */
  edi = (uint32_t)(R8((uint32_t)(ecx + esi)));
/* 52bc5b: mov ebx, eax */
  ebx = eax;
/* 52bc5d: shr ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 52bc60: xor edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52bc62: mov edi, dword ptr [edi*4 + 0x5f78e8] */
  edi = R32((uint32_t)(edi*4 + 0x5f78e8u));
/* 52bc69: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52bc6c: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 52bc6e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52bc6f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52bc71: jl 0x52bc57 */
  if ((sf != of)) goto L_52bc57;
L_52bc73: /* 52bc73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52bc74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52bc75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_52bc76: /* 52bc76: not eax */
  eax = ~eax;
/* 52bc78: ret  */
  esp += 4; SPILL(); return;
}

void f_52bc90(void) {
  LOAD_REGS();
L_52bc90: /* 52bc90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bc91: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 52bc95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52bc96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bc97: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52bc9cu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52bc9c: mov edi, eax */
  edi = eax;
/* 52bc9e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52bca1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52bca4: xor edx, edx */
  edx = 0;
/* 52bca6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52bca8: jle 0x52bcec */
  if ((zf || sf != of)) goto L_52bcec;
L_52bcaa: /* 52bcaa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52bcab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bcac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52bcb0: /* 52bcb0: movzx esi, word ptr [ebx + edx*2] */
  esi = (uint32_t)(R16((uint32_t)(ebx + edx*2)));
/* 52bcb4: mov ecx, eax */
  ecx = eax;
/* 52bcb6: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52bcb9: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52bcbc: mov ebp, esi */
  ebp = esi;
/* 52bcbe: and ebp, 0xff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 52bcc4: xor ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52bcc6: mov ecx, dword ptr [ecx*4 + 0x5f78e8] */
  ecx = R32((uint32_t)(ecx*4 + 0x5f78e8u));
/* 52bccd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52bccf: mov eax, ecx */
  eax = ecx;
/* 52bcd1: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52bcd4: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 52bcd6: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52bcd9: mov eax, dword ptr [eax*4 + 0x5f78e8] */
  eax = R32((uint32_t)(eax*4 + 0x5f78e8u));
/* 52bce0: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52bce3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 52bce5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 52bce6: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52bce8: jl 0x52bcb0 */
  if ((sf != of)) goto L_52bcb0;
L_52bcea: /* 52bcea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52bceb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_52bcec: /* 52bcec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52bced: not eax */
  eax = ~eax;
/* 52bcef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52bcf0: ret  */
  esp += 4; SPILL(); return;
}

void f_52bd20(void) {
  LOAD_REGS();
L_52bd20: /* 52bd20: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52bd24: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 52bd25: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52bd28: jne 0x52bd2d */
  if (!zf) goto L_52bd2d;
L_52bd2a: /* 52bd2a: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 52bd2c: ret  */
  esp += 4; SPILL(); return;
L_52bd2d: /* 52bd2d: cmp edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52bd33: ja 0x52bd51 */
  if ((!cf && !zf)) goto L_52bd51;
L_52bd35: /* 52bd35: mov eax, 0x100 */
  eax = 0x100u;
/* 52bd3a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 52bd3c: sbb al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 52bd3e: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 52bd41: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 52bd44: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 52bd46: xor eax, eax */
  eax = 0;
/* 52bd48: mov al, byte ptr [edx + 0x5f77e0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x5f77e0u))) & 0xffu);
/* 52bd4e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bd50: ret  */
  esp += 4; SPILL(); return;
L_52bd51: /* 52bd51: mov ecx, 0x1000000 */
  ecx = 0x1000000u;
/* 52bd56: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 52bd58: sbb al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 52bd5a: and al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 52bd5c: add al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 7) & 1;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 52bd5e: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 52bd61: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 52bd63: xor eax, eax */
  eax = 0;
/* 52bd65: mov al, byte ptr [edx + 0x5f77e0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x5f77e0u))) & 0xffu);
/* 52bd6b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bd6d: ret  */
  esp += 4; SPILL(); return;
}

void f_52bd90(void) {
  LOAD_REGS();
L_52bd90: /* 52bd90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52bd94: xor ecx, ecx */
  ecx = 0;
/* 52bd96: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 52bd99: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 52bd9c: mov dword ptr [eax], 0x67452301 */
  W32((uint32_t)(eax), 0x67452301u);
/* 52bda2: mov dword ptr [eax + 4], 0xefcdab89 */
  W32((uint32_t)(eax + 0x4u), 0xefcdab89u);
/* 52bda9: mov dword ptr [eax + 8], 0x98badcfe */
  W32((uint32_t)(eax + 0x8u), 0x98badcfeu);
/* 52bdb0: mov dword ptr [eax + 0xc], 0x10325476 */
  W32((uint32_t)(eax + 0xcu), 0x10325476u);
/* 52bdb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52bdb8: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bdbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52bdbc: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 52bdc0: mov ecx, 0x40 */
  ecx = 0x40u;
/* 52bdc5: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 52bdc9: xor eax, eax */
  eax = 0;
/* 52bdcb: mov ebx, ecx */
  ebx = ecx;
/* 52bdcd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52bdd0: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52bdd3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52bdd5: mov ecx, ebx */
  ecx = ebx;
/* 52bdd7: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 52bdd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52bdda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52bddb: ret  */
  esp += 4; SPILL(); return;
}

void f_52be00(void) {
  LOAD_REGS();
L_52be00: /* 52be00: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 52be05: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52be09: jb 0x52be17 */
  if (cf) goto L_52be17;
L_52be0b: /* 52be0b: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52be0f: ja 0x52be17 */
  if ((!cf && !zf)) goto L_52be17;
L_52be11: /* 52be11: mov eax, 1 */
  eax = 0x1u;
/* 52be16: ret  */
  esp += 4; SPILL(); return;
L_52be17: /* 52be17: xor eax, eax */
  eax = 0;
/* 52be19: ret  */
  esp += 4; SPILL(); return;
}

void f_52be30(void) {
  LOAD_REGS();
L_52be30: /* 52be30: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 52be35: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52be39: jb 0x52be41 */
  if (cf) goto L_52be41;
L_52be3b: /* 52be3b: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52be3f: jbe 0x52be59 */
  if ((cf | zf)) goto L_52be59;
L_52be41: /* 52be41: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52be45: jb 0x52be4d */
  if (cf) goto L_52be4d;
L_52be47: /* 52be47: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52be4b: jbe 0x52be59 */
  if ((cf | zf)) goto L_52be59;
L_52be4d: /* 52be4d: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52be51: jb 0x52be5f */
  if (cf) goto L_52be5f;
L_52be53: /* 52be53: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52be57: ja 0x52be5f */
  if ((!cf && !zf)) goto L_52be5f;
L_52be59: /* 52be59: mov eax, 1 */
  eax = 0x1u;
/* 52be5e: ret  */
  esp += 4; SPILL(); return;
L_52be5f: /* 52be5f: xor eax, eax */
  eax = 0;
/* 52be61: ret  */
  esp += 4; SPILL(); return;
}

void f_52be80(void) {
  LOAD_REGS();
L_52be80: /* 52be80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52be81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 52be85: xor ecx, ecx */
  ecx = 0;
/* 52be87: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52be8a: xor eax, eax */
  eax = 0;
/* 52be8c: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52be8f: je 0x52bede */
  if (zf) goto L_52bede;
L_52be91: /* 52be91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_52be92: /* 52be92: cmp cx, 0x61 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52be96: jb 0x52bea1 */
  if (cf) goto L_52bea1;
L_52be98: /* 52be98: cmp cx, 0x7a */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52be9c: ja 0x52bea1 */
  if ((!cf && !zf)) goto L_52bea1;
L_52be9e: /* 52be9e: add ecx, -0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_52bea1: /* 52bea1: xor edx, edx */
  edx = 0;
/* 52bea3: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 52bea5: mov edi, eax */
  edi = eax;
/* 52bea7: movzx ecx, ch */
  ecx = (uint32_t)(((ecx >> 8) & 0xffu));
/* 52beaa: shr edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52bead: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52beb0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52beb2: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52beb8: mov eax, dword ptr [edx*4 + 0x5f78e8] */
  eax = R32((uint32_t)(edx*4 + 0x5f78e8u));
/* 52bebf: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 52bec1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52bec3: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 52bec9: mov ecx, dword ptr [ecx*4 + 0x5f78e8] */
  ecx = R32((uint32_t)(ecx*4 + 0x5f78e8u));
/* 52bed0: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52bed3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 52bed5: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52bed8: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52bedb: jne 0x52be92 */
  if (!zf) goto L_52be92;
L_52bedd: /* 52bedd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_52bede: /* 52bede: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52bedf: ret  */
  esp += 4; SPILL(); return;
}

void f_52bf00(void) {
  LOAD_REGS();
L_52bf00: /* 52bf00: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52bf06: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52bf0a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52bf0c: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 52bf11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52bf12: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x52bf14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52bf14: ret  */
  esp += 4; SPILL(); return;
}

void f_52bf30(void) {
  LOAD_REGS();
L_52bf30: /* 52bf30: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 52bf34: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52bf36: jle 0x52bf70 */
  if ((zf || sf != of)) goto L_52bf70;
L_52bf38: /* 52bf38: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52bf3c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 52bf40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bf41: lea esi, [edx - 1] */
  esi = (uint32_t)(edx + 0xffffffffu);
/* 52bf44: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52bf47: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52bf48: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bf4b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 52bf4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52bf50: /* 52bf50: mov dl, byte ptr [eax - 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xfffffffeu))) & 0xffu);
/* 52bf53: mov byte ptr [ecx - 1], dl */
  W8((uint32_t)(ecx + 0xffffffffu), (edx & 0xffu));
/* 52bf56: mov dl, byte ptr [eax - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xffffffffu))) & 0xffu);
/* 52bf59: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 52bf5b: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 52bf5d: mov byte ptr [ecx + 1], dl */
  W8((uint32_t)(ecx + 0x1u), (edx & 0xffu));
/* 52bf60: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 52bf63: mov byte ptr [ecx + 2], dl */
  W8((uint32_t)(ecx + 0x2u), (edx & 0xffu));
/* 52bf66: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bf69: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52bf6c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 52bf6d: jne 0x52bf50 */
  if (!zf) goto L_52bf50;
L_52bf6f: /* 52bf6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_52bf70: /* 52bf70: ret  */
  esp += 4; SPILL(); return;
}

void f_52bfa0(void) {
  LOAD_REGS();
L_52bfa0: /* 52bfa0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 52bfa4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52bfa6: jle 0x52bfe8 */
  if ((zf || sf != of)) goto L_52bfe8;
L_52bfa8: /* 52bfa8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 52bfac: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bfaf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 52bfb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52bfb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 52bfb5: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52bfb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52bfb9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52bfba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_52bfc0: /* 52bfc0: movzx edi, byte ptr [eax - 1] */
  edi = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 52bfc4: xor edx, edx */
  edx = 0;
/* 52bfc6: mov dh, byte ptr [eax + 1] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu) << 8);
/* 52bfc9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52bfcc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52bfcf: mov dl, byte ptr [eax - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xfffffffcu))) & 0xffu);
/* 52bfd2: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52bfd5: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52bfd7: movzx edi, byte ptr [eax - 6] */
  edi = (uint32_t)(R8((uint32_t)(eax + 0xfffffffau)));
/* 52bfdb: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52bfde: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52bfe0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 52bfe1: mov dword ptr [esi - 4], edx */
  W32((uint32_t)(esi + 0xfffffffcu), edx);
/* 52bfe4: jne 0x52bfc0 */
  if (!zf) goto L_52bfc0;
L_52bfe6: /* 52bfe6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52bfe7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_52bfe8: /* 52bfe8: ret  */
  esp += 4; SPILL(); return;
}

void f_52c010(void) {
  LOAD_REGS();
L_52c010: /* 52c010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c011: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 52c015: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c016: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52c01b: push 0x5fa4c8 */
  { uint32_t v = 0x5fa4c8u; esp -= 4; W32(esp, v); }
/* 52c020: call 0x4e3693 */
  esp -= 4; W32(esp, 0x52c025u); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 52c025: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c028: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52c02d: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 52c031: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c032: mov dword ptr [esp + 8], 0x5fa4c8 */
  W32((uint32_t)(esp + 0x8u), 0x5fa4c8u);
/* 52c03a: call 0x554df6 */
  esp -= 4; W32(esp, 0x52c03fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52c03f: guest_badaddr(0x52c03f); return;
}

void f_52c050(void) {
  LOAD_REGS();
L_52c050: /* 52c050: xor eax, eax */
  eax = 0;
/* 52c052: ret  */
  esp += 4; SPILL(); return;
}

void f_52c070(void) {
  LOAD_REGS();
L_52c070: /* 52c070: sub esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52c076: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c077: mov ebx, dword ptr [esp + 0xcc] */
  ebx = R32((uint32_t)(esp + 0xccu));
/* 52c07e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c07f: mov esi, dword ptr [esp + 0xe0] */
  esi = R32((uint32_t)(esp + 0xe0u));
/* 52c086: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c087: mov edi, dword ptr [0x5a7a58] */
  edi = R32((uint32_t)(0x5a7a58u));
/* 52c08d: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52c090: jne 0x52c0c7 */
  if (!zf) goto L_52c0c7;
L_52c092: /* 52c092: xor edi, edi */
  edi = 0;
L_52c094: /* 52c094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c095: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c096: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 52c09a: push 0x5a7a5c */
  { uint32_t v = 0x5a7a5cu; esp -= 4; W32(esp, v); }
/* 52c09f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c0a0: call 0x4e4183 */
  esp -= 4; W32(esp, 0x52c0a5u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 52c0a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52c0a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c0aa: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 52c0ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c0af: mov ecx, esi */
  ecx = esi;
/* 52c0b1: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x52c0b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c0b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52c0b6: jl 0x52c0c7 */
  if ((sf != of)) goto L_52c0c7;
L_52c0b8: /* 52c0b8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52c0b9: cmp edi, 0x10000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52c0bf: jl 0x52c094 */
  if ((sf != of)) goto L_52c094;
L_52c0c1: /* 52c0c1: mov edi, dword ptr [0x5a7a58] */
  edi = R32((uint32_t)(0x5a7a58u));
L_52c0c7: /* 52c0c7: mov eax, edi */
  eax = edi;
/* 52c0c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c0ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c0cb: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 52c0cf: push 0x5a7a74 */
  { uint32_t v = 0x5a7a74u; esp -= 4; W32(esp, v); }
/* 52c0d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52c0d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c0d6: mov dword ptr [0x5a7a58], edi */
  W32((uint32_t)(0x5a7a58u), edi);
/* 52c0dc: call 0x4e4183 */
  esp -= 4; W32(esp, 0x52c0e1u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 52c0e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52c0e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c0e6: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 52c0ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c0eb: mov ecx, esi */
  ecx = esi;
/* 52c0ed: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x52c0f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c0f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52c0f2: jge 0x52c217 */
  if ((sf == of)) goto L_52c217;
L_52c0f8: /* 52c0f8: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 52c0fd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52c0ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52c102: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 52c106: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c107: mov ecx, esi */
  ecx = esi;
/* 52c109: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x52c10cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c10c: mov esi, eax */
  esi = eax;
/* 52c10e: xor eax, eax */
  eax = 0;
/* 52c110: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c112: je 0x52c219 */
  if (zf) goto L_52c219;
L_52c118: /* 52c118: mov ebx, dword ptr [esp + 0xdc] */
  ebx = R32((uint32_t)(esp + 0xdcu));
/* 52c11f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52c120: mov ebp, dword ptr [esp + 0xdc] */
  ebp = R32((uint32_t)(esp + 0xdcu));
/* 52c127: mov edi, ebp */
  edi = ebp;
/* 52c129: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 52c12c: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 52c12e: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 52c132: lea edx, [edi + edi*2 + 0x36] */
  edx = (uint32_t)(edi + edi*2 + 0x36u);
/* 52c136: mov word ptr [esp + 0x26], ax */
  W16((uint32_t)(esp + 0x26u), (eax & 0xffffu));
/* 52c13b: mov word ptr [esp + 0x28], ax */
  W16((uint32_t)(esp + 0x28u), (eax & 0xffffu));
/* 52c140: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52c142: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c143: mov ecx, esi */
  ecx = esi;
/* 52c145: mov word ptr [esp + 0x24], 0x4d42 */
  W16((uint32_t)(esp + 0x24u), 0x4d42u);
/* 52c14c: mov dword ptr [esp + 0x26], edx */
  W32((uint32_t)(esp + 0x26u), edx);
/* 52c150: mov dword ptr [esp + 0x2e], 0x36 */
  W32((uint32_t)(esp + 0x2eu), 0x36u);
/* 52c158: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x52c15bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c15b: xor eax, eax */
  eax = 0;
/* 52c15d: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 52c15f: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 52c163: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 52c167: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 52c16a: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 52c16e: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 52c172: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 52c176: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 52c17a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52c17c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c17d: mov ecx, esi */
  ecx = esi;
/* 52c17f: mov dword ptr [esp + 0x34], 0x28 */
  W32((uint32_t)(esp + 0x34u), 0x28u);
/* 52c187: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 52c18b: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 52c18f: mov word ptr [esp + 0x40], 1 */
  W16((uint32_t)(esp + 0x40u), 0x1u);
/* 52c196: mov word ptr [esp + 0x42], 0x18 */
  W16((uint32_t)(esp + 0x42u), 0x18u);
/* 52c19d: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 52c1a1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x52c1a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c1a4: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 52c1a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52c1a9: jl 0x52c1ff */
  if ((sf != of)) goto L_52c1ff;
L_52c1ab: /* 52c1ab: mov edi, dword ptr [esp + 0xe4] */
  edi = R32((uint32_t)(esp + 0xe4u));
/* 52c1b2: mov edx, eax */
  edx = eax;
/* 52c1b4: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 52c1b7: mov ecx, ebp */
  ecx = ebp;
/* 52c1b9: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 52c1bb: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52c1be: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 52c1c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52c1c2: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 52c1c6: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 52c1ca: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 52c1ce: mov edi, edi */
  edi = edi;
L_52c1d0: /* 52c1d0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52c1d2: jle 0x52c1ea */
  if ((zf || sf != of)) goto L_52c1ea;
L_52c1d4: /* 52c1d4: mov ebx, ebp */
  ebx = ebp;
L_52c1d6: /* 52c1d6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52c1d8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 52c1da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c1db: mov ecx, esi */
  ecx = esi;
/* 52c1dd: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x52c1e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c1e0: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52c1e3: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 52c1e4: jne 0x52c1d6 */
  if (!zf) goto L_52c1d6;
L_52c1e6: /* 52c1e6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_52c1ea: /* 52c1ea: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 52c1ee: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 52c1f2: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52c1f4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 52c1f5: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 52c1f9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 52c1fd: jne 0x52c1d0 */
  if (!zf) goto L_52c1d0;
L_52c1ff: /* 52c1ff: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52c201: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52c203: mov ecx, esi */
  ecx = esi;
/* 52c205: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52c207u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c207: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52c208: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52c209: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c20a: mov eax, 1 */
  eax = 0x1u;
/* 52c20f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52c210: add esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c216: ret  */
  esp += 4; SPILL(); return;
L_52c217: /* 52c217: xor eax, eax */
  eax = 0;
L_52c219: /* 52c219: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52c21a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c21b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52c21c: add esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c222: ret  */
  esp += 4; SPILL(); return;
}

void f_52c2a0(void) {
  LOAD_REGS();
L_52c2a0: /* 52c2a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52c2a2: push 0x55831b */
  { uint32_t v = 0x55831bu; esp -= 4; W32(esp, v); }
/* 52c2a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52c2ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c2ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52c2b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c2b6: mov eax, dword ptr [0x5f7d04] */
  eax = R32((uint32_t)(0x5f7d04u));
/* 52c2bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c2bd: jne 0x52c358 */
  if (!zf) goto L_52c358;
L_52c2c3: /* 52c2c3: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52c2c9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52c2cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c2cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c2cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c2ce: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 52c2d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52c2d5: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x52c2d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c2d7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 52c2db: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52c2e1: lea esi, [edi + edi*4] */
  esi = (uint32_t)(edi + edi*4);
/* 52c2e4: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 52c2e9: mov dword ptr [0x5f7d04], eax */
  W32((uint32_t)(0x5f7d04u), eax);
/* 52c2ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52c2f0: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52c2f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c2f4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52c2f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c2f6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52c2fc: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 52c301: mov dword ptr [0x5f7d08], eax */
  W32((uint32_t)(0x5f7d08u), eax);
/* 52c306: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52c308: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 52c30a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x52c30cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52c30c: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 52c310: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c312: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 52c31a: je 0x52c325 */
  if (zf) goto L_52c325;
L_52c31c: /* 52c31c: mov ecx, eax */
  ecx = eax;
/* 52c31e: call 0x4e2a59 */
  esp -= 4; W32(esp, 0x52c323u); SPILL(); f_4e2a59(); if (g_unwind) return; RELOAD();
/* 52c323: jmp 0x52c327 */
  goto L_52c327;
L_52c325: /* 52c325: xor eax, eax */
  eax = 0;
L_52c327: /* 52c327: mov dword ptr [0x5f7d18], eax */
  W32((uint32_t)(0x5f7d18u), eax);
/* 52c32c: mov dword ptr [0x5f7d10], edi */
  W32((uint32_t)(0x5f7d10u), edi);
/* 52c332: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 52c336: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 52c33a: mov edi, dword ptr [0x5f7d08] */
  edi = R32((uint32_t)(0x5f7d08u));
/* 52c340: xor eax, eax */
  eax = 0;
/* 52c342: mov ebx, ecx */
  ebx = ecx;
/* 52c344: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52c347: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c34a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52c34c: mov ecx, ebx */
  ecx = ebx;
/* 52c34e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 52c350: mov eax, dword ptr [0x5f7d04] */
  eax = R32((uint32_t)(0x5f7d04u));
/* 52c355: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52c356: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c357: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_52c358: /* 52c358: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52c35c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52c363: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c366: ret  */
  esp += 4; SPILL(); return;
}

void f_52c3b0(void) {
  LOAD_REGS();
L_52c3b0: /* 52c3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c3b1: mov esi, ecx */
  esi = ecx;
/* 52c3b3: call 0x4e2efa */
  esp -= 4; W32(esp, 0x52c3b8u); SPILL(); f_4e2efa(); if (g_unwind) return; RELOAD();
/* 52c3b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52c3bd: je 0x52c3cb */
  if (zf) goto L_52c3cb;
L_52c3bf: /* 52c3bf: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52c3c5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52c3c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c3c8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x52c3cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52c3cb: /* 52c3cb: mov eax, esi */
  eax = esi;
/* 52c3cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c3ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52c3f0(void) {
  LOAD_REGS();
L_52c3f0: /* 52c3f0: test byte ptr [esp + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52c3f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c3f6: mov esi, ecx */
  esi = ecx;
/* 52c3f8: je 0x52c406 */
  if (zf) goto L_52c406;
L_52c3fa: /* 52c3fa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52c400: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52c402: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c403: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x52c406u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52c406: /* 52c406: mov eax, esi */
  eax = esi;
/* 52c408: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c409: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52c420(void) {
  LOAD_REGS();
L_52c420: /* 52c420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52c422: push 0x558338 */
  { uint32_t v = 0x558338u; esp -= 4; W32(esp, v); }
/* 52c427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52c42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c42e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52c435: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52c438: mov eax, dword ptr [0x5f7d18] */
  eax = R32((uint32_t)(0x5f7d18u));
/* 52c43d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c43e: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 52c442: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c443: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 52c447: call 0x4e25bd */
  esp -= 4; W32(esp, 0x52c44cu); SPILL(); f_4e25bd(); if (g_unwind) return; RELOAD();
/* 52c44c: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c451: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 52c457: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 52c45a: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 52c45e: mov dword ptr [edx + ecx*8 + 0x24], eax */
  W32((uint32_t)(edx + ecx*8 + 0x24u), eax);
/* 52c462: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c467: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 52c46b: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 52c46e: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 52c473: mov dword ptr [eax + ecx*8 + 8], edx */
  W32((uint32_t)(eax + ecx*8 + 0x8u), edx);
/* 52c477: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 52c47b: mov edx, dword ptr [0x5f7d0c] */
  edx = R32((uint32_t)(0x5f7d0cu));
/* 52c481: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c482: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52c486: xor esi, esi */
  esi = 0;
/* 52c488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52c489: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 52c48d: call 0x4e34d6 */
  esp -= 4; W32(esp, 0x52c492u); SPILL(); f_4e34d6(); if (g_unwind) return; RELOAD();
/* 52c492: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 52c498: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c49a: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c49f: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 52c4a2: jne 0x52c4ee */
  if (!zf) goto L_52c4ee;
L_52c4a4: /* 52c4a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c4a5: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 52c4a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c4a9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 52c4ad: mov ecx, 0x28 */
  ecx = 0x28u;
/* 52c4b2: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 52c4b6: xor eax, eax */
  eax = 0;
/* 52c4b8: mov ebx, ecx */
  ebx = ecx;
/* 52c4ba: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52c4bd: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c4c0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52c4c2: mov ecx, ebx */
  ecx = ebx;
/* 52c4c4: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 52c4c6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 52c4ca: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 52c4d2: call 0x4e21cb */
  esp -= 4; W32(esp, 0x52c4d7u); SPILL(); f_4e21cb(); if (g_unwind) return; RELOAD();
/* 52c4d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52c4d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52c4d9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52c4dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c4dd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 52c4e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52c4e8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c4eb: ret 0x18 */
  esp += 28; SPILL(); return;
L_52c4ee: /* 52c4ee: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 52c4f2: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 52c4f5: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c4fa: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 52c500: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 52c504: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 52c507: mov dword ptr [ecx + eax*8 + 0x10], edx */
  W32((uint32_t)(ecx + eax*8 + 0x10u), edx);
/* 52c50b: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c510: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 52c516: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 52c519: mov dword ptr [ecx + eax*8 + 0x14], esi */
  W32((uint32_t)(ecx + eax*8 + 0x14u), esi);
/* 52c51d: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c522: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 52c525: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 52c52a: mov dword ptr [eax + edx*8 + 0x1c], esi */
  W32((uint32_t)(eax + edx*8 + 0x1cu), esi);
/* 52c52e: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c533: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 52c539: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 52c53c: mov dword ptr [edx + ecx*8 + 0x18], 1 */
  W32((uint32_t)(edx + ecx*8 + 0x18u), 0x1u);
/* 52c544: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 52c548: imul eax, dword ptr [esp + 0x28] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x28u)));
  eax = (uint32_t)r;
  }
/* 52c54d: mov ecx, dword ptr [0x5f7d0c] */
  ecx = R32((uint32_t)(0x5f7d0cu));
/* 52c553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c555: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 52c559: call 0x4e1afa */
  esp -= 4; W32(esp, 0x52c55eu); SPILL(); f_4e1afa(); if (g_unwind) return; RELOAD();
/* 52c55e: mov eax, dword ptr [0x5f7d0c] */
  eax = R32((uint32_t)(0x5f7d0cu));
/* 52c563: mov esi, eax */
  esi = eax;
/* 52c565: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52c566: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52c567: idiv dword ptr [0x5f7d10] */
  { int32_t d = (int32_t)R32((uint32_t)(0x5f7d10u)); if (!d) d = (int32_t)guest_divzero(0x52c567);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 52c56d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 52c571: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 52c579: mov dword ptr [0x5f7d0c], edx */
  W32((uint32_t)(0x5f7d0cu), edx);
/* 52c57f: call 0x4e21cb */
  esp -= 4; W32(esp, 0x52c584u); SPILL(); f_4e21cb(); if (g_unwind) return; RELOAD();
/* 52c584: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 52c588: mov eax, esi */
  eax = esi;
/* 52c58a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c58b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52c592: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c595: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_52c600(void) {
  LOAD_REGS();
L_52c600: /* 52c600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52c602: push 0x558358 */
  { uint32_t v = 0x558358u; esp -= 4; W32(esp, v); }
/* 52c607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52c60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c60e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52c615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c616: mov eax, dword ptr [0x5f7d18] */
  eax = R32((uint32_t)(0x5f7d18u));
/* 52c61b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c61c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c61d: mov edi, ecx */
  edi = ecx;
/* 52c61f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c620: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 52c624: call 0x4e25bd */
  esp -= 4; W32(esp, 0x52c629u); SPILL(); f_4e25bd(); if (g_unwind) return; RELOAD();
/* 52c629: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 52c62d: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 52c633: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 52c636: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 52c639: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 52c63c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c63e: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 52c646: je 0x52c668 */
  if (zf) goto L_52c668;
L_52c648: /* 52c648: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 52c64c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c64e: je 0x52c660 */
  if (zf) goto L_52c660;
L_52c650: /* 52c650: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 52c653: imul ecx, dword ptr [eax + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x10u)));
  ecx = (uint32_t)r;
  }
/* 52c657: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c658: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c659: mov ecx, edi */
  ecx = edi;
/* 52c65b: call 0x4e1afa */
  esp -= 4; W32(esp, 0x52c660u); SPILL(); f_4e1afa(); if (g_unwind) return; RELOAD();
L_52c660: /* 52c660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c661: mov ecx, edi */
  ecx = edi;
/* 52c663: call 0x4e34db */
  esp -= 4; W32(esp, 0x52c668u); SPILL(); f_4e34db(); if (g_unwind) return; RELOAD();
L_52c668: /* 52c668: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 52c66c: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 52c674: call 0x4e21cb */
  esp -= 4; W32(esp, 0x52c679u); SPILL(); f_4e21cb(); if (g_unwind) return; RELOAD();
/* 52c679: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 52c67d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52c67e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c67f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52c686: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c689: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52c6c0(void) {
  LOAD_REGS();
L_52c6c0: /* 52c6c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c6c1: mov eax, dword ptr [0x5f7d18] */
  eax = R32((uint32_t)(0x5f7d18u));
/* 52c6c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c6c7: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 52c6cb: call 0x4e25bd */
  esp -= 4; W32(esp, 0x52c6d0u); SPILL(); f_4e25bd(); if (g_unwind) return; RELOAD();
/* 52c6d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 52c6d4: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 52c6da: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 52c6de: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 52c6e1: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52c6e4: add dword ptr [eax + ecx + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx + 0x14u), r);
  }
/* 52c6e8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 52c6ec: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 52c6f2: mov dword ptr [eax + edx], ecx */
  W32((uint32_t)(eax + edx), ecx);
/* 52c6f5: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 52c6f9: call 0x4e21cb */
  esp -= 4; W32(esp, 0x52c6feu); SPILL(); f_4e21cb(); if (g_unwind) return; RELOAD();
/* 52c6fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52c6ff: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_52c730(void) {
  LOAD_REGS();
L_52c730: /* 52c730: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52c731: mov eax, dword ptr [0x5f7d18] */
  eax = R32((uint32_t)(0x5f7d18u));
/* 52c736: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52c738: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 52c73c: call 0x4e25bd */
  esp -= 4; W32(esp, 0x52c741u); SPILL(); f_4e25bd(); if (g_unwind) return; RELOAD();
/* 52c741: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52c745: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 52c74b: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 52c74e: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52c751: mov edx, dword ptr [eax + ecx + 0x14] */
  edx = R32((uint32_t)(eax + ecx + 0x14u));
/* 52c755: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 52c759: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52c75b: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 52c761: mov edx, dword ptr [eax + ecx + 0x1c] */
  edx = R32((uint32_t)(eax + ecx + 0x1cu));
/* 52c765: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c767: jne 0x52c786 */
  if (!zf) goto L_52c786;
L_52c769: /* 52c769: mov edx, dword ptr [eax + ecx + 0x18] */
  edx = R32((uint32_t)(eax + ecx + 0x18u));
/* 52c76d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52c76f: je 0x52c786 */
  if (zf) goto L_52c786;
L_52c771: /* 52c771: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 52c775: mov esi, 1 */
  esi = 0x1u;
/* 52c77a: call 0x4e21cb */
  esp -= 4; W32(esp, 0x52c77fu); SPILL(); f_4e21cb(); if (g_unwind) return; RELOAD();
/* 52c77f: mov eax, esi */
  eax = esi;
/* 52c781: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c782: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52c783: ret 8 */
  esp += 12; SPILL(); return;
L_52c786: /* 52c786: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 52c78a: xor esi, esi */
  esi = 0;
/* 52c78c: call 0x4e21cb */
  esp -= 4; W32(esp, 0x52c791u); SPILL(); f_4e21cb(); if (g_unwind) return; RELOAD();
/* 52c791: mov eax, esi */
  eax = esi;
/* 52c793: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c794: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52c795: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52c7c0(void) {
  LOAD_REGS();
L_52c7c0: /* 52c7c0: mov eax, 0x5f7d20 */
  eax = 0x5f7d20u;
/* 52c7c5: ret  */
  esp += 4; SPILL(); return;
}

void f_52c7e0(void) {
  LOAD_REGS();
L_52c7e0: /* 52c7e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52c7e4: ret  */
  esp += 4; SPILL(); return;
}

void f_52c800(void) {
  LOAD_REGS();
L_52c800: /* 52c800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52c804: ret  */
  esp += 4; SPILL(); return;
}

void f_52c820(void) {
  LOAD_REGS();
L_52c820: /* 52c820: mov eax, ecx */
  eax = ecx;
/* 52c822: xor ecx, ecx */
  ecx = 0;
/* 52c824: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 52c826: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 52c829: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 52c82c: ret  */
  esp += 4; SPILL(); return;
}

void f_52c840(void) {
  LOAD_REGS();
L_52c840: /* 52c840: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52c842: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52c846: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52c860(void) {
  LOAD_REGS();
L_52c860: /* 52c860: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52c864: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52c866: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 52c869: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52c86b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52c880(void) {
  LOAD_REGS();
L_52c880: /* 52c880: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c881: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 52c885: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c886: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c887: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c888: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52c88du); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52c88d: mov edi, eax */
  edi = eax;
/* 52c88f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52c892: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52c895: xor esi, esi */
  esi = 0;
/* 52c897: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52c899: jle 0x52c8ef */
  if ((zf || sf != of)) goto L_52c8ef;
L_52c89b: /* 52c89b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52c89c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52c8a0: /* 52c8a0: xor ecx, ecx */
  ecx = 0;
/* 52c8a2: mov cx, word ptr [ebx + esi*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + esi*2))) & 0xffffu);
/* 52c8a6: cmp cx, 0x61 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52c8aa: jb 0x52c8b5 */
  if (cf) goto L_52c8b5;
L_52c8ac: /* 52c8ac: cmp cx, 0x7a */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52c8b0: ja 0x52c8b5 */
  if ((!cf && !zf)) goto L_52c8b5;
L_52c8b2: /* 52c8b2: add ecx, -0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_52c8b5: /* 52c8b5: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* 52c8b8: mov ecx, eax */
  ecx = eax;
/* 52c8ba: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52c8bd: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52c8c0: mov ebp, edx */
  ebp = edx;
/* 52c8c2: and ebp, 0xff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 52c8c8: xor ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52c8ca: mov ecx, dword ptr [ecx*4 + 0x5f78e8] */
  ecx = R32((uint32_t)(ecx*4 + 0x5f78e8u));
/* 52c8d1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52c8d3: mov eax, ecx */
  eax = ecx;
/* 52c8d5: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52c8d8: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 52c8da: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52c8dd: mov eax, dword ptr [eax*4 + 0x5f78e8] */
  eax = R32((uint32_t)(eax*4 + 0x5f78e8u));
/* 52c8e4: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52c8e7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 52c8e9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 52c8ea: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52c8ec: jl 0x52c8a0 */
  if ((sf != of)) goto L_52c8a0;
L_52c8ee: /* 52c8ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_52c8ef: /* 52c8ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52c8f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52c8f1: not eax */
  eax = ~eax;
/* 52c8f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52c8f4: ret  */
  esp += 4; SPILL(); return;
}

void f_52c920(void) {
  LOAD_REGS();
L_52c920: /* 52c920: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52c924: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52c928: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52c92b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52c92c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52c92d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52c92e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52c92f: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c932: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* 52c936: mov edi, 0x10 */
  edi = 0x10u;
/* 52c93b: jmp 0x52c940 */
  goto L_52c940;
L_52c940: /* 52c940: movzx ebx, byte ptr [ecx - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0xffffffffu)));
/* 52c944: xor edx, edx */
  edx = 0;
/* 52c946: mov dh, byte ptr [ecx + 1] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu) << 8);
/* 52c949: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52c94c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c94f: mov dl, byte ptr [ecx - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xfffffffcu))) & 0xffu);
/* 52c952: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52c955: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c957: movzx ebx, byte ptr [ecx - 6] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0xfffffffau)));
/* 52c95b: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52c95e: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c960: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 52c961: mov dword ptr [esi - 4], edx */
  W32((uint32_t)(esi + 0xfffffffcu), edx);
/* 52c964: jne 0x52c940 */
  if (!zf) goto L_52c940;
L_52c966: /* 52c966: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 52c969: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 52c96c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 52c96f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52c971: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 52c975: mov ebx, edi */
  ebx = edi;
/* 52c977: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c979: mov ecx, esi */
  ecx = esi;
/* 52c97b: not ecx */
  ecx = ~ecx;
/* 52c97d: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 52c97f: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52c981: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c983: lea ecx, [eax + ecx - 0x28955b88] */
  ecx = (uint32_t)(eax + ecx + 0xd76aa478u);
/* 52c98a: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 52c98e: mov eax, ecx */
  eax = ecx;
/* 52c990: shl ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52c993: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52c996: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52c998: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52c99a: mov ecx, eax */
  ecx = eax;
/* 52c99c: not ecx */
  ecx = ~ecx;
/* 52c99e: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 52c9a0: mov ebx, esi */
  ebx = esi;
/* 52c9a2: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c9a4: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52c9a6: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c9a8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 52c9ac: lea edx, [edx + ecx - 0x173848aa] */
  edx = (uint32_t)(edx + ecx + 0xe8c7b756u);
/* 52c9b3: mov ecx, edx */
  ecx = edx;
/* 52c9b5: shl edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52c9b8: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52c9bb: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52c9bd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c9bf: mov edx, ecx */
  edx = ecx;
/* 52c9c1: not edx */
  edx = ~edx;
/* 52c9c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52c9c5: mov ebx, ecx */
  ebx = ecx;
/* 52c9c7: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c9c9: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c9cb: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52c9cd: lea edi, [edi + edx + 0x242070db] */
  edi = (uint32_t)(edi + edx + 0x242070dbu);
/* 52c9d4: mov edx, edi */
  edx = edi;
/* 52c9d6: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 52c9da: shl edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52c9dd: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52c9e0: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c9e2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52c9e4: mov edi, edx */
  edi = edx;
/* 52c9e6: not edi */
  edi = ~edi;
/* 52c9e8: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52c9ea: mov ebx, ecx */
  ebx = ecx;
/* 52c9ec: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c9ee: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52c9f0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52c9f2: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 52c9f6: lea edi, [esi + edi - 0x3e423112] */
  edi = (uint32_t)(esi + edi + 0xc1bdceeeu);
/* 52c9fd: mov esi, edi */
  esi = edi;
/* 52c9ff: shr edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ca02: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52ca05: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52ca07: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ca09: mov edi, esi */
  edi = esi;
/* 52ca0b: not edi */
  edi = ~edi;
/* 52ca0d: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca0f: mov ebx, edx */
  ebx = edx;
/* 52ca11: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca13: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca15: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca17: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 52ca1b: lea edi, [eax + edi - 0xa83f051] */
  edi = (uint32_t)(eax + edi + 0xf57c0fafu);
/* 52ca22: mov eax, edi */
  eax = edi;
/* 52ca24: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ca27: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ca2a: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ca2c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ca2e: mov edi, eax */
  edi = eax;
/* 52ca30: not edi */
  edi = ~edi;
/* 52ca32: mov ebx, esi */
  ebx = esi;
/* 52ca34: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca36: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca38: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca3a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca3c: lea edi, [ecx + edi + 0x4787c62a] */
  edi = (uint32_t)(ecx + edi + 0x4787c62au);
/* 52ca43: mov ecx, edi */
  ecx = edi;
/* 52ca45: shl edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ca48: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 52ca4c: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52ca4f: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52ca51: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ca53: mov edi, ecx */
  edi = ecx;
/* 52ca55: not edi */
  edi = ~edi;
/* 52ca57: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca59: mov ebx, ecx */
  ebx = ecx;
/* 52ca5b: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca5d: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca5f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca61: lea edi, [edx + edi - 0x57cfb9ed] */
  edi = (uint32_t)(edx + edi + 0xa8304613u);
/* 52ca68: mov edx, edi */
  edx = edi;
/* 52ca6a: shl edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ca6d: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 52ca71: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52ca74: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52ca76: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52ca78: mov edi, edx */
  edi = edx;
/* 52ca7a: not edi */
  edi = ~edi;
/* 52ca7c: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca7e: mov ebx, ecx */
  ebx = ecx;
/* 52ca80: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca82: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca84: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca86: lea edi, [esi + edi - 0x2b96aff] */
  edi = (uint32_t)(esi + edi + 0xfd469501u);
/* 52ca8d: mov esi, edi */
  esi = edi;
/* 52ca8f: shr edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ca92: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 52ca96: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52ca99: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52ca9b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ca9d: mov ebx, edx */
  ebx = edx;
/* 52ca9f: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52caa1: mov edi, esi */
  edi = esi;
/* 52caa3: not edi */
  edi = ~edi;
/* 52caa5: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52caa7: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52caa9: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52caab: lea edi, [eax + edi + 0x698098d8] */
  edi = (uint32_t)(eax + edi + 0x698098d8u);
/* 52cab2: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 52cab6: mov eax, edi */
  eax = edi;
/* 52cab8: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cabb: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cabe: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cac0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cac2: mov edi, eax */
  edi = eax;
/* 52cac4: not edi */
  edi = ~edi;
/* 52cac6: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cac8: mov ebx, esi */
  ebx = esi;
/* 52caca: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cacc: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cace: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cad0: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 52cad4: lea edi, [ecx + edi - 0x74bb0851] */
  edi = (uint32_t)(ecx + edi + 0x8b44f7afu);
/* 52cadb: mov ecx, edi */
  ecx = edi;
/* 52cadd: shl edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cae0: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cae3: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cae5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cae7: mov edi, ecx */
  edi = ecx;
/* 52cae9: not edi */
  edi = ~edi;
/* 52caeb: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52caed: mov ebx, ecx */
  ebx = ecx;
/* 52caef: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52caf1: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52caf3: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52caf5: lea edi, [edx + edi - 0xa44f] */
  edi = (uint32_t)(edx + edi + 0xffff5bb1u);
/* 52cafc: mov edx, edi */
  edx = edi;
/* 52cafe: shl edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cb01: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cb04: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cb06: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cb08: mov edi, edx */
  edi = edx;
/* 52cb0a: not edi */
  edi = ~edi;
/* 52cb0c: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cb0e: mov ebx, ecx */
  ebx = ecx;
/* 52cb10: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 52cb14: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb16: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cb18: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cb1a: lea edi, [esi + edi - 0x76a32842] */
  edi = (uint32_t)(esi + edi + 0x895cd7beu);
/* 52cb21: mov esi, edi */
  esi = edi;
/* 52cb23: shr edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cb26: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 52cb2a: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cb2d: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cb2f: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cb31: mov edi, esi */
  edi = esi;
/* 52cb33: not edi */
  edi = ~edi;
/* 52cb35: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cb37: mov ebx, edx */
  ebx = edx;
/* 52cb39: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb3b: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cb3d: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cb3f: lea edi, [eax + edi + 0x6b901122] */
  edi = (uint32_t)(eax + edi + 0x6b901122u);
/* 52cb46: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 52cb4a: mov eax, edi */
  eax = edi;
/* 52cb4c: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cb4f: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cb52: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cb54: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cb56: mov edi, eax */
  edi = eax;
/* 52cb58: not edi */
  edi = ~edi;
/* 52cb5a: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cb5c: mov ebx, esi */
  ebx = esi;
/* 52cb5e: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb60: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cb62: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cb64: lea edi, [ecx + edi - 0x2678e6d] */
  edi = (uint32_t)(ecx + edi + 0xfd987193u);
/* 52cb6b: mov ecx, edi */
  ecx = edi;
/* 52cb6d: shl edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cb70: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cb73: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cb75: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cb77: mov edi, ecx */
  edi = ecx;
/* 52cb79: not edi */
  edi = ~edi;
/* 52cb7b: mov ebx, edi */
  ebx = edi;
/* 52cb7d: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb7f: mov ebp, ecx */
  ebp = ecx;
/* 52cb81: and ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 52cb83: or ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 52cb85: add ebx, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52cb89: lea ebx, [edx + ebx - 0x5986bc72] */
  ebx = (uint32_t)(edx + ebx + 0xa679438eu);
/* 52cb90: mov edx, ebx */
  edx = ebx;
/* 52cb92: shl ebx, 0x11 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 52cb95: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cb98: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cb9a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cb9c: mov ebx, edx */
  ebx = edx;
/* 52cb9e: not ebx */
  ebx = ~ebx;
/* 52cba0: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 52cba4: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cba6: mov ebp, ecx */
  ebp = ecx;
/* 52cba8: and ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 52cbaa: or ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 52cbac: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 52cbb0: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52cbb2: lea ebx, [esi + ebx + 0x49b40821] */
  ebx = (uint32_t)(esi + ebx + 0x49b40821u);
/* 52cbb9: mov esi, ebx */
  esi = ebx;
/* 52cbbb: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 52cbbe: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cbc1: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cbc3: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cbc5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cbc7: mov ebx, ecx */
  ebx = ecx;
/* 52cbc9: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cbcb: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cbcd: add edi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cbd1: lea edi, [eax + edi - 0x9e1da9e] */
  edi = (uint32_t)(eax + edi + 0xf61e2562u);
/* 52cbd8: mov eax, edi */
  eax = edi;
/* 52cbda: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cbdd: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cbe0: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cbe2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 52cbe6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cbe8: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cbea: mov ebx, edx */
  ebx = edx;
/* 52cbec: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cbee: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cbf0: add edi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cbf4: lea edi, [ecx + edi - 0x3fbf4cc0] */
  edi = (uint32_t)(ecx + edi + 0xc040b340u);
/* 52cbfb: mov ecx, edi */
  ecx = edi;
/* 52cbfd: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc00: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cc03: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cc05: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cc07: mov edi, esi */
  edi = esi;
/* 52cc09: not edi */
  edi = ~edi;
/* 52cc0b: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc0d: mov ebx, ecx */
  ebx = ecx;
/* 52cc0f: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc11: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc13: add edi, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc17: lea edi, [edx + edi + 0x265e5a51] */
  edi = (uint32_t)(edx + edi + 0x265e5a51u);
/* 52cc1e: mov edx, edi */
  edx = edi;
/* 52cc20: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc23: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cc26: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cc28: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cc2a: mov edi, eax */
  edi = eax;
/* 52cc2c: not edi */
  edi = ~edi;
/* 52cc2e: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc30: mov ebx, edx */
  ebx = edx;
/* 52cc32: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc34: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc36: add edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc3a: lea edi, [esi + edi - 0x16493856] */
  edi = (uint32_t)(esi + edi + 0xe9b6c7aau);
/* 52cc41: mov esi, edi */
  esi = edi;
/* 52cc43: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cc46: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cc49: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cc4b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cc4d: mov edi, ecx */
  edi = ecx;
/* 52cc4f: not edi */
  edi = ~edi;
/* 52cc51: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc53: mov ebx, ecx */
  ebx = ecx;
/* 52cc55: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc57: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc59: add edi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc5d: lea edi, [eax + edi - 0x29d0efa3] */
  edi = (uint32_t)(eax + edi + 0xd62f105du);
/* 52cc64: mov eax, edi */
  eax = edi;
/* 52cc66: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc69: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cc6c: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cc6e: mov edi, edx */
  edi = edx;
/* 52cc70: not edi */
  edi = ~edi;
/* 52cc72: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc74: mov ebx, edx */
  ebx = edx;
/* 52cc76: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cc78: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc7a: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc7c: add edi, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc80: lea edi, [ecx + edi + 0x2441453] */
  edi = (uint32_t)(ecx + edi + 0x2441453u);
/* 52cc87: mov ecx, edi */
  ecx = edi;
/* 52cc89: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc8c: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cc8f: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cc91: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cc93: mov edi, esi */
  edi = esi;
/* 52cc95: not edi */
  edi = ~edi;
/* 52cc97: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc99: mov ebx, ecx */
  ebx = ecx;
/* 52cc9b: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc9d: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc9f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cca1: lea edi, [edx + edi - 0x275e197f] */
  edi = (uint32_t)(edx + edi + 0xd8a1e681u);
/* 52cca8: mov edx, edi */
  edx = edi;
/* 52ccaa: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52ccad: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ccb0: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52ccb2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52ccb4: mov edi, eax */
  edi = eax;
/* 52ccb6: not edi */
  edi = ~edi;
/* 52ccb8: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ccba: mov ebx, edx */
  ebx = edx;
/* 52ccbc: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ccbe: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ccc0: add edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ccc4: lea edi, [esi + edi - 0x182c0438] */
  edi = (uint32_t)(esi + edi + 0xe7d3fbc8u);
/* 52cccb: mov esi, edi */
  esi = edi;
/* 52cccd: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ccd0: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52ccd3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52ccd5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ccd7: mov edi, ecx */
  edi = ecx;
/* 52ccd9: not edi */
  edi = ~edi;
/* 52ccdb: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ccdd: mov ebx, ecx */
  ebx = ecx;
/* 52ccdf: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cce1: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cce3: add edi, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cce7: lea edi, [eax + edi + 0x21e1cde6] */
  edi = (uint32_t)(eax + edi + 0x21e1cde6u);
/* 52ccee: mov eax, edi */
  eax = edi;
/* 52ccf0: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ccf3: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ccf6: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ccf8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ccfa: mov edi, edx */
  edi = edx;
/* 52ccfc: not edi */
  edi = ~edi;
/* 52ccfe: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd00: mov ebx, edx */
  ebx = edx;
/* 52cd02: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd04: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd06: add edi, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd0a: lea edi, [ecx + edi - 0x3cc8f82a] */
  edi = (uint32_t)(ecx + edi + 0xc33707d6u);
/* 52cd11: mov ecx, edi */
  ecx = edi;
/* 52cd13: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cd16: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cd19: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cd1b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cd1d: mov edi, esi */
  edi = esi;
/* 52cd1f: not edi */
  edi = ~edi;
/* 52cd21: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd23: mov ebx, ecx */
  ebx = ecx;
/* 52cd25: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd27: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd29: add edi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd2d: lea edi, [edx + edi - 0xb2af279] */
  edi = (uint32_t)(edx + edi + 0xf4d50d87u);
/* 52cd34: mov edx, edi */
  edx = edi;
/* 52cd36: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cd39: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cd3c: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cd3e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cd40: mov edi, eax */
  edi = eax;
/* 52cd42: not edi */
  edi = ~edi;
/* 52cd44: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd46: mov ebx, edx */
  ebx = edx;
/* 52cd48: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd4a: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd4c: add edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd50: lea edi, [esi + edi + 0x455a14ed] */
  edi = (uint32_t)(esi + edi + 0x455a14edu);
/* 52cd57: mov esi, edi */
  esi = edi;
/* 52cd59: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cd5c: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cd5f: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cd61: mov edi, ecx */
  edi = ecx;
/* 52cd63: not edi */
  edi = ~edi;
/* 52cd65: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cd67: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd69: mov ebx, ecx */
  ebx = ecx;
/* 52cd6b: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd6d: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd6f: add edi, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd73: lea edi, [eax + edi - 0x561c16fb] */
  edi = (uint32_t)(eax + edi + 0xa9e3e905u);
/* 52cd7a: mov eax, edi */
  eax = edi;
/* 52cd7c: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cd7f: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cd82: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cd84: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cd86: mov edi, edx */
  edi = edx;
/* 52cd88: not edi */
  edi = ~edi;
/* 52cd8a: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd8c: mov ebx, edx */
  ebx = edx;
/* 52cd8e: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd90: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd92: add edi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd96: lea edi, [ecx + edi - 0x3105c08] */
  edi = (uint32_t)(ecx + edi + 0xfcefa3f8u);
/* 52cd9d: mov ecx, edi */
  ecx = edi;
/* 52cd9f: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cda2: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cda5: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cda7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cda9: mov ebx, ecx */
  ebx = ecx;
/* 52cdab: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cdad: mov edi, esi */
  edi = esi;
/* 52cdaf: not edi */
  edi = ~edi;
/* 52cdb1: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cdb3: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cdb5: add edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cdb9: lea edi, [edx + edi + 0x676f02d9] */
  edi = (uint32_t)(edx + edi + 0x676f02d9u);
/* 52cdc0: mov edx, edi */
  edx = edi;
/* 52cdc2: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cdc5: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cdc8: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cdca: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cdcc: mov edi, eax */
  edi = eax;
/* 52cdce: not edi */
  edi = ~edi;
/* 52cdd0: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cdd2: mov ebx, edx */
  ebx = edx;
/* 52cdd4: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cdd6: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cdd8: add edi, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cddc: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 52cde0: lea edi, [esi + edi - 0x72d5b376] */
  edi = (uint32_t)(esi + edi + 0x8d2a4c8au);
/* 52cde7: mov esi, edi */
  esi = edi;
/* 52cde9: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cdec: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cdef: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cdf1: mov edi, ecx */
  edi = ecx;
/* 52cdf3: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cdf5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cdf7: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cdf9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cdfb: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 52cdff: lea edi, [eax + edi - 0x5c6be] */
  edi = (uint32_t)(eax + edi + 0xfffa3942u);
/* 52ce06: mov eax, edi */
  eax = edi;
/* 52ce08: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ce0b: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ce0e: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ce10: mov edi, edx */
  edi = edx;
/* 52ce12: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52ce14: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ce16: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52ce18: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ce1a: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 52ce1e: lea ecx, [ecx + edi - 0x788e097f] */
  ecx = (uint32_t)(ecx + edi + 0x8771f681u);
/* 52ce25: mov edi, ecx */
  edi = ecx;
/* 52ce27: shl ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52ce2a: shr edi, 0x15 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ce2d: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ce2f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ce31: mov ecx, edi */
  ecx = edi;
/* 52ce33: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52ce35: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52ce37: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ce39: lea ecx, [edx + ecx + 0x6d9d6122] */
  ecx = (uint32_t)(edx + ecx + 0x6d9d6122u);
/* 52ce40: mov edx, ecx */
  edx = ecx;
/* 52ce42: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52ce45: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52ce48: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52ce4a: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52ce4c: mov ebx, edi */
  ebx = edi;
/* 52ce4e: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52ce50: mov ecx, ebx */
  ecx = ebx;
/* 52ce52: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52ce54: add ecx, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ce58: lea esi, [esi + ecx - 0x21ac7f4] */
  esi = (uint32_t)(esi + ecx + 0xfde5380cu);
/* 52ce5f: mov ecx, esi */
  ecx = esi;
/* 52ce61: shr esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52ce64: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52ce67: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52ce69: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 52ce6d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ce6f: xor ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52ce71: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52ce73: lea ebx, [eax + ebx - 0x5b4115bc] */
  ebx = (uint32_t)(eax + ebx + 0xa4beea44u);
/* 52ce7a: mov eax, ebx */
  eax = ebx;
/* 52ce7c: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 52ce7f: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ce82: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ce84: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 52ce88: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ce8a: mov esi, edx */
  esi = edx;
/* 52ce8c: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52ce8e: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52ce90: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ce92: lea edi, [edi + esi + 0x4bdecfa9] */
  edi = (uint32_t)(edi + esi + 0x4bdecfa9u);
/* 52ce99: mov esi, edi */
  esi = edi;
/* 52ce9b: shl edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ce9e: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 52cea2: shr esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52cea5: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cea7: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cea9: mov edi, esi */
  edi = esi;
/* 52ceab: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cead: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52ceaf: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ceb1: lea edi, [edx + edi - 0x944b4a0] */
  edi = (uint32_t)(edx + edi + 0xf6bb4b60u);
/* 52ceb8: mov edx, edi */
  edx = edi;
/* 52ceba: shl edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cebd: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cec0: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cec2: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cec4: mov edi, esi */
  edi = esi;
/* 52cec6: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cec8: mov ebx, edi */
  ebx = edi;
/* 52ceca: xor ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52cecc: add ebx, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52ced0: lea ebx, [ecx + ebx - 0x41404390] */
  ebx = (uint32_t)(ecx + ebx + 0xbebfbc70u);
/* 52ced7: mov ecx, ebx */
  ecx = ebx;
/* 52ced9: shr ebx, 9 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 52cedc: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52cedf: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cee1: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 52cee5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cee7: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cee9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ceeb: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 52ceef: lea edi, [eax + edi + 0x289b7ec6] */
  edi = (uint32_t)(eax + edi + 0x289b7ec6u);
/* 52cef6: mov eax, edi */
  eax = edi;
/* 52cef8: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cefb: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cefe: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cf00: mov edi, edx */
  edi = edx;
/* 52cf02: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf04: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cf06: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf08: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cf0a: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 52cf0e: lea edi, [esi + edi - 0x155ed806] */
  edi = (uint32_t)(esi + edi + 0xeaa127fau);
/* 52cf15: mov esi, edi */
  esi = edi;
/* 52cf17: shl edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cf1a: shr esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52cf1d: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cf1f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cf21: mov edi, esi */
  edi = esi;
/* 52cf23: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf25: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf27: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cf29: lea edx, [edx + edi - 0x2b10cf7b] */
  edx = (uint32_t)(edx + edi + 0xd4ef3085u);
/* 52cf30: mov edi, edx */
  edi = edx;
/* 52cf32: shr edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cf35: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52cf38: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cf3a: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cf3c: mov edx, esi */
  edx = esi;
/* 52cf3e: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf40: mov ebx, edx */
  ebx = edx;
/* 52cf42: xor ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52cf44: add ebx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52cf48: lea ebx, [ecx + ebx + 0x4881d05] */
  ebx = (uint32_t)(ecx + ebx + 0x4881d05u);
/* 52cf4f: mov ecx, ebx */
  ecx = ebx;
/* 52cf51: shr ebx, 9 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 52cf54: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52cf57: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cf59: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cf5b: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 52cf5f: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf61: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cf63: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 52cf67: lea edx, [eax + edx - 0x262b2fc7] */
  edx = (uint32_t)(eax + edx + 0xd9d4d039u);
/* 52cf6e: mov eax, edx */
  eax = edx;
/* 52cf70: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52cf73: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cf76: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cf78: mov edx, edi */
  edx = edi;
/* 52cf7a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf7c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cf7e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf80: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cf82: lea esi, [esi + edx - 0x1924661b] */
  esi = (uint32_t)(esi + edx + 0xe6db99e5u);
/* 52cf89: mov edx, esi */
  edx = esi;
/* 52cf8b: shl esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cf8e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 52cf92: shr edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cf95: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cf97: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cf99: mov esi, edx */
  esi = edx;
/* 52cf9b: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52cf9d: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52cf9f: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cfa1: lea edi, [edi + esi + 0x1fa27cf8] */
  edi = (uint32_t)(edi + esi + 0x1fa27cf8u);
/* 52cfa8: mov esi, edi */
  esi = edi;
/* 52cfaa: shl edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cfad: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52cfb0: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cfb2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cfb4: mov edi, edx */
  edi = edx;
/* 52cfb6: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cfb8: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cfba: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cfbc: lea edi, [ecx + edi - 0x3b53a99b] */
  edi = (uint32_t)(ecx + edi + 0xc4ac5665u);
/* 52cfc3: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 52cfc7: mov ecx, edi */
  ecx = edi;
/* 52cfc9: shr edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cfcc: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52cfcf: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cfd1: mov edi, edx */
  edi = edx;
/* 52cfd3: not edi */
  edi = ~edi;
/* 52cfd5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cfd7: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cfd9: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cfdb: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cfdd: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 52cfe1: lea edi, [eax + edi - 0xbd6ddbc] */
  edi = (uint32_t)(eax + edi + 0xf4292244u);
/* 52cfe8: mov eax, edi */
  eax = edi;
/* 52cfea: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cfed: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cff0: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cff2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cff4: mov edi, esi */
  edi = esi;
/* 52cff6: not edi */
  edi = ~edi;
/* 52cff8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cffa: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cffc: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cffe: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 52d002: lea edi, [edx + edi + 0x432aff97] */
  edi = (uint32_t)(edx + edi + 0x432aff97u);
/* 52d009: mov edx, edi */
  edx = edi;
/* 52d00b: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d00e: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d011: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d013: mov edi, ecx */
  edi = ecx;
/* 52d015: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d017: not edi */
  edi = ~edi;
/* 52d019: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d01b: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d01d: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d01f: lea edi, [esi + edi - 0x546bdc59] */
  edi = (uint32_t)(esi + edi + 0xab9423a7u);
/* 52d026: mov esi, edi */
  esi = edi;
/* 52d028: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d02b: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 52d02f: shr esi, 0x11 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52d032: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d034: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d036: mov edi, eax */
  edi = eax;
/* 52d038: not edi */
  edi = ~edi;
/* 52d03a: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d03c: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d03e: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d040: lea edi, [ecx + edi - 0x36c5fc7] */
  edi = (uint32_t)(ecx + edi + 0xfc93a039u);
/* 52d047: mov ecx, edi */
  ecx = edi;
/* 52d049: shr edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d04c: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 52d050: shl ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52d053: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52d055: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d057: mov edi, edx */
  edi = edx;
/* 52d059: not edi */
  edi = ~edi;
/* 52d05b: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d05d: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d05f: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d061: lea edi, [eax + edi + 0x655b59c3] */
  edi = (uint32_t)(eax + edi + 0x655b59c3u);
/* 52d068: mov eax, edi */
  eax = edi;
/* 52d06a: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d06d: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 52d071: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52d074: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d076: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d078: mov edi, esi */
  edi = esi;
/* 52d07a: not edi */
  edi = ~edi;
/* 52d07c: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d07e: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d080: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d082: lea edi, [edx + edi - 0x70f3336e] */
  edi = (uint32_t)(edx + edi + 0x8f0ccc92u);
/* 52d089: mov edx, edi */
  edx = edi;
/* 52d08b: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d08e: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 52d092: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d095: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d097: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d099: mov edi, ecx */
  edi = ecx;
/* 52d09b: not edi */
  edi = ~edi;
/* 52d09d: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d09f: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d0a1: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d0a3: lea edi, [esi + edi - 0x100b83] */
  edi = (uint32_t)(esi + edi + 0xffeff47du);
/* 52d0aa: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 52d0ae: mov esi, edi */
  esi = edi;
/* 52d0b0: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d0b3: shr esi, 0x11 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52d0b6: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d0b8: mov edi, eax */
  edi = eax;
/* 52d0ba: not edi */
  edi = ~edi;
/* 52d0bc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d0be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d0c0: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d0c2: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d0c4: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 52d0c8: lea edi, [ecx + edi - 0x7a7ba22f] */
  edi = (uint32_t)(ecx + edi + 0x85845dd1u);
/* 52d0cf: mov ecx, edi */
  ecx = edi;
/* 52d0d1: shr edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d0d4: shl ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52d0d7: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52d0d9: mov edi, edx */
  edi = edx;
/* 52d0db: not edi */
  edi = ~edi;
/* 52d0dd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d0df: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d0e1: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d0e3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d0e5: lea edi, [eax + edi + 0x6fa87e4f] */
  edi = (uint32_t)(eax + edi + 0x6fa87e4fu);
/* 52d0ec: mov eax, edi */
  eax = edi;
/* 52d0ee: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d0f1: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52d0f4: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d0f6: mov edi, esi */
  edi = esi;
/* 52d0f8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d0fa: not edi */
  edi = ~edi;
/* 52d0fc: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d0fe: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d100: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d102: lea edi, [edx + edi - 0x1d31920] */
  edi = (uint32_t)(edx + edi + 0xfe2ce6e0u);
/* 52d109: mov edx, edi */
  edx = edi;
/* 52d10b: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d10e: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 52d112: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d115: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d117: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d119: mov edi, ecx */
  edi = ecx;
/* 52d11b: not edi */
  edi = ~edi;
/* 52d11d: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d11f: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d121: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d123: lea edi, [esi + edi - 0x5cfebcec] */
  edi = (uint32_t)(esi + edi + 0xa3014314u);
/* 52d12a: mov esi, edi */
  esi = edi;
/* 52d12c: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d12f: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 52d133: shr esi, 0x11 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52d136: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d138: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d13a: mov edi, eax */
  edi = eax;
/* 52d13c: not edi */
  edi = ~edi;
/* 52d13e: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d140: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d142: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d144: lea edi, [ecx + edi + 0x4e0811a1] */
  edi = (uint32_t)(ecx + edi + 0x4e0811a1u);
/* 52d14b: mov ecx, edi */
  ecx = edi;
/* 52d14d: shr edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d150: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 52d154: shl ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52d157: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52d159: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d15b: mov edi, edx */
  edi = edx;
/* 52d15d: not edi */
  edi = ~edi;
/* 52d15f: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d161: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d163: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d165: lea edi, [eax + edi - 0x8ac817e] */
  edi = (uint32_t)(eax + edi + 0xf7537e82u);
/* 52d16c: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 52d170: mov eax, edi */
  eax = edi;
/* 52d172: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d175: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52d178: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d17a: mov edi, esi */
  edi = esi;
/* 52d17c: not edi */
  edi = ~edi;
/* 52d17e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d180: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d182: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d184: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d186: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 52d18a: lea edi, [edx + edi - 0x42c50dcb] */
  edi = (uint32_t)(edx + edi + 0xbd3af235u);
/* 52d191: mov edx, edi */
  edx = edi;
/* 52d193: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d196: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d199: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d19b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d19d: mov edi, ecx */
  edi = ecx;
/* 52d19f: not edi */
  edi = ~edi;
/* 52d1a1: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d1a3: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d1a5: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d1a7: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 52d1ab: lea esi, [esi + edi + 0x2ad7d2bb] */
  esi = (uint32_t)(esi + edi + 0x2ad7d2bbu);
/* 52d1b2: mov edi, esi */
  edi = esi;
/* 52d1b4: shl esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52d1b7: shr edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d1ba: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d1bc: mov esi, eax */
  esi = eax;
/* 52d1be: not esi */
  esi = ~esi;
/* 52d1c0: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d1c2: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d1c4: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52d1c6: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d1c8: lea ecx, [ecx + esi - 0x14792c6f] */
  ecx = (uint32_t)(ecx + esi + 0xeb86d391u);
/* 52d1cf: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 52d1d3: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 52d1d5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1d7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 52d1d9: mov eax, ecx */
  eax = ecx;
/* 52d1db: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 52d1de: shl eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52d1e1: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52d1e4: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d1e6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1e8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1ea: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52d1ed: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 52d1f0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1f2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52d1f5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52d1f8: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 52d1fa: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 52d1fe: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d200: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52d202: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52d203: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52d206: call 0x4e150a */
  esp -= 4; W32(esp, 0x52d20bu); SPILL(); f_4e150a(); if (g_unwind) return; RELOAD();
/* 52d20b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d20e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52d20f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d210: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52d211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52d212: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d215: ret  */
  esp += 4; SPILL(); return;
}

void f_52c93d(void) {
  LOAD_REGS();
L_52c93d: /* 52c93d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_52c940: /* 52c940: movzx ebx, byte ptr [ecx - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0xffffffffu)));
/* 52c944: xor edx, edx */
  edx = 0;
/* 52c946: mov dh, byte ptr [ecx + 1] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu) << 8);
/* 52c949: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52c94c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c94f: mov dl, byte ptr [ecx - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xfffffffcu))) & 0xffu);
/* 52c952: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52c955: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c957: movzx ebx, byte ptr [ecx - 6] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0xfffffffau)));
/* 52c95b: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52c95e: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c960: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 52c961: mov dword ptr [esi - 4], edx */
  W32((uint32_t)(esi + 0xfffffffcu), edx);
/* 52c964: jne 0x52c940 */
  if (!zf) goto L_52c940;
L_52c966: /* 52c966: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 52c969: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 52c96c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 52c96f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52c971: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 52c975: mov ebx, edi */
  ebx = edi;
/* 52c977: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c979: mov ecx, esi */
  ecx = esi;
/* 52c97b: not ecx */
  ecx = ~ecx;
/* 52c97d: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 52c97f: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52c981: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c983: lea ecx, [eax + ecx - 0x28955b88] */
  ecx = (uint32_t)(eax + ecx + 0xd76aa478u);
/* 52c98a: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 52c98e: mov eax, ecx */
  eax = ecx;
/* 52c990: shl ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52c993: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52c996: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52c998: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52c99a: mov ecx, eax */
  ecx = eax;
/* 52c99c: not ecx */
  ecx = ~ecx;
/* 52c99e: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 52c9a0: mov ebx, esi */
  ebx = esi;
/* 52c9a2: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c9a4: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52c9a6: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c9a8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 52c9ac: lea edx, [edx + ecx - 0x173848aa] */
  edx = (uint32_t)(edx + ecx + 0xe8c7b756u);
/* 52c9b3: mov ecx, edx */
  ecx = edx;
/* 52c9b5: shl edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52c9b8: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52c9bb: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52c9bd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52c9bf: mov edx, ecx */
  edx = ecx;
/* 52c9c1: not edx */
  edx = ~edx;
/* 52c9c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52c9c5: mov ebx, ecx */
  ebx = ecx;
/* 52c9c7: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c9c9: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c9cb: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52c9cd: lea edi, [edi + edx + 0x242070db] */
  edi = (uint32_t)(edi + edx + 0x242070dbu);
/* 52c9d4: mov edx, edi */
  edx = edi;
/* 52c9d6: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 52c9da: shl edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52c9dd: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52c9e0: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52c9e2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52c9e4: mov edi, edx */
  edi = edx;
/* 52c9e6: not edi */
  edi = ~edi;
/* 52c9e8: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52c9ea: mov ebx, ecx */
  ebx = ecx;
/* 52c9ec: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52c9ee: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52c9f0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52c9f2: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 52c9f6: lea edi, [esi + edi - 0x3e423112] */
  edi = (uint32_t)(esi + edi + 0xc1bdceeeu);
/* 52c9fd: mov esi, edi */
  esi = edi;
/* 52c9ff: shr edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ca02: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52ca05: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52ca07: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ca09: mov edi, esi */
  edi = esi;
/* 52ca0b: not edi */
  edi = ~edi;
/* 52ca0d: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca0f: mov ebx, edx */
  ebx = edx;
/* 52ca11: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca13: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca15: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca17: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 52ca1b: lea edi, [eax + edi - 0xa83f051] */
  edi = (uint32_t)(eax + edi + 0xf57c0fafu);
/* 52ca22: mov eax, edi */
  eax = edi;
/* 52ca24: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ca27: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ca2a: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ca2c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ca2e: mov edi, eax */
  edi = eax;
/* 52ca30: not edi */
  edi = ~edi;
/* 52ca32: mov ebx, esi */
  ebx = esi;
/* 52ca34: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca36: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca38: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca3a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca3c: lea edi, [ecx + edi + 0x4787c62a] */
  edi = (uint32_t)(ecx + edi + 0x4787c62au);
/* 52ca43: mov ecx, edi */
  ecx = edi;
/* 52ca45: shl edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ca48: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 52ca4c: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52ca4f: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52ca51: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ca53: mov edi, ecx */
  edi = ecx;
/* 52ca55: not edi */
  edi = ~edi;
/* 52ca57: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca59: mov ebx, ecx */
  ebx = ecx;
/* 52ca5b: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca5d: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca5f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca61: lea edi, [edx + edi - 0x57cfb9ed] */
  edi = (uint32_t)(edx + edi + 0xa8304613u);
/* 52ca68: mov edx, edi */
  edx = edi;
/* 52ca6a: shl edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ca6d: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 52ca71: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52ca74: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52ca76: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52ca78: mov edi, edx */
  edi = edx;
/* 52ca7a: not edi */
  edi = ~edi;
/* 52ca7c: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ca7e: mov ebx, ecx */
  ebx = ecx;
/* 52ca80: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ca82: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ca84: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ca86: lea edi, [esi + edi - 0x2b96aff] */
  edi = (uint32_t)(esi + edi + 0xfd469501u);
/* 52ca8d: mov esi, edi */
  esi = edi;
/* 52ca8f: shr edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ca92: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 52ca96: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52ca99: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52ca9b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ca9d: mov ebx, edx */
  ebx = edx;
/* 52ca9f: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52caa1: mov edi, esi */
  edi = esi;
/* 52caa3: not edi */
  edi = ~edi;
/* 52caa5: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52caa7: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52caa9: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52caab: lea edi, [eax + edi + 0x698098d8] */
  edi = (uint32_t)(eax + edi + 0x698098d8u);
/* 52cab2: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 52cab6: mov eax, edi */
  eax = edi;
/* 52cab8: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cabb: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cabe: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cac0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cac2: mov edi, eax */
  edi = eax;
/* 52cac4: not edi */
  edi = ~edi;
/* 52cac6: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cac8: mov ebx, esi */
  ebx = esi;
/* 52caca: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cacc: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cace: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cad0: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 52cad4: lea edi, [ecx + edi - 0x74bb0851] */
  edi = (uint32_t)(ecx + edi + 0x8b44f7afu);
/* 52cadb: mov ecx, edi */
  ecx = edi;
/* 52cadd: shl edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cae0: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cae3: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cae5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cae7: mov edi, ecx */
  edi = ecx;
/* 52cae9: not edi */
  edi = ~edi;
/* 52caeb: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52caed: mov ebx, ecx */
  ebx = ecx;
/* 52caef: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52caf1: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52caf3: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52caf5: lea edi, [edx + edi - 0xa44f] */
  edi = (uint32_t)(edx + edi + 0xffff5bb1u);
/* 52cafc: mov edx, edi */
  edx = edi;
/* 52cafe: shl edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cb01: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cb04: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cb06: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cb08: mov edi, edx */
  edi = edx;
/* 52cb0a: not edi */
  edi = ~edi;
/* 52cb0c: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cb0e: mov ebx, ecx */
  ebx = ecx;
/* 52cb10: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 52cb14: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb16: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cb18: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cb1a: lea edi, [esi + edi - 0x76a32842] */
  edi = (uint32_t)(esi + edi + 0x895cd7beu);
/* 52cb21: mov esi, edi */
  esi = edi;
/* 52cb23: shr edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cb26: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 52cb2a: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cb2d: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cb2f: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cb31: mov edi, esi */
  edi = esi;
/* 52cb33: not edi */
  edi = ~edi;
/* 52cb35: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cb37: mov ebx, edx */
  ebx = edx;
/* 52cb39: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb3b: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cb3d: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cb3f: lea edi, [eax + edi + 0x6b901122] */
  edi = (uint32_t)(eax + edi + 0x6b901122u);
/* 52cb46: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 52cb4a: mov eax, edi */
  eax = edi;
/* 52cb4c: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cb4f: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cb52: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cb54: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cb56: mov edi, eax */
  edi = eax;
/* 52cb58: not edi */
  edi = ~edi;
/* 52cb5a: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cb5c: mov ebx, esi */
  ebx = esi;
/* 52cb5e: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb60: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cb62: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cb64: lea edi, [ecx + edi - 0x2678e6d] */
  edi = (uint32_t)(ecx + edi + 0xfd987193u);
/* 52cb6b: mov ecx, edi */
  ecx = edi;
/* 52cb6d: shl edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cb70: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cb73: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cb75: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cb77: mov edi, ecx */
  edi = ecx;
/* 52cb79: not edi */
  edi = ~edi;
/* 52cb7b: mov ebx, edi */
  ebx = edi;
/* 52cb7d: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cb7f: mov ebp, ecx */
  ebp = ecx;
/* 52cb81: and ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 52cb83: or ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 52cb85: add ebx, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52cb89: lea ebx, [edx + ebx - 0x5986bc72] */
  ebx = (uint32_t)(edx + ebx + 0xa679438eu);
/* 52cb90: mov edx, ebx */
  edx = ebx;
/* 52cb92: shl ebx, 0x11 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 52cb95: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cb98: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cb9a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cb9c: mov ebx, edx */
  ebx = edx;
/* 52cb9e: not ebx */
  ebx = ~ebx;
/* 52cba0: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 52cba4: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cba6: mov ebp, ecx */
  ebp = ecx;
/* 52cba8: and ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 52cbaa: or ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 52cbac: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 52cbb0: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52cbb2: lea ebx, [esi + ebx + 0x49b40821] */
  ebx = (uint32_t)(esi + ebx + 0x49b40821u);
/* 52cbb9: mov esi, ebx */
  esi = ebx;
/* 52cbbb: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 52cbbe: shl esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cbc1: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cbc3: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cbc5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cbc7: mov ebx, ecx */
  ebx = ecx;
/* 52cbc9: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cbcb: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cbcd: add edi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cbd1: lea edi, [eax + edi - 0x9e1da9e] */
  edi = (uint32_t)(eax + edi + 0xf61e2562u);
/* 52cbd8: mov eax, edi */
  eax = edi;
/* 52cbda: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cbdd: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cbe0: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cbe2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 52cbe6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cbe8: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cbea: mov ebx, edx */
  ebx = edx;
/* 52cbec: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cbee: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cbf0: add edi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cbf4: lea edi, [ecx + edi - 0x3fbf4cc0] */
  edi = (uint32_t)(ecx + edi + 0xc040b340u);
/* 52cbfb: mov ecx, edi */
  ecx = edi;
/* 52cbfd: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc00: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cc03: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cc05: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cc07: mov edi, esi */
  edi = esi;
/* 52cc09: not edi */
  edi = ~edi;
/* 52cc0b: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc0d: mov ebx, ecx */
  ebx = ecx;
/* 52cc0f: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc11: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc13: add edi, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc17: lea edi, [edx + edi + 0x265e5a51] */
  edi = (uint32_t)(edx + edi + 0x265e5a51u);
/* 52cc1e: mov edx, edi */
  edx = edi;
/* 52cc20: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc23: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cc26: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cc28: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cc2a: mov edi, eax */
  edi = eax;
/* 52cc2c: not edi */
  edi = ~edi;
/* 52cc2e: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc30: mov ebx, edx */
  ebx = edx;
/* 52cc32: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc34: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc36: add edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc3a: lea edi, [esi + edi - 0x16493856] */
  edi = (uint32_t)(esi + edi + 0xe9b6c7aau);
/* 52cc41: mov esi, edi */
  esi = edi;
/* 52cc43: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cc46: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cc49: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cc4b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cc4d: mov edi, ecx */
  edi = ecx;
/* 52cc4f: not edi */
  edi = ~edi;
/* 52cc51: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc53: mov ebx, ecx */
  ebx = ecx;
/* 52cc55: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc57: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc59: add edi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc5d: lea edi, [eax + edi - 0x29d0efa3] */
  edi = (uint32_t)(eax + edi + 0xd62f105du);
/* 52cc64: mov eax, edi */
  eax = edi;
/* 52cc66: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc69: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cc6c: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cc6e: mov edi, edx */
  edi = edx;
/* 52cc70: not edi */
  edi = ~edi;
/* 52cc72: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc74: mov ebx, edx */
  ebx = edx;
/* 52cc76: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cc78: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc7a: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc7c: add edi, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cc80: lea edi, [ecx + edi + 0x2441453] */
  edi = (uint32_t)(ecx + edi + 0x2441453u);
/* 52cc87: mov ecx, edi */
  ecx = edi;
/* 52cc89: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cc8c: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cc8f: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cc91: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cc93: mov edi, esi */
  edi = esi;
/* 52cc95: not edi */
  edi = ~edi;
/* 52cc97: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cc99: mov ebx, ecx */
  ebx = ecx;
/* 52cc9b: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cc9d: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cc9f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cca1: lea edi, [edx + edi - 0x275e197f] */
  edi = (uint32_t)(edx + edi + 0xd8a1e681u);
/* 52cca8: mov edx, edi */
  edx = edi;
/* 52ccaa: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52ccad: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ccb0: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52ccb2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52ccb4: mov edi, eax */
  edi = eax;
/* 52ccb6: not edi */
  edi = ~edi;
/* 52ccb8: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ccba: mov ebx, edx */
  ebx = edx;
/* 52ccbc: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52ccbe: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ccc0: add edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ccc4: lea edi, [esi + edi - 0x182c0438] */
  edi = (uint32_t)(esi + edi + 0xe7d3fbc8u);
/* 52cccb: mov esi, edi */
  esi = edi;
/* 52cccd: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ccd0: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52ccd3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52ccd5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ccd7: mov edi, ecx */
  edi = ecx;
/* 52ccd9: not edi */
  edi = ~edi;
/* 52ccdb: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52ccdd: mov ebx, ecx */
  ebx = ecx;
/* 52ccdf: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cce1: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cce3: add edi, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cce7: lea edi, [eax + edi + 0x21e1cde6] */
  edi = (uint32_t)(eax + edi + 0x21e1cde6u);
/* 52ccee: mov eax, edi */
  eax = edi;
/* 52ccf0: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ccf3: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ccf6: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ccf8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ccfa: mov edi, edx */
  edi = edx;
/* 52ccfc: not edi */
  edi = ~edi;
/* 52ccfe: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd00: mov ebx, edx */
  ebx = edx;
/* 52cd02: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd04: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd06: add edi, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd0a: lea edi, [ecx + edi - 0x3cc8f82a] */
  edi = (uint32_t)(ecx + edi + 0xc33707d6u);
/* 52cd11: mov ecx, edi */
  ecx = edi;
/* 52cd13: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cd16: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cd19: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cd1b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cd1d: mov edi, esi */
  edi = esi;
/* 52cd1f: not edi */
  edi = ~edi;
/* 52cd21: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd23: mov ebx, ecx */
  ebx = ecx;
/* 52cd25: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd27: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd29: add edi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd2d: lea edi, [edx + edi - 0xb2af279] */
  edi = (uint32_t)(edx + edi + 0xf4d50d87u);
/* 52cd34: mov edx, edi */
  edx = edi;
/* 52cd36: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cd39: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cd3c: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cd3e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cd40: mov edi, eax */
  edi = eax;
/* 52cd42: not edi */
  edi = ~edi;
/* 52cd44: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd46: mov ebx, edx */
  ebx = edx;
/* 52cd48: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd4a: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd4c: add edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd50: lea edi, [esi + edi + 0x455a14ed] */
  edi = (uint32_t)(esi + edi + 0x455a14edu);
/* 52cd57: mov esi, edi */
  esi = edi;
/* 52cd59: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cd5c: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cd5f: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cd61: mov edi, ecx */
  edi = ecx;
/* 52cd63: not edi */
  edi = ~edi;
/* 52cd65: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cd67: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd69: mov ebx, ecx */
  ebx = ecx;
/* 52cd6b: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd6d: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd6f: add edi, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd73: lea edi, [eax + edi - 0x561c16fb] */
  edi = (uint32_t)(eax + edi + 0xa9e3e905u);
/* 52cd7a: mov eax, edi */
  eax = edi;
/* 52cd7c: shr eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 27;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cd7f: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cd82: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cd84: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cd86: mov edi, edx */
  edi = edx;
/* 52cd88: not edi */
  edi = ~edi;
/* 52cd8a: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cd8c: mov ebx, edx */
  ebx = edx;
/* 52cd8e: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cd90: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cd92: add edi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cd96: lea edi, [ecx + edi - 0x3105c08] */
  edi = (uint32_t)(ecx + edi + 0xfcefa3f8u);
/* 52cd9d: mov ecx, edi */
  ecx = edi;
/* 52cd9f: shl edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cda2: shr ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52cda5: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cda7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cda9: mov ebx, ecx */
  ebx = ecx;
/* 52cdab: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cdad: mov edi, esi */
  edi = esi;
/* 52cdaf: not edi */
  edi = ~edi;
/* 52cdb1: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cdb3: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cdb5: add edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cdb9: lea edi, [edx + edi + 0x676f02d9] */
  edi = (uint32_t)(edx + edi + 0x676f02d9u);
/* 52cdc0: mov edx, edi */
  edx = edi;
/* 52cdc2: shl edi, 0xe */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cdc5: shr edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cdc8: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cdca: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cdcc: mov edi, eax */
  edi = eax;
/* 52cdce: not edi */
  edi = ~edi;
/* 52cdd0: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 52cdd2: mov ebx, edx */
  ebx = edx;
/* 52cdd4: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52cdd6: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cdd8: add edi, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cddc: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 52cde0: lea edi, [esi + edi - 0x72d5b376] */
  edi = (uint32_t)(esi + edi + 0x8d2a4c8au);
/* 52cde7: mov esi, edi */
  esi = edi;
/* 52cde9: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cdec: shl esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cdef: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cdf1: mov edi, ecx */
  edi = ecx;
/* 52cdf3: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cdf5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cdf7: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cdf9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cdfb: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 52cdff: lea edi, [eax + edi - 0x5c6be] */
  edi = (uint32_t)(eax + edi + 0xfffa3942u);
/* 52ce06: mov eax, edi */
  eax = edi;
/* 52ce08: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ce0b: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ce0e: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ce10: mov edi, edx */
  edi = edx;
/* 52ce12: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52ce14: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ce16: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52ce18: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ce1a: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 52ce1e: lea ecx, [ecx + edi - 0x788e097f] */
  ecx = (uint32_t)(ecx + edi + 0x8771f681u);
/* 52ce25: mov edi, ecx */
  edi = ecx;
/* 52ce27: shl ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52ce2a: shr edi, 0x15 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52ce2d: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52ce2f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ce31: mov ecx, edi */
  ecx = edi;
/* 52ce33: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52ce35: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52ce37: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ce39: lea ecx, [edx + ecx + 0x6d9d6122] */
  ecx = (uint32_t)(edx + ecx + 0x6d9d6122u);
/* 52ce40: mov edx, ecx */
  edx = ecx;
/* 52ce42: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52ce45: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52ce48: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52ce4a: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52ce4c: mov ebx, edi */
  ebx = edi;
/* 52ce4e: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52ce50: mov ecx, ebx */
  ecx = ebx;
/* 52ce52: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 52ce54: add ecx, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ce58: lea esi, [esi + ecx - 0x21ac7f4] */
  esi = (uint32_t)(esi + ecx + 0xfde5380cu);
/* 52ce5f: mov ecx, esi */
  ecx = esi;
/* 52ce61: shr esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52ce64: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52ce67: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52ce69: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 52ce6d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52ce6f: xor ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52ce71: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52ce73: lea ebx, [eax + ebx - 0x5b4115bc] */
  ebx = (uint32_t)(eax + ebx + 0xa4beea44u);
/* 52ce7a: mov eax, ebx */
  eax = ebx;
/* 52ce7c: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 52ce7f: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52ce82: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52ce84: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 52ce88: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52ce8a: mov esi, edx */
  esi = edx;
/* 52ce8c: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52ce8e: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52ce90: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52ce92: lea edi, [edi + esi + 0x4bdecfa9] */
  edi = (uint32_t)(edi + esi + 0x4bdecfa9u);
/* 52ce99: mov esi, edi */
  esi = edi;
/* 52ce9b: shl edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52ce9e: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 52cea2: shr esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52cea5: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cea7: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cea9: mov edi, esi */
  edi = esi;
/* 52ceab: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cead: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52ceaf: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ceb1: lea edi, [edx + edi - 0x944b4a0] */
  edi = (uint32_t)(edx + edi + 0xf6bb4b60u);
/* 52ceb8: mov edx, edi */
  edx = edi;
/* 52ceba: shl edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cebd: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cec0: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cec2: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cec4: mov edi, esi */
  edi = esi;
/* 52cec6: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cec8: mov ebx, edi */
  ebx = edi;
/* 52ceca: xor ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52cecc: add ebx, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52ced0: lea ebx, [ecx + ebx - 0x41404390] */
  ebx = (uint32_t)(ecx + ebx + 0xbebfbc70u);
/* 52ced7: mov ecx, ebx */
  ecx = ebx;
/* 52ced9: shr ebx, 9 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 52cedc: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52cedf: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cee1: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 52cee5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cee7: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cee9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52ceeb: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 52ceef: lea edi, [eax + edi + 0x289b7ec6] */
  edi = (uint32_t)(eax + edi + 0x289b7ec6u);
/* 52cef6: mov eax, edi */
  eax = edi;
/* 52cef8: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cefb: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cefe: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cf00: mov edi, edx */
  edi = edx;
/* 52cf02: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf04: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cf06: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf08: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cf0a: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 52cf0e: lea edi, [esi + edi - 0x155ed806] */
  edi = (uint32_t)(esi + edi + 0xeaa127fau);
/* 52cf15: mov esi, edi */
  esi = edi;
/* 52cf17: shl edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cf1a: shr esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52cf1d: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cf1f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cf21: mov edi, esi */
  edi = esi;
/* 52cf23: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf25: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cf27: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cf29: lea edx, [edx + edi - 0x2b10cf7b] */
  edx = (uint32_t)(edx + edi + 0xd4ef3085u);
/* 52cf30: mov edi, edx */
  edi = edx;
/* 52cf32: shr edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cf35: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52cf38: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cf3a: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cf3c: mov edx, esi */
  edx = esi;
/* 52cf3e: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf40: mov ebx, edx */
  ebx = edx;
/* 52cf42: xor ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 52cf44: add ebx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52cf48: lea ebx, [ecx + ebx + 0x4881d05] */
  ebx = (uint32_t)(ecx + ebx + 0x4881d05u);
/* 52cf4f: mov ecx, ebx */
  ecx = ebx;
/* 52cf51: shr ebx, 9 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 52cf54: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52cf57: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cf59: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cf5b: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 52cf5f: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf61: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cf63: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 52cf67: lea edx, [eax + edx - 0x262b2fc7] */
  edx = (uint32_t)(eax + edx + 0xd9d4d039u);
/* 52cf6e: mov eax, edx */
  eax = edx;
/* 52cf70: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 52cf73: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cf76: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cf78: mov edx, edi */
  edx = edi;
/* 52cf7a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf7c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cf7e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 52cf80: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cf82: lea esi, [esi + edx - 0x1924661b] */
  esi = (uint32_t)(esi + edx + 0xe6db99e5u);
/* 52cf89: mov edx, esi */
  edx = esi;
/* 52cf8b: shl esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52cf8e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 52cf92: shr edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52cf95: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52cf97: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52cf99: mov esi, edx */
  esi = edx;
/* 52cf9b: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52cf9d: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52cf9f: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cfa1: lea edi, [edi + esi + 0x1fa27cf8] */
  edi = (uint32_t)(edi + esi + 0x1fa27cf8u);
/* 52cfa8: mov esi, edi */
  esi = edi;
/* 52cfaa: shl edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cfad: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52cfb0: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52cfb2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52cfb4: mov edi, edx */
  edi = edx;
/* 52cfb6: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cfb8: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cfba: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cfbc: lea edi, [ecx + edi - 0x3b53a99b] */
  edi = (uint32_t)(ecx + edi + 0xc4ac5665u);
/* 52cfc3: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 52cfc7: mov ecx, edi */
  ecx = edi;
/* 52cfc9: shr edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52cfcc: shl ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52cfcf: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52cfd1: mov edi, edx */
  edi = edx;
/* 52cfd3: not edi */
  edi = ~edi;
/* 52cfd5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52cfd7: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cfd9: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cfdb: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cfdd: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 52cfe1: lea edi, [eax + edi - 0xbd6ddbc] */
  edi = (uint32_t)(eax + edi + 0xf4292244u);
/* 52cfe8: mov eax, edi */
  eax = edi;
/* 52cfea: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52cfed: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52cff0: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52cff2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52cff4: mov edi, esi */
  edi = esi;
/* 52cff6: not edi */
  edi = ~edi;
/* 52cff8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52cffa: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52cffc: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52cffe: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 52d002: lea edi, [edx + edi + 0x432aff97] */
  edi = (uint32_t)(edx + edi + 0x432aff97u);
/* 52d009: mov edx, edi */
  edx = edi;
/* 52d00b: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d00e: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d011: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d013: mov edi, ecx */
  edi = ecx;
/* 52d015: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d017: not edi */
  edi = ~edi;
/* 52d019: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d01b: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d01d: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d01f: lea edi, [esi + edi - 0x546bdc59] */
  edi = (uint32_t)(esi + edi + 0xab9423a7u);
/* 52d026: mov esi, edi */
  esi = edi;
/* 52d028: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d02b: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 52d02f: shr esi, 0x11 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52d032: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d034: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d036: mov edi, eax */
  edi = eax;
/* 52d038: not edi */
  edi = ~edi;
/* 52d03a: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d03c: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d03e: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d040: lea edi, [ecx + edi - 0x36c5fc7] */
  edi = (uint32_t)(ecx + edi + 0xfc93a039u);
/* 52d047: mov ecx, edi */
  ecx = edi;
/* 52d049: shr edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d04c: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 52d050: shl ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52d053: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52d055: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d057: mov edi, edx */
  edi = edx;
/* 52d059: not edi */
  edi = ~edi;
/* 52d05b: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d05d: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d05f: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d061: lea edi, [eax + edi + 0x655b59c3] */
  edi = (uint32_t)(eax + edi + 0x655b59c3u);
/* 52d068: mov eax, edi */
  eax = edi;
/* 52d06a: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d06d: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 52d071: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52d074: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d076: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d078: mov edi, esi */
  edi = esi;
/* 52d07a: not edi */
  edi = ~edi;
/* 52d07c: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d07e: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d080: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d082: lea edi, [edx + edi - 0x70f3336e] */
  edi = (uint32_t)(edx + edi + 0x8f0ccc92u);
/* 52d089: mov edx, edi */
  edx = edi;
/* 52d08b: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d08e: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 52d092: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d095: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d097: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d099: mov edi, ecx */
  edi = ecx;
/* 52d09b: not edi */
  edi = ~edi;
/* 52d09d: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d09f: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d0a1: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d0a3: lea edi, [esi + edi - 0x100b83] */
  edi = (uint32_t)(esi + edi + 0xffeff47du);
/* 52d0aa: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 52d0ae: mov esi, edi */
  esi = edi;
/* 52d0b0: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d0b3: shr esi, 0x11 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52d0b6: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d0b8: mov edi, eax */
  edi = eax;
/* 52d0ba: not edi */
  edi = ~edi;
/* 52d0bc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d0be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d0c0: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d0c2: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d0c4: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 52d0c8: lea edi, [ecx + edi - 0x7a7ba22f] */
  edi = (uint32_t)(ecx + edi + 0x85845dd1u);
/* 52d0cf: mov ecx, edi */
  ecx = edi;
/* 52d0d1: shr edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d0d4: shl ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52d0d7: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52d0d9: mov edi, edx */
  edi = edx;
/* 52d0db: not edi */
  edi = ~edi;
/* 52d0dd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d0df: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d0e1: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d0e3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d0e5: lea edi, [eax + edi + 0x6fa87e4f] */
  edi = (uint32_t)(eax + edi + 0x6fa87e4fu);
/* 52d0ec: mov eax, edi */
  eax = edi;
/* 52d0ee: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d0f1: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52d0f4: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d0f6: mov edi, esi */
  edi = esi;
/* 52d0f8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d0fa: not edi */
  edi = ~edi;
/* 52d0fc: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d0fe: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d100: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d102: lea edi, [edx + edi - 0x1d31920] */
  edi = (uint32_t)(edx + edi + 0xfe2ce6e0u);
/* 52d109: mov edx, edi */
  edx = edi;
/* 52d10b: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d10e: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 52d112: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d115: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d117: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d119: mov edi, ecx */
  edi = ecx;
/* 52d11b: not edi */
  edi = ~edi;
/* 52d11d: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d11f: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d121: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d123: lea edi, [esi + edi - 0x5cfebcec] */
  edi = (uint32_t)(esi + edi + 0xa3014314u);
/* 52d12a: mov esi, edi */
  esi = edi;
/* 52d12c: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d12f: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 52d133: shr esi, 0x11 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 52d136: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d138: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d13a: mov edi, eax */
  edi = eax;
/* 52d13c: not edi */
  edi = ~edi;
/* 52d13e: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d140: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d142: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d144: lea edi, [ecx + edi + 0x4e0811a1] */
  edi = (uint32_t)(ecx + edi + 0x4e0811a1u);
/* 52d14b: mov ecx, edi */
  ecx = edi;
/* 52d14d: shr edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d150: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 52d154: shl ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52d157: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52d159: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d15b: mov edi, edx */
  edi = edx;
/* 52d15d: not edi */
  edi = ~edi;
/* 52d15f: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d161: xor edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d163: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d165: lea edi, [eax + edi - 0x8ac817e] */
  edi = (uint32_t)(eax + edi + 0xf7537e82u);
/* 52d16c: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 52d170: mov eax, edi */
  eax = edi;
/* 52d172: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d175: shr eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 26;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52d178: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d17a: mov edi, esi */
  edi = esi;
/* 52d17c: not edi */
  edi = ~edi;
/* 52d17e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d180: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d182: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d184: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d186: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 52d18a: lea edi, [edx + edi - 0x42c50dcb] */
  edi = (uint32_t)(edx + edi + 0xbd3af235u);
/* 52d191: mov edx, edi */
  edx = edi;
/* 52d193: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 52d196: shr edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 52d199: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 52d19b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52d19d: mov edi, ecx */
  edi = ecx;
/* 52d19f: not edi */
  edi = ~edi;
/* 52d1a1: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d1a3: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52d1a5: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d1a7: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 52d1ab: lea esi, [esi + edi + 0x2ad7d2bb] */
  esi = (uint32_t)(esi + edi + 0x2ad7d2bbu);
/* 52d1b2: mov edi, esi */
  edi = esi;
/* 52d1b4: shl esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 52d1b7: shr edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 52d1ba: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 52d1bc: mov esi, eax */
  esi = eax;
/* 52d1be: not esi */
  esi = ~esi;
/* 52d1c0: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52d1c2: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 52d1c4: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 52d1c6: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52d1c8: lea ecx, [ecx + esi - 0x14792c6f] */
  ecx = (uint32_t)(ecx + esi + 0xeb86d391u);
/* 52d1cf: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 52d1d3: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 52d1d5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1d7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 52d1d9: mov eax, ecx */
  eax = ecx;
/* 52d1db: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 52d1de: shl eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52d1e1: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52d1e4: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52d1e6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1e8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1ea: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52d1ed: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 52d1f0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d1f2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52d1f5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52d1f8: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 52d1fa: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 52d1fe: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d200: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52d202: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52d203: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52d206: call 0x4e150a */
  esp -= 4; W32(esp, 0x52d20bu); SPILL(); f_4e150a(); if (g_unwind) return; RELOAD();
/* 52d20b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d20e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52d20f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d210: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52d211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52d212: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d215: ret  */
  esp += 4; SPILL(); return;
}

void f_52d460(void) {
  LOAD_REGS();
L_52d460: /* 52d460: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52d464: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 52d467: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d469: je 0x52d476 */
  if (zf) goto L_52d476;
L_52d46b: /* 52d46b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52d46d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 52d471: jmp 0x4e1d2a */
  SPILL(); f_4e1d2a(); return;
L_52d476: /* 52d476: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 52d47b: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 52d47f: jmp 0x4e1d2a */
  SPILL(); f_4e1d2a(); return;
}

void f_52d4a0(void) {
  LOAD_REGS();
L_52d4a0: /* 52d4a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52d4a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52d4a2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 52d4a6: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 52d4a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d4ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d4ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52d4ad: mov ebx, ecx */
  ebx = ecx;
/* 52d4af: je 0x52d4b6 */
  if (zf) goto L_52d4b6;
L_52d4b1: /* 52d4b1: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 52d4b4: jmp 0x52d4bb */
  goto L_52d4bb;
L_52d4b6: /* 52d4b6: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_52d4bb: /* 52d4bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d4bc: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x52d4c1u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 52d4c1: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 52d4c4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 52d4c7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d4ca: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 52d4cb: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 52d4cd: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 52d4d0: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52d4d3: je 0x52d519 */
  if (zf) goto L_52d519;
L_52d4d5: /* 52d4d5: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 52d4d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 52d4da: mov esi, edi */
  esi = edi;
/* 52d4dc: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 52d4df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d4e1: lea eax, [esi + eax + 4] */
  eax = (uint32_t)(esi + eax + 0x4u);
/* 52d4e5: je 0x52d4ec */
  if (zf) goto L_52d4ec;
L_52d4e7: /* 52d4e7: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 52d4ea: jmp 0x52d4f1 */
  goto L_52d4f1;
L_52d4ec: /* 52d4ec: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_52d4f1: /* 52d4f1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 52d4f4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d4f6: je 0x52d4fc */
  if (zf) goto L_52d4fc;
L_52d4f8: /* 52d4f8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52d4fa: jmp 0x52d501 */
  goto L_52d501;
L_52d4fc: /* 52d4fc: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_52d501: /* 52d501: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52d502: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d503: call 0x4e26df */
  esp -= 4; W32(esp, 0x52d508u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 52d508: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d50b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d50d: je 0x52d522 */
  if (zf) goto L_52d522;
L_52d50f: /* 52d50f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 52d511: mov edi, dword ptr [esi + ecx] */
  edi = R32((uint32_t)(esi + ecx));
/* 52d514: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52d517: jne 0x52d4d5 */
  if (!zf) goto L_52d4d5;
L_52d519: /* 52d519: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52d51a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d51b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52d51c: xor eax, eax */
  eax = 0;
/* 52d51e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52d51f: ret 4 */
  esp += 8; SPILL(); return;
L_52d522: /* 52d522: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 52d524: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 52d527: lea eax, [edi + edx + 0x10] */
  eax = (uint32_t)(edi + edx + 0x10u);
/* 52d52b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52d52c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d52d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52d52e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52d52f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52d570(void) {
  LOAD_REGS();
L_52d570: /* 52d570: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 52d575: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d577: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52d57b: je 0x52d58f */
  if (zf) goto L_52d58f;
L_52d57d: /* 52d57d: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 52d583: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 52d586: test dword ptr [edx + 4], 0x1000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d58d: jne 0x52d599 */
  if (!zf) goto L_52d599;
L_52d58f: /* 52d58f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52d591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d592: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52d596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d597: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52d599u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52d599: /* 52d599: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52d5b0(void) {
  LOAD_REGS();
L_52d5b0: /* 52d5b0: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 52d5b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d5b7: je 0x52d5cc */
  if (zf) goto L_52d5cc;
L_52d5b9: /* 52d5b9: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 52d5be: mov edx, dword ptr [eax + 0xbe0] */
  edx = R32((uint32_t)(eax + 0xbe0u));
/* 52d5c4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 52d5c7: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52d5ca: jne 0x52d5da */
  if (!zf) goto L_52d5da;
L_52d5cc: /* 52d5cc: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52d5d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52d5d2: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 52d5d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52d5d8: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x52d5dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52d5da: /* 52d5da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52d5f0(void) {
  LOAD_REGS();
L_52d5f0: /* 52d5f0: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 52d5f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d5f7: je 0x52d60c */
  if (zf) goto L_52d60c;
L_52d5f9: /* 52d5f9: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 52d5fe: mov edx, dword ptr [eax + 0xbe0] */
  edx = R32((uint32_t)(eax + 0xbe0u));
/* 52d604: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 52d607: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52d60a: jne 0x52d635 */
  if (!zf) goto L_52d635;
L_52d60c: /* 52d60c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52d610: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 52d613: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d615: je 0x52d626 */
  if (zf) goto L_52d626;
L_52d617: /* 52d617: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52d619: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52d61b: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 52d620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d621: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52d623u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52d623: ret 4 */
  esp += 8; SPILL(); return;
L_52d626: /* 52d626: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52d628: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 52d62d: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 52d632: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d633: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52d635u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52d635: /* 52d635: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52d660(void) {
  LOAD_REGS();
L_52d660: /* 52d660: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 52d665: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d667: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52d66b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d66c: je 0x52d67f */
  if (zf) goto L_52d67f;
L_52d66e: /* 52d66e: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 52d673: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 52d676: test dword ptr [eax + 4], 0x1000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d67d: jne 0x52d6a1 */
  if (!zf) goto L_52d6a1;
L_52d67f: /* 52d67f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52d683: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 52d686: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d688: je 0x52d696 */
  if (zf) goto L_52d696;
L_52d68a: /* 52d68a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52d68c: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 52d68e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52d68f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d690: call dword ptr [esi] */
  { uint32_t t = R32((uint32_t)(esi)); esp -= 4; W32(esp, 0x52d692u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52d692: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d693: ret 8 */
  esp += 12; SPILL(); return;
L_52d696: /* 52d696: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 52d698: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 52d69d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52d69e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d69f: call dword ptr [esi] */
  { uint32_t t = R32((uint32_t)(esi)); esp -= 4; W32(esp, 0x52d6a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52d6a1: /* 52d6a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d6a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52d6d0(void) {
  LOAD_REGS();
L_52d6d0: /* 52d6d0: mov eax, 0x2000 */
  eax = 0x2000u;
/* 52d6d5: call 0x554f80 */
  esp -= 4; W32(esp, 0x52d6dau); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 52d6da: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 52d6df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d6e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d6e2: mov esi, dword ptr [esp + 0x200c] */
  esi = R32((uint32_t)(esp + 0x200cu));
/* 52d6e9: je 0x52d6fb */
  if (zf) goto L_52d6fb;
L_52d6eb: /* 52d6eb: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 52d6f0: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 52d6f3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 52d6f6: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52d6f9: jne 0x52d726 */
  if (!zf) goto L_52d726;
L_52d6fb: /* 52d6fb: lea edx, [esp + 0x2010] */
  edx = (uint32_t)(esp + 0x2010u);
/* 52d702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52d703: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 52d707: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52d70c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d70d: call 0x4e3693 */
  esp -= 4; W32(esp, 0x52d712u); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 52d712: mov ecx, dword ptr [esp + 0x2014] */
  ecx = R32((uint32_t)(esp + 0x2014u));
/* 52d719: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52d71b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d71e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d71f: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 52d723: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d724: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52d726u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52d726: /* 52d726: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d727: add esp, 0x2000 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d72d: ret  */
  esp += 4; SPILL(); return;
}

void f_52d750(void) {
  LOAD_REGS();
L_52d750: /* 52d750: mov eax, 0x2000 */
  eax = 0x2000u;
/* 52d755: call 0x554f80 */
  esp -= 4; W32(esp, 0x52d75au); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 52d75a: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 52d75f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d761: je 0x52d776 */
  if (zf) goto L_52d776;
L_52d763: /* 52d763: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 52d768: mov ecx, dword ptr [eax + 0xbe0] */
  ecx = R32((uint32_t)(eax + 0xbe0u));
/* 52d76e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 52d771: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52d774: jne 0x52d7a5 */
  if (!zf) goto L_52d7a5;
L_52d776: /* 52d776: lea edx, [esp + 0x2008] */
  edx = (uint32_t)(esp + 0x2008u);
/* 52d77d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52d77e: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 52d782: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52d787: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d788: call 0x4e3693 */
  esp -= 4; W32(esp, 0x52d78du); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 52d78d: mov ecx, dword ptr [esp + 0x2010] */
  ecx = R32((uint32_t)(esp + 0x2010u));
/* 52d794: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52d796: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d799: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 52d79e: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 52d7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d7a3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52d7a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52d7a5: /* 52d7a5: add esp, 0x2000 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d7ab: ret  */
  esp += 4; SPILL(); return;
}

void f_52d7d0(void) {
  LOAD_REGS();
L_52d7d0: /* 52d7d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52d7d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52d7d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d7d3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 52d7d7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 52d7da: mov eax, ecx */
  eax = ecx;
/* 52d7dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52d7dd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 52d7e1: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 52d7e4: lea ecx, [ecx + edi*8] */
  ecx = (uint32_t)(ecx + edi*8);
/* 52d7e7: lea edx, [edi*8] */
  edx = (uint32_t)(edi*8);
/* 52d7ee: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 52d7f1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 52d7f3: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 52d7f6: jae 0x52d7fb */
  if (!cf) goto L_52d7fb;
L_52d7f8: /* 52d7f8: inc dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x14u), r);
  }
L_52d7fb: /* 52d7fb: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 52d7fe: mov ecx, edi */
  ecx = edi;
/* 52d800: shr ecx, 0x1d */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 29;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52d803: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52d805: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 52d808: mov ebx, 0x40 */
  ebx = 0x40u;
/* 52d80d: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 52d80f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52d811: jl 0x52d860 */
  if ((sf != of)) goto L_52d860;
L_52d813: /* 52d813: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 52d817: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52d818: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52d819: lea eax, [eax + esi + 0x18] */
  eax = (uint32_t)(eax + esi + 0x18u);
/* 52d81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d81e: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x52d823u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 52d823: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 52d826: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52d827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d828: call 0x4e4025 */
  esp -= 4; W32(esp, 0x52d82du); SPILL(); f_4e4025(); if (g_unwind) return; RELOAD();
/* 52d82d: mov ebp, ebx */
  ebp = ebx;
/* 52d82f: add ebx, 0x3f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52d832: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d835: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52d837: jge 0x52d85c */
  if ((sf == of)) goto L_52d85c;
L_52d839: /* 52d839: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52d840: /* 52d840: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 52d844: lea eax, [edx + ebx - 0x3f] */
  eax = (uint32_t)(edx + ebx + 0xffffffc1u);
/* 52d848: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d849: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d84a: call 0x4e4025 */
  esp -= 4; W32(esp, 0x52d84fu); SPILL(); f_4e4025(); if (g_unwind) return; RELOAD();
/* 52d84f: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52d852: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d855: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 52d858: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52d85a: jl 0x52d840 */
  if ((sf != of)) goto L_52d840;
L_52d85c: /* 52d85c: xor eax, eax */
  eax = 0;
/* 52d85e: jmp 0x52d862 */
  goto L_52d862;
L_52d860: /* 52d860: xor ebp, ebp */
  ebp = 0;
L_52d862: /* 52d862: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 52d866: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 52d868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52d869: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 52d86b: lea edx, [eax + esi + 0x18] */
  edx = (uint32_t)(eax + esi + 0x18u);
/* 52d86f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52d870: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52d871: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x52d876u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 52d876: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d879: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52d87a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d87b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52d87c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52d87d: ret  */
  esp += 4; SPILL(); return;
}

void f_52d8b0(void) {
  LOAD_REGS();
L_52d8b0: /* 52d8b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52d8b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d8b4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 52d8b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52d8b9: xor ecx, ecx */
  ecx = 0;
/* 52d8bb: lea eax, [esi + 0x12] */
  eax = (uint32_t)(esi + 0x12u);
/* 52d8be: mov edi, edi */
  edi = edi;
L_52d8c0: /* 52d8c0: mov dl, byte ptr [eax - 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xfffffffeu))) & 0xffu);
/* 52d8c3: mov byte ptr [esp + ecx + 8], dl */
  W8((uint32_t)(esp + ecx + 0x8u), (edx & 0xffu));
/* 52d8c7: mov dl, byte ptr [eax - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xffffffffu))) & 0xffu);
/* 52d8ca: mov byte ptr [esp + ecx + 9], dl */
  W8((uint32_t)(esp + ecx + 0x9u), (edx & 0xffu));
/* 52d8ce: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 52d8d0: mov byte ptr [esp + ecx + 0xa], dl */
  W8((uint32_t)(esp + ecx + 0xau), (edx & 0xffu));
/* 52d8d4: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 52d8d7: mov byte ptr [esp + ecx + 0xb], dl */
  W8((uint32_t)(esp + ecx + 0xbu), (edx & 0xffu));
/* 52d8db: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d8de: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d8e1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52d8e4: jl 0x52d8c0 */
  if ((sf != of)) goto L_52d8c0;
L_52d8e6: /* 52d8e6: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 52d8e9: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 52d8ec: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 52d8ef: cmp ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52d8f2: mov eax, 0x38 */
  eax = 0x38u;
/* 52d8f7: jl 0x52d8fe */
  if ((sf != of)) goto L_52d8fe;
L_52d8f9: /* 52d8f9: mov eax, 0x78 */
  eax = 0x78u;
L_52d8fe: /* 52d8fe: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 52d900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d901: push 0x5a7830 */
  { uint32_t v = 0x5a7830u; esp -= 4; W32(esp, v); }
/* 52d906: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d907: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x52d90cu); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 52d90c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 52d90e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 52d912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d913: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d914: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x52d919u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 52d919: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 52d91d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d920: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52d921: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 52d924: mov edi, 4 */
  edi = 0x4u;
/* 52d929: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52d930: /* 52d930: mov dl, byte ptr [eax - 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xfffffffeu))) & 0xffu);
/* 52d933: mov byte ptr [ecx - 1], dl */
  W8((uint32_t)(ecx + 0xffffffffu), (edx & 0xffu));
/* 52d936: mov dl, byte ptr [eax - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xffffffffu))) & 0xffu);
/* 52d939: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 52d93b: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 52d93d: mov byte ptr [ecx + 1], dl */
  W8((uint32_t)(ecx + 0x1u), (edx & 0xffu));
/* 52d940: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 52d943: mov byte ptr [ecx + 2], dl */
  W8((uint32_t)(ecx + 0x2u), (edx & 0xffu));
/* 52d946: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52d949: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52d94c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 52d94d: jne 0x52d930 */
  if (!zf) goto L_52d930;
L_52d94f: /* 52d94f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 52d951: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52d953: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d954: call 0x4e150a */
  esp -= 4; W32(esp, 0x52d959u); SPILL(); f_4e150a(); if (g_unwind) return; RELOAD();
/* 52d959: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d95c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52d95d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52d95e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d961: ret  */
  esp += 4; SPILL(); return;
}

void f_52d9a0(void) {
  LOAD_REGS();
L_52d9a0: /* 52d9a0: mov eax, dword ptr [0x5f7d04] */
  eax = R32((uint32_t)(0x5f7d04u));
/* 52d9a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d9a7: je 0x52da54 */
  if (zf) goto L_52da54;
L_52d9ad: /* 52d9ad: mov eax, dword ptr [0x5f7d14] */
  eax = R32((uint32_t)(0x5f7d14u));
/* 52d9b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d9b4: jne 0x52da54 */
  if (!zf) goto L_52da54;
L_52d9ba: /* 52d9ba: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 52d9bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52d9c0: push 0x5a7b70 */
  { uint32_t v = 0x5a7b70u; esp -= 4; W32(esp, v); }
/* 52d9c5: mov esi, 1 */
  esi = 0x1u;
/* 52d9ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52d9cb: mov dword ptr [0x5f7d14], esi */
  W32((uint32_t)(0x5f7d14u), esi);
/* 52d9d1: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x52d9d6u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 52d9d6: mov eax, dword ptr [0x5f7d14] */
  eax = R32((uint32_t)(0x5f7d14u));
/* 52d9db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d9de: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52d9e0: jne 0x52d9f8 */
  if (!zf) goto L_52d9f8;
L_52d9e2: /* 52d9e2: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 52d9e7: call 0x4e3e22 */
  esp -= 4; W32(esp, 0x52d9ecu); SPILL(); f_4e3e22(); if (g_unwind) return; RELOAD();
/* 52d9ec: mov eax, dword ptr [0x5f7d14] */
  eax = R32((uint32_t)(0x5f7d14u));
/* 52d9f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52d9f4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52d9f6: je 0x52d9e2 */
  if (zf) goto L_52d9e2;
L_52d9f8: /* 52d9f8: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 52d9fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52d9ff: je 0x52da17 */
  if (zf) goto L_52da17;
L_52da01: /* 52da01: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52da07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52da09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52da0a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x52da0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52da0d: mov dword ptr [0x5f7d08], 0 */
  W32((uint32_t)(0x5f7d08u), 0x0u);
L_52da17: /* 52da17: mov ecx, dword ptr [0x5f7d18] */
  ecx = R32((uint32_t)(0x5f7d18u));
/* 52da1d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52da1f: mov esi, ecx */
  esi = ecx;
/* 52da21: je 0x52da34 */
  if (zf) goto L_52da34;
L_52da23: /* 52da23: call 0x4e2efa */
  esp -= 4; W32(esp, 0x52da28u); SPILL(); f_4e2efa(); if (g_unwind) return; RELOAD();
/* 52da28: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52da2e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52da30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52da31: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x52da34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52da34: /* 52da34: mov eax, dword ptr [0x5f7d04] */
  eax = R32((uint32_t)(0x5f7d04u));
/* 52da39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52da3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52da3c: je 0x52da4a */
  if (zf) goto L_52da4a;
L_52da3e: /* 52da3e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52da44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52da46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52da47: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x52da4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52da4a: /* 52da4a: mov dword ptr [0x5f7d04], 0 */
  W32((uint32_t)(0x5f7d04u), 0x0u);
L_52da54: /* 52da54: ret  */
  esp += 4; SPILL(); return;
}

void f_52da90(void) {
  LOAD_REGS();
L_52da90: /* 52da90: mov eax, 0x2000 */
  eax = 0x2000u;
/* 52da95: call 0x554f80 */
  esp -= 4; W32(esp, 0x52da9au); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 52da9a: lea eax, [esp + 0x2004] */
  eax = (uint32_t)(esp + 0x2004u);
/* 52daa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52daa2: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 52daa6: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52daab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52daac: mov dword ptr [0x5b2130], 1 */
  W32((uint32_t)(0x5b2130u), 0x1u);
/* 52dab6: call 0x4e3693 */
  esp -= 4; W32(esp, 0x52dabbu); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 52dabb: mov eax, dword ptr [0x5fcb30] */
  eax = R32((uint32_t)(0x5fcb30u));
/* 52dac0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
  {
      char u8[1024]; int k = 0;
      for (int i = 0; i < 500 && k + 4 < (int)sizeof(u8); i++) {
          uint16_t c = R16(esp + 2 * i);
          if (!c) break;
          if (c < 0x80) u8[k++] = (char)c;
          else { u8[k++] = 0xc0 | (c >> 6); u8[k++] = 0x80 | (c & 0x3f); }
      }
      u8[k] = 0;
      host_log(">>> CRITICAL UE2 appErrorf: '%s' <<<\n", u8);
  }
/* 52dac3: mov edx, eax */
  edx = eax;
/* 52dac5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52dac6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dac8: mov dword ptr [0x5fcb30], eax */
  W32((uint32_t)(0x5fcb30u), eax);
/* 52dacd: je 0x52dae6 */
  if (zf) goto L_52dae6;
L_52dacf: /* 52dacf: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52dad4: push 0x5a7e94 */
  { uint32_t v = 0x5a7e94u; esp -= 4; W32(esp, v); }
/* 52dad9: push 0x5aff08 */
  { uint32_t v = 0x5aff08u; esp -= 4; W32(esp, v); }
/* 52dade: call 0x4e4287 */
  esp -= 4; W32(esp, 0x52dae3u); SPILL(); f_4e4287(); if (g_unwind) return; RELOAD();
/* 52dae3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52dae6: /* 52dae6: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52daeb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 52daef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52daf0: push 0x5aff08 */
  { uint32_t v = 0x5aff08u; esp -= 4; W32(esp, v); }
/* 52daf5: call 0x4e4287 */
  esp -= 4; W32(esp, 0x52dafau); SPILL(); f_4e4287(); if (g_unwind) return; RELOAD();
/* 52dafa: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 52db00: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 52db04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52db05: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 52db0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52db0b: call 0x4e30df */
  esp -= 4; W32(esp, 0x52db10u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 52db10: add esp, 0x2018 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2018u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52db16: ret  */
  esp += 4; SPILL(); return;
}

void f_52db50(void) {
  LOAD_REGS();
L_52db50: /* 52db50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52db51: mov ebp, esp */
  ebp = esp;
/* 52db53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52db55: push 0x558370 */
  { uint32_t v = 0x558370u; esp -= 4; W32(esp, v); }
/* 52db5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52db60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52db61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52db68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52db6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52db6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52db6d: mov esi, ecx */
  esi = ecx;
/* 52db6f: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 52db72: imul edx, dword ptr [ebp + 8] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x8u)));
  edx = (uint32_t)r;
  }
/* 52db76: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52db7c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52db7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52db7f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52db82: push 0x5a7768 */
  { uint32_t v = 0x5a7768u; esp -= 4; W32(esp, v); }
/* 52db87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52db88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52db8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52db8b: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 52db8e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52db95: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x52db98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52db98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52db9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52db9c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 52db9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52db9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52dba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52dba7: mov esp, ebp */
  esp = ebp;
/* 52dba9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52dbaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52dbad(void) {
  LOAD_REGS();
L_52dbad: /* 52dbad: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52dbb0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52dbb5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52dbb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52dbb9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52dbbc: call 0x554df6 */
  esp -= 4; W32(esp, 0x52dbc1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52dbc1(); return;
}

void f_52dbc1(void) {
  LOAD_REGS();
L_52dbc1: /* 52dbc1: push 0x56d05c */
  { uint32_t v = 0x56d05cu; esp -= 4; W32(esp, v); }
/* 52dbc6: push 0x5a7778 */
  { uint32_t v = 0x5a7778u; esp -= 4; W32(esp, v); }
/* 52dbcb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52dbd0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52dbd0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52dbd3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52dbd6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 52dbd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52dbda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52dbdb: push 0x5a7780 */
  { uint32_t v = 0x5a7780u; esp -= 4; W32(esp, v); }
/* 52dbe0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52dbe5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52dbe5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dbe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52dbea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52dbec: call 0x554df6 */
  esp -= 4; W32(esp, 0x52dbf1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52dbf1: guest_badaddr(0x52dbf1); return;
}

void f_52dc30(void) {
  LOAD_REGS();
L_52dc30: /* 52dc30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52dc31: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 52dc35: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dc37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dc38: mov esi, ecx */
  esi = ecx;
/* 52dc3a: je 0x52dca4 */
  if (zf) goto L_52dca4;
L_52dc3c: /* 52dc3c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52dc40: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 52dc43: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52dc45: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 52dc47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52dc48: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 52dc4c: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 52dc4e: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 52dc51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52dc52: lea edx, [eax + ebx] */
  edx = (uint32_t)(eax + ebx);
/* 52dc55: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 52dc58: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 52dc5b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52dc5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52dc5e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52dc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52dc61: call 0x4e195b */
  esp -= 4; W32(esp, 0x52dc66u); SPILL(); f_4e195b(); if (g_unwind) return; RELOAD();
/* 52dc66: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 52dc69: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52dc6c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 52dc6e: lea edx, [ecx + ecx] */
  edx = (uint32_t)(ecx + ecx);
/* 52dc71: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 52dc74: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dc77: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52dc79: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52dc7c: jl 0x52dc8d */
  if ((sf != of)) goto L_52dc8d;
L_52dc7e: /* 52dc7e: mov edx, ecx */
  edx = ecx;
/* 52dc80: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 52dc82: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 52dc85: cmp edx, 0x4000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52dc8b: jl 0x52dca3 */
  if ((sf != of)) goto L_52dca3;
L_52dc8d: /* 52dc8d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 52dc8f: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52dc92: jg 0x52dc98 */
  if ((!zf && sf == of)) goto L_52dc98;
L_52dc94: /* 52dc94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dc96: jne 0x52dca3 */
  if (!zf) goto L_52dca3;
L_52dc98: /* 52dc98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52dc99: mov ecx, esi */
  ecx = esi;
/* 52dc9b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52dc9e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52dca3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_52dca3: /* 52dca3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_52dca4: /* 52dca4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52dca5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52dca6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_52dcd0(void) {
  LOAD_REGS();
L_52dcd0: /* 52dcd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52dcd1: mov ebp, esp */
  ebp = esp;
/* 52dcd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52dcd5: push 0x558380 */
  { uint32_t v = 0x558380u; esp -= 4; W32(esp, v); }
/* 52dcda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52dce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52dce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52dce8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52dceb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52dcec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dced: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52dcf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52dcf1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52dcf4: push 0x5a77ec */
  { uint32_t v = 0x5a77ecu; esp -= 4; W32(esp, v); }
/* 52dcf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dcfa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52dd01: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52dd06u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52dd06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dd0b: je 0x52dd20 */
  if (zf) goto L_52dd20;
L_52dd0d: /* 52dd0d: push 0x5a77f0 */
  { uint32_t v = 0x5a77f0u; esp -= 4; W32(esp, v); }
L_52dd12: /* 52dd12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dd13: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52dd18u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52dd18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd1b: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 52dd1e: mov edi, edi */
  edi = edi;
L_52dd20: /* 52dd20: push 0x5a77f4 */
  { uint32_t v = 0x5a77f4u; esp -= 4; W32(esp, v); }
/* 52dd25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dd26: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52dd2bu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52dd2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dd30: je 0x52dd40 */
  if (zf) goto L_52dd40;
L_52dd32: /* 52dd32: push 0x5a77f8 */
  { uint32_t v = 0x5a77f8u; esp -= 4; W32(esp, v); }
/* 52dd37: jmp 0x52dd12 */
  goto L_52dd12;
L_52dd40: /* 52dd40: push 0x5a77fc */
  { uint32_t v = 0x5a77fcu; esp -= 4; W32(esp, v); }
/* 52dd45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dd46: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52dd4bu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52dd4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dd50: je 0x52dd65 */
  if (zf) goto L_52dd65;
L_52dd52: /* 52dd52: push 0x5a7800 */
  { uint32_t v = 0x5a7800u; esp -= 4; W32(esp, v); }
/* 52dd57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dd58: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52dd5du); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52dd5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd60: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 52dd63: jmp 0x52dd40 */
  goto L_52dd40;
L_52dd65: /* 52dd65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52dd68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52dd69: mov eax, esi */
  eax = esi;
/* 52dd6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52dd6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52dd73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52dd74: mov esp, ebp */
  esp = ebp;
/* 52dd76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52dd77: ret  */
  esp += 4; SPILL(); return;
}

void f_52dd39(void) {
  LOAD_REGS();
L_52dd39: /* 52dd39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52dd40: /* 52dd40: push 0x5a77fc */
  { uint32_t v = 0x5a77fcu; esp -= 4; W32(esp, v); }
/* 52dd45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dd46: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52dd4bu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52dd4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dd50: je 0x52dd65 */
  if (zf) goto L_52dd65;
L_52dd52: /* 52dd52: push 0x5a7800 */
  { uint32_t v = 0x5a7800u; esp -= 4; W32(esp, v); }
/* 52dd57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52dd58: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52dd5du); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52dd5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd60: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 52dd63: jmp 0x52dd40 */
  goto L_52dd40;
L_52dd65: /* 52dd65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52dd68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52dd69: mov eax, esi */
  eax = esi;
/* 52dd6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52dd6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52dd73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52dd74: mov esp, ebp */
  esp = ebp;
/* 52dd76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52dd77: ret  */
  esp += 4; SPILL(); return;
}

void f_52dd78(void) {
  LOAD_REGS();
L_52dd78: /* 52dd78: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52dd7b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52dd80: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52dd83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52dd84: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52dd87: call 0x554df6 */
  esp -= 4; W32(esp, 0x52dd8cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52dd8c(); return;
}

void f_52dd8c(void) {
  LOAD_REGS();
L_52dd8c: /* 52dd8c: push 0x56d084 */
  { uint32_t v = 0x56d084u; esp -= 4; W32(esp, v); }
/* 52dd91: push 0x5a7804 */
  { uint32_t v = 0x5a7804u; esp -= 4; W32(esp, v); }
/* 52dd96: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52dd9bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52dd9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dd9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52dda0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52dda2: call 0x554df6 */
  esp -= 4; W32(esp, 0x52dda7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52dda7: guest_badaddr(0x52dda7); return;
}

void f_52ddf0(void) {
  LOAD_REGS();
L_52ddf0: /* 52ddf0: mov ecx, dword ptr [0x6964d4] */
  ecx = R32((uint32_t)(0x6964d4u));
/* 52ddf6: mov eax, ecx */
  eax = ecx;
/* 52ddf8: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 52ddfd: shl eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52de00: add eax, 0x5fcb38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5fcb38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52de05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52de06: mov dword ptr [0x6964d4], ecx */
  W32((uint32_t)(0x6964d4u), ecx);
/* 52de0c: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 52de11: ret  */
  esp += 4; SPILL(); return;
}

void f_52de30(void) {
  LOAD_REGS();
L_52de30: /* 52de30: jmp 0x4e292d */
  SPILL(); f_4e292d(); return;
}

void f_52de50(void) {
  LOAD_REGS();
L_52de50: /* 52de50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52de51: mov ebp, esp */
  ebp = esp;
/* 52de53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52de55: push 0x558390 */
  { uint32_t v = 0x558390u; esp -= 4; W32(esp, v); }
/* 52de5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52de60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52de61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52de68: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52de6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52de6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52de6d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 52de70: xor eax, eax */
  eax = 0;
/* 52de72: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52de75: xor ebx, ebx */
  ebx = 0;
/* 52de77: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52de7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52de7c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52de7f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 52de82: jb 0x52de8d */
  if (cf) goto L_52de8d;
L_52de84: /* 52de84: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52de88: ja 0x52de8d */
  if ((!cf && !zf)) goto L_52de8d;
L_52de8a: /* 52de8a: add eax, -0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_52de8d: /* 52de8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52de8e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52de91: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52de96u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52de96: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 52de99: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52de9c: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52de9f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 52dea0: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 52dea3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 52dea6: xor esi, esi */
  esi = 0;
L_52dea8: /* 52dea8: mov si, word ptr [edi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 52deab: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52deae: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52deb1: je 0x52df1b */
  if (zf) goto L_52df1b;
L_52deb3: /* 52deb3: cmp si, 0x61 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52deb7: jb 0x52dec5 */
  if (cf) goto L_52dec5;
L_52deb9: /* 52deb9: cmp si, 0x7a */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52debd: ja 0x52dec5 */
  if ((!cf && !zf)) goto L_52dec5;
L_52debf: /* 52debf: add esi, 0xffe0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffe0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_52dec5: /* 52dec5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dec7: jne 0x52def8 */
  if (!zf) goto L_52def8;
L_52dec9: /* 52dec9: cmp si, word ptr [ebp - 0x14] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffecu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52decd: jne 0x52def8 */
  if (!zf) goto L_52def8;
L_52decf: /* 52decf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52ded2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52ded5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ded6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ded7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ded8: call 0x4e2f90 */
  esp -= 4; W32(esp, 0x52deddu); SPILL(); f_4e2f90(); if (g_unwind) return; RELOAD();
/* 52dedd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52dee0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52dee2: jne 0x52def8 */
  if (!zf) goto L_52def8;
L_52dee4: /* 52dee4: lea eax, [edi - 2] */
  eax = (uint32_t)(edi + 0xfffffffeu);
/* 52dee7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52deea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52def1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52def2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52def3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52def4: mov esp, ebp */
  esp = ebp;
/* 52def6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52def7: ret  */
  esp += 4; SPILL(); return;
L_52def8: /* 52def8: cmp si, 0x41 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52defc: jb 0x52df04 */
  if (cf) goto L_52df04;
L_52defe: /* 52defe: cmp si, 0x5a */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52df02: jbe 0x52df10 */
  if ((cf | zf)) goto L_52df10;
L_52df04: /* 52df04: cmp si, 0x30 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52df08: jb 0x52df17 */
  if (cf) goto L_52df17;
L_52df0a: /* 52df0a: cmp si, 0x39 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52df0e: ja 0x52df17 */
  if ((!cf && !zf)) goto L_52df17;
L_52df10: /* 52df10: mov ebx, 1 */
  ebx = 0x1u;
/* 52df15: jmp 0x52dea8 */
  goto L_52dea8;
L_52df17: /* 52df17: xor ebx, ebx */
  ebx = 0;
/* 52df19: jmp 0x52dea8 */
  goto L_52dea8;
L_52df1b: /* 52df1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52df1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52df1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52df20: xor eax, eax */
  eax = 0;
/* 52df22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52df29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52df2a: mov esp, ebp */
  esp = ebp;
/* 52df2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52df2d: ret  */
  esp += 4; SPILL(); return;
}

void f_52df2e(void) {
  LOAD_REGS();
L_52df2e: /* 52df2e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 52df31: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52df36: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 52df39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52df3a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 52df3d: call 0x554df6 */
  esp -= 4; W32(esp, 0x52df42u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52df42(); return;
}

void f_52df42(void) {
  LOAD_REGS();
L_52df42: /* 52df42: push 0x56d098 */
  { uint32_t v = 0x56d098u; esp -= 4; W32(esp, v); }
/* 52df47: push 0x5a7814 */
  { uint32_t v = 0x5a7814u; esp -= 4; W32(esp, v); }
/* 52df4c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52df51u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52df51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52df54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52df56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52df58: call 0x554df6 */
  esp -= 4; W32(esp, 0x52df5du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52df5d: guest_badaddr(0x52df5d); return;
}

void f_52dfb0(void) {
  LOAD_REGS();
L_52dfb0: /* 52dfb0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52dfb4: cmp edx, dword ptr [0x5a8010] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0x5a8010u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52dfba: je 0x52dff1 */
  if (zf) goto L_52dff1;
L_52dfbc: /* 52dfbc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52dfbe: mov dword ptr [0x5a8010], 0 */
  W32((uint32_t)(0x5a8010u), 0x0u);
/* 52dfc8: jle 0x52dfe7 */
  if ((zf || sf != of)) goto L_52dfe7;
L_52dfca: /* 52dfca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52dfcb: mov ecx, edx */
  ecx = edx;
/* 52dfcd: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 52dfcf: mov eax, 0x200020 */
  eax = 0x200020u;
/* 52dfd4: mov edi, 0x6964d8 */
  edi = 0x6964d8u;
/* 52dfd9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52dfdb: adc ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 52dfdd: rep stosw word ptr es:[edi], ax */
  if (!DF) { guest_stos16(edi, (uint16_t)eax, ecx); edi += ecx * 2; ecx = 0; } else { while (ecx) { W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2); ecx--; } }
/* 52dfe0: mov dword ptr [0x5a8010], edx */
  W32((uint32_t)(0x5a8010u), edx);
/* 52dfe6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_52dfe7: /* 52dfe7: mov word ptr [edx*2 + 0x6964d8], 0 */
  W16((uint32_t)(edx*2 + 0x6964d8u), 0x0u);
L_52dff1: /* 52dff1: mov eax, 0x6964d8 */
  eax = 0x6964d8u;
/* 52dff6: ret  */
  esp += 4; SPILL(); return;
}

void f_52e020(void) {
  LOAD_REGS();
L_52e020: /* 52e020: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52e024: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 52e026: xor eax, eax */
  eax = 0;
/* 52e028: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52e02a: je 0x52e045 */
  if (zf) goto L_52e045;
L_52e02c: /* 52e02c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52e030: /* 52e030: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52e035: jge 0x52e040 */
  if ((sf == of)) goto L_52e040;
L_52e037: /* 52e037: mov dl, byte ptr [eax + ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x1u))) & 0xffu);
/* 52e03b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52e03c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52e03e: jne 0x52e030 */
  if (!zf) goto L_52e030;
L_52e040: /* 52e040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52e042: jle 0x52e045 */
  if ((zf || sf != of)) goto L_52e045;
L_52e044: /* 52e044: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_52e045: /* 52e045: cmp byte ptr [eax + ecx], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 52e049: jne 0x52e062 */
  if (!zf) goto L_52e062;
L_52e04b: /* 52e04b: jmp 0x52e050 */
  goto L_52e050;
L_52e050: /* 52e050: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52e052: jle 0x52e062 */
  if ((zf || sf != of)) goto L_52e062;
L_52e054: /* 52e054: mov byte ptr [eax + ecx], 0 */
  W8((uint32_t)(eax + ecx), 0x0u);
/* 52e058: mov dl, byte ptr [eax + ecx - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xffffffffu))) & 0xffu);
/* 52e05c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 52e05d: cmp dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 52e060: je 0x52e050 */
  if (zf) goto L_52e050;
L_52e062: /* 52e062: ret  */
  esp += 4; SPILL(); return;
}

void f_52e04d(void) {
  LOAD_REGS();
L_52e04d: /* 52e04d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_52e050: /* 52e050: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52e052: jle 0x52e062 */
  if ((zf || sf != of)) goto L_52e062;
L_52e054: /* 52e054: mov byte ptr [eax + ecx], 0 */
  W8((uint32_t)(eax + ecx), 0x0u);
/* 52e058: mov dl, byte ptr [eax + ecx - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xffffffffu))) & 0xffu);
/* 52e05c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 52e05d: cmp dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 52e060: je 0x52e050 */
  if (zf) goto L_52e050;
L_52e062: /* 52e062: ret  */
  esp += 4; SPILL(); return;
}

void f_52e090(void) {
  LOAD_REGS();
L_52e090: /* 52e090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e091: mov ebp, esp */
  ebp = esp;
/* 52e093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e095: push 0x5583a0 */
  { uint32_t v = 0x5583a0u; esp -= 4; W32(esp, v); }
/* 52e09a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e0a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e0a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52e0ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52e0ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e0af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e0b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e0b1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52e0b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e0b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e0b8: xor ebx, ebx */
  ebx = 0;
/* 52e0ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e0bb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 52e0be: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52e0c3u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52e0c3: mov esi, eax */
  esi = eax;
/* 52e0c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e0c8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52e0ca: je 0x52e190 */
  if (zf) goto L_52e190;
L_52e0d0: /* 52e0d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e0d1: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52e0d6u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52e0d6: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 52e0d9: lea eax, [esi + eax*2] */
  eax = (uint32_t)(esi + eax*2);
/* 52e0dc: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 52e0df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e0e2: cmp word ptr [eax], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52e0e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e0e7: jne 0x52e102 */
  if (!zf) goto L_52e102;
L_52e0e9: /* 52e0e9: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52e0ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e0ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e0ee: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x52e0f3u); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 52e0f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e0f6: mov word ptr [esi + edi*2 - 2], bx */
  W16((uint32_t)(esi + edi*2 + 0xfffffffeu), (ebx & 0xffffu));
/* 52e0fb: push 0x5a7870 */
  { uint32_t v = 0x5a7870u; esp -= 4; W32(esp, v); }
/* 52e100: jmp 0x52e16a */
  goto L_52e16a;
L_52e102: /* 52e102: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e103: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e104: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x52e109u); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 52e109: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e10c: push 0x5a7874 */
  { uint32_t v = 0x5a7874u; esp -= 4; W32(esp, v); }
/* 52e111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e112: mov word ptr [esi + edi*2 - 2], bx */
  W16((uint32_t)(esi + edi*2 + 0xfffffffeu), (ebx & 0xffffu));
/* 52e117: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52e11cu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52e11c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e11f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52e121: je 0x52e126 */
  if (zf) goto L_52e126;
L_52e123: /* 52e123: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
L_52e126: /* 52e126: push 0x5a7878 */
  { uint32_t v = 0x5a7878u; esp -= 4; W32(esp, v); }
/* 52e12b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e12c: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52e131u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52e131: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e134: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52e136: je 0x52e13b */
  if (zf) goto L_52e13b;
L_52e138: /* 52e138: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
L_52e13b: /* 52e13b: push 0x5a787c */
  { uint32_t v = 0x5a787cu; esp -= 4; W32(esp, v); }
/* 52e140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e141: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52e146u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52e146: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e149: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52e14b: je 0x52e150 */
  if (zf) goto L_52e150;
L_52e14d: /* 52e14d: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
L_52e150: /* 52e150: push 0x5a7880 */
  { uint32_t v = 0x5a7880u; esp -= 4; W32(esp, v); }
/* 52e155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e156: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52e15bu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52e15b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e15e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52e160: je 0x52e165 */
  if (zf) goto L_52e165;
L_52e162: /* 52e162: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
L_52e165: /* 52e165: push 0x5a7884 */
  { uint32_t v = 0x5a7884u; esp -= 4; W32(esp, v); }
L_52e16a: /* 52e16a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e16b: call 0x4e2220 */
  esp -= 4; W32(esp, 0x52e170u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 52e170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e173: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52e175: je 0x52e17a */
  if (zf) goto L_52e17a;
L_52e177: /* 52e177: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
L_52e17a: /* 52e17a: mov eax, 1 */
  eax = 0x1u;
/* 52e17f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e182: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e189: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e18a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e18b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e18c: mov esp, ebp */
  esp = ebp;
/* 52e18e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e18f: ret  */
  esp += 4; SPILL(); return;
L_52e190: /* 52e190: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e193: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e195: xor eax, eax */
  eax = 0;
/* 52e197: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e19e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e19f: mov esp, ebp */
  esp = ebp;
/* 52e1a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e1a2: ret  */
  esp += 4; SPILL(); return;
}

void f_52e1a3(void) {
  LOAD_REGS();
L_52e1a3: /* 52e1a3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52e1a6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e1ab: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52e1ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e1af: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52e1b2: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e1b7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e1b7(); return;
}

void f_52e1b7(void) {
  LOAD_REGS();
L_52e1b7: /* 52e1b7: push 0x56d0b4 */
  { uint32_t v = 0x56d0b4u; esp -= 4; W32(esp, v); }
/* 52e1bc: push 0x5a7888 */
  { uint32_t v = 0x5a7888u; esp -= 4; W32(esp, v); }
/* 52e1c1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e1c6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e1c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e1c9: xor ebx, ebx */
  ebx = 0;
/* 52e1cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e1cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e1cd: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e1d2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52e1d2: guest_badaddr(0x52e1d2); return;
}

void f_52e240(void) {
  LOAD_REGS();
L_52e240: /* 52e240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e241: mov ebp, esp */
  ebp = esp;
/* 52e243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e245: push 0x5583b0 */
  { uint32_t v = 0x5583b0u; esp -= 4; W32(esp, v); }
/* 52e24a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e258: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52e25b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e25c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e25d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52e260: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52e264: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e265: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e268: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52e26f: mov eax, esi */
  eax = esi;
/* 52e271: je 0x52e2e0 */
  if (zf) goto L_52e2e0;
L_52e273: /* 52e273: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52e276: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e277: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52e27a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e27b: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52e280u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52e280: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e283: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e285: je 0x52e2e0 */
  if (zf) goto L_52e2e0;
L_52e287: /* 52e287: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52e289: jbe 0x52e273 */
  if ((cf | zf)) goto L_52e273;
L_52e28b: /* 52e28b: mov cx, word ptr [eax - 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xfffffffeu))) & 0xffffu);
/* 52e28f: cmp cx, 0x2d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52e293: je 0x52e29b */
  if (zf) goto L_52e29b;
L_52e295: /* 52e295: cmp cx, 0x2f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52e299: jne 0x52e273 */
  if (!zf) goto L_52e273;
L_52e29b: /* 52e29b: mov eax, 1 */
  eax = 0x1u;
/* 52e2a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e2a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e2aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e2ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e2ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e2ad: mov esp, ebp */
  esp = ebp;
/* 52e2af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e2b0: ret  */
  esp += 4; SPILL(); return;
L_52e2e0: /* 52e2e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e2e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e2e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e2e5: xor eax, eax */
  eax = 0;
/* 52e2e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e2ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e2ef: mov esp, ebp */
  esp = ebp;
/* 52e2f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e2f2: ret  */
  esp += 4; SPILL(); return;
}

void f_52e2b1(void) {
  LOAD_REGS();
L_52e2b1: /* 52e2b1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52e2b4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e2b9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52e2bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e2bd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52e2c0: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e2c5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e2c5(); return;
}

void f_52e2c5(void) {
  LOAD_REGS();
L_52e2c5: /* 52e2c5: push 0x56d0d0 */
  { uint32_t v = 0x56d0d0u; esp -= 4; W32(esp, v); }
/* 52e2ca: push 0x5a7890 */
  { uint32_t v = 0x5a7890u; esp -= 4; W32(esp, v); }
/* 52e2cf: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e2d4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e2d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e2d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e2d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e2db: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e2e0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 52e2e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e2e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e2e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e2e5: xor eax, eax */
  eax = 0;
/* 52e2e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e2ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e2ef: mov esp, ebp */
  esp = ebp;
/* 52e2f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e2f2: ret  */
  esp += 4; SPILL(); return;
}

void f_52e330(void) {
  LOAD_REGS();
L_52e330: /* 52e330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e331: mov ebp, esp */
  ebp = esp;
/* 52e333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e335: push 0x5583c0 */
  { uint32_t v = 0x5583c0u; esp -= 4; W32(esp, v); }
/* 52e33a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e348: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e349: mov eax, 0x200c */
  eax = 0x200cu;
/* 52e34e: call 0x554f80 */
  esp -= 4; W32(esp, 0x52e353u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 52e353: mov ax, word ptr [0x5f7cf0] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x5f7cf0u))) & 0xffffu);
/* 52e359: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 52e35c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e35d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e35e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e35f: mov word ptr [ebp - 0x201c], ax */
  W16((uint32_t)(ebp + 0xffffdfe4u), (eax & 0xffffu));
/* 52e366: xor eax, eax */
  eax = 0;
/* 52e368: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 52e36d: lea edi, [ebp - 0x201a] */
  edi = (uint32_t)(ebp + 0xffffdfe6u);
/* 52e373: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52e375: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e378: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52e37d: lea ecx, [ebp - 0x201c] */
  ecx = (uint32_t)(ebp + 0xffffdfe4u);
/* 52e383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e384: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 52e386: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52e389: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e38a: xor ebx, ebx */
  ebx = 0;
/* 52e38c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e38d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 52e390: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x52e395u); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 52e395: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e398: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52e39a: je 0x52e42f */
  if (zf) goto L_52e42f;
L_52e3a0: /* 52e3a0: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 52e3a3: xor eax, eax */
  eax = 0;
/* 52e3a5: cmp word ptr [ebp - 0x201c], 0x2d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffdfe4u))); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52e3ad: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 52e3af: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 52e3b2: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 52e3b5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52e3b8: lea ebx, [ebp + eax*2 - 0x201c] */
  ebx = (uint32_t)(ebp + eax*2 + 0xffffdfe4u);
/* 52e3bf: nop  */
L_52e3c0: /* 52e3c0: mov di, word ptr [ebx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 52e3c3: cmp di, 0x30 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52e3c7: jb 0x52e401 */
  if (cf) goto L_52e401;
L_52e3c9: /* 52e3c9: cmp di, 0x39 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52e3cd: ja 0x52e401 */
  if ((!cf && !zf)) goto L_52e401;
L_52e3cf: /* 52e3cf: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 52e3d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52e3d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e3d6: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 52e3d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e3d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e3da: call 0x555170 */
  esp -= 4; W32(esp, 0x52e3dfu); SPILL(); f_555170(); if (g_unwind) return; RELOAD();
/* 52e3df: mov ecx, eax */
  ecx = eax;
/* 52e3e1: mov eax, edx */
  eax = edx;
/* 52e3e3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 52e3e6: movzx eax, di */
  eax = (uint32_t)((edi & 0xffffu));
/* 52e3e9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52e3ea: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 52e3ec: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52e3ef: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 52e3f1: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 52e3f4: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 52e3f7: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 52e3f9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52e3fc: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52e3ff: jmp 0x52e3c0 */
  goto L_52e3c0;
L_52e401: /* 52e401: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 52e404: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e406: je 0x52e419 */
  if (zf) goto L_52e419;
L_52e408: /* 52e408: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52e40a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 52e40d: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 52e40f: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 52e412: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 52e414: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 52e416: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_52e419: /* 52e419: mov eax, 1 */
  eax = 0x1u;
/* 52e41e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e421: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e428: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e429: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e42a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e42b: mov esp, ebp */
  esp = ebp;
/* 52e42d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e42e: ret  */
  esp += 4; SPILL(); return;
L_52e42f: /* 52e42f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e432: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e433: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e434: xor eax, eax */
  eax = 0;
/* 52e436: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e43d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e43e: mov esp, ebp */
  esp = ebp;
/* 52e440: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e441: ret  */
  esp += 4; SPILL(); return;
}

void f_52e442(void) {
  LOAD_REGS();
L_52e442: /* 52e442: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52e445: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e44a: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 52e44d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e44e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 52e451: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e456u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e456(); return;
}

void f_52e456(void) {
  LOAD_REGS();
L_52e456: /* 52e456: push 0x56d0e8 */
  { uint32_t v = 0x56d0e8u; esp -= 4; W32(esp, v); }
/* 52e45b: push 0x5a78a8 */
  { uint32_t v = 0x5a78a8u; esp -= 4; W32(esp, v); }
/* 52e460: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e465u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e465: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e46a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e46c: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e471u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52e471: guest_badaddr(0x52e471); return;
}

void f_52e4e0(void) {
  LOAD_REGS();
L_52e4e0: /* 52e4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e4e1: mov ebp, esp */
  ebp = esp;
/* 52e4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e4e5: push 0x5583d0 */
  { uint32_t v = 0x5583d0u; esp -= 4; W32(esp, v); }
/* 52e4ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e4f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e4f8: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52e4fe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52e501: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52e504: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e505: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e507: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e50a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 52e50c: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 52e512: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e513: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e514: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e515: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52e51c: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x52e521u); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 52e521: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e524: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e526: jne 0x52e53b */
  if (!zf) goto L_52e53b;
L_52e528: /* 52e528: xor eax, eax */
  eax = 0;
/* 52e52a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e52d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e534: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e535: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e536: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e537: mov esp, ebp */
  esp = ebp;
/* 52e539: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e53a: ret  */
  esp += 4; SPILL(); return;
L_52e53b: /* 52e53b: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 52e541: push 0x5a78b0 */
  { uint32_t v = 0x5a78b0u; esp -= 4; W32(esp, v); }
/* 52e546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e547: call 0x4e26df */
  esp -= 4; W32(esp, 0x52e54cu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 52e54c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e54f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e551: jne 0x52e56e */
  if (!zf) goto L_52e56e;
L_52e553: /* 52e553: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 52e556: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_52e558: /* 52e558: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e55b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e55c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e55d: mov eax, 1 */
  eax = 0x1u;
/* 52e562: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e569: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e56a: mov esp, ebp */
  esp = ebp;
/* 52e56c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e56d: ret  */
  esp += 4; SPILL(); return;
L_52e56e: /* 52e56e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 52e571: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52e574: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e576: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 52e57c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e57d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e57e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e57f: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x52e584u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 52e584: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e587: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e589: je 0x52e528 */
  if (zf) goto L_52e528;
L_52e58b: /* 52e58b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 52e58e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 52e590: jmp 0x52e558 */
  goto L_52e558;
}

void f_52e592(void) {
  LOAD_REGS();
L_52e592: /* 52e592: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52e595: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e59a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52e59d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e59e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52e5a1: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e5a6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e5a6(); return;
}

void f_52e5a6(void) {
  LOAD_REGS();
L_52e5a6: /* 52e5a6: push 0x56d104 */
  { uint32_t v = 0x56d104u; esp -= 4; W32(esp, v); }
/* 52e5ab: push 0x5a78bc */
  { uint32_t v = 0x5a78bcu; esp -= 4; W32(esp, v); }
/* 52e5b0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e5b5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e5b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e5b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e5ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e5bc: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e5c1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52e5c1: guest_badaddr(0x52e5c1); return;
}

void f_52e610(void) {
  LOAD_REGS();
L_52e610: /* 52e610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e611: mov ebp, esp */
  ebp = esp;
/* 52e613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e615: push 0x5583e0 */
  { uint32_t v = 0x5583e0u; esp -= 4; W32(esp, v); }
/* 52e61a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e628: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52e62e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52e631: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52e634: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e635: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e636: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e637: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e63a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 52e63c: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52e642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e643: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e644: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e645: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52e64c: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x52e651u); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 52e651: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e654: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e656: jne 0x52e669 */
  if (!zf) goto L_52e669;
L_52e658: /* 52e658: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e65b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e662: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e663: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e665: mov esp, ebp */
  esp = ebp;
/* 52e667: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e668: ret  */
  esp += 4; SPILL(); return;
L_52e669: /* 52e669: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52e66b: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52e671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e672: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 52e675: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x52e67au); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 52e67a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52e67c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 52e67f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e680: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 52e682: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e685: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e686: mov eax, 1 */
  eax = 0x1u;
/* 52e68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e692: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e693: mov esp, ebp */
  esp = ebp;
/* 52e695: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e696: ret  */
  esp += 4; SPILL(); return;
}
