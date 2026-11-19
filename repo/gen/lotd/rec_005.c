#include "recomp.h"
#include "rec_mod.h"

void f_109178f0(void) {
  LOAD_REGS();
L_109178f0: /* 109178f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 109178f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109178f5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 109178f9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 109178fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109178fd: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x10917900u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917900: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917903: ret  */
  esp += 4; SPILL(); return;
}

void f_10917910(void) {
  LOAD_REGS();
L_10917910: /* 10917910: sub esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10917916: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917917: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10917918: xor ebp, ebp */
  ebp = 0;
/* 1091791a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091791b: mov esi, dword ptr [esp + 0x10c] */
  esi = R32((uint32_t)(esp + 0x10cu));
/* 10917922: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917923: mov ebx, ecx */
  ebx = ecx;
/* 10917925: mov edi, eax */
  edi = eax;
/* 10917927: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 1091792b: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 1091792f: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 10917933: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 10917937: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1091793b: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1091793f: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 10917943: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 10917947: mov dword ptr [esp + 0x70], ebp */
  W32((uint32_t)(esp + 0x70u), ebp);
/* 1091794b: mov dword ptr [esp + 0x74], ebp */
  W32((uint32_t)(esp + 0x74u), ebp);
/* 1091794f: mov dword ptr [esp + 0x78], ebp */
  W32((uint32_t)(esp + 0x78u), ebp);
/* 10917953: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 10917957: mov dword ptr [esp + 0x80], ebp */
  W32((uint32_t)(esp + 0x80u), ebp);
/* 1091795e: mov dword ptr [esp + 0x84], ebp */
  W32((uint32_t)(esp + 0x84u), ebp);
/* 10917965: mov dword ptr [esp + 0x88], ebp */
  W32((uint32_t)(esp + 0x88u), ebp);
/* 1091796c: mov dword ptr [esp + 0x8c], ebp */
  W32((uint32_t)(esp + 0x8cu), ebp);
/* 10917973: mov eax, ebx */
  eax = ebx;
/* 10917975: mov edx, esi */
  edx = esi;
/* 10917977: jmp 0x10917980 */
  goto L_10917980;
L_10917980: /* 10917980: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10917982: inc dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + ecx*4 + 0x50u), r);
  }
/* 10917986: lea ecx, [esp + ecx*4 + 0x50] */
  ecx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 1091798a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091798d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1091798e: jne 0x10917980 */
  if (!zf) goto L_10917980;
L_10917990: /* 10917990: cmp dword ptr [esp + 0x50], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917994: jne 0x109179ae */
  if (!zf) goto L_109179ae;
L_10917996: /* 10917996: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 1091799d: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1091799f: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_109179ae: /* 109179ae: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 109179b0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 109179b4: mov ecx, 1 */
  ecx = 0x1u;
/* 109179b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_109179c0: /* 109179c0: cmp dword ptr [esp + ecx*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179c4: jne 0x109179f8 */
  if (!zf) goto L_109179f8;
L_109179c6: /* 109179c6: cmp dword ptr [esp + ecx*4 + 0x54], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x54u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179ca: jne 0x109179e8 */
  if (!zf) goto L_109179e8;
L_109179cc: /* 109179cc: cmp dword ptr [esp + ecx*4 + 0x58], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x58u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179d0: jne 0x109179eb */
  if (!zf) goto L_109179eb;
L_109179d2: /* 109179d2: cmp dword ptr [esp + ecx*4 + 0x5c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x5cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179d6: jne 0x109179f0 */
  if (!zf) goto L_109179f0;
L_109179d8: /* 109179d8: cmp dword ptr [esp + ecx*4 + 0x60], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x60u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179dc: jne 0x109179f5 */
  if (!zf) goto L_109179f5;
L_109179de: /* 109179de: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179e1: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109179e4: jbe 0x109179c0 */
  if ((cf | zf)) goto L_109179c0;
L_109179e6: /* 109179e6: jmp 0x109179f8 */
  goto L_109179f8;
L_109179e8: /* 109179e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109179e9: jmp 0x109179f8 */
  goto L_109179f8;
L_109179eb: /* 109179eb: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179ee: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f0: /* 109179f0: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179f3: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f5: /* 109179f5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109179f8: /* 109179f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109179fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109179fe: jae 0x10917a06 */
  if (!cf) goto L_10917a06;
L_10917a00: /* 10917a00: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917a04: mov eax, ecx */
  eax = ecx;
L_10917a06: /* 10917a06: mov esi, 0xf */
  esi = 0xfu;
/* 10917a0b: jmp 0x10917a10 */
  goto L_10917a10;
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_10917979(void) {
  LOAD_REGS();
L_10917979: /* 10917979: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917980: /* 10917980: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10917982: inc dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + ecx*4 + 0x50u), r);
  }
/* 10917986: lea ecx, [esp + ecx*4 + 0x50] */
  ecx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 1091798a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091798d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1091798e: jne 0x10917980 */
  if (!zf) goto L_10917980;
L_10917990: /* 10917990: cmp dword ptr [esp + 0x50], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917994: jne 0x109179ae */
  if (!zf) goto L_109179ae;
L_10917996: /* 10917996: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 1091799d: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1091799f: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_109179ae: /* 109179ae: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 109179b0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 109179b4: mov ecx, 1 */
  ecx = 0x1u;
/* 109179b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_109179c0: /* 109179c0: cmp dword ptr [esp + ecx*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179c4: jne 0x109179f8 */
  if (!zf) goto L_109179f8;
L_109179c6: /* 109179c6: cmp dword ptr [esp + ecx*4 + 0x54], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x54u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179ca: jne 0x109179e8 */
  if (!zf) goto L_109179e8;
L_109179cc: /* 109179cc: cmp dword ptr [esp + ecx*4 + 0x58], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x58u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179d0: jne 0x109179eb */
  if (!zf) goto L_109179eb;
L_109179d2: /* 109179d2: cmp dword ptr [esp + ecx*4 + 0x5c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x5cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179d6: jne 0x109179f0 */
  if (!zf) goto L_109179f0;
L_109179d8: /* 109179d8: cmp dword ptr [esp + ecx*4 + 0x60], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x60u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179dc: jne 0x109179f5 */
  if (!zf) goto L_109179f5;
L_109179de: /* 109179de: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179e1: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109179e4: jbe 0x109179c0 */
  if ((cf | zf)) goto L_109179c0;
L_109179e6: /* 109179e6: jmp 0x109179f8 */
  goto L_109179f8;
L_109179e8: /* 109179e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109179e9: jmp 0x109179f8 */
  goto L_109179f8;
L_109179eb: /* 109179eb: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179ee: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f0: /* 109179f0: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179f3: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f5: /* 109179f5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109179f8: /* 109179f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109179fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109179fe: jae 0x10917a06 */
  if (!cf) goto L_10917a06;
L_10917a00: /* 10917a00: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917a04: mov eax, ecx */
  eax = ecx;
L_10917a06: /* 10917a06: mov esi, 0xf */
  esi = 0xfu;
/* 10917a0b: jmp 0x10917a10 */
  goto L_10917a10;
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_109179ae(void) {
  LOAD_REGS();
  goto L_109179ae;
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_109179ae: /* 109179ae: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 109179b0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 109179b4: mov ecx, 1 */
  ecx = 0x1u;
/* 109179b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_109179c0: /* 109179c0: cmp dword ptr [esp + ecx*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179c4: jne 0x109179f8 */
  if (!zf) goto L_109179f8;
L_109179c6: /* 109179c6: cmp dword ptr [esp + ecx*4 + 0x54], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x54u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179ca: jne 0x109179e8 */
  if (!zf) goto L_109179e8;
L_109179cc: /* 109179cc: cmp dword ptr [esp + ecx*4 + 0x58], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x58u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179d0: jne 0x109179eb */
  if (!zf) goto L_109179eb;
L_109179d2: /* 109179d2: cmp dword ptr [esp + ecx*4 + 0x5c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x5cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179d6: jne 0x109179f0 */
  if (!zf) goto L_109179f0;
L_109179d8: /* 109179d8: cmp dword ptr [esp + ecx*4 + 0x60], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x60u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109179dc: jne 0x109179f5 */
  if (!zf) goto L_109179f5;
L_109179de: /* 109179de: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179e1: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109179e4: jbe 0x109179c0 */
  if ((cf | zf)) goto L_109179c0;
L_109179e6: /* 109179e6: jmp 0x109179f8 */
  goto L_109179f8;
L_109179e8: /* 109179e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109179e9: jmp 0x109179f8 */
  goto L_109179f8;
L_109179eb: /* 109179eb: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179ee: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f0: /* 109179f0: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179f3: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f5: /* 109179f5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109179f8: /* 109179f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109179fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109179fe: jae 0x10917a06 */
  if (!cf) goto L_10917a06;
L_10917a00: /* 10917a00: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917a04: mov eax, ecx */
  eax = ecx;
L_10917a06: /* 10917a06: mov esi, 0xf */
  esi = 0xfu;
/* 10917a0b: jmp 0x10917a10 */
  goto L_10917a10;
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_109179e8(void) {
  LOAD_REGS();
  goto L_109179e8;
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_109179e8: /* 109179e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109179e9: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f8: /* 109179f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109179fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109179fe: jae 0x10917a06 */
  if (!cf) goto L_10917a06;
L_10917a00: /* 10917a00: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917a04: mov eax, ecx */
  eax = ecx;
L_10917a06: /* 10917a06: mov esi, 0xf */
  esi = 0xfu;
/* 10917a0b: jmp 0x10917a10 */
  goto L_10917a10;
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_109179eb(void) {
  LOAD_REGS();
  goto L_109179eb;
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_109179eb: /* 109179eb: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179ee: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f8: /* 109179f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109179fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109179fe: jae 0x10917a06 */
  if (!cf) goto L_10917a06;
L_10917a00: /* 10917a00: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917a04: mov eax, ecx */
  eax = ecx;
L_10917a06: /* 10917a06: mov esi, 0xf */
  esi = 0xfu;
/* 10917a0b: jmp 0x10917a10 */
  goto L_10917a10;
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_109179f0(void) {
  LOAD_REGS();
  goto L_109179f0;
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_109179f0: /* 109179f0: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179f3: jmp 0x109179f8 */
  goto L_109179f8;
L_109179f8: /* 109179f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109179fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109179fe: jae 0x10917a06 */
  if (!cf) goto L_10917a06;
L_10917a00: /* 10917a00: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917a04: mov eax, ecx */
  eax = ecx;
L_10917a06: /* 10917a06: mov esi, 0xf */
  esi = 0xfu;
/* 10917a0b: jmp 0x10917a10 */
  goto L_10917a10;
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_109179f5(void) {
  LOAD_REGS();
  goto L_109179f5;
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_109179f5: /* 109179f5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109179f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109179fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109179fe: jae 0x10917a06 */
  if (!cf) goto L_10917a06;
L_10917a00: /* 10917a00: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917a04: mov eax, ecx */
  eax = ecx;
L_10917a06: /* 10917a06: mov esi, 0xf */
  esi = 0xfu;
/* 10917a0b: jmp 0x10917a10 */
  goto L_10917a10;
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_10917a0d(void) {
  LOAD_REGS();
  goto L_10917a0d;
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_10917a0d: /* 10917a0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917a10: /* 10917a10: cmp dword ptr [esp + esi*4 + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a14: jne 0x10917a19 */
  if (!zf) goto L_10917a19;
L_10917a16: /* 10917a16: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a17: jne 0x10917a10 */
  if (!zf) goto L_10917a10;
L_10917a19: /* 10917a19: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917a1b: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10917a1f: jbe 0x10917a27 */
  if ((cf | zf)) goto L_10917a27;
L_10917a21: /* 10917a21: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10917a25: mov eax, esi */
  eax = esi;
L_10917a27: /* 10917a27: mov edx, 1 */
  edx = 0x1u;
/* 10917a2c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917a2e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a30: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10917a32: jae 0x10917a41 */
  if (!cf) goto L_10917a41;
L_10917a34: /* 10917a34: sub edx, dword ptr [esp + ecx*4 + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a38: js 0x10917a5a */
  if (sf) goto L_10917a5a;
L_10917a3a: /* 10917a3a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917a3b: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10917a3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917a3f: jb 0x10917a34 */
  if (cf) goto L_10917a34;
L_10917a41: /* 10917a41: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 10917a48: lea edi, [esp + ecx + 0x50] */
  edi = (uint32_t)(esp + ecx + 0x50u);
/* 10917a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10917a50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10917a52: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 10917a54: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 10917a58: jns 0x10917a6a */
  if (!sf) goto L_10917a6a;
L_10917a5a: /* 10917a5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917a5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917a5d: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10917a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917a63: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917a69: ret  */
  esp += 4; SPILL(); return;
L_10917a6a: /* 10917a6a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a6c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10917a6e: xor ecx, ecx */
  ecx = 0;
/* 10917a70: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a71: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 10917a78: je 0x10917a91 */
  if (zf) goto L_10917a91;
L_10917a7a: /* 10917a7a: xor edi, edi */
  edi = 0;
/* 10917a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917a80: /* 10917a80: add ecx, dword ptr [esp + edi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edi + 0x54u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10917a87: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10917a88: mov dword ptr [esp + edi + 0x94], ecx */
  W32((uint32_t)(esp + edi + 0x94u), ecx);
/* 10917a8f: jne 0x10917a80 */
  if (!zf) goto L_10917a80;
L_10917a91: /* 10917a91: mov esi, ebx */
  esi = ebx;
/* 10917a93: xor edi, edi */
  edi = 0;
L_10917a95: /* 10917a95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10917a97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10917a9a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917a9c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10917aa0: je 0x10917ac1 */
  if (zf) goto L_10917ac1;
L_10917aa2: /* 10917aa2: mov esi, dword ptr [esp + ecx*4 + 0x90] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 10917aa9: mov ebx, dword ptr [esp + 0x12c] */
  ebx = R32((uint32_t)(esp + 0x12cu));
/* 10917ab0: lea ecx, [esp + ecx*4 + 0x90] */
  ecx = (uint32_t)(esp + ecx*4 + 0x90u);
/* 10917ab7: mov dword ptr [ebx + esi*4], edi */
  W32((uint32_t)(ebx + esi*4), edi);
/* 10917aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10917abb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10917abd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_10917ac1: /* 10917ac1: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 10917ac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10917ac9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917acb: jb 0x10917a95 */
  if (cf) goto L_10917a95;
L_10917acd: /* 10917acd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917ad1: mov ecx, dword ptr [esp + ecx + 0x90] */
  ecx = R32((uint32_t)(esp + ecx + 0x90u));
/* 10917ad8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 10917adc: mov dword ptr [esp + 0x110], ecx */
  W32((uint32_t)(esp + 0x110u), ecx);
/* 10917ae3: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917aea: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10917aee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917af2: mov ebx, eax */
  ebx = eax;
/* 10917af4: xor edi, edi */
  edi = 0;
/* 10917af6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 10917af8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917afa: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917afe: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 10917b05: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 10917b0d: mov dword ptr [esp + 0xd0], edi */
  W32((uint32_t)(esp + 0xd0u), edi);
/* 10917b14: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10917b18: jg 0x10917dc5 */
  if ((!zf && sf == of)) goto L_10917dc5;
L_10917b1e: /* 10917b1e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10917b22: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 10917b25: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917b29: lea edx, [esp + ecx*4 + 0x50] */
  edx = (uint32_t)(esp + ecx*4 + 0x50u);
/* 10917b2d: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
L_10917dc5: /* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_10917d3d(void) {
  LOAD_REGS();
  goto L_10917d3d;
L_109179a1: /* 109179a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109179a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109179a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109179a4: xor eax, eax */
  eax = 0;
/* 109179a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109179a7: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109179ad: ret  */
  esp += 4; SPILL(); return;
L_10917b31: /* 10917b31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917b35: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 10917b37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917b39: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10917b3d: je 0x10917da4 */
  if (zf) goto L_10917da4;
L_10917b43: /* 10917b43: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917b47: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917b4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10917b4c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10917b50: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 10917b53: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917b55: jle 0x10917c7d */
  if ((zf || sf != of)) goto L_10917c7d;
L_10917b5b: /* 10917b5b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10917b5f: mov ecx, ebx */
  ecx = ebx;
/* 10917b61: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917b63: jmp 0x10917b70 */
  goto L_10917b70;
L_10917b65: /* 10917b65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917b69: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917b70: /* 10917b70: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10917b78: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917b79: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10917b7d: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10917b81: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917b85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917b87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917b89: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917b8b: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 10917b8f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 10917b93: jbe 0x10917b97 */
  if ((cf | zf)) goto L_10917b97;
L_10917b95: /* 10917b95: mov edx, eax */
  edx = eax;
L_10917b97: /* 10917b97: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917b9b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10917b9f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917ba1: mov eax, 1 */
  eax = 0x1u;
/* 10917ba6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917ba8: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* 10917bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bad: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917baf: /* 10917baf: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 10917bb2: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10917bb4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10917bb8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917bba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bbc: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bbe: /* 10917bbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bc1: jae 0x10917bd6 */
  if (!cf) goto L_10917bd6;
L_10917bc3: /* 10917bc3: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 10917bc6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10917bc9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10917bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bcd: jbe 0x10917bd6 */
  if ((cf | zf)) goto L_10917bd6;
L_10917bcf: /* 10917bcf: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917bd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917bd2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917bd4: jb 0x10917bc3 */
  if (cf) goto L_10917bc3;
L_10917bd6: /* 10917bd6: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917bdd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10917bdf: mov edi, 1 */
  edi = 0x1u;
/* 10917be4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10917be6: lea edx, [eax + edi] */
  edx = (uint32_t)(eax + edi);
/* 10917be9: cmp edx, 0x5a0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917bef: ja 0x10917de8 */
  if ((!cf && !zf)) goto L_10917de8;
L_10917bf5: /* 10917bf5: mov ebp, dword ptr [esp + 0x124] */
  ebp = R32((uint32_t)(esp + 0x124u));
/* 10917bfc: lea ebp, [ebp + eax*8] */
  ebp = (uint32_t)(ebp + eax*8);
/* 10917c00: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c04: lea eax, [esp + eax*4 + 0xd0] */
  eax = (uint32_t)(esp + eax*4 + 0xd0u);
/* 10917c0b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10917c0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 10917c11: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 10917c18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 10917c1a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917c20: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10917c24: je 0x10917c62 */
  if (zf) goto L_10917c62;
L_10917c26: /* 10917c26: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10917c2a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 10917c2e: mov dword ptr [esp + eax*4 + 0x90], esi */
  W32((uint32_t)(esp + eax*4 + 0x90u), esi);
/* 10917c35: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917c39: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10917c3d: mov eax, esi */
  eax = esi;
/* 10917c3f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917c41: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917c45: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 10917c48: mov esi, ebp */
  esi = ebp;
/* 10917c4a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c4c: mov byte ptr [esp + 0x35], dl */
  W8((uint32_t)(esp + 0x35u), (edx & 0xffu));
/* 10917c50: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10917c54: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 10917c57: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917c59: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 10917c5c: mov dword ptr [ecx + eax*8 + 4], esi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), esi);
/* 10917c60: jmp 0x10917c6b */
  goto L_10917c6b;
L_10917c62: /* 10917c62: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 10917c69: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_10917c6b: /* 10917c6b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10917c6f: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917c73: jg 0x10917b65 */
  if ((!zf && sf == of)) goto L_10917b65;
L_10917c79: /* 10917c79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917c7d: /* 10917c7d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10917c81: mov ecx, dword ptr [esp + 0x12c] */
  ecx = R32((uint32_t)(esp + 0x12cu));
/* 10917c88: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 10917c8a: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917c8c: mov byte ptr [esp + 0x35], al */
  W8((uint32_t)(esp + 0x35u), (eax & 0xffu));
/* 10917c90: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* 10917c97: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 10917c9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917c9e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917ca0: jb 0x10917ca9 */
  if (cf) goto L_10917ca9;
L_10917ca2: /* 10917ca2: mov byte ptr [esp + 0x34], 0xc0 */
  W8((uint32_t)(esp + 0x34u), 0xc0u);
/* 10917ca7: jmp 0x10917cf1 */
  goto L_10917cf1;
L_10917ca9: /* 10917ca9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10917cab: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 10917cb2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cb4: jae 0x10917cca */
  if (!cf) goto L_10917cca;
L_10917cb6: /* 10917cb6: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917cbc: setb cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 10917cbf: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cc1: and ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917cc4: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917cc8: jmp 0x10917cea */
  goto L_10917cea;
L_10917cca: /* 10917cca: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10917ccc: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 10917cd3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10917cd6: mov cl, byte ptr [esi + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 10917cd9: add cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10917cdc: mov byte ptr [esp + 0x34], cl */
  W8((uint32_t)(esp + 0x34u), (ecx & 0xffu));
/* 10917ce0: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 10917ce7: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
L_10917cea: /* 10917cea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917ced: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_10917cf1: /* 10917cf1: mov ecx, edx */
  ecx = edx;
/* 10917cf3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10917cf5: mov edx, 1 */
  edx = 0x1u;
/* 10917cfa: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 10917cfc: mov eax, ebp */
  eax = ebp;
/* 10917cfe: mov ecx, ebx */
  ecx = ebx;
/* 10917d00: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10917d02: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d04: jae 0x10917d2c */
  if (!cf) goto L_10917d2c;
L_10917d06: /* 10917d06: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917d0a: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 10917d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d10: /* 10917d10: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10917d14: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 10917d16: lea ebp, [edx*8] */
  ebp = (uint32_t)(edx*8);
/* 10917d1d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 10917d20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917d22: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917d24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917d26: jb 0x10917d10 */
  if (cf) goto L_10917d10;
L_10917d28: /* 10917d28: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_10917d2c: /* 10917d2c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10917d30: mov eax, 1 */
  eax = 0x1u;
/* 10917d35: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917d37: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d39: je 0x10917d48 */
  if (zf) goto L_10917d48;
L_10917d3b: /* 10917d3b: jmp 0x10917d40 */
  goto L_10917d40;
L_10917d3d: /* 10917d3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10917d40: /* 10917d40: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d42: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10917d44: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10917d46: jne 0x10917d40 */
  if (!zf) goto L_10917d40;
L_10917d48: /* 10917d48: mov ecx, ebx */
  ecx = ebx;
/* 10917d4a: mov edx, 1 */
  edx = 0x1u;
/* 10917d4f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d51: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 10917d53: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917d57: mov ecx, dword ptr [esp + eax*4 + 0x90] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 10917d5e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d5f: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d63: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10917d67: je 0x10917d90 */
  if (zf) goto L_10917d90;
L_10917d69: /* 10917d69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917d70: /* 10917d70: sub ebx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebx = r;
  }
/* 10917d74: mov ecx, ebx */
  ecx = ebx;
/* 10917d76: mov edx, 1 */
  edx = 0x1u;
/* 10917d7b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10917d7d: mov ecx, dword ptr [esp + eax*4 + 0x8c] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x8cu));
/* 10917d84: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917d85: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10917d86: and edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10917d88: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917d8a: jne 0x10917d70 */
  if (!zf) goto L_10917d70;
L_10917d8c: /* 10917d8c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10917d90: /* 10917d90: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10917d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917d9a: jne 0x10917b43 */
  if (!zf) goto L_10917b43;
L_10917da0: /* 10917da0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10917da4: /* 10917da4: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10917da9: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10917dad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917dae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917daf: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10917db3: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10917db7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10917dbb: jle 0x10917b31 */
  if ((zf || sf != of)) goto L_10917b31;
L_10917dc1: /* 10917dc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 10917dc5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917dc7: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dcd: /* 10917dcd: cmp dword ptr [esp + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917dd2: je 0x109179a1 */
  if (zf) goto L_109179a1;
L_10917dd8: /* 10917dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917ddb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10917de0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917de1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917de7: ret  */
  esp += 4; SPILL(); return;
L_10917de8: /* 10917de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917deb: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917df1: add esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917df7: ret  */
  esp += 4; SPILL(); return;
}

void f_10917e00(void) {
  LOAD_REGS();
L_10917e00: /* 10917e00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917e01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917e02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917e03: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 10917e07: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 10917e0a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10917e0c: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 10917e0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917e0f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 10917e17: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10917e1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917e1a: mov ebx, eax */
  ebx = eax;
/* 10917e1c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917e1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917e21: jne 0x10917e2c */
  if (!zf) goto L_10917e2c;
L_10917e23: /* 10917e23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917e24: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917e29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917e2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917e2b: ret  */
  esp += 4; SPILL(); return;
L_10917e2c: /* 10917e2c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10917e30: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917e34: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10917e35: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10917e39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917e3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917e3b: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 10917e3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917e40: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10917e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917e45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917e46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10917e48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10917e4a: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 10917e4c: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 10917e4e: mov eax, ebp */
  eax = ebp;
/* 10917e50: call 0x10917910 */
  esp -= 4; W32(esp, 0x10917e55u); SPILL(); f_10917910(); if (g_unwind) return; RELOAD();
/* 10917e55: mov esi, eax */
  esi = eax;
/* 10917e57: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917e5a: cmp esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917e5d: jne 0x10917e79 */
  if (!zf) goto L_10917e79;
L_10917e5f: /* 10917e5f: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 10917e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917e63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917e64: mov dword ptr [edi + 0x18], 0x1092f710 */
  W32((uint32_t)(edi + 0x18u), 0x1092f710u);
/* 10917e6b: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x10917e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917e6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917e71: mov eax, esi */
  eax = esi;
/* 10917e73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917e74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917e75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917e76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917e77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917e78: ret  */
  esp += 4; SPILL(); return;
L_10917e79: /* 10917e79: cmp esi, -5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917e7c: je 0x10917e84 */
  if (zf) goto L_10917e84;
L_10917e7e: /* 10917e7e: cmp dword ptr [ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917e82: jne 0x10917e90 */
  if (!zf) goto L_10917e90;
L_10917e84: /* 10917e84: mov dword ptr [edi + 0x18], 0x1092f738 */
  W32((uint32_t)(edi + 0x18u), 0x1092f738u);
/* 10917e8b: mov esi, 0xfffffffd */
  esi = 0xfffffffdu;
L_10917e90: /* 10917e90: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 10917e93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917e94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917e95: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x10917e98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917e9b: mov eax, esi */
  eax = esi;
/* 10917e9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917e9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917e9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917ea0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917ea1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917ea2: ret  */
  esp += 4; SPILL(); return;
}

void f_10917eb0(void) {
  LOAD_REGS();
L_10917eb0: /* 10917eb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917eb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917eb2: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 10917eb6: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 10917eb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917eba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10917ebc: push 0x120 */
  { uint32_t v = 0x120u; esp -= 4; W32(esp, v); }
/* 10917ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917ec2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 10917eca: call dword ptr [ebx + 0x20] */
  { uint32_t t = R32((uint32_t)(ebx + 0x20u)); esp -= 4; W32(esp, 0x10917ecdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917ecd: mov edi, eax */
  edi = eax;
/* 10917ecf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917ed2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917ed4: jne 0x10917edf */
  if (!zf) goto L_10917edf;
L_10917ed6: /* 10917ed6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917ed7: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10917edc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917edd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917ede: ret  */
  esp += 4; SPILL(); return;
L_10917edf: /* 10917edf: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 10917ee3: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 10917ee7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10917ee8: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10917eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917eed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917eee: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 10917ef2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917ef3: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10917ef7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917ef9: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10917efd: push 0x10922858 */
  { uint32_t v = 0x10922858u; esp -= 4; W32(esp, v); }
/* 10917f02: push 0x109227d8 */
  { uint32_t v = 0x109227d8u; esp -= 4; W32(esp, v); }
/* 10917f07: push 0x101 */
  { uint32_t v = 0x101u; esp -= 4; W32(esp, v); }
/* 10917f0c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10917f0d: call 0x10917910 */
  esp -= 4; W32(esp, 0x10917f12u); SPILL(); f_10917910(); if (g_unwind) return; RELOAD();
/* 10917f12: mov esi, eax */
  esi = eax;
/* 10917f14: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917f17: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917f19: jne 0x10917ff0 */
  if (!zf) goto L_10917ff0;
L_10917f1f: /* 10917f1f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10917f23: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917f26: je 0x10918014 */
  if (zf) goto L_10918014;
L_10917f2c: /* 10917f2c: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10917f30: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917f34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917f35: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 10917f39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917f3a: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10917f3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917f3f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10917f43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917f44: push 0x10922950 */
  { uint32_t v = 0x10922950u; esp -= 4; W32(esp, v); }
/* 10917f49: push 0x109228d8 */
  { uint32_t v = 0x109228d8u; esp -= 4; W32(esp, v); }
/* 10917f4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917f4f: lea ecx, [eax + ebp*4] */
  ecx = (uint32_t)(eax + ebp*4);
/* 10917f52: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 10917f56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917f57: call 0x10917910 */
  esp -= 4; W32(esp, 0x10917f5cu); SPILL(); f_10917910(); if (g_unwind) return; RELOAD();
/* 10917f5c: mov esi, eax */
  esi = eax;
/* 10917f5e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917f61: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917f63: jne 0x10917f89 */
  if (!zf) goto L_10917f89;
L_10917f65: /* 10917f65: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10917f69: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917f6c: jne 0x10917f76 */
  if (!zf) goto L_10917f76;
L_10917f6e: /* 10917f6e: cmp ebp, 0x101 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917f74: ja 0x10917fd1 */
  if ((!cf && !zf)) goto L_10917fd1;
L_10917f76: /* 10917f76: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 10917f79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917f7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917f7b: call dword ptr [ebx + 0x24] */
  { uint32_t t = R32((uint32_t)(ebx + 0x24u)); esp -= 4; W32(esp, 0x10917f7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917f7e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917f81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917f82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917f83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917f84: xor eax, eax */
  eax = 0;
/* 10917f86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917f87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917f88: ret  */
  esp += 4; SPILL(); return;
L_10917f89: /* 10917f89: cmp esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917f8c: jne 0x10917fa8 */
  if (!zf) goto L_10917fa8;
L_10917f8e: /* 10917f8e: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 10917f91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917f92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917f93: mov dword ptr [ebx + 0x18], 0x1092f7a0 */
  W32((uint32_t)(ebx + 0x18u), 0x1092f7a0u);
/* 10917f9a: call dword ptr [ebx + 0x24] */
  { uint32_t t = R32((uint32_t)(ebx + 0x24u)); esp -= 4; W32(esp, 0x10917f9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917f9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917fa0: mov eax, esi */
  eax = esi;
/* 10917fa2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917fa3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917fa4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917fa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917fa6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917fa7: ret  */
  esp += 4; SPILL(); return;
L_10917fa8: /* 10917fa8: cmp esi, -5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917fab: jne 0x10917fcc */
  if (!zf) goto L_10917fcc;
L_10917fad: /* 10917fad: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 10917fb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917fb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917fb2: mov dword ptr [ebx + 0x18], 0x1092f7c0 */
  W32((uint32_t)(ebx + 0x18u), 0x1092f7c0u);
/* 10917fb9: mov esi, 0xfffffffd */
  esi = 0xfffffffdu;
/* 10917fbe: call dword ptr [ebx + 0x24] */
  { uint32_t t = R32((uint32_t)(ebx + 0x24u)); esp -= 4; W32(esp, 0x10917fc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917fc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917fc4: mov eax, esi */
  eax = esi;
/* 10917fc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917fc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917fc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917fc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917fca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917fcb: ret  */
  esp += 4; SPILL(); return;
L_10917fcc: /* 10917fcc: cmp esi, -4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917fcf: je 0x10917fdd */
  if (zf) goto L_10917fdd;
L_10917fd1: /* 10917fd1: mov dword ptr [ebx + 0x18], 0x1092f7dc */
  W32((uint32_t)(ebx + 0x18u), 0x1092f7dcu);
/* 10917fd8: mov esi, 0xfffffffd */
  esi = 0xfffffffdu;
L_10917fdd: /* 10917fdd: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 10917fe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917fe2: call dword ptr [ebx + 0x24] */
  { uint32_t t = R32((uint32_t)(ebx + 0x24u)); esp -= 4; W32(esp, 0x10917fe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917fe5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917fe8: mov eax, esi */
  eax = esi;
/* 10917fea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917feb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917fec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917fed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917fee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10917fef: ret  */
  esp += 4; SPILL(); return;
L_10917ff0: /* 10917ff0: cmp esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917ff3: jne 0x1091800f */
  if (!zf) goto L_1091800f;
L_10917ff5: /* 10917ff5: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 10917ff8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917ff9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917ffa: mov dword ptr [ebx + 0x18], 0x1092f75c */
  W32((uint32_t)(ebx + 0x18u), 0x1092f75cu);
/* 10918001: call dword ptr [ebx + 0x24] */
  { uint32_t t = R32((uint32_t)(ebx + 0x24u)); esp -= 4; W32(esp, 0x10918004u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10918007: mov eax, esi */
  eax = esi;
/* 10918009: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091800a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091800b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091800c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091800d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091800e: ret  */
  esp += 4; SPILL(); return;
L_1091800f: /* 1091800f: cmp esi, -4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918012: je 0x10918020 */
  if (zf) goto L_10918020;
L_10918014: /* 10918014: mov dword ptr [ebx + 0x18], 0x1092f780 */
  W32((uint32_t)(ebx + 0x18u), 0x1092f780u);
/* 1091801b: mov esi, 0xfffffffd */
  esi = 0xfffffffdu;
L_10918020: /* 10918020: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 10918023: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10918024: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10918025: call dword ptr [ebx + 0x24] */
  { uint32_t t = R32((uint32_t)(ebx + 0x24u)); esp -= 4; W32(esp, 0x10918028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918028: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091802b: mov eax, esi */
  eax = esi;
/* 1091802d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091802e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091802f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10918030: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10918031: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10918032: ret  */
  esp += 4; SPILL(); return;
}

void f_10918040(void) {
  LOAD_REGS();
L_10918040: /* 10918040: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10918044: mov ecx, dword ptr [0x1092f800] */
  ecx = R32((uint32_t)(0x1092f800u));
/* 1091804a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 1091804e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 10918050: mov eax, dword ptr [0x1092f804] */
  eax = R32((uint32_t)(0x1092f804u));
/* 10918055: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10918059: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 1091805b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1091805f: mov dword ptr [ecx], 0x1092f808 */
  W32((uint32_t)(ecx), 0x1092f808u);
/* 10918065: mov dword ptr [edx], 0x10930808 */
  W32((uint32_t)(edx), 0x10930808u);
/* 1091806b: xor eax, eax */
  eax = 0;
/* 1091806d: ret  */
  esp += 4; SPILL(); return;
}

void f_10918070(void) {
  LOAD_REGS();
L_10918070: /* 10918070: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10918071: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10918072: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 10918076: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10918077: mov ebp, dword ptr [ebx + 0x34] */
  ebp = R32((uint32_t)(ebx + 0x34u));
/* 1091807a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091807b: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 1091807f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 10918082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10918083: mov edi, dword ptr [ebx + 0x30] */
  edi = R32((uint32_t)(ebx + 0x30u));
/* 10918086: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10918088: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1091808c: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 10918090: jbe 0x10918095 */
  if ((cf | zf)) goto L_10918095;
L_10918092: /* 10918092: mov ebp, dword ptr [ebx + 0x2c] */
  ebp = R32((uint32_t)(ebx + 0x2cu));
L_10918095: /* 10918095: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 10918098: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1091809a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091809c: jbe 0x109180a0 */
  if ((cf | zf)) goto L_109180a0;
L_1091809e: /* 1091809e: mov ebp, eax */
  ebp = eax;
L_109180a0: /* 109180a0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109180a2: je 0x109180b3 */
  if (zf) goto L_109180b3;
L_109180a4: /* 109180a4: cmp dword ptr [esp + 0x20], -5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109180a9: jne 0x109180b3 */
  if (!zf) goto L_109180b3;
L_109180ab: /* 109180ab: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
L_109180b3: /* 109180b3: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 109180b6: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109180b8: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109180ba: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 109180bd: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 109180c0: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 109180c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109180c5: je 0x109180d8 */
  if (zf) goto L_109180d8;
L_109180c7: /* 109180c7: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 109180ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109180cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109180cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109180cd: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x109180cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109180cf: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 109180d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109180d5: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
L_109180d8: /* 109180d8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109180dc: mov esi, edi */
  esi = edi;
/* 109180de: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 109180e2: mov ecx, ebp */
  ecx = ebp;
/* 109180e4: mov edx, ecx */
  edx = ecx;
/* 109180e6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109180e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 109180eb: mov ecx, edx */
  ecx = edx;
/* 109180ed: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109180f0: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 109180f2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 109180f6: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 109180f9: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109180fb: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109180fd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109180ff: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10918103: jne 0x10918184 */
  if (!zf) goto L_10918184;
L_10918105: /* 10918105: cmp dword ptr [ebx + 0x34], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x34u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918108: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 1091810b: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 1091810f: jne 0x10918114 */
  if (!zf) goto L_10918114;
L_10918111: /* 10918111: mov dword ptr [ebx + 0x34], esi */
  W32((uint32_t)(ebx + 0x34u), esi);
L_10918114: /* 10918114: mov ebp, dword ptr [ebx + 0x34] */
  ebp = R32((uint32_t)(ebx + 0x34u));
/* 10918117: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1091811b: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 1091811e: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10918120: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10918122: jbe 0x10918126 */
  if ((cf | zf)) goto L_10918126;
L_10918124: /* 10918124: mov ebp, eax */
  ebp = eax;
L_10918126: /* 10918126: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10918128: je 0x10918139 */
  if (zf) goto L_10918139;
L_1091812a: /* 1091812a: cmp dword ptr [esp + 0x20], -5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091812f: jne 0x10918139 */
  if (!zf) goto L_10918139;
L_10918131: /* 10918131: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
L_10918139: /* 10918139: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 1091813c: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1091813e: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10918140: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 10918143: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 10918146: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 10918149: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091814b: je 0x1091815e */
  if (zf) goto L_1091815e;
L_1091814d: /* 1091814d: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 10918150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10918151: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10918152: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10918153: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x10918155u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918155: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 10918158: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091815b: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
L_1091815e: /* 1091815e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10918162: mov ecx, ebp */
  ecx = ebp;
/* 10918164: mov edx, ecx */
  edx = ecx;
/* 10918166: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10918169: mov edi, eax */
  edi = eax;
/* 1091816b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 1091816d: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091816f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10918173: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10918177: mov ecx, edx */
  ecx = edx;
/* 10918179: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091817c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091817e: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10918180: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_10918184: /* 10918184: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10918188: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1091818c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091818d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091818e: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 10918191: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
/* 10918194: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10918198: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10918199: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091819a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091819b: ret  */
  esp += 4; SPILL(); return;
}

void f_109181a0(void) {
  LOAD_REGS();
L_109181a0: /* 109181a0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109181a3: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 109181a7: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 109181aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109181ab: mov ebx, dword ptr [ecx + 0x34] */
  ebx = R32((uint32_t)(ecx + 0x34u));
/* 109181ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109181af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109181b0: mov esi, dword ptr [ecx + 0x30] */
  esi = R32((uint32_t)(ecx + 0x30u));
/* 109181b3: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109181b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109181b6: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 109181ba: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 109181bd: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 109181bf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 109181c3: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 109181c6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 109181ca: jae 0x109181d5 */
  if (!cf) goto L_109181d5;
L_109181cc: /* 109181cc: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 109181ce: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 109181cf: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 109181d3: jmp 0x109181de */
  goto L_109181de;
L_109181d5: /* 109181d5: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 109181d8: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109181da: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_109181de: /* 109181de: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 109181e2: mov ecx, dword ptr [ecx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 109181e9: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 109181ed: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 109181f1: mov ecx, dword ptr [ecx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 109181f8: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 109181fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10918200: /* 10918200: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918203: jae 0x10918221 */
  if (!cf) goto L_10918221;
L_10918205: /* 10918205: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10918209: movzx esi, byte ptr [ebp] */
  esi = (uint32_t)(R8((uint32_t)(ebp)));
/* 1091820d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ecx = r;
  }
/* 1091820e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10918212: mov ecx, eax */
  ecx = eax;
/* 10918214: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10918216: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10918219: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1091821b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1091821c: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091821f: jb 0x10918205 */
  if (cf) goto L_10918205;
L_10918221: /* 10918221: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10918225: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 10918229: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 1091822b: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 1091822f: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 10918232: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918236: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 10918238: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091823a: je 0x109183d1 */
  if (zf) goto L_109183d1;
L_10918240: /* 10918240: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918244: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918246: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918249: jne 0x10918287 */
  if (!zf) goto L_10918287;
L_1091824b: /* 1091824b: jmp 0x10918250 */
  goto L_10918250;
L_10918250: /* 10918250: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918253: jne 0x10918455 */
  if (!zf) goto L_10918455;
L_10918259: /* 10918259: mov ecx, dword ptr [ebx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 10918260: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 10918263: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10918265: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10918267: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 1091826b: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 1091826e: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918272: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 10918274: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10918276: je 0x109183d1 */
  if (zf) goto L_109183d1;
L_1091827c: /* 1091827c: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918280: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918282: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918285: je 0x10918250 */
  if (zf) goto L_10918250;
L_10918287: /* 10918287: and ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 1091828a: mov ecx, dword ptr [ebx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 10918291: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10918293: add ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918296: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 10918298: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1091829c: mov ecx, ebx */
  ecx = ebx;
/* 1091829e: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 109182a0: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109182a3: jae 0x109182c1 */
  if (!cf) goto L_109182c1;
L_109182a5: /* 109182a5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109182a9: movzx esi, byte ptr [ebp] */
  esi = (uint32_t)(R8((uint32_t)(ebp)));
/* 109182ad: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ecx = r;
  }
/* 109182ae: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 109182b2: mov ecx, eax */
  ecx = eax;
/* 109182b4: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 109182b6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109182b9: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 109182bb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 109182bc: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109182bf: jb 0x109182a5 */
  if (cf) goto L_109182a5;
L_109182c1: /* 109182c1: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 109182c5: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 109182c9: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 109182cb: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 109182cf: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 109182d2: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 109182d6: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 109182d8: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 109182dc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109182de: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109182e1: jne 0x10918312 */
  if (!zf) goto L_10918312;
L_109182e3: /* 109182e3: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109182e6: jne 0x1091844c */
  if (!zf) goto L_1091844c;
L_109182ec: /* 109182ec: mov ecx, dword ptr [ebx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 109182f3: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 109182f6: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109182f8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 109182fa: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 109182fe: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 10918301: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918305: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 10918307: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918309: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1091830c: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10918310: je 0x109182e3 */
  if (zf) goto L_109182e3;
L_10918312: /* 10918312: and ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 10918315: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918317: jae 0x10918336 */
  if (!cf) goto L_10918336;
L_10918319: /* 10918319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10918320: /* 10918320: dec dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 10918324: movzx edi, byte ptr [ebp] */
  edi = (uint32_t)(R8((uint32_t)(ebp)));
/* 10918328: mov ecx, eax */
  ecx = eax;
/* 1091832a: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 1091832c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091832f: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 10918331: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10918332: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918334: jb 0x10918320 */
  if (cf) goto L_10918320;
L_10918336: /* 10918336: mov edi, dword ptr [ebx*4 + 0x10930908] */
  edi = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 1091833d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 10918340: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 10918344: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 10918346: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 10918348: mov ecx, ebx */
  ecx = ebx;
/* 1091834a: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 1091834c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10918350: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10918352: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 10918356: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 1091835a: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 1091835d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10918361: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918363: mov ebx, ecx */
  ebx = ecx;
/* 10918365: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10918367: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918369: jb 0x10918389 */
  if (cf) goto L_10918389;
L_1091836b: /* 1091836b: mov esi, ecx */
  esi = ecx;
/* 1091836d: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091836f: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 10918371: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 10918375: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 10918377: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 1091837a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091837b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1091837c: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 1091837e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091837f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10918380: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10918383: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 10918387: jmp 0x109183b6 */
  goto L_109183b6;
L_10918389: /* 10918389: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 1091838d: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091838f: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10918391: mov edi, esi */
  edi = esi;
/* 10918393: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10918397: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 1091839a: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091839c: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091839e: jbe 0x109183b6 */
  if ((cf | zf)) goto L_109183b6;
L_109183a0: /* 109183a0: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 109183a2: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
L_109183a6: /* 109183a6: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 109183a8: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 109183aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109183ab: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109183ac: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 109183ad: jne 0x109183a6 */
  if (!zf) goto L_109183a6;
L_109183af: /* 109183af: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 109183b3: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
L_109183b6: /* 109183b6: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 109183b8: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 109183bc: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 109183be: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109183bf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109183c0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 109183c1: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 109183c5: jne 0x109183b6 */
  if (!zf) goto L_109183b6;
L_109183c7: /* 109183c7: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 109183cb: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109183cf: jmp 0x109183ea */
  goto L_109183ea;
L_109183d1: /* 109183d1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109183d3: mov cl, byte ptr [esi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 109183d6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 109183da: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 109183dc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 109183e0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109183e1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109183e2: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 109183e6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_109183ea: /* 109183ea: cmp dword ptr [esp + 0x18], 0x102 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109183f2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 109183f6: jb 0x10918401 */
  if (cf) goto L_10918401;
L_109183f8: /* 109183f8: cmp ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109183fb: jae 0x10918200 */
  if (!cf) goto L_10918200;
L_10918401: /* 10918401: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10918404: mov esi, eax */
  esi = eax;
/* 10918406: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10918408: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 1091840b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091840d: jae 0x10918411 */
  if (!cf) goto L_10918411;
L_1091840f: /* 1091840f: mov ecx, esi */
  ecx = esi;
L_10918411: /* 10918411: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10918415: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 10918418: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 1091841f: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10918421: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918423: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 10918426: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 10918428: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091842a: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1091842d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 10918430: mov eax, ebp */
  eax = ebp;
/* 10918432: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918434: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918436: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10918439: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1091843d: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 1091843f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10918440: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 10918443: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10918444: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10918445: xor eax, eax */
  eax = 0;
/* 10918447: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10918448: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091844b: ret  */
  esp += 4; SPILL(); return;
L_1091844c: /* 1091844c: mov dword ptr [edi + 0x18], 0x1093094c */
  W32((uint32_t)(edi + 0x18u), 0x1093094cu);
/* 10918453: jmp 0x109184b3 */
  goto L_109184b3;
L_10918455: /* 10918455: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918458: je 0x109184ac */
  if (zf) goto L_109184ac;
L_1091845a: /* 1091845a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1091845d: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 10918461: mov esi, eax */
  esi = eax;
/* 10918463: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10918465: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 10918468: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091846a: jae 0x1091846e */
  if (!cf) goto L_1091846e;
L_1091846c: /* 1091846c: mov ecx, esi */
  ecx = esi;
L_1091846e: /* 1091846e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10918472: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 10918475: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 1091847c: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1091847e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918480: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 10918483: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 10918485: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918487: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1091848a: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1091848d: mov eax, ebp */
  eax = ebp;
/* 1091848f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918491: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918493: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10918496: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1091849a: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 1091849c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091849d: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 109184a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109184a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109184a2: mov eax, 1 */
  eax = 0x1u;
/* 109184a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109184a8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109184ab: ret  */
  esp += 4; SPILL(); return;
L_109184ac: /* 109184ac: mov dword ptr [edi + 0x18], 0x10930964 */
  W32((uint32_t)(edi + 0x18u), 0x10930964u);
L_109184b3: /* 109184b3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 109184b6: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 109184ba: mov esi, eax */
  esi = eax;
/* 109184bc: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 109184bf: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109184c1: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109184c3: jae 0x109184c7 */
  if (!cf) goto L_109184c7;
L_109184c5: /* 109184c5: mov ecx, esi */
  ecx = esi;
L_109184c7: /* 109184c7: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 109184cb: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 109184ce: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 109184d5: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109184d7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109184d9: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 109184dc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 109184de: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109184e0: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 109184e3: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 109184e6: mov eax, ebp */
  eax = ebp;
/* 109184e8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109184ea: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109184ec: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 109184ef: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 109184f3: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 109184f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109184f6: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 109184f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109184fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109184fb: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10918500: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10918501: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10918504: ret  */
  esp += 4; SPILL(); return;
}

void f_1091824d(void) {
  LOAD_REGS();
  goto L_1091824d;
L_10918200: /* 10918200: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918203: jae 0x10918221 */
  if (!cf) goto L_10918221;
L_10918205: /* 10918205: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10918209: movzx esi, byte ptr [ebp] */
  esi = (uint32_t)(R8((uint32_t)(ebp)));
/* 1091820d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ecx = r;
  }
/* 1091820e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10918212: mov ecx, eax */
  ecx = eax;
/* 10918214: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10918216: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10918219: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1091821b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1091821c: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091821f: jb 0x10918205 */
  if (cf) goto L_10918205;
L_10918221: /* 10918221: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10918225: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 10918229: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 1091822b: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 1091822f: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 10918232: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918236: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 10918238: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091823a: je 0x109183d1 */
  if (zf) goto L_109183d1;
L_10918240: /* 10918240: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918244: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918246: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918249: jne 0x10918287 */
  if (!zf) goto L_10918287;
L_1091824b: /* 1091824b: jmp 0x10918250 */
  goto L_10918250;
L_1091824d: /* 1091824d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10918250: /* 10918250: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918253: jne 0x10918455 */
  if (!zf) goto L_10918455;
L_10918259: /* 10918259: mov ecx, dword ptr [ebx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 10918260: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 10918263: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10918265: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10918267: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 1091826b: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 1091826e: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918272: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 10918274: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10918276: je 0x109183d1 */
  if (zf) goto L_109183d1;
L_1091827c: /* 1091827c: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918280: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918282: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918285: je 0x10918250 */
  if (zf) goto L_10918250;
L_10918287: /* 10918287: and ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 1091828a: mov ecx, dword ptr [ebx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 10918291: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10918293: add ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918296: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 10918298: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1091829c: mov ecx, ebx */
  ecx = ebx;
/* 1091829e: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 109182a0: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109182a3: jae 0x109182c1 */
  if (!cf) goto L_109182c1;
L_109182a5: /* 109182a5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109182a9: movzx esi, byte ptr [ebp] */
  esi = (uint32_t)(R8((uint32_t)(ebp)));
/* 109182ad: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ecx = r;
  }
/* 109182ae: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 109182b2: mov ecx, eax */
  ecx = eax;
/* 109182b4: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 109182b6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109182b9: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 109182bb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 109182bc: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109182bf: jb 0x109182a5 */
  if (cf) goto L_109182a5;
L_109182c1: /* 109182c1: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 109182c5: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 109182c9: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 109182cb: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 109182cf: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 109182d2: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 109182d6: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 109182d8: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 109182dc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109182de: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109182e1: jne 0x10918312 */
  if (!zf) goto L_10918312;
L_109182e3: /* 109182e3: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109182e6: jne 0x1091844c */
  if (!zf) goto L_1091844c;
L_109182ec: /* 109182ec: mov ecx, dword ptr [ebx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 109182f3: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 109182f6: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109182f8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 109182fa: movzx ebx, byte ptr [esi + ecx*8] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx*8)));
/* 109182fe: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 10918301: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10918305: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 10918307: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918309: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1091830c: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10918310: je 0x109182e3 */
  if (zf) goto L_109182e3;
L_10918312: /* 10918312: and ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 10918315: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918317: jae 0x10918336 */
  if (!cf) goto L_10918336;
L_10918319: /* 10918319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10918320: /* 10918320: dec dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 10918324: movzx edi, byte ptr [ebp] */
  edi = (uint32_t)(R8((uint32_t)(ebp)));
/* 10918328: mov ecx, eax */
  ecx = eax;
/* 1091832a: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 1091832c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091832f: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 10918331: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10918332: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918334: jb 0x10918320 */
  if (cf) goto L_10918320;
L_10918336: /* 10918336: mov edi, dword ptr [ebx*4 + 0x10930908] */
  edi = R32((uint32_t)(ebx*4 + 0x10930908u));
/* 1091833d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 10918340: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 10918344: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 10918346: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 10918348: mov ecx, ebx */
  ecx = ebx;
/* 1091834a: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 1091834c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10918350: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10918352: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 10918356: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 1091835a: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 1091835d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10918361: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918363: mov ebx, ecx */
  ebx = ecx;
/* 10918365: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10918367: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918369: jb 0x10918389 */
  if (cf) goto L_10918389;
L_1091836b: /* 1091836b: mov esi, ecx */
  esi = ecx;
/* 1091836d: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091836f: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 10918371: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 10918375: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 10918377: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 1091837a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091837b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1091837c: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 1091837e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091837f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10918380: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10918383: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 10918387: jmp 0x109183b6 */
  goto L_109183b6;
L_10918389: /* 10918389: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 1091838d: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091838f: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10918391: mov edi, esi */
  edi = esi;
/* 10918393: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10918397: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 1091839a: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091839c: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091839e: jbe 0x109183b6 */
  if ((cf | zf)) goto L_109183b6;
L_109183a0: /* 109183a0: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 109183a2: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
L_109183a6: /* 109183a6: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 109183a8: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 109183aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109183ab: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109183ac: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 109183ad: jne 0x109183a6 */
  if (!zf) goto L_109183a6;
L_109183af: /* 109183af: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 109183b3: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
L_109183b6: /* 109183b6: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 109183b8: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 109183bc: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 109183be: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109183bf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109183c0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 109183c1: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 109183c5: jne 0x109183b6 */
  if (!zf) goto L_109183b6;
L_109183c7: /* 109183c7: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 109183cb: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109183cf: jmp 0x109183ea */
  goto L_109183ea;
L_109183d1: /* 109183d1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109183d3: mov cl, byte ptr [esi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 109183d6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 109183da: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 109183dc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 109183e0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109183e1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109183e2: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 109183e6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_109183ea: /* 109183ea: cmp dword ptr [esp + 0x18], 0x102 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109183f2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 109183f6: jb 0x10918401 */
  if (cf) goto L_10918401;
L_109183f8: /* 109183f8: cmp ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109183fb: jae 0x10918200 */
  if (!cf) goto L_10918200;
L_10918401: /* 10918401: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10918404: mov esi, eax */
  esi = eax;
/* 10918406: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10918408: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 1091840b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091840d: jae 0x10918411 */
  if (!cf) goto L_10918411;
L_1091840f: /* 1091840f: mov ecx, esi */
  ecx = esi;
L_10918411: /* 10918411: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10918415: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 10918418: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 1091841f: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10918421: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918423: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 10918426: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 10918428: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091842a: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1091842d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 10918430: mov eax, ebp */
  eax = ebp;
/* 10918432: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918434: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918436: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10918439: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1091843d: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 1091843f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10918440: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 10918443: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10918444: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10918445: xor eax, eax */
  eax = 0;
/* 10918447: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10918448: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091844b: ret  */
  esp += 4; SPILL(); return;
L_1091844c: /* 1091844c: mov dword ptr [edi + 0x18], 0x1093094c */
  W32((uint32_t)(edi + 0x18u), 0x1093094cu);
/* 10918453: jmp 0x109184b3 */
  goto L_109184b3;
L_10918455: /* 10918455: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918458: je 0x109184ac */
  if (zf) goto L_109184ac;
L_1091845a: /* 1091845a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1091845d: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 10918461: mov esi, eax */
  esi = eax;
/* 10918463: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10918465: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 10918468: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091846a: jae 0x1091846e */
  if (!cf) goto L_1091846e;
L_1091846c: /* 1091846c: mov ecx, esi */
  ecx = esi;
L_1091846e: /* 1091846e: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10918472: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 10918475: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 1091847c: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1091847e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918480: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 10918483: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 10918485: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918487: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1091848a: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1091848d: mov eax, ebp */
  eax = ebp;
/* 1091848f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10918491: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918493: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10918496: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1091849a: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 1091849c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091849d: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 109184a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109184a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109184a2: mov eax, 1 */
  eax = 0x1u;
/* 109184a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109184a8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109184ab: ret  */
  esp += 4; SPILL(); return;
L_109184ac: /* 109184ac: mov dword ptr [edi + 0x18], 0x10930964 */
  W32((uint32_t)(edi + 0x18u), 0x10930964u);
L_109184b3: /* 109184b3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 109184b6: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 109184ba: mov esi, eax */
  esi = eax;
/* 109184bc: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 109184bf: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109184c1: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109184c3: jae 0x109184c7 */
  if (!cf) goto L_109184c7;
L_109184c5: /* 109184c5: mov ecx, esi */
  ecx = esi;
L_109184c7: /* 109184c7: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 109184cb: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 109184ce: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 109184d5: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109184d7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109184d9: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 109184dc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 109184de: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109184e0: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 109184e3: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 109184e6: mov eax, ebp */
  eax = ebp;
/* 109184e8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109184ea: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109184ec: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 109184ef: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 109184f3: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 109184f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109184f6: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 109184f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109184fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109184fb: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10918500: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10918501: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10918504: ret  */
  esp += 4; SPILL(); return;
}

void f_10918510(void) {
  LOAD_REGS();
L_10918510: /* 10918510: jmp dword ptr [0x1095a4b0] */
  SPILL(); call_ind(R32(0x1095a4b0u)); return; /* comdlg32!GetSaveFileNameA */
}

void f_10918516(void) {
  LOAD_REGS();
L_10918516: /* 10918516: jmp dword ptr [0x1095a4e0] */
  SPILL(); call_ind(R32(0x1095a4e0u)); return; /* d3d8!Direct3DCreate8 */
}

void f_1091851c(void) {
  LOAD_REGS();
L_1091851c: /* 1091851c: jmp dword ptr [0x10959e5c] */
  SPILL(); call_ind(R32(0x10959e5cu)); return; /* DDRAW!DirectDrawCreate */
}

void f_10918522(void) {
  LOAD_REGS();
L_10918522: /* 10918522: jmp dword ptr [0x10959f1c] */
  SPILL(); call_ind(R32(0x10959f1cu)); return; /* KERNEL32!GetModuleFileNameW */
}

void f_10918528(void) {
  LOAD_REGS();
L_10918528: /* 10918528: jmp dword ptr [0x10959f20] */
  SPILL(); call_ind(R32(0x10959f20u)); return; /* KERNEL32!GetWindowsDirectoryW */
}

void f_1091852e(void) {
  LOAD_REGS();
L_1091852e: /* 1091852e: jmp dword ptr [0x10959f24] */
  SPILL(); call_ind(R32(0x10959f24u)); return; /* KERNEL32!GetSystemDirectoryW */
}

void f_10918534(void) {
  LOAD_REGS();
L_10918534: /* 10918534: jmp dword ptr [0x10959f28] */
  SPILL(); call_ind(R32(0x10959f28u)); return; /* KERNEL32!GetModuleFileNameA */
}

void f_1091853a(void) {
  LOAD_REGS();
L_1091853a: /* 1091853a: jmp dword ptr [0x10959f2c] */
  SPILL(); call_ind(R32(0x10959f2cu)); return; /* KERNEL32!GetWindowsDirectoryA */
}

void f_10918540(void) {
  LOAD_REGS();
L_10918540: /* 10918540: jmp dword ptr [0x10959f30] */
  SPILL(); call_ind(R32(0x10959f30u)); return; /* KERNEL32!GetSystemDirectoryA */
}

void f_10918546(void) {
  LOAD_REGS();
L_10918546: /* 10918546: jmp dword ptr [0x10959f34] */
  SPILL(); call_ind(R32(0x10959f34u)); return; /* KERNEL32!GetSystemInfo */
}

void f_1091854c(void) {
  LOAD_REGS();
L_1091854c: /* 1091854c: jmp dword ptr [0x10959f38] */
  SPILL(); call_ind(R32(0x10959f38u)); return; /* KERNEL32!GetLastError */
}

void f_10918552(void) {
  LOAD_REGS();
L_10918552: /* 10918552: jmp dword ptr [0x10959f3c] */
  SPILL(); call_ind(R32(0x10959f3cu)); return; /* KERNEL32!VirtualAlloc */
}

void f_10918558(void) {
  LOAD_REGS();
L_10918558: /* 10918558: jmp dword ptr [0x10959f40] */
  SPILL(); call_ind(R32(0x10959f40u)); return; /* KERNEL32!VirtualFree */
}

void f_1091855e(void) {
  LOAD_REGS();
L_1091855e: /* 1091855e: jmp dword ptr [0x10959f44] */
  SPILL(); call_ind(R32(0x10959f44u)); return; /* KERNEL32!GetFileSize */
}

void f_10918564(void) {
  LOAD_REGS();
L_10918564: /* 10918564: jmp dword ptr [0x10959f48] */
  SPILL(); call_ind(R32(0x10959f48u)); return; /* KERNEL32!CreateFileA */
}

void f_1091856a(void) {
  LOAD_REGS();
L_1091856a: /* 1091856a: jmp dword ptr [0x10959f4c] */
  SPILL(); call_ind(R32(0x10959f4cu)); return; /* KERNEL32!CreateFileW */
}

void f_10918570(void) {
  LOAD_REGS();
L_10918570: /* 10918570: jmp dword ptr [0x10959f50] */
  SPILL(); call_ind(R32(0x10959f50u)); return; /* KERNEL32!SetFilePointer */
}

void f_10918576(void) {
  LOAD_REGS();
L_10918576: /* 10918576: jmp dword ptr [0x10959f54] */
  SPILL(); call_ind(R32(0x10959f54u)); return; /* KERNEL32!CloseHandle */
}

void f_1091857c(void) {
  LOAD_REGS();
L_1091857c: /* 1091857c: jmp dword ptr [0x10959f58] */
  SPILL(); call_ind(R32(0x10959f58u)); return; /* KERNEL32!SetFileAttributesA */
}

void f_10918582(void) {
  LOAD_REGS();
L_10918582: /* 10918582: jmp dword ptr [0x10959f5c] */
  SPILL(); call_ind(R32(0x10959f5cu)); return; /* KERNEL32!SetFileAttributesW */
}

void f_10918588(void) {
  LOAD_REGS();
L_10918588: /* 10918588: jmp dword ptr [0x10959f60] */
  SPILL(); call_ind(R32(0x10959f60u)); return; /* KERNEL32!WriteFile */
}

void f_1091858e(void) {
  LOAD_REGS();
L_1091858e: /* 1091858e: jmp dword ptr [0x10959f64] */
  SPILL(); call_ind(R32(0x10959f64u)); return; /* KERNEL32!DeleteFileA */
}

void f_10918594(void) {
  LOAD_REGS();
L_10918594: /* 10918594: jmp dword ptr [0x10959f68] */
  SPILL(); call_ind(R32(0x10959f68u)); return; /* KERNEL32!DeleteFileW */
}

void f_1091859a(void) {
  LOAD_REGS();
L_1091859a: /* 1091859a: jmp dword ptr [0x10959f6c] */
  SPILL(); call_ind(R32(0x10959f6cu)); return; /* KERNEL32!MoveFileA */
}

void f_109185a0(void) {
  LOAD_REGS();
L_109185a0: /* 109185a0: jmp dword ptr [0x10959f70] */
  SPILL(); call_ind(R32(0x10959f70u)); return; /* KERNEL32!MoveFileW */
}

void f_109185a6(void) {
  LOAD_REGS();
L_109185a6: /* 109185a6: jmp dword ptr [0x10959fd4] */
  SPILL(); call_ind(R32(0x10959fd4u)); return; /* KERNEL32!GetFileAttributesExW */
}

void f_109185ac(void) {
  LOAD_REGS();
L_109185ac: /* 109185ac: jmp dword ptr [0x10959fd0] */
  SPILL(); call_ind(R32(0x10959fd0u)); return; /* KERNEL32!SetCurrentDirectoryA */
}

void f_109185b2(void) {
  LOAD_REGS();
L_109185b2: /* 109185b2: jmp dword ptr [0x10959fcc] */
  SPILL(); call_ind(R32(0x10959fccu)); return; /* KERNEL32!SetCurrentDirectoryW */
}

void f_109185b8(void) {
  LOAD_REGS();
L_109185b8: /* 109185b8: jmp dword ptr [0x10959fc8] */
  SPILL(); call_ind(R32(0x10959fc8u)); return; /* KERNEL32!GetCurrentDirectoryA */
}

void f_109185be(void) {
  LOAD_REGS();
L_109185be: /* 109185be: jmp dword ptr [0x10959fc4] */
  SPILL(); call_ind(R32(0x10959fc4u)); return; /* KERNEL32!GetCurrentDirectoryW */
}

void f_109185c4(void) {
  LOAD_REGS();
L_109185c4: /* 109185c4: jmp dword ptr [0x10959fc0] */
  SPILL(); call_ind(R32(0x10959fc0u)); return; /* KERNEL32!ReadFile */
}

void f_109185ca(void) {
  LOAD_REGS();
L_109185ca: /* 109185ca: jmp dword ptr [0x10959fbc] */
  SPILL(); call_ind(R32(0x10959fbcu)); return; /* KERNEL32!CopyFileA */
}

void f_109185d0(void) {
  LOAD_REGS();
L_109185d0: /* 109185d0: jmp dword ptr [0x10959fb8] */
  SPILL(); call_ind(R32(0x10959fb8u)); return; /* KERNEL32!CopyFileW */
}

void f_109185d6(void) {
  LOAD_REGS();
L_109185d6: /* 109185d6: jmp dword ptr [0x10959fb4] */
  SPILL(); call_ind(R32(0x10959fb4u)); return; /* KERNEL32!CreateDirectoryA */
}

void f_109185dc(void) {
  LOAD_REGS();
L_109185dc: /* 109185dc: jmp dword ptr [0x10959fb0] */
  SPILL(); call_ind(R32(0x10959fb0u)); return; /* KERNEL32!CreateDirectoryW */
}

void f_109185e2(void) {
  LOAD_REGS();
L_109185e2: /* 109185e2: jmp dword ptr [0x10959fac] */
  SPILL(); call_ind(R32(0x10959facu)); return; /* KERNEL32!GlobalMemoryStatus */
}

void f_109185e8(void) {
  LOAD_REGS();
L_109185e8: /* 109185e8: jmp dword ptr [0x10959fa8] */
  SPILL(); call_ind(R32(0x10959fa8u)); return; /* KERNEL32!CreateMutexA */
}

void f_109185ee(void) {
  LOAD_REGS();
L_109185ee: /* 109185ee: jmp dword ptr [0x10959fa4] */
  SPILL(); call_ind(R32(0x10959fa4u)); return; /* KERNEL32!CreateMutexW */
}

void f_109185f4(void) {
  LOAD_REGS();
L_109185f4: /* 109185f4: jmp dword ptr [0x10959fa0] */
  SPILL(); call_ind(R32(0x10959fa0u)); return; /* KERNEL32!GetCurrentThread */
}

void f_109185fa(void) {
  LOAD_REGS();
L_109185fa: /* 109185fa: jmp dword ptr [0x10959f9c] */
  SPILL(); call_ind(R32(0x10959f9cu)); return; /* KERNEL32!GetCurrentThreadId */
}

void f_10918600(void) {
  LOAD_REGS();
L_10918600: /* 10918600: jmp dword ptr [0x10959f98] */
  SPILL(); call_ind(R32(0x10959f98u)); return; /* KERNEL32!Sleep */
}

void f_10918606(void) {
  LOAD_REGS();
L_10918606: /* 10918606: jmp dword ptr [0x10959f94] */
  SPILL(); call_ind(R32(0x10959f94u)); return; /* KERNEL32!SetThreadPriority */
}

void f_1091860c(void) {
  LOAD_REGS();
L_1091860c: /* 1091860c: jmp dword ptr [0x10959f90] */
  SPILL(); call_ind(R32(0x10959f90u)); return; /* KERNEL32!RemoveDirectoryA */
}

void f_10918612(void) {
  LOAD_REGS();
L_10918612: /* 10918612: jmp dword ptr [0x10959f8c] */
  SPILL(); call_ind(R32(0x10959f8cu)); return; /* KERNEL32!RemoveDirectoryW */
}

void f_10918618(void) {
  LOAD_REGS();
L_10918618: /* 10918618: jmp dword ptr [0x10959f88] */
  SPILL(); call_ind(R32(0x10959f88u)); return; /* KERNEL32!FindClose */
}

void f_1091861e(void) {
  LOAD_REGS();
L_1091861e: /* 1091861e: jmp dword ptr [0x10959f84] */
  SPILL(); call_ind(R32(0x10959f84u)); return; /* KERNEL32!FindNextFileA */
}

void f_10918624(void) {
  LOAD_REGS();
L_10918624: /* 10918624: jmp dword ptr [0x10959f80] */
  SPILL(); call_ind(R32(0x10959f80u)); return; /* KERNEL32!FindFirstFileA */
}

void f_1091862a(void) {
  LOAD_REGS();
L_1091862a: /* 1091862a: jmp dword ptr [0x10959f7c] */
  SPILL(); call_ind(R32(0x10959f7cu)); return; /* KERNEL32!FindNextFileW */
}

void f_10918630(void) {
  LOAD_REGS();
L_10918630: /* 10918630: jmp dword ptr [0x10959f78] */
  SPILL(); call_ind(R32(0x10959f78u)); return; /* KERNEL32!FindFirstFileW */
}

void f_10918636(void) {
  LOAD_REGS();
L_10918636: /* 10918636: jmp dword ptr [0x10959f74] */
  SPILL(); call_ind(R32(0x10959f74u)); return; /* KERNEL32!GetCommandLineW */
}

void f_1091863c(void) {
  LOAD_REGS();
L_1091863c: /* 1091863c: jmp dword ptr [0x1095a178] */
  SPILL(); call_ind(R32(0x1095a178u)); return; /* USER32!UpdateWindow */
}

void f_10918642(void) {
  LOAD_REGS();
L_10918642: /* 10918642: jmp dword ptr [0x1095a174] */
  SPILL(); call_ind(R32(0x1095a174u)); return; /* USER32!SendMessageA */
}

void f_10918648(void) {
  LOAD_REGS();
L_10918648: /* 10918648: jmp dword ptr [0x1095a170] */
  SPILL(); call_ind(R32(0x1095a170u)); return; /* USER32!SendMessageW */
}

void f_1091864e(void) {
  LOAD_REGS();
L_1091864e: /* 1091864e: jmp dword ptr [0x1095a16c] */
  SPILL(); call_ind(R32(0x1095a16cu)); return; /* USER32!SetWindowPos */
}

void f_10918654(void) {
  LOAD_REGS();
L_10918654: /* 10918654: jmp dword ptr [0x1095a168] */
  SPILL(); call_ind(R32(0x1095a168u)); return; /* USER32!GetSystemMetrics */
}

void f_1091865a(void) {
  LOAD_REGS();
L_1091865a: /* 1091865a: jmp dword ptr [0x1095a164] */
  SPILL(); call_ind(R32(0x1095a164u)); return; /* USER32!GetDlgItem */
}

void f_10918660(void) {
  LOAD_REGS();
L_10918660: /* 10918660: jmp dword ptr [0x1095a160] */
  SPILL(); call_ind(R32(0x1095a160u)); return; /* USER32!CreateDialogParamA */
}

void f_10918666(void) {
  LOAD_REGS();
L_10918666: /* 10918666: jmp dword ptr [0x1095a15c] */
  SPILL(); call_ind(R32(0x1095a15cu)); return; /* USER32!CreateDialogParamW */
}

void f_1091866c(void) {
  LOAD_REGS();
L_1091866c: /* 1091866c: jmp dword ptr [0x1095a158] */
  SPILL(); call_ind(R32(0x1095a158u)); return; /* USER32!DestroyWindow */
}

void f_10918672(void) {
  LOAD_REGS();
L_10918672: /* 10918672: jmp dword ptr [0x1095a154] */
  SPILL(); call_ind(R32(0x1095a154u)); return; /* USER32!SetForegroundWindow */
}

void f_10918678(void) {
  LOAD_REGS();
L_10918678: /* 10918678: jmp dword ptr [0x1095a150] */
  SPILL(); call_ind(R32(0x1095a150u)); return; /* USER32!LoadIconA */
}

void f_1091867e(void) {
  LOAD_REGS();
L_1091867e: /* 1091867e: jmp dword ptr [0x1095a14c] */
  SPILL(); call_ind(R32(0x1095a14cu)); return; /* USER32!LoadIconW */
}

void f_10918684(void) {
  LOAD_REGS();
L_10918684: /* 10918684: jmp dword ptr [0x1095a148] */
  SPILL(); call_ind(R32(0x1095a148u)); return; /* USER32!MessageBoxW */
}

void f_1091868a(void) {
  LOAD_REGS();
L_1091868a: /* 1091868a: jmp dword ptr [0x1095a144] */
  SPILL(); call_ind(R32(0x1095a144u)); return; /* USER32!DispatchMessageW */
}

void f_10918690(void) {
  LOAD_REGS();
L_10918690: /* 10918690: jmp dword ptr [0x1095a140] */
  SPILL(); call_ind(R32(0x1095a140u)); return; /* USER32!TranslateMessage */
}

void f_10918696(void) {
  LOAD_REGS();
L_10918696: /* 10918696: jmp dword ptr [0x1095a13c] */
  SPILL(); call_ind(R32(0x1095a13cu)); return; /* USER32!PeekMessageW */
}

void f_1091869c(void) {
  LOAD_REGS();
L_1091869c: /* 1091869c: jmp dword ptr [0x1095a138] */
  SPILL(); call_ind(R32(0x1095a138u)); return; /* USER32!ShowWindow */
}

void f_109186a2(void) {
  LOAD_REGS();
L_109186a2: /* 109186a2: jmp dword ptr [0x1095a134] */
  SPILL(); call_ind(R32(0x1095a134u)); return; /* USER32!SetFocus */
}

void f_109186a8(void) {
  LOAD_REGS();
L_109186a8: /* 109186a8: jmp dword ptr [0x1095a130] */
  SPILL(); call_ind(R32(0x1095a130u)); return; /* USER32!GetWindowThreadProcessId */
}

void f_109186ae(void) {
  LOAD_REGS();
L_109186ae: /* 109186ae: jmp dword ptr [0x1095a12c] */
  SPILL(); call_ind(R32(0x1095a12cu)); return; /* USER32!GetForegroundWindow */
}

void f_109186b4(void) {
  LOAD_REGS();
L_109186b4: /* 109186b4: jmp dword ptr [0x1095a128] */
  SPILL(); call_ind(R32(0x1095a128u)); return; /* USER32!DispatchMessageA */
}

void f_109186ba(void) {
  LOAD_REGS();
L_109186ba: /* 109186ba: jmp dword ptr [0x1095a124] */
  SPILL(); call_ind(R32(0x1095a124u)); return; /* USER32!PeekMessageA */
}

void f_109186c0(void) {
  LOAD_REGS();
L_109186c0: /* 109186c0: jmp dword ptr [0x1095a120] */
  SPILL(); call_ind(R32(0x1095a120u)); return; /* USER32!RemovePropA */
}

void f_109186c6(void) {
  LOAD_REGS();
L_109186c6: /* 109186c6: jmp dword ptr [0x1095a11c] */
  SPILL(); call_ind(R32(0x1095a11cu)); return; /* USER32!RemovePropW */
}

void f_109186cc(void) {
  LOAD_REGS();
L_109186cc: /* 109186cc: jmp dword ptr [0x1095a118] */
  SPILL(); call_ind(R32(0x1095a118u)); return; /* USER32!SetPropA */
}

void f_109186d2(void) {
  LOAD_REGS();
L_109186d2: /* 109186d2: jmp dword ptr [0x1095a114] */
  SPILL(); call_ind(R32(0x1095a114u)); return; /* USER32!SetPropW */
}

void f_109186d8(void) {
  LOAD_REGS();
L_109186d8: /* 109186d8: jmp dword ptr [0x1095a110] */
  SPILL(); call_ind(R32(0x1095a110u)); return; /* USER32!SendMessageTimeoutW */
}

void f_109186de(void) {
  LOAD_REGS();
L_109186de: /* 109186de: jmp dword ptr [0x1095a10c] */
  SPILL(); call_ind(R32(0x1095a10cu)); return; /* USER32!GetPropA */
}

void f_109186e4(void) {
  LOAD_REGS();
L_109186e4: /* 109186e4: jmp dword ptr [0x1095a108] */
  SPILL(); call_ind(R32(0x1095a108u)); return; /* USER32!GetPropW */
}

void f_109186ea(void) {
  LOAD_REGS();
L_109186ea: /* 109186ea: jmp dword ptr [0x1095a104] */
  SPILL(); call_ind(R32(0x1095a104u)); return; /* USER32!FindWindowExA */
}

void f_109186f0(void) {
  LOAD_REGS();
L_109186f0: /* 109186f0: jmp dword ptr [0x1095a17c] */
  SPILL(); call_ind(R32(0x1095a17cu)); return; /* USER32!FindWindowExW */
}

void f_109186f6(void) {
  LOAD_REGS();
L_109186f6: /* 109186f6: jmp dword ptr [0x1095a0d0] */
  SPILL(); call_ind(R32(0x1095a0d0u)); return; /* SHELL32!ShellExecuteA */
}

void f_109186fc(void) {
  LOAD_REGS();
L_109186fc: /* 109186fc: jmp dword ptr [0x1095a0d4] */
  SPILL(); call_ind(R32(0x1095a0d4u)); return; /* SHELL32!ShellExecuteW */
}

void f_10918702(void) {
  LOAD_REGS();
L_10918702: /* 10918702: mov eax, ecx */
  eax = ecx;
/* 10918704: mov dword ptr [eax], 0x10924c8c */
  W32((uint32_t)(eax), 0x10924c8cu);
/* 1091870a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1091870d(void) {
  LOAD_REGS();
L_1091870d: /* 1091870d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091870e: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 10918712: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918715: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10918716: mov esi, ecx */
  esi = ecx;
/* 10918718: je 0x1091873e */
  if (zf) goto L_1091873e;
L_1091871a: /* 1091871a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091871b: push 0x10918b12 */
  { uint32_t v = 0x10918b12u; esp -= 4; W32(esp, v); }
/* 10918720: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 10918723: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 10918725: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 10918727: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10918728: call 0x10918ab2 */
  esp -= 4; W32(esp, 0x1091872du); SPILL(); f_10918ab2(); if (g_unwind) return; RELOAD();
/* 1091872d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918730: je 0x10918739 */
  if (zf) goto L_10918739;
L_10918732: /* 10918732: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10918733: call 0x1090119f */
  esp -= 4; W32(esp, 0x10918738u); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 10918738: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_10918739: /* 10918739: mov eax, edi */
  eax = edi;
/* 1091873b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091873c: jmp 0x10918753 */
  goto L_10918753;
L_1091873e: /* 1091873e: mov ecx, esi */
  ecx = esi;
/* 10918740: call 0x10918b12 */
  esp -= 4; W32(esp, 0x10918745u); SPILL(); f_10918b12(); if (g_unwind) return; RELOAD();
/* 10918745: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10918748: je 0x10918751 */
  if (zf) goto L_10918751;
L_1091874a: /* 1091874a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091874b: call 0x1090119f */
  esp -= 4; W32(esp, 0x10918750u); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 10918750: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_10918751: /* 10918751: mov eax, esi */
  eax = esi;
L_10918753: /* 10918753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10918754: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10918755: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10918758(void) {
  LOAD_REGS();
L_10918758: /* 10918758: mov eax, ecx */
  eax = ecx;
/* 1091875a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10918770(void) {
  LOAD_REGS();
L_10918770: /* 10918770: jmp dword ptr [0x1095a02c] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_10918780(void) {
  LOAD_REGS();
L_10918780: /* 10918780: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918785: jae 0x10918795 */
  if (!cf) goto L_10918795;
L_10918787: /* 10918787: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 10918789: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091878b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091878e: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 10918790: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* 10918791: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10918793: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10918794: ret  */
  esp += 4; SPILL(); return;
L_10918795: /* 10918795: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10918796: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_1091879a: /* 1091879a: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109187a0: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109187a5: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 109187a7: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109187ac: jae 0x1091879a */
  if (!cf) goto L_1091879a;
L_109187ae: /* 109187ae: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109187b0: mov eax, esp */
  eax = esp;
/* 109187b2: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 109187b4: mov esp, ecx */
  esp = ecx;
/* 109187b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109187b8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 109187bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109187bc: ret  */
  esp += 4; SPILL(); return;
}

void f_109187be(void) {
  LOAD_REGS();
L_109187be: /* 109187be: jmp dword ptr [0x1095a030] */
  SPILL(); f_4276f0(); return; /* MSVCR70!_purecall */
}

void f_109187c4(void) {
  LOAD_REGS();
L_109187c4: /* 109187c4: cmp dword ptr [0x10958eec], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x10958eecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109187cb: jne 0x109187d3 */
  if (!zf) goto L_109187d3;
L_109187cd: /* 109187cd: jmp dword ptr [0x1095a044] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_109187d3: /* 109187d3: push 0x10958edc */
  { uint32_t v = 0x10958edcu; esp -= 4; W32(esp, v); }
/* 109187d8: push 0x10958eec */
  { uint32_t v = 0x10958eecu; esp -= 4; W32(esp, v); }
/* 109187dd: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 109187e1: call 0x10918b18 */
  esp -= 4; W32(esp, 0x109187e6u); SPILL(); f_10918b18(); if (g_unwind) return; RELOAD();
/* 109187e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109187e9: ret  */
  esp += 4; SPILL(); return;
}

void f_109187ea(void) {
  LOAD_REGS();
L_109187ea: /* 109187ea: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 109187ee: call 0x109187c4 */
  esp -= 4; W32(esp, 0x109187f3u); SPILL(); f_109187c4(); if (g_unwind) return; RELOAD();
/* 109187f3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 109187f5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 109187f7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 109187f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 109187fa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109187fb: ret  */
  esp += 4; SPILL(); return;
}

void f_109187fc(void) {
  LOAD_REGS();
L_109187fc: /* 109187fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109187fe: call dword ptr [0x10959fd8] */
  esp -= 4; W32(esp, 0x10918804u); SPILL(); call_ind(R32(0x10959fd8u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* 10918804: cmp word ptr [eax], 0x5a4d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x5a4du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10918809: jne 0x1091882a */
  if (!zf) goto L_1091882a;
L_1091880b: /* 1091880b: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 1091880e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918810: cmp dword ptr [ecx], 0x4550 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x4550u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918816: jne 0x1091882a */
  if (!zf) goto L_1091882a;
L_10918818: /* 10918818: movzx eax, word ptr [ecx + 0x18] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x18u)));
/* 1091881c: cmp eax, 0x10b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918821: je 0x10918840 */
  if (zf) goto L_10918840;
L_10918823: /* 10918823: cmp eax, 0x20b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918828: je 0x1091882d */
  if (zf) goto L_1091882d;
L_1091882a: /* 1091882a: xor eax, eax */
  eax = 0;
/* 1091882c: ret  */
  esp += 4; SPILL(); return;
L_1091882d: /* 1091882d: xor eax, eax */
  eax = 0;
/* 1091882f: cmp dword ptr [ecx + 0x84], 0xe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10918836: jbe 0x10918851 */
  if ((cf | zf)) goto L_10918851;
L_10918838: /* 10918838: cmp dword ptr [ecx + 0xf8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xf8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091883e: jmp 0x1091884e */
  goto L_1091884e;
L_10918840: /* 10918840: xor eax, eax */
  eax = 0;
/* 10918842: cmp dword ptr [ecx + 0x74], 0xe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x74u))); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10918846: jbe 0x10918851 */
  if ((cf | zf)) goto L_10918851;
L_10918848: /* 10918848: cmp dword ptr [ecx + 0xe8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_1091884e: /* 1091884e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
L_10918851: /* 10918851: ret  */
  esp += 4; SPILL(); return;
}

void f_10918852(void) {
  LOAD_REGS();
L_10918852: /* 10918852: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 10918854: push 0x10924c90 */
  { uint32_t v = 0x10924c90u; esp -= 4; W32(esp, v); }
/* 10918859: call 0x10918c08 */
  esp -= 4; W32(esp, 0x1091885eu); SPILL(); f_10918c08(); if (g_unwind) return; RELOAD();
/* 1091885e: xor ebx, ebx */
  ebx = 0;
/* 10918860: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10918861: mov edi, dword ptr [0x10959fd8] */
  edi = R32((uint32_t)(0x10959fd8u));
/* 10918867: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10918869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918869: cmp word ptr [eax], 0x5a4d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x5a4du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1091886e: jne 0x1091888f */
  if (!zf) goto L_1091888f;
L_10918870: /* 10918870: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 10918873: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10918875: cmp dword ptr [ecx], 0x4550 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x4550u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091887b: jne 0x1091888f */
  if (!zf) goto L_1091888f;
L_1091887d: /* 1091887d: movzx eax, word ptr [ecx + 0x18] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x18u)));
/* 10918881: cmp eax, 0x10b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918886: je 0x109188a7 */
  if (zf) goto L_109188a7;
L_10918888: /* 10918888: cmp eax, 0x20b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091888d: je 0x10918894 */
  if (zf) goto L_10918894;
L_1091888f: /* 1091888f: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 10918892: jmp 0x109188bb */
  goto L_109188bb;
L_10918894: /* 10918894: cmp dword ptr [ecx + 0x84], 0xe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091889b: jbe 0x1091888f */
  if ((cf | zf)) goto L_1091888f;
L_1091889d: /* 1091889d: xor eax, eax */
  eax = 0;
/* 1091889f: cmp dword ptr [ecx + 0xf8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xf8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109188a5: jmp 0x109188b5 */
  goto L_109188b5;
L_109188a7: /* 109188a7: cmp dword ptr [ecx + 0x74], 0xe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x74u))); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109188ab: jbe 0x1091888f */
  if ((cf | zf)) goto L_1091888f;
L_109188ad: /* 109188ad: xor eax, eax */
  eax = 0;
/* 109188af: cmp dword ptr [ecx + 0xe8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_109188b5: /* 109188b5: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 109188b8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_109188bb: /* 109188bb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 109188be: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 109188c0: call dword ptr [0x1095a07c] */
  esp -= 4; W32(esp, 0x109188c6u); SPILL(); f_405283(); if (g_unwind) return; /* MSVCR70!__set_app_type */ RELOAD();
/* 109188c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 109188c7: or dword ptr [0x10958edc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x10958edcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x10958edcu), r);
  }
/* 109188ce: or dword ptr [0x10958eec], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x10958eecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x10958eecu), r);
  }
/* 109188d5: call dword ptr [0x1095a078] */
  esp -= 4; W32(esp, 0x109188dbu); SPILL(); f_404980(); if (g_unwind) return; /* MSVCR70!__p__fmode */ RELOAD();
/* 109188db: mov ecx, dword ptr [0x10958ecc] */
  ecx = R32((uint32_t)(0x10958eccu));
/* 109188e1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 109188e3: call dword ptr [0x1095a074] */
  esp -= 4; W32(esp, 0x109188e9u); SPILL(); f_404986(); if (g_unwind) return; /* MSVCR70!__p__commode */ RELOAD();
/* 109188e9: mov ecx, dword ptr [0x10958ec8] */
  ecx = R32((uint32_t)(0x10958ec8u));
/* 109188ef: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 109188f1: mov eax, dword ptr [0x1095a070] */
  eax = R32((uint32_t)(0x1095a070u));
/* 109188f6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 109188f8: mov dword ptr [0x10958ed0], eax */
  W32((uint32_t)(0x10958ed0u), eax);
/* 109188fd: call 0x10918b48 */
  esp -= 4; W32(esp, 0x10918902u); SPILL(); f_10918b48(); if (g_unwind) return; RELOAD();
/* 10918902: call 0x10918bf1 */
  esp -= 4; W32(esp, 0x10918907u); SPILL(); f_10918bf1(); if (g_unwind) return; RELOAD();
/* 10918907: cmp dword ptr [0x109309a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x109309a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091890d: jne 0x1091891b */
  if (!zf) goto L_1091891b;
L_1091890f: /* 1091890f: push 0x10918bee */
  { uint32_t v = 0x10918beeu; esp -= 4; W32(esp, v); }
/* 10918914: call dword ptr [0x1095a06c] */
  esp -= 4; W32(esp, 0x1091891au); SPILL(); f_40f323(); if (g_unwind) return; /* MSVCR70!__setusermatherr */ RELOAD();
/* 1091891a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_1091891b: /* 1091891b: call 0x10918bd6 */
  esp -= 4; W32(esp, 0x10918920u); SPILL(); f_10918bd6(); if (g_unwind) return; RELOAD();
/* 10918920: push 0x10929424 */
  { uint32_t v = 0x10929424u; esp -= 4; W32(esp, v); }
/* 10918925: push 0x10929320 */
  { uint32_t v = 0x10929320u; esp -= 4; W32(esp, v); }
/* 1091892a: call 0x10918bd0 */
  esp -= 4; W32(esp, 0x1091892fu); SPILL(); f_10918bd0(); if (g_unwind) return; RELOAD();
/* 1091892f: push 0x10918b8c */
  { uint32_t v = 0x10918b8cu; esp -= 4; W32(esp, v); }
/* 10918934: call 0x109187ea */
  esp -= 4; W32(esp, 0x10918939u); SPILL(); f_109187ea(); if (g_unwind) return; RELOAD();
/* 10918939: mov eax, dword ptr [0x10958ec4] */
  eax = R32((uint32_t)(0x10958ec4u));
/* 1091893e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 10918941: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 10918944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10918945: push dword ptr [0x10958ec0] */
  { uint32_t v = R32((uint32_t)(0x10958ec0u)); esp -= 4; W32(esp, v); }
/* 1091894b: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 1091894e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091894f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 10918952: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10918953: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 10918956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10918957: call dword ptr [0x1095a064] */
  esp -= 4; W32(esp, 0x1091895du); SPILL(); f_406c23(); if (g_unwind) return; /* MSVCR70!__getmainargs */ RELOAD();
/* 1091895d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10918960: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 10918963: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10918965: jge 0x1091896f */
  if ((sf == of)) goto L_1091896f;
L_10918967: /* 10918967: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 10918969: call 0x10918b3c */
  esp -= 4; W32(esp, 0x1091896eu); SPILL(); f_10918b3c(); if (g_unwind) return; RELOAD();
/* 1091896e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_1091896f: /* 1091896f: push 0x1092921c */
  { uint32_t v = 0x1092921cu; esp -= 4; W32(esp, v); }
/* 10918974: push 0x10929000 */
  { uint32_t v = 0x10929000u; esp -= 4; W32(esp, v); }
/* 10918979: call 0x10918bd0 */
  esp -= 4; W32(esp, 0x1091897eu); SPILL(); f_10918bd0(); if (g_unwind) return; RELOAD();
/* 1091897e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091897f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10918980: mov eax, dword ptr [0x1095a05c] */
  eax = R32((uint32_t)(0x1095a05cu));
/* 10918985: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10918987: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 1091898a: cmp byte ptr [esi], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091898d: jne 0x109189c9 */
  if (!zf) goto L_109189c9;
L_1091898f: /* 1091898f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10918990: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 10918993: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 10918995: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10918997: je 0x1091899d */
  if (zf) goto L_1091899d;
L_10918999: /* 10918999: cmp al, 0x22 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091899b: jne 0x1091898f */
  if (!zf) goto L_1091898f;
L_1091899d: /* 1091899d: cmp byte ptr [esi], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 109189a0: jne 0x109189a6 */
  if (!zf) goto L_109189a6;
L_109189a2: /* 109189a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109189a3: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
L_109189a6: /* 109189a6: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 109189a8: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 109189aa: je 0x109189b0 */
  if (zf) goto L_109189b0;
L_109189ac: /* 109189ac: cmp al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109189ae: jbe 0x109189a2 */
  if ((cf | zf)) goto L_109189a2;
L_109189b0: /* 109189b0: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 109189b3: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 109189b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109189b7: call dword ptr [0x10959f18] */
  esp -= 4; W32(esp, 0x109189bdu); SPILL(); call_ind(R32(0x10959f18u)); if (g_unwind) return; /* KERNEL32!GetStartupInfoA */ RELOAD();
/* 109189bd: test byte ptr [ebp - 0x4c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109189c1: je 0x109189d4 */
  if (zf) goto L_109189d4;
L_109189c3: /* 109189c3: movzx eax, word ptr [ebp - 0x48] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffb8u)));
/* 109189c7: jmp 0x109189d7 */
  goto L_109189d7;
L_109189c9: /* 109189c9: cmp byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109189cc: jbe 0x109189a6 */
  if ((cf | zf)) goto L_109189a6;
L_109189ce: /* 109189ce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 109189cf: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 109189d2: jmp 0x109189c9 */
  goto L_109189c9;
L_109189d4: /* 109189d4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 109189d6: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_109189d7: /* 109189d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109189d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109189d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109189da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109189db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x109189ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109189dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109189de: call 0x1090142e */
  esp -= 4; W32(esp, 0x109189e3u); SPILL(); f_1090142e(); if (g_unwind) return; RELOAD();
/* 109189e3: mov esi, eax */
  esi = eax;
/* 109189e5: mov dword ptr [ebp - 0x7c], esi */
  W32((uint32_t)(ebp + 0xffffff84u), esi);
/* 109189e8: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109189eb: jne 0x109189f4 */
  if (!zf) goto L_109189f4;
L_109189ed: /* 109189ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109189ee: call dword ptr [0x1095a058] */
  esp -= 4; W32(esp, 0x109189f4u); SPILL(); f_404360(); if (g_unwind) return; /* MSVCR70!exit */ RELOAD();
L_109189f4: /* 109189f4: call dword ptr [0x1095a054] */
  esp -= 4; W32(esp, 0x109189fau); SPILL(); f_40446a(); if (g_unwind) return; /* MSVCR70!_cexit */ RELOAD();
/* 109189fa: jmp 0x10918a29 */
  goto L_10918a29;
L_10918a29: /* 10918a29: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918a2d: mov eax, esi */
  eax = esi;
/* 10918a2f: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918a34u); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918a34: ret  */
  esp += 4; SPILL(); return;
}

void f_109189fc(void) {
  LOAD_REGS();
L_109189fc: /* 109189fc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 109189ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10918a01: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10918a03: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 10918a06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10918a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10918a08: call 0x10918b2a */
  esp -= 4; W32(esp, 0x10918a0du); SPILL(); f_10918b2a(); if (g_unwind) return; RELOAD();
/* 10918a0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10918a0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10918a0f: ret  */
  esp += 4; SPILL(); return;
}

void f_10918a10(void) {
  LOAD_REGS();
L_10918a10: /* 10918a10: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10918a13: mov esi, dword ptr [ebp - 0x80] */
  esi = R32((uint32_t)(ebp + 0xffffff80u));
/* 10918a16: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918a1a: jne 0x10918a23 */
  if (!zf) goto L_10918a23;
L_10918a1c: /* 10918a1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10918a1d: call dword ptr [0x1095a04c] */
  esp -= 4; W32(esp, 0x10918a23u); SPILL(); f_40f783(); if (g_unwind) return; /* MSVCR70!_exit */ RELOAD();
L_10918a23: /* 10918a23: call dword ptr [0x1095a048] */
  esp -= 4; W32(esp, 0x10918a29u); SPILL(); f_40f795(); if (g_unwind) return; /* MSVCR70!_c_exit */ RELOAD();
/* 10918a29: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918a2d: mov eax, esi */
  eax = esi;
/* 10918a2f: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918a34u); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918a34: ret  */
  esp += 4; SPILL(); return;
}

void f_10918a36(void) {
  LOAD_REGS();
L_10918a36: /* 10918a36: jmp dword ptr [0x1095a034] */
  SPILL(); f_4016cb(); return; /* MSVCR70!calloc */
}

void f_10918a3c(void) {
  LOAD_REGS();
L_10918a3c: /* 10918a3c: jmp dword ptr [0x1095a038] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_10918a42(void) {
  LOAD_REGS();
L_10918a42: /* 10918a42: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10918a44: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918a4a: je 0x10918a4f */
  if (zf) goto L_10918a4f;
L_10918a4c: /* 10918a4c: xor eax, eax */
  eax = 0;
/* 10918a4e: ret  */
  esp += 4; SPILL(); return;
L_10918a4f: /* 10918a4f: jmp 0x10918c54 */
  SPILL(); f_10918c54(); return;
}

void f_10918a54(void) {
  LOAD_REGS();
L_10918a54: /* 10918a54: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 10918a56: push 0x10924ca0 */
  { uint32_t v = 0x10924ca0u; esp -= 4; W32(esp, v); }
/* 10918a5b: call 0x10918c08 */
  esp -= 4; W32(esp, 0x10918a60u); SPILL(); f_10918c08(); if (g_unwind) return; RELOAD();
/* 10918a60: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_10918a64: /* 10918a64: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 10918a67: js 0x10918a77 */
  if (sf) goto L_10918a77;
L_10918a69: /* 10918a69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 10918a6c: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10918a6f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 10918a72: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x10918a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918a75: jmp 0x10918a64 */
  goto L_10918a64;
L_10918a77: /* 10918a77: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918a7b: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918a80u); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918a80: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_10918a83(void) {
  LOAD_REGS();
L_10918a83: /* 10918a83: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 10918a86: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 10918a89: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10918a8c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10918a8e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 10918a91: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10918a94: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918a9a: je 0x10918aac */
  if (zf) goto L_10918aac;
L_10918a9c: /* 10918a9c: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 10918aa3: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 10918aa6: ret  */
  esp += 4; SPILL(); return;
L_10918aac: /* 10918aac: call 0x10918c54 */
  esp -= 4; W32(esp, 0x10918ab1u); SPILL(); f_10918c54(); if (g_unwind) return; RELOAD();
L_10918ab1: guest_badaddr(0x10918ab1); return;
}

void f_10918aa7(void) {
  LOAD_REGS();
  goto L_10918aa7;
L_10918a77: /* 10918a77: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918a7b: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918a80u); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918a80: ret 0x10 */
  esp += 20; SPILL(); return;
L_10918aa7: /* 10918aa7: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10918aaa: jmp 0x10918a77 */
  goto L_10918a77;
}

void f_10918ab2(void) {
  LOAD_REGS();
L_10918ab2: /* 10918ab2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 10918ab4: push 0x10924cb0 */
  { uint32_t v = 0x10924cb0u; esp -= 4; W32(esp, v); }
/* 10918ab9: call 0x10918c08 */
  esp -= 4; W32(esp, 0x10918abeu); SPILL(); f_10918c08(); if (g_unwind) return; RELOAD();
/* 10918abe: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 10918ac2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 10918ac5: mov eax, esi */
  eax = esi;
/* 10918ac7: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 10918acb: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 10918ace: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_10918ad2: /* 10918ad2: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 10918ad5: js 0x10918ae2 */
  if (sf) goto L_10918ae2;
L_10918ad7: /* 10918ad7: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 10918ada: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 10918add: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x10918ae0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918ae0: jmp 0x10918ad2 */
  goto L_10918ad2;
L_10918ae2: /* 10918ae2: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 10918ae9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918aed: call 0x10918afa */
  esp -= 4; W32(esp, 0x10918af2u); SPILL(); f_10918afa(); if (g_unwind) return; RELOAD();
/* 10918af2: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918af7u); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918af7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_10918afa(void) {
  LOAD_REGS();
L_10918afa: /* 10918afa: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10918afe: jne 0x10918b11 */
  if (!zf) goto L_10918b11;
L_10918b00: /* 10918b00: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 10918b03: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 10918b06: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 10918b09: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 10918b0c: call 0x10918a54 */
  esp -= 4; W32(esp, 0x10918b11u); SPILL(); f_10918a54(); if (g_unwind) return; RELOAD();
L_10918b11: /* 10918b11: ret  */
  esp += 4; SPILL(); return;
}

void f_10918b12(void) {
  LOAD_REGS();
L_10918b12: /* 10918b12: jmp dword ptr [0x1095a03c] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_10918b18(void) {
  LOAD_REGS();
L_10918b18: /* 10918b18: jmp dword ptr [0x1095a040] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_10918b1e(void) {
  LOAD_REGS();
L_10918b1e: /* 10918b1e: jmp dword ptr [0x1095a048] */
  SPILL(); f_40f795(); return; /* MSVCR70!_c_exit */
}

void f_10918b24(void) {
  LOAD_REGS();
L_10918b24: /* 10918b24: jmp dword ptr [0x1095a04c] */
  SPILL(); f_40f783(); return; /* MSVCR70!_exit */
}

void f_10918b2a(void) {
  LOAD_REGS();
L_10918b2a: /* 10918b2a: jmp dword ptr [0x1095a050] */
  SPILL(); f_412551(); return; /* MSVCR70!_XcptFilter */
}

void f_10918b30(void) {
  LOAD_REGS();
L_10918b30: /* 10918b30: jmp dword ptr [0x1095a054] */
  SPILL(); f_40446a(); return; /* MSVCR70!_cexit */
}

void f_10918b36(void) {
  LOAD_REGS();
L_10918b36: /* 10918b36: jmp dword ptr [0x1095a058] */
  SPILL(); f_404360(); return; /* MSVCR70!exit */
}

void f_10918b3c(void) {
  LOAD_REGS();
L_10918b3c: /* 10918b3c: jmp dword ptr [0x1095a060] */
  SPILL(); f_40f95e(); return; /* MSVCR70!_amsg_exit */
}

void f_10918b42(void) {
  LOAD_REGS();
L_10918b42: /* 10918b42: jmp dword ptr [0x1095a064] */
  SPILL(); f_406c23(); return; /* MSVCR70!__getmainargs */
}

void f_10918b48(void) {
  LOAD_REGS();
L_10918b48: /* 10918b48: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 10918b4a: push 0x10924cc0 */
  { uint32_t v = 0x10924cc0u; esp -= 4; W32(esp, v); }
/* 10918b4f: call 0x10918c08 */
  esp -= 4; W32(esp, 0x10918b54u); SPILL(); f_10918c08(); if (g_unwind) return; RELOAD();
/* 10918b54: mov dword ptr [ebp - 0x1c], 0x10925944 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x10925944u);
L_10918b5b: /* 10918b5b: cmp dword ptr [ebp - 0x1c], 0x10925a44 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10925a44u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918b62: jae 0x10918b86 */
  if (!cf) goto L_10918b86;
L_10918b64: /* 10918b64: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918b68: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10918b6b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10918b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10918b6f: je 0x10918b7c */
  if (zf) goto L_10918b7c;
L_10918b71: /* 10918b71: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x10918b73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918b73: jmp 0x10918b7c */
  goto L_10918b7c;
L_10918b7c: /* 10918b7c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918b80: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 10918b84: jmp 0x10918b5b */
  goto L_10918b5b;
L_10918b86: /* 10918b86: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918b8bu); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918b8b: ret  */
  esp += 4; SPILL(); return;
}

void f_10918b75(void) {
  LOAD_REGS();
L_10918b75: /* 10918b75: xor eax, eax */
  eax = 0;
/* 10918b77: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10918b78: ret  */
  esp += 4; SPILL(); return;
}

void f_10918b79(void) {
  LOAD_REGS();
  goto L_10918b79;
L_10918b5b: /* 10918b5b: cmp dword ptr [ebp - 0x1c], 0x10925a44 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10925a44u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918b62: jae 0x10918b86 */
  if (!cf) goto L_10918b86;
L_10918b64: /* 10918b64: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918b68: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10918b6b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10918b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10918b6f: je 0x10918b7c */
  if (zf) goto L_10918b7c;
L_10918b71: /* 10918b71: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x10918b73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918b73: jmp 0x10918b7c */
  goto L_10918b7c;
L_10918b79: /* 10918b79: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_10918b7c: /* 10918b7c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918b80: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 10918b84: jmp 0x10918b5b */
  goto L_10918b5b;
L_10918b86: /* 10918b86: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918b8bu); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918b8b: ret  */
  esp += 4; SPILL(); return;
}

void f_10918b8c(void) {
  LOAD_REGS();
L_10918b8c: /* 10918b8c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 10918b8e: push 0x10924cd0 */
  { uint32_t v = 0x10924cd0u; esp -= 4; W32(esp, v); }
/* 10918b93: call 0x10918c08 */
  esp -= 4; W32(esp, 0x10918b98u); SPILL(); f_10918c08(); if (g_unwind) return; RELOAD();
/* 10918b98: mov dword ptr [ebp - 0x1c], 0x10925b4c */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x10925b4cu);
L_10918b9f: /* 10918b9f: cmp dword ptr [ebp - 0x1c], 0x10925c4c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10925c4cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918ba6: jae 0x10918bca */
  if (!cf) goto L_10918bca;
L_10918ba8: /* 10918ba8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918bac: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10918baf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10918bb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10918bb3: je 0x10918bc0 */
  if (zf) goto L_10918bc0;
L_10918bb5: /* 10918bb5: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x10918bb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918bb7: jmp 0x10918bc0 */
  goto L_10918bc0;
L_10918bc0: /* 10918bc0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918bc4: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 10918bc8: jmp 0x10918b9f */
  goto L_10918b9f;
L_10918bca: /* 10918bca: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918bcfu); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918bcf: ret  */
  esp += 4; SPILL(); return;
}

void f_10918bb9(void) {
  LOAD_REGS();
L_10918bb9: /* 10918bb9: xor eax, eax */
  eax = 0;
/* 10918bbb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10918bbc: ret  */
  esp += 4; SPILL(); return;
}

void f_10918bbd(void) {
  LOAD_REGS();
  goto L_10918bbd;
L_10918b9f: /* 10918b9f: cmp dword ptr [ebp - 0x1c], 0x10925c4c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10925c4cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10918ba6: jae 0x10918bca */
  if (!cf) goto L_10918bca;
L_10918ba8: /* 10918ba8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918bac: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10918baf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10918bb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10918bb3: je 0x10918bc0 */
  if (zf) goto L_10918bc0;
L_10918bb5: /* 10918bb5: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x10918bb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10918bb7: jmp 0x10918bc0 */
  goto L_10918bc0;
L_10918bbd: /* 10918bbd: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_10918bc0: /* 10918bc0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 10918bc4: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 10918bc8: jmp 0x10918b9f */
  goto L_10918b9f;
L_10918bca: /* 10918bca: call 0x10918c43 */
  esp -= 4; W32(esp, 0x10918bcfu); SPILL(); f_10918c43(); if (g_unwind) return; RELOAD();
/* 10918bcf: ret  */
  esp += 4; SPILL(); return;
}

void f_10918bd0(void) {
  LOAD_REGS();
L_10918bd0: /* 10918bd0: jmp dword ptr [0x1095a068] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_10918bd6(void) {
  LOAD_REGS();
L_10918bd6: /* 10918bd6: push 0x30000 */
  { uint32_t v = 0x30000u; esp -= 4; W32(esp, v); }
/* 10918bdb: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* 10918be0: call 0x10918c5a */
  esp -= 4; W32(esp, 0x10918be5u); SPILL(); f_10918c5a(); if (g_unwind) return; RELOAD();
/* 10918be5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10918be6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10918be7: ret  */
  esp += 4; SPILL(); return;
}

void f_10918be8(void) {
  LOAD_REGS();
L_10918be8: /* 10918be8: jmp dword ptr [0x1095a06c] */
  SPILL(); f_40f323(); return; /* MSVCR70!__setusermatherr */
}

void f_10918bee(void) {
  LOAD_REGS();
L_10918bee: /* 10918bee: xor eax, eax */
  eax = 0;
/* 10918bf0: ret  */
  esp += 4; SPILL(); return;
}

void f_10918bf1(void) {
  LOAD_REGS();
L_10918bf1: /* 10918bf1: xor eax, eax */
  eax = 0;
/* 10918bf3: ret  */
  esp += 4; SPILL(); return;
}

void f_10918bf4(void) {
  LOAD_REGS();
L_10918bf4: /* 10918bf4: jmp dword ptr [0x1095a074] */
  SPILL(); f_404986(); return; /* MSVCR70!__p__commode */
}

void f_10918bfa(void) {
  LOAD_REGS();
L_10918bfa: /* 10918bfa: jmp dword ptr [0x1095a078] */
  SPILL(); f_404980(); return; /* MSVCR70!__p__fmode */
}

void f_10918c00(void) {
  LOAD_REGS();
L_10918c00: /* 10918c00: jmp dword ptr [0x1095a07c] */
  SPILL(); f_405283(); return; /* MSVCR70!__set_app_type */
}

void f_10918c08(void) {
  LOAD_REGS();
L_10918c08: /* 10918c08: push 0x10918c60 */
  { uint32_t v = 0x10918c60u; esp -= 4; W32(esp, v); }
/* 10918c0d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10918c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10918c14: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10918c18: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 10918c1c: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* 10918c20: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10918c22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10918c23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10918c24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10918c25: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 10918c28: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 10918c2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10918c2c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10918c2f: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 10918c36: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 10918c39: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 10918c3c: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 10918c42: ret  */
  esp += 4; SPILL(); return;
}

void f_10918c43(void) {
  LOAD_REGS();
L_10918c43: /* 10918c43: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 10918c46: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10918c4d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10918c4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10918c4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10918c50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10918c51: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 10918c52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10918c53: ret  */
  esp += 4; SPILL(); return;
}

void f_10918c54(void) {
  LOAD_REGS();
L_10918c54: /* 10918c54: jmp dword ptr [0x1095a08c] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_10918c5a(void) {
  LOAD_REGS();
L_10918c5a: /* 10918c5a: jmp dword ptr [0x1095a080] */
  SPILL(); f_404d2a(); return; /* MSVCR70!_controlfp */
}

void f_10918c60(void) {
  LOAD_REGS();
L_10918c60: /* 10918c60: jmp dword ptr [0x1095a084] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_10918c66(void) {
  LOAD_REGS();
L_10918c66: /* 10918c66: jmp dword ptr [0x10959fd8] */
  SPILL(); call_ind(R32(0x10959fd8u)); return; /* KERNEL32!GetModuleHandleA */
}

void f_10918c6c(void) {
  LOAD_REGS();
L_10918c6c: /* 10918c6c: jmp dword ptr [0x10959f18] */
  SPILL(); call_ind(R32(0x10959f18u)); return; /* KERNEL32!GetStartupInfoA */
}

void f_1091b5c0(void) {
  LOAD_REGS();
L_1091b5c0: /* 1091b5c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1091b5c3: jmp dword ptr [0x1095a264] */
  SPILL(); f_d81d11(); return; /* Window!??1FWindowsBitmap@@QAE@XZ */
}

void f_1091b5c9(void) {
  LOAD_REGS();
  goto L_1091b5c9;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b5c9: /* 1091b5c9: mov eax, 0x10925e00 */
  eax = 0x10925e00u;
/* 1091b5ce: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b5e0(void) {
  LOAD_REGS();
L_1091b5e0: /* 1091b5e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b5e3: jmp dword ptr [0x1095a398] */
  SPILL(); f_d81a9b(); return; /* Window!??1WWizardDialog@@UAE@XZ */
}

void f_1091b5e9(void) {
  LOAD_REGS();
L_1091b5e9: /* 1091b5e9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b5ec: add ecx, 0x2fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b5f2: jmp dword ptr [0x1095a39c] */
  SPILL(); f_d82662(); return; /* Window!??1WLabel@@UAE@XZ */
}

void f_1091b5f8(void) {
  LOAD_REGS();
L_1091b5f8: /* 1091b5f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b5fb: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b601: jmp dword ptr [0x1095a264] */
  SPILL(); f_d81d11(); return; /* Window!??1FWindowsBitmap@@QAE@XZ */
}

void f_1091b607(void) {
  LOAD_REGS();
L_1091b607: /* 1091b607: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b60a: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b610: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b616(void) {
  LOAD_REGS();
  goto L_1091b616;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b616: /* 1091b616: mov eax, 0x10925e48 */
  eax = 0x10925e48u;
/* 1091b61b: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b630(void) {
  LOAD_REGS();
L_1091b630: /* 1091b630: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b633: jmp dword ptr [0x1095a398] */
  SPILL(); f_d81a9b(); return; /* Window!??1WWizardDialog@@UAE@XZ */
}

void f_1091b639(void) {
  LOAD_REGS();
L_1091b639: /* 1091b639: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b63c: add ecx, 0x2fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b642: jmp dword ptr [0x1095a39c] */
  SPILL(); f_d82662(); return; /* Window!??1WLabel@@UAE@XZ */
}

void f_1091b648(void) {
  LOAD_REGS();
L_1091b648: /* 1091b648: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b64b: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b651: jmp dword ptr [0x1095a264] */
  SPILL(); f_d81d11(); return; /* Window!??1FWindowsBitmap@@QAE@XZ */
}

void f_1091b657(void) {
  LOAD_REGS();
L_1091b657: /* 1091b657: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b65a: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b660: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b666(void) {
  LOAD_REGS();
  goto L_1091b666;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b666: /* 1091b666: mov eax, 0x10925e8c */
  eax = 0x10925e8cu;
/* 1091b66b: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b680(void) {
  LOAD_REGS();
  goto L_1091b680;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b680: /* 1091b680: mov eax, 0x10925ef4 */
  eax = 0x10925ef4u;
/* 1091b685: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b690(void) {
  LOAD_REGS();
L_1091b690: /* 1091b690: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b693: jmp dword ptr [0x1095a27c] */
  SPILL(); f_d81532(); return; /* Window!??1WWizardPage@@UAE@XZ */
}

void f_1091b699(void) {
  LOAD_REGS();
L_1091b699: /* 1091b699: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b69c: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b69f: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b6a5(void) {
  LOAD_REGS();
L_1091b6a5: /* 1091b6a5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b6a8: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b6ae: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b6b4(void) {
  LOAD_REGS();
L_1091b6b4: /* 1091b6b4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b6b7: add ecx, 0x16c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b6bd: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b6c3(void) {
  LOAD_REGS();
L_1091b6c3: /* 1091b6c3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b6c6: add ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b6cc: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b6d2(void) {
  LOAD_REGS();
  goto L_1091b6d2;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b6d2: /* 1091b6d2: mov eax, 0x10925f44 */
  eax = 0x10925f44u;
/* 1091b6d7: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b6f0(void) {
  LOAD_REGS();
L_1091b6f0: /* 1091b6f0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1091b6f3: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b6f9(void) {
  LOAD_REGS();
L_1091b6f9: /* 1091b6f9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1091b6fc: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b702(void) {
  LOAD_REGS();
L_1091b702: /* 1091b702: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1091b705: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b70b(void) {
  LOAD_REGS();
  goto L_1091b70b;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b70b: /* 1091b70b: mov eax, 0x10925f80 */
  eax = 0x10925f80u;
/* 1091b710: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b720(void) {
  LOAD_REGS();
  goto L_1091b720;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b720: /* 1091b720: mov eax, 0x10925fe8 */
  eax = 0x10925fe8u;
/* 1091b725: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b730(void) {
  LOAD_REGS();
  goto L_1091b730;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b730: /* 1091b730: mov eax, 0x10926054 */
  eax = 0x10926054u;
/* 1091b735: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b740(void) {
  LOAD_REGS();
  goto L_1091b740;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b740: /* 1091b740: mov eax, 0x109260b0 */
  eax = 0x109260b0u;
/* 1091b745: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b750(void) {
  LOAD_REGS();
L_1091b750: /* 1091b750: lea ecx, [ebp - 0x2ac] */
  ecx = (uint32_t)(ebp + 0xfffffd54u);
/* 1091b756: jmp dword ptr [0x1095a294] */
  SPILL(); f_d819ab(); return; /* Window!??1WCrashBoxDialog@@UAE@XZ */
}

void f_1091b75c(void) {
  LOAD_REGS();
  goto L_1091b75c;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b75c: /* 1091b75c: mov eax, 0x10926180 */
  eax = 0x10926180u;
/* 1091b761: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b770(void) {
  LOAD_REGS();
  goto L_1091b770;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b770: /* 1091b770: mov eax, 0x109261f0 */
  eax = 0x109261f0u;
/* 1091b775: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b780(void) {
  LOAD_REGS();
  goto L_1091b780;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b780: /* 1091b780: mov eax, 0x1092625c */
  eax = 0x1092625cu;
/* 1091b785: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b790(void) {
  LOAD_REGS();
  goto L_1091b790;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b790: /* 1091b790: mov eax, 0x109262c8 */
  eax = 0x109262c8u;
/* 1091b795: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b7a0(void) {
  LOAD_REGS();
  goto L_1091b7a0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b7a0: /* 1091b7a0: mov eax, 0x10926334 */
  eax = 0x10926334u;
/* 1091b7a5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b7b0(void) {
  LOAD_REGS();
  goto L_1091b7b0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b7b0: /* 1091b7b0: mov eax, 0x109263a0 */
  eax = 0x109263a0u;
/* 1091b7b5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b7c0(void) {
  LOAD_REGS();
  goto L_1091b7c0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b7c0: /* 1091b7c0: mov eax, 0x1092640c */
  eax = 0x1092640cu;
/* 1091b7c5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b7d0(void) {
  LOAD_REGS();
  goto L_1091b7d0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b7d0: /* 1091b7d0: mov eax, 0x10926478 */
  eax = 0x10926478u;
/* 1091b7d5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b7e0(void) {
  LOAD_REGS();
  goto L_1091b7e0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b7e0: /* 1091b7e0: mov eax, 0x109264e4 */
  eax = 0x109264e4u;
/* 1091b7e5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b7f0(void) {
  LOAD_REGS();
L_1091b7f0: /* 1091b7f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b7f3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b7f6: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b7fc(void) {
  LOAD_REGS();
  goto L_1091b7fc;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b7fc: /* 1091b7fc: mov eax, 0x10926514 */
  eax = 0x10926514u;
/* 1091b801: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b810(void) {
  LOAD_REGS();
L_1091b810: /* 1091b810: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b813: jmp dword ptr [0x1095a27c] */
  SPILL(); f_d81532(); return; /* Window!??1WWizardPage@@UAE@XZ */
}

void f_1091b819(void) {
  LOAD_REGS();
L_1091b819: /* 1091b819: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b81c: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b81f: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b825(void) {
  LOAD_REGS();
L_1091b825: /* 1091b825: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b828: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b82e: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b834(void) {
  LOAD_REGS();
L_1091b834: /* 1091b834: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b837: add ecx, 0x16c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b83d: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b843(void) {
  LOAD_REGS();
L_1091b843: /* 1091b843: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b846: add ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b84c: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b852(void) {
  LOAD_REGS();
L_1091b852: /* 1091b852: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b855: add ecx, 0x294 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091b85b: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091b861(void) {
  LOAD_REGS();
  goto L_1091b861;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b861: /* 1091b861: mov eax, 0x10926564 */
  eax = 0x10926564u;
/* 1091b866: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b890(void) {
  LOAD_REGS();
L_1091b890: /* 1091b890: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091b893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091b894: call 0x1090119f */
  esp -= 4; W32(esp, 0x1091b899u); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 1091b899: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091b89a: ret  */
  esp += 4; SPILL(); return;
}

void f_1091b89b(void) {
  LOAD_REGS();
  goto L_1091b89b;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b89b: /* 1091b89b: mov eax, 0x10926590 */
  eax = 0x10926590u;
/* 1091b8a0: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b8b0(void) {
  LOAD_REGS();
  goto L_1091b8b0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b8b0: /* 1091b8b0: mov eax, 0x109265f4 */
  eax = 0x109265f4u;
/* 1091b8b5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b8c0(void) {
  LOAD_REGS();
  goto L_1091b8c0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b8c0: /* 1091b8c0: mov eax, 0x10926660 */
  eax = 0x10926660u;
/* 1091b8c5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b8d0(void) {
  LOAD_REGS();
  goto L_1091b8d0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b8d0: /* 1091b8d0: mov eax, 0x109266cc */
  eax = 0x109266ccu;
/* 1091b8d5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b8e0(void) {
  LOAD_REGS();
  goto L_1091b8e0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b8e0: /* 1091b8e0: mov eax, 0x10926738 */
  eax = 0x10926738u;
/* 1091b8e5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b8f0(void) {
  LOAD_REGS();
L_1091b8f0: /* 1091b8f0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1091b8f3: jmp 0x109013ca */
  SPILL(); f_109013ca(); return;
}

void f_1091b8f8(void) {
  LOAD_REGS();
  goto L_1091b8f8;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b8f8: /* 1091b8f8: mov eax, 0x109267ac */
  eax = 0x109267acu;
/* 1091b8fd: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b910(void) {
  LOAD_REGS();
L_1091b910: /* 1091b910: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091b913: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b919(void) {
  LOAD_REGS();
L_1091b919: /* 1091b919: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1091b91c: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b922(void) {
  LOAD_REGS();
L_1091b922: /* 1091b922: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1091b925: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b92b(void) {
  LOAD_REGS();
L_1091b92b: /* 1091b92b: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1091b92e: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091b934(void) {
  LOAD_REGS();
  goto L_1091b934;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b934: /* 1091b934: mov eax, 0x10926838 */
  eax = 0x10926838u;
/* 1091b939: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b950(void) {
  LOAD_REGS();
  goto L_1091b950;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b950: /* 1091b950: mov eax, 0x109268a4 */
  eax = 0x109268a4u;
/* 1091b955: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b960(void) {
  LOAD_REGS();
  goto L_1091b960;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b960: /* 1091b960: mov eax, 0x10926910 */
  eax = 0x10926910u;
/* 1091b965: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b970(void) {
  LOAD_REGS();
  goto L_1091b970;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b970: /* 1091b970: mov eax, 0x1092697c */
  eax = 0x1092697cu;
/* 1091b975: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b980(void) {
  LOAD_REGS();
L_1091b980: /* 1091b980: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1091b983: jmp dword ptr [0x10959c60] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_1091b989(void) {
  LOAD_REGS();
  goto L_1091b989;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b989: /* 1091b989: mov eax, 0x109269bc */
  eax = 0x109269bcu;
/* 1091b98e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b9a0(void) {
  LOAD_REGS();
  goto L_1091b9a0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b9a0: /* 1091b9a0: mov eax, 0x10926a24 */
  eax = 0x10926a24u;
/* 1091b9a5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b9b0(void) {
  LOAD_REGS();
  goto L_1091b9b0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b9b0: /* 1091b9b0: mov eax, 0x10926a90 */
  eax = 0x10926a90u;
/* 1091b9b5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b9c0(void) {
  LOAD_REGS();
  goto L_1091b9c0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b9c0: /* 1091b9c0: mov eax, 0x10926afc */
  eax = 0x10926afcu;
/* 1091b9c5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b9d0(void) {
  LOAD_REGS();
  goto L_1091b9d0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b9d0: /* 1091b9d0: mov eax, 0x10926b68 */
  eax = 0x10926b68u;
/* 1091b9d5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b9e0(void) {
  LOAD_REGS();
  goto L_1091b9e0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b9e0: /* 1091b9e0: mov eax, 0x10926bd4 */
  eax = 0x10926bd4u;
/* 1091b9e5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091b9f0(void) {
  LOAD_REGS();
  goto L_1091b9f0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091b9f0: /* 1091b9f0: mov eax, 0x10926c40 */
  eax = 0x10926c40u;
/* 1091b9f5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091ba00(void) {
  LOAD_REGS();
  goto L_1091ba00;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091ba00: /* 1091ba00: mov eax, 0x10926cac */
  eax = 0x10926cacu;
/* 1091ba05: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091ba10(void) {
  LOAD_REGS();
L_1091ba10: /* 1091ba10: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1091ba13: jmp dword ptr [0x10959c60] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_1091ba19(void) {
  LOAD_REGS();
  goto L_1091ba19;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091ba19: /* 1091ba19: mov eax, 0x10926cec */
  eax = 0x10926cecu;
/* 1091ba1e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091ba30(void) {
  LOAD_REGS();
L_1091ba30: /* 1091ba30: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1091ba33: jmp dword ptr [0x10959c60] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_1091ba39(void) {
  LOAD_REGS();
  goto L_1091ba39;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091ba39: /* 1091ba39: mov eax, 0x10926d5c */
  eax = 0x10926d5cu;
/* 1091ba3e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091ba50(void) {
  LOAD_REGS();
  goto L_1091ba50;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091ba50: /* 1091ba50: mov eax, 0x10926dc8 */
  eax = 0x10926dc8u;
/* 1091ba55: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091ba60(void) {
  LOAD_REGS();
  goto L_1091ba60;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091ba60: /* 1091ba60: mov eax, 0x10926ebc */
  eax = 0x10926ebcu;
/* 1091ba65: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091ba70(void) {
  LOAD_REGS();
L_1091ba70: /* 1091ba70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091ba73: jmp dword ptr [0x1095a27c] */
  SPILL(); f_d81532(); return; /* Window!??1WWizardPage@@UAE@XZ */
}

void f_1091ba79(void) {
  LOAD_REGS();
L_1091ba79: /* 1091ba79: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091ba7c: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091ba7f: jmp dword ptr [0x1095a2a4] */
  SPILL(); f_d81b90(); return; /* Window!??1WCoolButton@@UAE@XZ */
}

void f_1091ba85(void) {
  LOAD_REGS();
L_1091ba85: /* 1091ba85: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091ba88: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091ba8e: jmp dword ptr [0x1095a2a4] */
  SPILL(); f_d81b90(); return; /* Window!??1WCoolButton@@UAE@XZ */
}

void f_1091ba94(void) {
  LOAD_REGS();
  goto L_1091ba94;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091ba94: /* 1091ba94: mov eax, 0x10926f08 */
  eax = 0x10926f08u;
/* 1091ba99: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bab0(void) {
  LOAD_REGS();
L_1091bab0: /* 1091bab0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bab3: jmp dword ptr [0x1095a27c] */
  SPILL(); f_d81532(); return; /* Window!??1WWizardPage@@UAE@XZ */
}

void f_1091bab9(void) {
  LOAD_REGS();
L_1091bab9: /* 1091bab9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091babc: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091babf: jmp dword ptr [0x1095a2a4] */
  SPILL(); f_d81b90(); return; /* Window!??1WCoolButton@@UAE@XZ */
}

void f_1091bac5(void) {
  LOAD_REGS();
L_1091bac5: /* 1091bac5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bac8: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bace: jmp dword ptr [0x1095a2a4] */
  SPILL(); f_d81b90(); return; /* Window!??1WCoolButton@@UAE@XZ */
}

void f_1091bad4(void) {
  LOAD_REGS();
L_1091bad4: /* 1091bad4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bad7: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091badd: jmp dword ptr [0x1095a2a4] */
  SPILL(); f_d81b90(); return; /* Window!??1WCoolButton@@UAE@XZ */
}

void f_1091bae3(void) {
  LOAD_REGS();
  goto L_1091bae3;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bae3: /* 1091bae3: mov eax, 0x10926f4c */
  eax = 0x10926f4cu;
/* 1091bae8: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bb00(void) {
  LOAD_REGS();
L_1091bb00: /* 1091bb00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bb03: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bb09(void) {
  LOAD_REGS();
  goto L_1091bb09;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bb09: /* 1091bb09: mov eax, 0x10926f78 */
  eax = 0x10926f78u;
/* 1091bb0e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bb20(void) {
  LOAD_REGS();
L_1091bb20: /* 1091bb20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bb23: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bb29(void) {
  LOAD_REGS();
  goto L_1091bb29;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bb29: /* 1091bb29: mov eax, 0x10926fa0 */
  eax = 0x10926fa0u;
/* 1091bb2e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bb40(void) {
  LOAD_REGS();
L_1091bb40: /* 1091bb40: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1091bb43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091bb44: call 0x1090119f */
  esp -= 4; W32(esp, 0x1091bb49u); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 1091bb49: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091bb4a: ret  */
  esp += 4; SPILL(); return;
}

void f_1091bb4b(void) {
  LOAD_REGS();
L_1091bb4b: /* 1091bb4b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1091bb4e: jmp 0x10901159 */
  SPILL(); f_10901159(); return;
}

void f_1091bb53(void) {
  LOAD_REGS();
L_1091bb53: /* 1091bb53: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1091bb56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091bb57: call 0x1090119f */
  esp -= 4; W32(esp, 0x1091bb5cu); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 1091bb5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091bb5d: ret  */
  esp += 4; SPILL(); return;
}

void f_1091bb5e(void) {
  LOAD_REGS();
L_1091bb5e: /* 1091bb5e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1091bb61: jmp 0x10901159 */
  SPILL(); f_10901159(); return;
}

void f_1091bb66(void) {
  LOAD_REGS();
L_1091bb66: /* 1091bb66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1091bb69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091bb6a: call 0x1090119f */
  esp -= 4; W32(esp, 0x1091bb6fu); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 1091bb6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091bb70: ret  */
  esp += 4; SPILL(); return;
}

void f_1091bb71(void) {
  LOAD_REGS();
  goto L_1091bb71;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bb71: /* 1091bb71: mov eax, 0x1092702c */
  eax = 0x1092702cu;
/* 1091bb76: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bb90(void) {
  LOAD_REGS();
L_1091bb90: /* 1091bb90: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1091bb93: jmp 0x109012b2 */
  SPILL(); f_109012b2(); return;
}

void f_1091bb98(void) {
  LOAD_REGS();
L_1091bb98: /* 1091bb98: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1091bb9b: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bba1(void) {
  LOAD_REGS();
L_1091bba1: /* 1091bba1: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 1091bba4: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bbaa(void) {
  LOAD_REGS();
L_1091bbaa: /* 1091bbaa: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1091bbad: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bbb3(void) {
  LOAD_REGS();
L_1091bbb3: /* 1091bbb3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1091bbb6: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bbbc(void) {
  LOAD_REGS();
L_1091bbbc: /* 1091bbbc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1091bbbf: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bbc5(void) {
  LOAD_REGS();
L_1091bbc5: /* 1091bbc5: lea ecx, [ebp - 0x3c8] */
  ecx = (uint32_t)(ebp + 0xfffffc38u);
/* 1091bbcb: jmp 0x109012bc */
  SPILL(); f_109012bc(); return;
}

void f_1091bbd0(void) {
  LOAD_REGS();
L_1091bbd0: /* 1091bbd0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1091bbd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091bbd4: call 0x1090119f */
  esp -= 4; W32(esp, 0x1091bbd9u); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 1091bbd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091bbda: ret  */
  esp += 4; SPILL(); return;
}

void f_1091bbdb(void) {
  LOAD_REGS();
  goto L_1091bbdb;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bbdb: /* 1091bbdb: mov eax, 0x10927154 */
  eax = 0x10927154u;
/* 1091bbe0: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bc00(void) {
  LOAD_REGS();
L_1091bc00: /* 1091bc00: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1091bc03: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bc09(void) {
  LOAD_REGS();
  goto L_1091bc09;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bc09: /* 1091bc09: mov eax, 0x109271d8 */
  eax = 0x109271d8u;
/* 1091bc0e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bc20(void) {
  LOAD_REGS();
L_1091bc20: /* 1091bc20: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1091bc23: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bc26: jmp 0x109012b2 */
  SPILL(); f_109012b2(); return;
}

void f_1091bc2b(void) {
  LOAD_REGS();
L_1091bc2b: /* 1091bc2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1091bc2e: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bc31: jmp 0x1090118b */
  SPILL(); f_1090118b(); return;
}

void f_1091bc36(void) {
  LOAD_REGS();
  goto L_1091bc36;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bc36: /* 1091bc36: mov eax, 0x10927298 */
  eax = 0x10927298u;
/* 1091bc3b: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bc50(void) {
  LOAD_REGS();
  goto L_1091bc50;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bc50: /* 1091bc50: mov eax, 0x109273c4 */
  eax = 0x109273c4u;
/* 1091bc55: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bc60(void) {
  LOAD_REGS();
L_1091bc60: /* 1091bc60: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 1091bc63: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bc66: jmp 0x109012b2 */
  SPILL(); f_109012b2(); return;
}

void f_1091bc6b(void) {
  LOAD_REGS();
L_1091bc6b: /* 1091bc6b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 1091bc6e: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bc71: jmp 0x1090118b */
  SPILL(); f_1090118b(); return;
}

void f_1091bc76(void) {
  LOAD_REGS();
L_1091bc76: /* 1091bc76: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 1091bc7c: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bc82(void) {
  LOAD_REGS();
L_1091bc82: /* 1091bc82: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bc85: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bc8b(void) {
  LOAD_REGS();
L_1091bc8b: /* 1091bc8b: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 1091bc91: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bc97(void) {
  LOAD_REGS();
L_1091bc97: /* 1091bc97: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 1091bc9d: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bca3(void) {
  LOAD_REGS();
L_1091bca3: /* 1091bca3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1091bca6: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bcac(void) {
  LOAD_REGS();
L_1091bcac: /* 1091bcac: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 1091bcaf: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bcb5(void) {
  LOAD_REGS();
L_1091bcb5: /* 1091bcb5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bcb8: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bcbe(void) {
  LOAD_REGS();
L_1091bcbe: /* 1091bcbe: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bcc1: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bcc7(void) {
  LOAD_REGS();
L_1091bcc7: /* 1091bcc7: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bcca: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bcd0(void) {
  LOAD_REGS();
L_1091bcd0: /* 1091bcd0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bcd3: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bcd9(void) {
  LOAD_REGS();
L_1091bcd9: /* 1091bcd9: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bcdc: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bce2(void) {
  LOAD_REGS();
L_1091bce2: /* 1091bce2: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bce5: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bceb(void) {
  LOAD_REGS();
L_1091bceb: /* 1091bceb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091bcee: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bcf4(void) {
  LOAD_REGS();
L_1091bcf4: /* 1091bcf4: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 1091bcf7: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bcfd(void) {
  LOAD_REGS();
  goto L_1091bcfd;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bcfd: /* 1091bcfd: mov eax, 0x10927504 */
  eax = 0x10927504u;
/* 1091bd02: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bd30(void) {
  LOAD_REGS();
L_1091bd30: /* 1091bd30: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 1091bd33: jmp 0x109012ee */
  SPILL(); f_109012ee(); return;
}

void f_1091bd38(void) {
  LOAD_REGS();
  goto L_1091bd38;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bd38: /* 1091bd38: mov eax, 0x1092758c */
  eax = 0x1092758cu;
/* 1091bd3d: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bd50(void) {
  LOAD_REGS();
L_1091bd50: /* 1091bd50: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1091bd53: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bd59(void) {
  LOAD_REGS();
L_1091bd59: /* 1091bd59: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1091bd5c: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bd62(void) {
  LOAD_REGS();
L_1091bd62: /* 1091bd62: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091bd65: jmp 0x109012b2 */
  SPILL(); f_109012b2(); return;
}

void f_1091bd6a(void) {
  LOAD_REGS();
L_1091bd6a: /* 1091bd6a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1091bd6d: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bd73(void) {
  LOAD_REGS();
L_1091bd73: /* 1091bd73: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1091bd76: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bd7c(void) {
  LOAD_REGS();
L_1091bd7c: /* 1091bd7c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091bd7f: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bd85(void) {
  LOAD_REGS();
L_1091bd85: /* 1091bd85: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1091bd88: jmp 0x109012b2 */
  SPILL(); f_109012b2(); return;
}

void f_1091bd8d(void) {
  LOAD_REGS();
L_1091bd8d: /* 1091bd8d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1091bd90: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bd96(void) {
  LOAD_REGS();
L_1091bd96: /* 1091bd96: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1091bd99: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bd9f(void) {
  LOAD_REGS();
L_1091bd9f: /* 1091bd9f: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1091bda2: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bda8(void) {
  LOAD_REGS();
L_1091bda8: /* 1091bda8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091bdab: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bdb1(void) {
  LOAD_REGS();
L_1091bdb1: /* 1091bdb1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091bdb4: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bdba(void) {
  LOAD_REGS();
  goto L_1091bdba;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bdba: /* 1091bdba: mov eax, 0x10927660 */
  eax = 0x10927660u;
/* 1091bdbf: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bdf0(void) {
  LOAD_REGS();
  goto L_1091bdf0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bdf0: /* 1091bdf0: mov eax, 0x109276d4 */
  eax = 0x109276d4u;
/* 1091bdf5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091be00(void) {
  LOAD_REGS();
L_1091be00: /* 1091be00: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1091be03: jmp 0x109012b2 */
  SPILL(); f_109012b2(); return;
}

void f_1091be08(void) {
  LOAD_REGS();
L_1091be08: /* 1091be08: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1091be0b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091be0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091be10: je 0x1091be1e */
  if (zf) goto L_1091be1e;
L_1091be16: /* 1091be16: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1091be19: jmp 0x109012b2 */
  SPILL(); f_109012b2(); return;
L_1091be1e: /* 1091be1e: ret  */
  esp += 4; SPILL(); return;
}

void f_1091be1f(void) {
  LOAD_REGS();
L_1091be1f: /* 1091be1f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1091be22: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091be28(void) {
  LOAD_REGS();
  goto L_1091be28;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091be28: /* 1091be28: mov eax, 0x10927758 */
  eax = 0x10927758u;
/* 1091be2d: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091be40(void) {
  LOAD_REGS();
L_1091be40: /* 1091be40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091be43: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091be49(void) {
  LOAD_REGS();
  goto L_1091be49;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091be49: /* 1091be49: mov eax, 0x10927788 */
  eax = 0x10927788u;
/* 1091be4e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091be60(void) {
  LOAD_REGS();
L_1091be60: /* 1091be60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091be63: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091be69(void) {
  LOAD_REGS();
  goto L_1091be69;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091be69: /* 1091be69: mov eax, 0x109277b0 */
  eax = 0x109277b0u;
/* 1091be6e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091be80(void) {
  LOAD_REGS();
L_1091be80: /* 1091be80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091be83: jmp 0x109011a4 */
  SPILL(); f_109011a4(); return;
}

void f_1091be88(void) {
  LOAD_REGS();
  goto L_1091be88;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091be88: /* 1091be88: mov eax, 0x109277d8 */
  eax = 0x109277d8u;
/* 1091be8d: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bea0(void) {
  LOAD_REGS();
L_1091bea0: /* 1091bea0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bea3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bea6: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091beac(void) {
  LOAD_REGS();
  goto L_1091beac;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091beac: /* 1091beac: mov eax, 0x10927800 */
  eax = 0x10927800u;
/* 1091beb1: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bec0(void) {
  LOAD_REGS();
L_1091bec0: /* 1091bec0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bec3: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bec9(void) {
  LOAD_REGS();
  goto L_1091bec9;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bec9: /* 1091bec9: mov eax, 0x10927828 */
  eax = 0x10927828u;
/* 1091bece: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bee0(void) {
  LOAD_REGS();
L_1091bee0: /* 1091bee0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bee3: jmp 0x109011ef */
  SPILL(); f_109011ef(); return;
}

void f_1091bee8(void) {
  LOAD_REGS();
  goto L_1091bee8;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bee8: /* 1091bee8: mov eax, 0x10927850 */
  eax = 0x10927850u;
/* 1091beed: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bf00(void) {
  LOAD_REGS();
L_1091bf00: /* 1091bf00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bf03: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bf06: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bf0c(void) {
  LOAD_REGS();
  goto L_1091bf0c;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bf0c: /* 1091bf0c: mov eax, 0x10927878 */
  eax = 0x10927878u;
/* 1091bf11: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bf20(void) {
  LOAD_REGS();
L_1091bf20: /* 1091bf20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bf23: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091bf29(void) {
  LOAD_REGS();
  goto L_1091bf29;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bf29: /* 1091bf29: mov eax, 0x109278a0 */
  eax = 0x109278a0u;
/* 1091bf2e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bf40(void) {
  LOAD_REGS();
L_1091bf40: /* 1091bf40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bf43: jmp 0x10901226 */
  SPILL(); f_10901226(); return;
}

void f_1091bf48(void) {
  LOAD_REGS();
  goto L_1091bf48;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bf48: /* 1091bf48: mov eax, 0x109278c8 */
  eax = 0x109278c8u;
/* 1091bf4d: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bf60(void) {
  LOAD_REGS();
L_1091bf60: /* 1091bf60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bf63: jmp 0x10901226 */
  SPILL(); f_10901226(); return;
}

void f_1091bf68(void) {
  LOAD_REGS();
  goto L_1091bf68;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bf68: /* 1091bf68: mov eax, 0x109278f0 */
  eax = 0x109278f0u;
/* 1091bf6d: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bf80(void) {
  LOAD_REGS();
L_1091bf80: /* 1091bf80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bf83: jmp 0x10901226 */
  SPILL(); f_10901226(); return;
}

void f_1091bf88(void) {
  LOAD_REGS();
  goto L_1091bf88;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bf88: /* 1091bf88: mov eax, 0x10927918 */
  eax = 0x10927918u;
/* 1091bf8d: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bfa0(void) {
  LOAD_REGS();
L_1091bfa0: /* 1091bfa0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1091bfa3: jmp 0x10901005 */
  SPILL(); f_10901005(); return;
}

void f_1091bfa8(void) {
  LOAD_REGS();
L_1091bfa8: /* 1091bfa8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091bfab: jmp 0x10901226 */
  SPILL(); f_10901226(); return;
}

void f_1091bfb0(void) {
  LOAD_REGS();
L_1091bfb0: /* 1091bfb0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1091bfb3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bfb6: jmp 0x109012da */
  SPILL(); f_109012da(); return;
}

void f_1091bfbb(void) {
  LOAD_REGS();
L_1091bfbb: /* 1091bfbb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1091bfbe: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091bfc1: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091bfc7(void) {
  LOAD_REGS();
  goto L_1091bfc7;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bfc7: /* 1091bfc7: mov eax, 0x10927958 */
  eax = 0x10927958u;
/* 1091bfcc: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bfe0(void) {
  LOAD_REGS();
  goto L_1091bfe0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bfe0: /* 1091bfe0: mov eax, 0x109279c0 */
  eax = 0x109279c0u;
/* 1091bfe5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091bff0(void) {
  LOAD_REGS();
  goto L_1091bff0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091bff0: /* 1091bff0: mov eax, 0x10927a2c */
  eax = 0x10927a2cu;
/* 1091bff5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c000(void) {
  LOAD_REGS();
  goto L_1091c000;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c000: /* 1091c000: mov eax, 0x10927a98 */
  eax = 0x10927a98u;
/* 1091c005: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c010(void) {
  LOAD_REGS();
  goto L_1091c010;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c010: /* 1091c010: mov eax, 0x10927b04 */
  eax = 0x10927b04u;
/* 1091c015: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c020(void) {
  LOAD_REGS();
  goto L_1091c020;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c020: /* 1091c020: mov eax, 0x10927b70 */
  eax = 0x10927b70u;
/* 1091c025: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c030(void) {
  LOAD_REGS();
  goto L_1091c030;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c030: /* 1091c030: mov eax, 0x10927bdc */
  eax = 0x10927bdcu;
/* 1091c035: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c040(void) {
  LOAD_REGS();
  goto L_1091c040;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c040: /* 1091c040: mov eax, 0x10927c48 */
  eax = 0x10927c48u;
/* 1091c045: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c050(void) {
  LOAD_REGS();
  goto L_1091c050;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c050: /* 1091c050: mov eax, 0x10927cb4 */
  eax = 0x10927cb4u;
/* 1091c055: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c060(void) {
  LOAD_REGS();
  goto L_1091c060;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c060: /* 1091c060: mov eax, 0x10927d20 */
  eax = 0x10927d20u;
/* 1091c065: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c070(void) {
  LOAD_REGS();
  goto L_1091c070;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c070: /* 1091c070: mov eax, 0x10927d8c */
  eax = 0x10927d8cu;
/* 1091c075: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c080(void) {
  LOAD_REGS();
  goto L_1091c080;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c080: /* 1091c080: mov eax, 0x10927df8 */
  eax = 0x10927df8u;
/* 1091c085: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c090(void) {
  LOAD_REGS();
  goto L_1091c090;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c090: /* 1091c090: mov eax, 0x10927e64 */
  eax = 0x10927e64u;
/* 1091c095: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c0a0(void) {
  LOAD_REGS();
L_1091c0a0: /* 1091c0a0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1091c0a3: jmp 0x1090112c */
  SPILL(); f_1090112c(); return;
}

void f_1091c0a8(void) {
  LOAD_REGS();
  goto L_1091c0a8;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c0a8: /* 1091c0a8: mov eax, 0x10927ed8 */
  eax = 0x10927ed8u;
/* 1091c0ad: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c0c0(void) {
  LOAD_REGS();
L_1091c0c0: /* 1091c0c0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1091c0c3: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c0c9(void) {
  LOAD_REGS();
L_1091c0c9: /* 1091c0c9: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 1091c0cc: jmp 0x109010e6 */
  SPILL(); f_109010e6(); return;
}

void f_1091c0d1(void) {
  LOAD_REGS();
L_1091c0d1: /* 1091c0d1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091c0d4: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c0da(void) {
  LOAD_REGS();
L_1091c0da: /* 1091c0da: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 1091c0dd: jmp 0x1090139d */
  SPILL(); f_1090139d(); return;
}

void f_1091c0e2(void) {
  LOAD_REGS();
L_1091c0e2: /* 1091c0e2: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 1091c0e5: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c0eb(void) {
  LOAD_REGS();
L_1091c0eb: /* 1091c0eb: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 1091c0ee: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c0f4(void) {
  LOAD_REGS();
  goto L_1091c0f4;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c0f4: /* 1091c0f4: mov eax, 0x10927f74 */
  eax = 0x10927f74u;
/* 1091c0f9: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c110(void) {
  LOAD_REGS();
  goto L_1091c110;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c110: /* 1091c110: mov eax, 0x10927fe4 */
  eax = 0x10927fe4u;
/* 1091c115: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c120(void) {
  LOAD_REGS();
L_1091c120: /* 1091c120: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1091c123: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c129(void) {
  LOAD_REGS();
L_1091c129: /* 1091c129: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 1091c12c: jmp 0x10901109 */
  SPILL(); f_10901109(); return;
}

void f_1091c131(void) {
  LOAD_REGS();
  goto L_1091c131;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c131: /* 1091c131: mov eax, 0x10928060 */
  eax = 0x10928060u;
/* 1091c136: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c150(void) {
  LOAD_REGS();
L_1091c150: /* 1091c150: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1091c153: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c159(void) {
  LOAD_REGS();
L_1091c159: /* 1091c159: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1091c15c: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c162(void) {
  LOAD_REGS();
L_1091c162: /* 1091c162: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1091c165: jmp 0x109011a4 */
  SPILL(); f_109011a4(); return;
}

void f_1091c16a(void) {
  LOAD_REGS();
L_1091c16a: /* 1091c16a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1091c16d: jmp 0x10901145 */
  SPILL(); f_10901145(); return;
}

void f_1091c172(void) {
  LOAD_REGS();
L_1091c172: /* 1091c172: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1091c175: jmp 0x109011a4 */
  SPILL(); f_109011a4(); return;
}

void f_1091c17a(void) {
  LOAD_REGS();
L_1091c17a: /* 1091c17a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1091c17d: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091c183(void) {
  LOAD_REGS();
  goto L_1091c183;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c183: /* 1091c183: mov eax, 0x109280fc */
  eax = 0x109280fcu;
/* 1091c188: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c1a0(void) {
  LOAD_REGS();
L_1091c1a0: /* 1091c1a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c1a3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091c1a6: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c1ac(void) {
  LOAD_REGS();
  goto L_1091c1ac;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c1ac: /* 1091c1ac: mov eax, 0x10928130 */
  eax = 0x10928130u;
/* 1091c1b1: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c1c0(void) {
  LOAD_REGS();
L_1091c1c0: /* 1091c1c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c1c3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091c1c6: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c1cc(void) {
  LOAD_REGS();
  goto L_1091c1cc;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c1cc: /* 1091c1cc: mov eax, 0x10928158 */
  eax = 0x10928158u;
/* 1091c1d1: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c1e0(void) {
  LOAD_REGS();
L_1091c1e0: /* 1091c1e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c1e3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091c1e6: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c1ec(void) {
  LOAD_REGS();
L_1091c1ec: /* 1091c1ec: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 1091c1ef: jmp 0x109011a4 */
  SPILL(); f_109011a4(); return;
}

void f_1091c1f4(void) {
  LOAD_REGS();
  goto L_1091c1f4;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c1f4: /* 1091c1f4: mov eax, 0x10928188 */
  eax = 0x10928188u;
/* 1091c1f9: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c210(void) {
  LOAD_REGS();
L_1091c210: /* 1091c210: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c213: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091c219(void) {
  LOAD_REGS();
  goto L_1091c219;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c219: /* 1091c219: mov eax, 0x109281b0 */
  eax = 0x109281b0u;
/* 1091c21e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c230(void) {
  LOAD_REGS();
L_1091c230: /* 1091c230: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c233: jmp 0x109011ef */
  SPILL(); f_109011ef(); return;
}

void f_1091c238(void) {
  LOAD_REGS();
  goto L_1091c238;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c238: /* 1091c238: mov eax, 0x109281d8 */
  eax = 0x109281d8u;
/* 1091c23d: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c250(void) {
  LOAD_REGS();
L_1091c250: /* 1091c250: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c253: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091c256: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c25c(void) {
  LOAD_REGS();
L_1091c25c: /* 1091c25c: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 1091c25f: jmp 0x109011a4 */
  SPILL(); f_109011a4(); return;
}

void f_1091c264(void) {
  LOAD_REGS();
  goto L_1091c264;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c264: /* 1091c264: mov eax, 0x10928208 */
  eax = 0x10928208u;
/* 1091c269: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c280(void) {
  LOAD_REGS();
L_1091c280: /* 1091c280: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c283: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091c286: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c28c(void) {
  LOAD_REGS();
  goto L_1091c28c;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c28c: /* 1091c28c: mov eax, 0x10928230 */
  eax = 0x10928230u;
/* 1091c291: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c2a0(void) {
  LOAD_REGS();
L_1091c2a0: /* 1091c2a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c2a3: jmp 0x109011ef */
  SPILL(); f_109011ef(); return;
}

void f_1091c2a8(void) {
  LOAD_REGS();
  goto L_1091c2a8;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c2a8: /* 1091c2a8: mov eax, 0x10928258 */
  eax = 0x10928258u;
/* 1091c2ad: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c2c0(void) {
  LOAD_REGS();
L_1091c2c0: /* 1091c2c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c2c3: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_1091c2c9(void) {
  LOAD_REGS();
  goto L_1091c2c9;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c2c9: /* 1091c2c9: mov eax, 0x10928280 */
  eax = 0x10928280u;
/* 1091c2ce: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c2e0(void) {
  LOAD_REGS();
  goto L_1091c2e0;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c2e0: /* 1091c2e0: mov eax, 0x109282e4 */
  eax = 0x109282e4u;
/* 1091c2e5: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c2f0(void) {
  LOAD_REGS();
L_1091c2f0: /* 1091c2f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091c2f3: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c2f9(void) {
  LOAD_REGS();
L_1091c2f9: /* 1091c2f9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091c2fc: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c302(void) {
  LOAD_REGS();
  goto L_1091c302;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c302: /* 1091c302: mov eax, 0x10928360 */
  eax = 0x10928360u;
/* 1091c307: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c320(void) {
  LOAD_REGS();
L_1091c320: /* 1091c320: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091c323: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c329(void) {
  LOAD_REGS();
L_1091c329: /* 1091c329: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1091c32c: jmp 0x1090139d */
  SPILL(); f_1090139d(); return;
}

void f_1091c331(void) {
  LOAD_REGS();
  goto L_1091c331;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c331: /* 1091c331: mov eax, 0x109283dc */
  eax = 0x109283dcu;
/* 1091c336: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c350(void) {
  LOAD_REGS();
L_1091c350: /* 1091c350: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091c353: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c359(void) {
  LOAD_REGS();
L_1091c359: /* 1091c359: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1091c35c: jmp 0x109011a4 */
  SPILL(); f_109011a4(); return;
}

void f_1091c361(void) {
  LOAD_REGS();
L_1091c361: /* 1091c361: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1091c364: jmp 0x10901145 */
  SPILL(); f_10901145(); return;
}

void f_1091c369(void) {
  LOAD_REGS();
  goto L_1091c369;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c369: /* 1091c369: mov eax, 0x10928460 */
  eax = 0x10928460u;
/* 1091c36e: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c380(void) {
  LOAD_REGS();
L_1091c380: /* 1091c380: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091c383: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c389(void) {
  LOAD_REGS();
L_1091c389: /* 1091c389: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 1091c38c: jmp 0x10901145 */
  SPILL(); f_10901145(); return;
}

void f_1091c391(void) {
  LOAD_REGS();
L_1091c391: /* 1091c391: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1091c394: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c39a(void) {
  LOAD_REGS();
  goto L_1091c39a;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c39a: /* 1091c39a: mov eax, 0x109284e4 */
  eax = 0x109284e4u;
/* 1091c39f: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c3b0(void) {
  LOAD_REGS();
L_1091c3b0: /* 1091c3b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c3b3: jmp 0x109011a4 */
  SPILL(); f_109011a4(); return;
}

void f_1091c3b8(void) {
  LOAD_REGS();
  goto L_1091c3b8;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c3b8: /* 1091c3b8: mov eax, 0x10928514 */
  eax = 0x10928514u;
/* 1091c3bd: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c3d0(void) {
  LOAD_REGS();
L_1091c3d0: /* 1091c3d0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091c3d3: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c3d9(void) {
  LOAD_REGS();
  goto L_1091c3d9;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c3d9: /* 1091c3d9: mov eax, 0x10928580 */
  eax = 0x10928580u;
/* 1091c3de: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c3f0(void) {
  LOAD_REGS();
L_1091c3f0: /* 1091c3f0: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1091c3f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091c3f4: call 0x1090119f */
  esp -= 4; W32(esp, 0x1091c3f9u); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 1091c3f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091c3fa: ret  */
  esp += 4; SPILL(); return;
}

void f_1091c3fb(void) {
  LOAD_REGS();
  goto L_1091c3fb;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c3fb: /* 1091c3fb: mov eax, 0x109285b0 */
  eax = 0x109285b0u;
/* 1091c400: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c410(void) {
  LOAD_REGS();
L_1091c410: /* 1091c410: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1091c413: jmp 0x10901005 */
  SPILL(); f_10901005(); return;
}

void f_1091c418(void) {
  LOAD_REGS();
L_1091c418: /* 1091c418: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091c41c: je 0x1091c430 */
  if (zf) goto L_1091c430;
L_1091c422: /* 1091c422: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1091c425: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091c428: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 1091c42b: jmp 0x1091c437 */
  goto L_1091c437;
L_1091c430: /* 1091c430: mov dword ptr [ebp - 0xc], 0 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x0u);
L_1091c437: /* 1091c437: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1091c43a: jmp 0x109012da */
  SPILL(); f_109012da(); return;
}

void f_1091c43f(void) {
  LOAD_REGS();
L_1091c43f: /* 1091c43f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1091c442: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091c445: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c44b(void) {
  LOAD_REGS();
L_1091c44b: /* 1091c44b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1091c44e: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091c451: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c457(void) {
  LOAD_REGS();
  goto L_1091c457;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c457: /* 1091c457: mov eax, 0x10928634 */
  eax = 0x10928634u;
/* 1091c45c: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091c480(void) {
  LOAD_REGS();
L_1091c480: /* 1091c480: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 1091c483: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c489(void) {
  LOAD_REGS();
L_1091c489: /* 1091c489: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1091c48c: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c492(void) {
  LOAD_REGS();
L_1091c492: /* 1091c492: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1091c495: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c49b(void) {
  LOAD_REGS();
L_1091c49b: /* 1091c49b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1091c49e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091c49f: call 0x1090119f */
  esp -= 4; W32(esp, 0x1091c4a4u); SPILL(); f_1090119f(); if (g_unwind) return; RELOAD();
/* 1091c4a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091c4a5: ret  */
  esp += 4; SPILL(); return;
}

void f_1091c4a6(void) {
  LOAD_REGS();
L_1091c4a6: /* 1091c4a6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1091c4a9: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c4af(void) {
  LOAD_REGS();
L_1091c4af: /* 1091c4af: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091c4b2: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c4b8(void) {
  LOAD_REGS();
L_1091c4b8: /* 1091c4b8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1091c4bb: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c4c1(void) {
  LOAD_REGS();
L_1091c4c1: /* 1091c4c1: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 1091c4c4: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c4ca(void) {
  LOAD_REGS();
L_1091c4ca: /* 1091c4ca: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 1091c4cd: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1091c4d3(void) {
  LOAD_REGS();
  goto L_1091c4d3;
L_1091875e: /* 1091875e: jmp dword ptr [0x1095a088] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_1091c4d3: /* 1091c4d3: mov eax, 0x109286e8 */
  eax = 0x109286e8u;
/* 1091c4d8: jmp 0x1091875e */
  goto L_1091875e;
}

void f_1091d5d0(void) {
  LOAD_REGS();
L_1091d5d0: /* 1091d5d0: mov ecx, 0x10931548 */
  ecx = 0x10931548u;
/* 1091d5d5: call dword ptr [0x10959b10] */
  esp -= 4; W32(esp, 0x1091d5dbu); SPILL(); f_4e3481(); if (g_unwind) return; /* Core!??0FMalloc@@QAE@XZ */ RELOAD();
/* 1091d5db: xor eax, eax */
  eax = 0;
/* 1091d5dd: mov dword ptr [0x10931548], 0x10920388 */
  W32((uint32_t)(0x10931548u), 0x10920388u);
/* 1091d5e7: mov dword ptr [0x10951ba8], eax */
  W32((uint32_t)(0x10951ba8u), eax);
/* 1091d5ec: mov dword ptr [0x10951bac], eax */
  W32((uint32_t)(0x10951bacu), eax);
/* 1091d5f1: mov dword ptr [0x10951bb0], eax */
  W32((uint32_t)(0x10951bb0u), eax);
/* 1091d5f6: mov dword ptr [0x10951bb4], eax */
  W32((uint32_t)(0x10951bb4u), eax);
/* 1091d5fb: mov dword ptr [0x10951bb8], eax */
  W32((uint32_t)(0x10951bb8u), eax);
/* 1091d600: mov dword ptr [0x10951bbc], eax */
  W32((uint32_t)(0x10951bbcu), eax);
/* 1091d605: mov dword ptr [0x10951bc0], eax */
  W32((uint32_t)(0x10951bc0u), eax);
/* 1091d60a: mov dword ptr [0x10951bc4], eax */
  W32((uint32_t)(0x10951bc4u), eax);
/* 1091d60f: mov dword ptr [0x10951bc8], eax */
  W32((uint32_t)(0x10951bc8u), eax);
/* 1091d614: ret  */
  esp += 4; SPILL(); return;
}

void f_1091d640(void) {
  LOAD_REGS();
L_1091d640: /* 1091d640: mov ecx, 0x10951bd8 */
  ecx = 0x10951bd8u;
/* 1091d645: call dword ptr [0x10959b08] */
  esp -= 4; W32(esp, 0x1091d64bu); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 1091d64b: xor eax, eax */
  eax = 0;
/* 1091d64d: push 0x1091e750 */
  { uint32_t v = 0x1091e750u; esp -= 4; W32(esp, v); }
/* 1091d652: mov dword ptr [0x10951bd8], 0x10920424 */
  W32((uint32_t)(0x10951bd8u), 0x10920424u);
/* 1091d65c: mov dword ptr [0x10951bdc], eax */
  W32((uint32_t)(0x10951bdcu), eax);
/* 1091d661: mov dword ptr [0x109523e0], eax */
  W32((uint32_t)(0x109523e0u), eax);
/* 1091d666: mov dword ptr [0x109523e4], eax */
  W32((uint32_t)(0x109523e4u), eax);
/* 1091d66b: mov word ptr [0x10951be0], ax */
  W16((uint32_t)(0x10951be0u), (eax & 0xffffu));
/* 1091d671: call 0x109187ea */
  esp -= 4; W32(esp, 0x1091d676u); SPILL(); f_109187ea(); if (g_unwind) return; RELOAD();
/* 1091d676: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091d677: ret  */
  esp += 4; SPILL(); return;
}

void f_1091d690(void) {
  LOAD_REGS();
L_1091d690: /* 1091d690: mov ecx, 0x10951bcc */
  ecx = 0x10951bccu;
/* 1091d695: call dword ptr [0x10959d30] */
  esp -= 4; W32(esp, 0x1091d69bu); SPILL(); f_4e146f(); if (g_unwind) return; /* Core!??0FOutputDeviceError@@QAE@XZ */ RELOAD();
/* 1091d69b: xor eax, eax */
  eax = 0;
/* 1091d69d: mov dword ptr [0x10951bcc], 0x10920430 */
  W32((uint32_t)(0x10951bccu), 0x10920430u);
/* 1091d6a7: mov dword ptr [0x10951bd0], eax */
  W32((uint32_t)(0x10951bd0u), eax);
/* 1091d6ac: mov dword ptr [0x10951bd4], eax */
  W32((uint32_t)(0x10951bd4u), eax);
/* 1091d6b1: ret  */
  esp += 4; SPILL(); return;
}

void f_1091d6d0(void) {
  LOAD_REGS();
L_1091d6d0: /* 1091d6d0: mov ecx, 0x109523e8 */
  ecx = 0x109523e8u;
/* 1091d6d5: call dword ptr [0x10959cf4] */
  esp -= 4; W32(esp, 0x1091d6dbu); SPILL(); f_4e3076(); if (g_unwind) return; /* Core!??0FFeedbackContext@@QAE@XZ */ RELOAD();
/* 1091d6db: xor eax, eax */
  eax = 0;
/* 1091d6dd: mov dword ptr [0x109523e8], 0x10920440 */
  W32((uint32_t)(0x109523e8u), 0x10920440u);
/* 1091d6e7: mov dword ptr [0x109523f4], eax */
  W32((uint32_t)(0x109523f4u), eax);
/* 1091d6ec: mov dword ptr [0x109523f8], eax */
  W32((uint32_t)(0x109523f8u), eax);
/* 1091d6f1: mov dword ptr [0x109523fc], eax */
  W32((uint32_t)(0x109523fcu), eax);
/* 1091d6f6: mov dword ptr [0x10952400], eax */
  W32((uint32_t)(0x10952400u), eax);
/* 1091d6fb: mov dword ptr [0x10952404], eax */
  W32((uint32_t)(0x10952404u), eax);
/* 1091d700: ret  */
  esp += 4; SPILL(); return;
}

void f_1091d720(void) {
  LOAD_REGS();
L_1091d720: /* 1091d720: mov ecx, 0x10952408 */
  ecx = 0x10952408u;
/* 1091d725: call dword ptr [0x10959cdc] */
  esp -= 4; W32(esp, 0x1091d72bu); SPILL(); f_4e2275(); if (g_unwind) return; /* Core!??0FFileManager@@QAE@XZ */ RELOAD();
/* 1091d72b: mov dword ptr [0x10952408], 0x10920984 */
  W32((uint32_t)(0x10952408u), 0x10920984u);
/* 1091d735: ret  */
  esp += 4; SPILL(); return;
}

void f_1091e750(void) {
  LOAD_REGS();
L_1091e750: /* 1091e750: mov ecx, dword ptr [0x10951bdc] */
  ecx = R32((uint32_t)(0x10951bdcu));
/* 1091e756: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091e758: mov dword ptr [0x10951bd8], 0x10920424 */
  W32((uint32_t)(0x10951bd8u), 0x10920424u);
/* 1091e762: je 0x1091e7ab */
  if (zf) goto L_1091e7ab;
L_1091e764: /* 1091e764: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1091e766: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x1091e769u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1091e769: mov eax, dword ptr [0x10951bdc] */
  eax = R32((uint32_t)(0x10951bdcu));
/* 1091e76e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091e770: je 0x1091e7ab */
  if (zf) goto L_1091e7ab;
L_1091e772: /* 1091e772: call dword ptr [0x10959d50] */
  esp -= 4; W32(esp, 0x1091e778u); SPILL(); f_4e1ebf(); if (g_unwind) return; /* Core!?appTimestamp@@YAPBGXZ */ RELOAD();
/* 1091e778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091e779: push 0x1092e768 */
  { uint32_t v = 0x1092e768u; esp -= 4; W32(esp, v); }
/* 1091e77e: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 1091e783: push 0x10951bd8 */
  { uint32_t v = 0x10951bd8u; esp -= 4; W32(esp, v); }
/* 1091e788: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x1091e78eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 1091e78e: mov ecx, dword ptr [0x10951bdc] */
  ecx = R32((uint32_t)(0x10951bdcu));
/* 1091e794: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091e797: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091e799: je 0x1091e7a1 */
  if (zf) goto L_1091e7a1;
L_1091e79b: /* 1091e79b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1091e79d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1091e79f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1091e7a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1091e7a1: /* 1091e7a1: mov dword ptr [0x10951bdc], 0 */
  W32((uint32_t)(0x10951bdcu), 0x0u);
L_1091e7ab: /* 1091e7ab: ret  */
  esp += 4; SPILL(); return;
}
