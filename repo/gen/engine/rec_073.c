#include "recomp.h"
#include "rec_mod.h"

void f_8535ad(void) {
  LOAD_REGS();
L_8535ad: /* 8535ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8535b0: /* 8535b0: cmp edi, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8535b3: jge 0x853649 */
  if ((sf == of)) goto L_853649;
L_8535b9: /* 8535b9: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8535bc: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 8535bf: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8535c2: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8535c5: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 8535c8: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8535cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8535cd: add ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8535d0: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x8535d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8535d6: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 8535dc: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 8535e2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8535e4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8535e7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8535ea: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8535efu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8535ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8535f1: jne 0x85363d */
  if (!zf) goto L_85363d;
L_8535f3: /* 8535f3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8535f5: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 8535f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8535fa: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 8535fd: je 0x853632 */
  if (zf) goto L_853632;
L_8535ff: /* 8535ff: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 853602: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 853606: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x85360cu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 85360c: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 85360f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 853613: call 0x6cb555 */
  esp -= 4; W32(esp, 0x853618u); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 853618: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 85361b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85361f: call 0x6cae43 */
  esp -= 4; W32(esp, 0x853624u); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 853624: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 85362a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 85362c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85362e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85362f: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x853632u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_853632: /* 853632: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 853634: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 853635: mov ecx, ebx */
  ecx = ebx;
/* 853637: call 0x6c1cfd */
  esp -= 4; W32(esp, 0x85363cu); SPILL(); f_6c1cfd(); if (g_unwind) return; RELOAD();
/* 85363c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_85363d: /* 85363d: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 853640: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853643: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 853644: jmp 0x8535b0 */
  goto L_8535b0;
L_853649: /* 853649: xor eax, eax */
  eax = 0;
L_85364b: /* 85364b: cmp eax, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85364e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 853651: jge 0x853837 */
  if ((sf == of)) goto L_853837;
L_853657: /* 853657: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 85365a: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 85365d: test dword ptr [edx + 0x24], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x24u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853664: je 0x853675 */
  if (zf) goto L_853675;
L_853666: /* 853666: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 853668: test byte ptr [ecx + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85366f: je 0x853831 */
  if (zf) goto L_853831;
L_853675: /* 853675: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 85367b: xor edi, edi */
  edi = 0;
/* 85367d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_853680: /* 853680: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853682: je 0x8536c2 */
  if (zf) goto L_8536c2;
L_853684: /* 853684: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 853686: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 853688: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 85368b: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85368e: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_853690: /* 853690: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 853694: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853697: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_853699: /* 853699: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 85369d: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8536a0: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_8536a2: /* 8536a2: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8536a5: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8536a8: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_8536aa: /* 8536aa: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 8536ad: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8536b0: jne 0x8536bd */
  if (!zf) goto L_8536bd;
L_8536b2: /* 8536b2: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8536b9: jge 0x8536bd */
  if ((sf == of)) goto L_8536bd;
L_8536bb: /* 8536bb: mov edi, eax */
  edi = eax;
L_8536bd: /* 8536bd: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8536c0: jmp 0x853680 */
  goto L_853680;
L_8536c2: /* 8536c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8536c4: jne 0x853768 */
  if (!zf) goto L_853768;
L_8536ca: /* 8536ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8536cc: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8536ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8536d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8536d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8536d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8536db: je 0x853737 */
  if (zf) goto L_853737;
L_8536dd: /* 8536dd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8536df: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8536e3: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8536e7: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 8536ea: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 8536ed: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 8536f0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8536f3: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8536f6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8536f9: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 8536fc: xor ecx, ecx */
  ecx = 0;
/* 8536fe: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853700: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 853707: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 85370d: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 853714: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 853717: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 85371a: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 85371d: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 853720: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 853723: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 85372a: je 0x853733 */
  if (zf) goto L_853733;
L_85372c: /* 85372c: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_853733: /* 853733: mov edi, eax */
  edi = eax;
/* 853735: jmp 0x853739 */
  goto L_853739;
L_853737: /* 853737: xor edi, edi */
  edi = 0;
L_853739: /* 853739: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85373b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85373d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853742: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853748u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853748: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85374a: je 0x85375e */
  if (zf) goto L_85375e;
L_85374c: /* 85374c: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 853752: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 853754: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853757: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 85375c: jmp 0x853768 */
  goto L_853768;
L_85375e: /* 85375e: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_853768: /* 853768: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85376a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 85376c: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853771: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853777u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853779: je 0x8537a4 */
  if (zf) goto L_8537a4;
L_85377b: /* 85377b: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 853781: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 853784: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 853787: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85378a: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 85378d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853790: mov dword ptr [eax], 0xa16b50 */
  W32((uint32_t)(eax), 0xa16b50u);
/* 853796: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 853799: lea edx, [esi + esi*2 - 6] */
  edx = (uint32_t)(esi + esi*2 + 0xfffffffau);
/* 85379d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8537a0: mov esi, eax */
  esi = eax;
/* 8537a2: jmp 0x8537a6 */
  goto L_8537a6;
L_8537a4: /* 8537a4: xor esi, esi */
  esi = 0;
L_8537a6: /* 8537a6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8537a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8537ab: je 0x8537b7 */
  if (zf) goto L_8537b7;
L_8537ad: /* 8537ad: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8537b0: sub ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8537b2: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8537b5: jne 0x8537f7 */
  if (!zf) goto L_8537f7;
L_8537b7: /* 8537b7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8537b9: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8537be: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8537c3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8537c9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8537c9: mov dword ptr [eax + 0x84], 0 */
  W32((uint32_t)(eax + 0x84u), 0x0u);
/* 8537d3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8537d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8537d8: je 0x8537ec */
  if (zf) goto L_8537ec;
L_8537da: /* 8537da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8537dc: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8537df: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8537e1: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8537e4: mov dword ptr [ecx + 0x84], eax */
  W32((uint32_t)(ecx + 0x84u), eax);
/* 8537ea: jmp 0x8537f4 */
  goto L_8537f4;
L_8537ec: /* 8537ec: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8537f2: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_8537f4: /* 8537f4: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_8537f7: /* 8537f7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8537fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8537fc: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8537ff: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 853801: mov dword ptr [eax + edx*4 + 4], esi */
  W32((uint32_t)(eax + edx*4 + 0x4u), esi);
/* 853805: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 853808: mov ebx, dword ptr [edi + 0x24] */
  ebx = R32((uint32_t)(edi + 0x24u));
/* 85380b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85380e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85380f: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 853812: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 853815: imul eax, dword ptr [edi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x20u)));
  eax = (uint32_t)r;
  }
/* 853819: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85381b: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 85381e: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 853821: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 853824: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 853827: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 853829: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85382b: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 85382e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_853831: /* 853831: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853832: jmp 0x85364b */
  goto L_85364b;
L_853837: /* 853837: xor eax, eax */
  eax = 0;
L_853839: /* 853839: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85383c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85383f: jge 0x853cdd */
  if ((sf == of)) goto L_853cdd;
L_853845: /* 853845: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 853848: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 85384b: test dword ptr [edx + 0x24], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x24u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853852: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 853855: je 0x853864 */
  if (zf) goto L_853864;
L_853857: /* 853857: test byte ptr [eax + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85385e: je 0x853ca1 */
  if (zf) goto L_853ca1;
L_853864: /* 853864: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 85386a: mov dword ptr [ebp + 8], 0x10 */
  W32((uint32_t)(ebp + 0x8u), 0x10u);
/* 853871: mov ebx, 0xc */
  ebx = 0xcu;
/* 853876: lea esi, [ebp - 0x178] */
  esi = (uint32_t)(ebp + 0xfffffe88u);
/* 85387c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_853880: /* 853880: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 853883: js 0x85388d */
  if (sf) goto L_85388d;
L_853885: /* 853885: mov ecx, esi */
  ecx = esi;
/* 853887: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x853889u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 853889: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85388b: jmp 0x853880 */
  goto L_853880;
L_85388d: /* 85388d: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 853893: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x853899u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 853899: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 85389f: mov dword ptr [ebp + 8], 3 */
  W32((uint32_t)(ebp + 0x8u), 0x3u);
/* 8538a6: mov ebx, 0xc */
  ebx = 0xcu;
/* 8538ab: lea esi, [ebp - 0x8c] */
  esi = (uint32_t)(ebp + 0xffffff74u);
L_8538b1: /* 8538b1: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8538b4: js 0x8538be */
  if (sf) goto L_8538be;
L_8538b6: /* 8538b6: mov ecx, esi */
  ecx = esi;
/* 8538b8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8538bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8538ba: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8538bc: jmp 0x8538b1 */
  goto L_8538b1;
L_8538be: /* 8538be: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* 8538c4: call 0x6c5aec */
  esp -= 4; W32(esp, 0x8538c9u); SPILL(); f_6c5aec(); if (g_unwind) return; RELOAD();
/* 8538c9: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8538cc: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8538cf: xor eax, eax */
  eax = 0;
L_8538d1: /* 8538d1: movzx edx, byte ptr [esi + 0x56] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 8538d5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8538d7: jge 0x85390f */
  if ((sf == of)) goto L_85390f;
L_8538d9: /* 8538d9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8538db: mov ebx, dword ptr [ecx + 0x68] */
  ebx = R32((uint32_t)(ecx + 0x68u));
/* 8538de: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8538e1: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 8538e7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8538e9: mov edx, dword ptr [ebx + edx*8] */
  edx = R32((uint32_t)(ebx + edx*8));
/* 8538ec: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8538ef: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8538f2: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8538f4: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8538f7: lea ecx, [ebp + ecx*4 - 0x178] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffe88u);
/* 8538fe: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 853900: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 853903: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 853906: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 853909: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85390c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85390d: jmp 0x8538d1 */
  goto L_8538d1;
L_85390f: /* 85390f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 853912: mov eax, esi */
  eax = esi;
/* 853914: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 853916: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 853919: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85391c: mov dword ptr [ebp - 0x19c], ecx */
  W32((uint32_t)(ebp + 0xfffffe64u), ecx);
/* 853922: movzx ecx, byte ptr [esi + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x56u)));
/* 853926: mov dword ptr [ebp - 0x198], edx */
  W32((uint32_t)(ebp + 0xfffffe68u), edx);
/* 85392c: mov dword ptr [ebp - 0x194], eax */
  W32((uint32_t)(ebp + 0xfffffe6cu), eax);
/* 853932: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 853938: xor esi, esi */
  esi = 0;
/* 85393a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_853940: /* 853940: cmp esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853943: jge 0x8539a5 */
  if ((sf == of)) goto L_8539a5;
L_853945: /* 853945: mov edx, esi */
  edx = esi;
/* 853947: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 85394a: lea eax, [edx + edi + 0xbc] */
  eax = (uint32_t)(edx + edi + 0xbcu);
/* 853951: mov ecx, eax */
  ecx = eax;
/* 853953: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 853955: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 853958: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 85395b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85395e: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 853961: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 853964: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 853967: mov eax, edx */
  eax = edx;
/* 853969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85396a: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 85396d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85396e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 853971: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 853974: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85397au); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85397a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85397c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85397d: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 853980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853981: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* 853987: call 0x6cb096 */
  esp -= 4; W32(esp, 0x85398cu); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 85398c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85398e: jne 0x8539a2 */
  if (!zf) goto L_8539a2;
L_853990: /* 853990: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853993: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 853999: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85399c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85399d: jmp 0x853839 */
  goto L_853839;
L_8539a2: /* 8539a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8539a3: jmp 0x853940 */
  goto L_853940;
L_8539a5: /* 8539a5: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 8539ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8539ad: jle 0x853ca1 */
  if ((zf || sf != of)) goto L_853ca1;
L_8539b3: /* 8539b3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8539b6: mov cl, byte ptr [eax + 0x20] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x20u))) & 0xffu);
/* 8539b9: xor edi, edi */
  edi = 0;
/* 8539bb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8539bd: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8539c0: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8539c3: je 0x853a21 */
  if (zf) goto L_853a21;
L_8539c5: /* 8539c5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8539c8: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 8539cb: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_8539ce: /* 8539ce: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
L_8539d1: /* 8539d1: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 8539d7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8539da: xor esi, esi */
  esi = 0;
/* 8539dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8539e0: /* 8539e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8539e2: je 0x853ada */
  if (zf) goto L_853ada;
L_8539e8: /* 8539e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8539ea: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 8539ed: cmp ebx, dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8539f0: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_8539f2: /* 8539f2: movzx ebx, byte ptr [edi + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x21u)));
/* 8539f6: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8539f9: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_8539fb: /* 8539fb: movzx ebx, byte ptr [edi + 0x20] */
  ebx = (uint32_t)(R8((uint32_t)(edi + 0x20u)));
/* 8539ff: cmp dword ptr [eax + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a02: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_853a04: /* 853a04: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 853a07: cmp dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a0a: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_853a0c: /* 853a0c: cmp dword ptr [eax + 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a0f: jne 0x853a1c */
  if (!zf) goto L_853a1c;
L_853a11: /* 853a11: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853a18: jge 0x853a1c */
  if ((sf == of)) goto L_853a1c;
L_853a1a: /* 853a1a: mov esi, eax */
  esi = eax;
L_853a1c: /* 853a1c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 853a1f: jmp 0x8539e0 */
  goto L_8539e0;
L_853a21: /* 853a21: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853a24: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 853a27: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a29: je 0x853a3f */
  if (zf) goto L_853a3f;
L_853a2b: /* 853a2b: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 853a30: mov ecx, esi */
  ecx = esi;
/* 853a32: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x853a38u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 853a38: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a3a: mov dword ptr [ebp + 0x1c], esi */
  W32((uint32_t)(ebp + 0x1cu), esi);
/* 853a3d: jne 0x853a42 */
  if (!zf) goto L_853a42;
L_853a3f: /* 853a3f: mov dword ptr [ebp + 0x1c], edi */
  W32((uint32_t)(ebp + 0x1cu), edi);
L_853a42: /* 853a42: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 853a45: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a47: je 0x853a5e */
  if (zf) goto L_853a5e;
L_853a49: /* 853a49: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 853a4e: mov ecx, esi */
  ecx = esi;
/* 853a50: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x853a56u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 853a56: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853a58: je 0x853a5e */
  if (zf) goto L_853a5e;
L_853a5a: /* 853a5a: mov edi, esi */
  edi = esi;
/* 853a5c: jmp 0x853a60 */
  goto L_853a60;
L_853a5e: /* 853a5e: xor edi, edi */
  edi = 0;
L_853a60: /* 853a60: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 853a63: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a65: je 0x853a78 */
  if (zf) goto L_853a78;
L_853a67: /* 853a67: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 853a6c: mov ecx, esi */
  ecx = esi;
/* 853a6e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x853a74u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 853a74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a76: jne 0x853a7a */
  if (!zf) goto L_853a7a;
L_853a78: /* 853a78: xor esi, esi */
  esi = 0;
L_853a7a: /* 853a7a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a7c: je 0x853a8f */
  if (zf) goto L_853a8f;
L_853a7e: /* 853a7e: test byte ptr [edi + 0x7c], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x7cu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 853a82: je 0x853a8f */
  if (zf) goto L_853a8f;
L_853a84: /* 853a84: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 853a87: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 853a8a: jmp 0x8539ce */
  goto L_8539ce;
L_853a8f: /* 853a8f: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 853a92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a94: je 0x853ab1 */
  if (zf) goto L_853ab1;
L_853a96: /* 853a96: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 853a99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853a9b: je 0x853aa3 */
  if (zf) goto L_853aa3;
L_853a9d: /* 853a9d: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 853aa0: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_853aa3: /* 853aa3: mov edx, dword ptr [eax + 0x5c] */
  edx = R32((uint32_t)(eax + 0x5cu));
/* 853aa6: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 853aa9: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 853aac: jmp 0x8539d1 */
  goto L_8539d1;
L_853ab1: /* 853ab1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853ab3: je 0x8539ce */
  if (zf) goto L_8539ce;
L_853ab9: /* 853ab9: cmp byte ptr [esi + 0x3c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 853abd: jne 0x8539ce */
  if (!zf) goto L_8539ce;
L_853ac3: /* 853ac3: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 853ac6: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 853ac9: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 853acc: shr edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 853acf: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 853ad2: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 853ad5: jmp 0x8539d1 */
  goto L_8539d1;
L_853ada: /* 853ada: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 853adc: jne 0x853b6d */
  if (!zf) goto L_853b6d;
L_853ae2: /* 853ae2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853ae4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 853ae6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853aeb: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853af1u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853af1: xor ebx, ebx */
  ebx = 0;
/* 853af3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853af5: je 0x853b3e */
  if (zf) goto L_853b3e;
L_853af7: /* 853af7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 853afa: movzx ecx, byte ptr [esi + 0x21] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x21u)));
/* 853afe: movzx edx, byte ptr [esi + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x20u)));
/* 853b02: mov esi, dword ptr [esi + 0x18] */
  esi = R32((uint32_t)(esi + 0x18u));
/* 853b05: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 853b08: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853b0a: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 853b0d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 853b10: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 853b13: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 853b15: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 853b18: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 853b1b: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 853b1e: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 853b21: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 853b24: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 853b27: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 853b2a: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 853b31: je 0x853b3a */
  if (zf) goto L_853b3a;
L_853b33: /* 853b33: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_853b3a: /* 853b3a: mov esi, eax */
  esi = eax;
/* 853b3c: jmp 0x853b40 */
  goto L_853b40;
L_853b3e: /* 853b3e: xor esi, esi */
  esi = 0;
L_853b40: /* 853b40: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853b42: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853b44: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853b49: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853b4fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853b4f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853b51: je 0x853b65 */
  if (zf) goto L_853b65;
L_853b53: /* 853b53: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 853b59: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 853b5b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853b5e: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 853b63: jmp 0x853b6f */
  goto L_853b6f;
L_853b65: /* 853b65: mov dword ptr [0xcd8ad8], ebx */
  W32((uint32_t)(0xcd8ad8u), ebx);
/* 853b6b: jmp 0x853b6f */
  goto L_853b6f;
L_853b6d: /* 853b6d: xor ebx, ebx */
  ebx = 0;
L_853b6f: /* 853b6f: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 853b75: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 853b78: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853b7a: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 853b7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853b7e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853b83: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853b89u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853b89: mov edx, eax */
  edx = eax;
/* 853b8b: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 853b8e: xor eax, eax */
  eax = 0;
L_853b90: /* 853b90: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 853b96: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853b98: jge 0x853bc1 */
  if ((sf == of)) goto L_853bc1;
L_853b9a: /* 853b9a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 853b9c: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 853b9f: lea ecx, [ebp + ecx*4 - 0x184] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffe7cu);
/* 853ba6: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 853ba8: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 853bab: lea edi, [edx + edi*4] */
  edi = (uint32_t)(edx + edi*4);
/* 853bae: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 853bb0: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 853bb3: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 853bb6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 853bb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853bba: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 853bbd: xor ebx, ebx */
  ebx = 0;
/* 853bbf: jmp 0x853b90 */
  goto L_853b90;
L_853bc1: /* 853bc1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853bc3: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 853bc5: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853bca: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853bd0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853bd0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853bd2: je 0x853c25 */
  if (zf) goto L_853c25;
L_853bd4: /* 853bd4: mov ebx, dword ptr [ebp - 0x194] */
  ebx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 853bda: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 853be0: mov edx, dword ptr [ebp - 0x19c] */
  edx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 853be6: mov edi, dword ptr [ebp - 0x198] */
  edi = R32((uint32_t)(ebp + 0xfffffe68u));
/* 853bec: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 853bef: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 853bf2: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 853bf5: lea ebx, [eax + 0x18] */
  ebx = (uint32_t)(eax + 0x18u);
/* 853bf8: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 853bfa: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 853bfd: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 853c00: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 853c03: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 853c06: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 853c09: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 853c0c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 853c0f: lea ecx, [ecx + ecx*2 - 6] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffau);
/* 853c13: mov dword ptr [eax], 0xa16b38 */
  W32((uint32_t)(eax), 0xa16b38u);
/* 853c19: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 853c1c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 853c1f: mov edi, eax */
  edi = eax;
/* 853c21: xor ebx, ebx */
  ebx = 0;
/* 853c23: jmp 0x853c27 */
  goto L_853c27;
L_853c25: /* 853c25: xor edi, edi */
  edi = 0;
L_853c27: /* 853c27: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 853c2a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853c2c: je 0x853c38 */
  if (zf) goto L_853c38;
L_853c2e: /* 853c2e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 853c31: sub edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 853c33: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853c36: jne 0x853c70 */
  if (!zf) goto L_853c70;
L_853c38: /* 853c38: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 853c3a: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 853c3f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 853c44: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x853c4au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 853c4a: mov dword ptr [eax + 0x84], ebx */
  W32((uint32_t)(eax + 0x84u), ebx);
/* 853c50: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 853c53: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853c55: je 0x853c69 */
  if (zf) goto L_853c69;
L_853c57: /* 853c57: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 853c59: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 853c5c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 853c5e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 853c61: mov dword ptr [edx + 0x84], eax */
  W32((uint32_t)(edx + 0x84u), eax);
/* 853c67: jmp 0x853c6d */
  goto L_853c6d;
L_853c69: /* 853c69: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 853c6b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_853c6d: /* 853c6d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_853c70: /* 853c70: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 853c73: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 853c75: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 853c78: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 853c7a: mov dword ptr [eax + ecx*4 + 4], edi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), edi);
/* 853c7e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 853c81: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 853c84: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 853c87: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853c88: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 853c8b: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 853c8e: imul edx, dword ptr [esi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 853c92: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 853c94: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 853c97: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 853c9a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 853c9c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 853c9e: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
L_853ca1: /* 853ca1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 853ca4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 853ca7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853ca8: jmp 0x853839 */
  goto L_853839;
L_853cdd: /* 853cdd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 853ce0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 853ce1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 853ce2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 853ce9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 853cea: mov esp, ebp */
  esp = ebp;
/* 853cec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 853ced: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_853cad(void) {
  LOAD_REGS();
L_853cad: /* 853cad: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 853cb0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 853cb5: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 853cb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 853cb9: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 853cbc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x853cc1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_853cc1(); return;
}

void f_853cc1(void) {
  LOAD_REGS();
L_853cc1: /* 853cc1: push 0xa16e68 */
  { uint32_t v = 0xa16e68u; esp -= 4; W32(esp, v); }
/* 853cc6: push 0xae4690 */
  { uint32_t v = 0xae4690u; esp -= 4; W32(esp, v); }
/* 853ccb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x853cd1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 853cd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 853cd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853cd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 853cd8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x853cddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 853cdd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 853ce0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 853ce1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 853ce2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 853ce9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 853cea: mov esp, ebp */
  esp = ebp;
/* 853cec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 853ced: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_853f50(void) {
  LOAD_REGS();
L_853f50: /* 853f50: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 853f54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 853f55: xor esi, esi */
  esi = 0;
/* 853f57: mov eax, 1 */
  eax = 0x1u;
/* 853f5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 853f5d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 853f5f: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 853f62: cmp dword ptr [ecx + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 853f65: je 0x853f72 */
  if (zf) goto L_853f72;
L_853f67: /* 853f67: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 853f6a: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 853f6d: mov eax, 2 */
  eax = 0x2u;
L_853f72: /* 853f72: mov dword ptr [edx + eax*8], 4 */
  W32((uint32_t)(edx + eax*8), 0x4u);
/* 853f79: mov dword ptr [edx + eax*8 + 4], 2 */
  W32((uint32_t)(edx + eax*8 + 0x4u), 0x2u);
/* 853f81: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 853f84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853f85: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853f87: jle 0x853fa7 */
  if ((zf || sf != of)) goto L_853fa7;
L_853f89: /* 853f89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_853f90: /* 853f90: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 853f93: mov dword ptr [edx + eax*8], 2 */
  W32((uint32_t)(edx + eax*8), 0x2u);
/* 853f9a: mov dword ptr [edx + eax*8 + 4], edi */
  W32((uint32_t)(edx + eax*8 + 0x4u), edi);
/* 853f9e: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 853fa1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 853fa2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 853fa3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 853fa5: jl 0x853f90 */
  if ((sf != of)) goto L_853f90;
L_853fa7: /* 853fa7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 853fa8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 853fa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_853fd0(void) {
  LOAD_REGS();
L_853fd0: /* 853fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 853fd1: mov esi, ecx */
  esi = ecx;
/* 853fd3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x853fd9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 853fd9: mov eax, esi */
  eax = esi;
/* 853fdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 853fdc: ret  */
  esp += 4; SPILL(); return;
}

void f_853ff0(void) {
  LOAD_REGS();
L_853ff0: /* 853ff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 853ff4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 853ff6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 853ff7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x853ffdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 853ffd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_854010(void) {
  LOAD_REGS();
L_854010: /* 854010: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 854014: mov eax, ecx */
  eax = ecx;
/* 854016: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 85401a: mov dword ptr [eax], 0xa16e9c */
  W32((uint32_t)(eax), 0xa16e9cu);
/* 854020: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 854023: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 854026: ret 8 */
  esp += 12; SPILL(); return;
}

void f_854040(void) {
  LOAD_REGS();
L_854040: /* 854040: xor eax, eax */
  eax = 0;
/* 854042: xor edx, edx */
  edx = 0;
/* 854044: ret  */
  esp += 4; SPILL(); return;
}

void f_854060(void) {
  LOAD_REGS();
L_854060: /* 854060: mov eax, 1 */
  eax = 0x1u;
/* 854065: ret  */
  esp += 4; SPILL(); return;
}

void f_854080(void) {
  LOAD_REGS();
L_854080: /* 854080: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 854083: ret  */
  esp += 4; SPILL(); return;
}

void f_8540a0(void) {
  LOAD_REGS();
L_8540a0: /* 8540a0: mov eax, 2 */
  eax = 0x2u;
/* 8540a5: ret  */
  esp += 4; SPILL(); return;
}

void f_8540c0(void) {
  LOAD_REGS();
L_8540c0: /* 8540c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8540c1: mov ebp, esp */
  ebp = esp;
/* 8540c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8540c5: push 0x9d3f00 */
  { uint32_t v = 0x9d3f00u; esp -= 4; W32(esp, v); }
/* 8540ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8540d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8540d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8540d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8540db: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8540de: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8540e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8540e1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8540e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8540e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8540e6: xor edi, edi */
  edi = 0;
/* 8540e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8540eb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8540ee: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8540f1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8540f4: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8540f7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8540fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_854100: /* 854100: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 854103: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 854106: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854109: jge 0x85417b */
  if ((sf == of)) goto L_85417b;
L_85410b: /* 85410b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85410e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 854111: mov esi, dword ptr [edx + edi*4 + 4] */
  esi = R32((uint32_t)(edx + edi*4 + 0x4u));
/* 854115: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 854117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 854118: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 854119: mov ecx, esi */
  ecx = esi;
/* 85411b: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x85411du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85411d: mov ax, word ptr [esi + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x8u))) & 0xffffu);
/* 854121: add word ptr [ebp + 8], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ebp + 0x8u), r);
  }
/* 854125: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 854128: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 854129: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85412c: lea ebx, [ebx + edx*2] */
  ebx = (uint32_t)(ebx + edx*2);
/* 85412f: jl 0x85413f */
  if ((sf != of)) goto L_85413f;
L_854131: /* 854131: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 854134: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 85413a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85413d: xor edi, edi */
  edi = 0;
L_85413f: /* 85413f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 854142: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 854145: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 854146: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 854149: jmp 0x854100 */
  goto L_854100;
L_85417b: /* 85417b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85417e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85417f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 854180: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 854187: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 854188: mov esp, ebp */
  esp = ebp;
/* 85418a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85418b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85414b(void) {
  LOAD_REGS();
L_85414b: /* 85414b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85414e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 854153: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 854156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 854157: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85415a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85415fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85415f(); return;
}

void f_85415f(void) {
  LOAD_REGS();
L_85415f: /* 85415f: push 0xa16eb8 */
  { uint32_t v = 0xa16eb8u; esp -= 4; W32(esp, v); }
/* 854164: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 854169: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85416fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85416f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 854172: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854174: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854176: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85417bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 85417b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85417e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85417f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 854180: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 854187: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 854188: mov esp, ebp */
  esp = ebp;
/* 85418a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85418b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8541d0(void) {
  LOAD_REGS();
L_8541d0: /* 8541d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8541d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8541d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8541d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8541d4: mov esi, ecx */
  esi = ecx;
/* 8541d6: mov dword ptr [esi], 0x9f6b0c */
  W32((uint32_t)(esi), 0x9f6b0cu);
/* 8541dc: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8541e2: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8541e5: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8541e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8541ea: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8541ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8541f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8541f1: call 0x99c910 */
  esp -= 4; W32(esp, 0x8541f6u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8541f6: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8541fb: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8541fe: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 854201: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 854204: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 85420a: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 85420d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 854210: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 854211: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 854214: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 854217: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 85421e: mov eax, esi */
  eax = esi;
/* 854220: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 854221: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 854222: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 854223: ret  */
  esp += 4; SPILL(); return;
}

void f_854250(void) {
  LOAD_REGS();
L_854250: /* 854250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 854251: mov ebp, esp */
  ebp = esp;
/* 854253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 854255: push 0x9d3f10 */
  { uint32_t v = 0x9d3f10u; esp -= 4; W32(esp, v); }
/* 85425a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 854260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 854268: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85426b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85426c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85426d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 854270: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 854271: xor edi, edi */
  edi = 0;
/* 854273: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 854276: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 854279: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 85427c: xor ebx, ebx */
  ebx = 0;
/* 85427e: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_854281: /* 854281: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 854284: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 854287: cmp edi, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85428a: jge 0x8543f8 */
  if ((sf == of)) goto L_8543f8;
L_854290: /* 854290: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 854293: lea edi, [edi + edi*4] */
  edi = (uint32_t)(edi + edi*4);
/* 854296: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 854299: mov ecx, dword ptr [edi + ecx] */
  ecx = R32((uint32_t)(edi + ecx));
/* 85429c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85429f: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x8542a4u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 8542a4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8542a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8542aa: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8542ad: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 8542b0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8542b3: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 8542b6: mov edi, dword ptr [ecx + edi + 4] */
  edi = R32((uint32_t)(ecx + edi + 0x4u));
/* 8542ba: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 8542bd: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 8542c0: lea edi, [ecx + edx*4] */
  edi = (uint32_t)(ecx + edx*4);
/* 8542c3: movzx edx, word ptr [edi + 8] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x8u)));
/* 8542c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8542c8: lea ecx, [eax + 0xc4] */
  ecx = (uint32_t)(eax + 0xc4u);
/* 8542ce: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8542d4u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8542d4: mov ecx, eax */
  ecx = eax;
/* 8542d6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8542d9: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 8542df: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8542e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8542e7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8542ea: jp 0x854358 */
  if (pf) goto L_854358;
L_8542ec: /* 8542ec: xor eax, eax */
  eax = 0;
/* 8542ee: mov edi, edi */
  edi = edi;
L_8542f0: /* 8542f0: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 8542f4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8542f6: jge 0x8543ac */
  if ((sf == of)) goto L_8543ac;
L_8542fc: /* 8542fc: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 8542ff: mov word ptr [ebp - 0x2c], dx */
  W16((uint32_t)(ebp + 0xffffffd4u), (edx & 0xffffu));
/* 854303: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 854307: mov word ptr [ebp - 0x2a], dx */
  W16((uint32_t)(ebp + 0xffffffd6u), (edx & 0xffffu));
/* 85430b: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85430e: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 854312: mov word ptr [ebp - 0x28], dx */
  W16((uint32_t)(ebp + 0xffffffd8u), (edx & 0xffffu));
/* 854316: xor edx, edx */
  edx = 0;
/* 854318: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85431b: mov dx, bx */
  edx = (edx & 0xffff0000u) | ((uint32_t)((ebx & 0xffffu)) & 0xffffu);
/* 85431e: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854322: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 854325: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 854328: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85432b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85432e: add edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854331: mov word ptr [esi - 6], dx */
  W16((uint32_t)(esi + 0xfffffffau), (edx & 0xffffu));
/* 854335: xor edx, edx */
  edx = 0;
/* 854337: mov dx, bx */
  edx = (edx & 0xffff0000u) | ((uint32_t)((ebx & 0xffffu)) & 0xffffu);
/* 85433a: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85433e: add edx, dword ptr [ebp - 0x2a] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd6u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854341: mov word ptr [esi - 4], dx */
  W16((uint32_t)(esi + 0xfffffffcu), (edx & 0xffffu));
/* 854345: xor edx, edx */
  edx = 0;
/* 854347: mov dx, bx */
  edx = (edx & 0xffff0000u) | ((uint32_t)((ebx & 0xffffu)) & 0xffffu);
/* 85434a: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85434e: add edx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854351: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 854352: mov word ptr [esi - 2], dx */
  W16((uint32_t)(esi + 0xfffffffeu), (edx & 0xffffu));
/* 854356: jmp 0x8542f0 */
  goto L_8542f0;
L_854358: /* 854358: xor eax, eax */
  eax = 0;
/* 85435a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_854360: /* 854360: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 854364: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854366: jge 0x8543ac */
  if ((sf == of)) goto L_8543ac;
L_854368: /* 854368: xor edx, edx */
  edx = 0;
/* 85436a: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 85436d: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854371: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854374: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 854377: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85437a: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85437d: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 854380: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854383: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854385: mov word ptr [esi - 6], dx */
  W16((uint32_t)(esi + 0xfffffffau), (edx & 0xffffu));
/* 854389: xor edx, edx */
  edx = 0;
/* 85438b: mov dx, word ptr [ecx - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 85438f: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854393: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854395: mov word ptr [esi - 4], dx */
  W16((uint32_t)(esi + 0xfffffffcu), (edx & 0xffffu));
/* 854399: xor edx, edx */
  edx = 0;
/* 85439b: mov dx, word ptr [ecx - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 85439f: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8543a3: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8543a5: mov word ptr [esi - 2], dx */
  W16((uint32_t)(esi + 0xfffffffeu), (edx & 0xffffu));
/* 8543a9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8543aa: jmp 0x854360 */
  goto L_854360;
L_8543ac: /* 8543ac: movzx eax, word ptr [edi + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0xcu)));
/* 8543b0: movzx ecx, word ptr [edi + 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0xau)));
/* 8543b4: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8543b6: lea ebx, [ebx + eax + 1] */
  ebx = (uint32_t)(ebx + eax + 0x1u);
/* 8543ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8543bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8543be: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8543c1: mov edi, eax */
  edi = eax;
/* 8543c3: jmp 0x854281 */
  goto L_854281;
L_8543f8: /* 8543f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8543fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8543fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8543fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 854404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 854405: mov esp, ebp */
  esp = ebp;
/* 854407: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 854408: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8543c8(void) {
  LOAD_REGS();
L_8543c8: /* 8543c8: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8543cb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8543d0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8543d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8543d4: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8543d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8543dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8543dc(); return;
}

void f_8543dc(void) {
  LOAD_REGS();
L_8543dc: /* 8543dc: push 0xa16f10 */
  { uint32_t v = 0xa16f10u; esp -= 4; W32(esp, v); }
/* 8543e1: push 0xae4970 */
  { uint32_t v = 0xae4970u; esp -= 4; W32(esp, v); }
/* 8543e6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8543ecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8543ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8543ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8543f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8543f3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8543f8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8543f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8543fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8543fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8543fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 854404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 854405: mov esp, ebp */
  esp = ebp;
/* 854407: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 854408: ret 4 */
  esp += 8; SPILL(); return;
}

void f_854480(void) {
  LOAD_REGS();
L_854480: /* 854480: mov eax, ecx */
  eax = ecx;
/* 854482: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 854486: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 854487: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 85448b: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 85448e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 854490: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 854494: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 854497: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 85449b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85449c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8544a0: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 8544a3: xor edx, edx */
  edx = 0;
/* 8544a5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8544a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8544a8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8544ac: mov dword ptr [eax], 0xa16f74 */
  W32((uint32_t)(eax), 0xa16f74u);
/* 8544b2: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8544b5: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8544b8: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8544bb: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 8544be: jle 0x8544e4 */
  if ((zf || sf != of)) goto L_8544e4;
L_8544c0: /* 8544c0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8544c2: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 8544c5: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 8544c8: mov ecx, dword ptr [ebx + ecx*4 + 0xc] */
  ecx = R32((uint32_t)(ebx + ecx*4 + 0xcu));
/* 8544cc: mov ebx, dword ptr [eax + 0x24] */
  ebx = R32((uint32_t)(eax + 0x24u));
/* 8544cf: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8544d2: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8544d4: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8544d6: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 8544d9: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8544dc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8544dd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8544e0: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8544e2: jl 0x8544c0 */
  if ((sf != of)) goto L_8544c0;
L_8544e4: /* 8544e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8544e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8544e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8544e7: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_854510(void) {
  LOAD_REGS();
L_854510: /* 854510: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 854513: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 854516: ret  */
  esp += 4; SPILL(); return;
}

void f_854530(void) {
  LOAD_REGS();
L_854530: /* 854530: mov eax, 1 */
  eax = 0x1u;
/* 854535: ret  */
  esp += 4; SPILL(); return;
}

void f_854550(void) {
  LOAD_REGS();
L_854550: /* 854550: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 854553: ret  */
  esp += 4; SPILL(); return;
}

void f_854570(void) {
  LOAD_REGS();
L_854570: /* 854570: mov eax, 2 */
  eax = 0x2u;
/* 854575: ret  */
  esp += 4; SPILL(); return;
}

void f_854590(void) {
  LOAD_REGS();
L_854590: /* 854590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 854591: mov ebp, esp */
  ebp = esp;
/* 854593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 854595: push 0x9d3f20 */
  { uint32_t v = 0x9d3f20u; esp -= 4; W32(esp, v); }
/* 85459a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8545a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8545a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8545a8: sub esp, 0xd0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8545ae: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8545b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8545b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8545b5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8545b8: mov ecx, dword ptr [0xce83fc] */
  ecx = R32((uint32_t)(0xce83fcu));
/* 8545be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8545bf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8545c2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8545c9: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8545cc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8545ce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8545d0: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8545d2: xor eax, eax */
  eax = 0;
/* 8545d4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8545d6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8545d9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8545dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8545e0: /* 8545e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8545e3: cmp eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8545e6: jge 0x854b03 */
  if ((sf == of)) goto L_854b03;
L_8545ec: /* 8545ec: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8545ef: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8545f2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8545f5: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8545f8: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8545fb: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8545fe: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 854601: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 854604: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x854609u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 854609: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85460b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 85460e: mov edx, dword ptr [edx + 0x54] */
  edx = R32((uint32_t)(edx + 0x54u));
/* 854611: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 854614: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 854617: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 85461a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85461d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854620: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854622: mov dword ptr [ebp - 0xc8], edx */
  W32((uint32_t)(ebp + 0xffffff38u), edx);
/* 854628: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 85462b: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 854631: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 854634: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 85463a: lea edx, [ebp - 0xc8] */
  edx = (uint32_t)(ebp + 0xffffff38u);
/* 854640: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 854641: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 854647: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 854648: lea ecx, [eax + 0xa8] */
  ecx = (uint32_t)(eax + 0xa8u);
/* 85464e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 854651: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 854654: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 85465e: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x854664u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 854664: mov ecx, eax */
  ecx = eax;
/* 854666: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85466cu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85466c: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 85466f: fcomp dword ptr [0xa17000] */
  fpu_com(ST0, F32((uint32_t)(0xa17000u)));
  FPOP();
/* 854675: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 854677: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85467a: jp 0x8549d9 */
  if (pf) goto L_8549d9;
L_854680: /* 854680: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 854685: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 854688: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x85468eu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 85468e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 854691: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 854694: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 854697: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 85469a: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 85469d: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8546a3: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8546a6: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8546ac: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8546b2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8546b5: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 8546bb: mov dword ptr [ebp - 0x9c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f800000u);
/* 8546c5: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8546c8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8546cb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8546ce: lea edi, [ebp - 0xb8] */
  edi = (uint32_t)(ebp + 0xffffff48u);
/* 8546d4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8546d6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8546d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8546da: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8546dd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8546df: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8546e2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8546e4: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8546e7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8546ea: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8546ed: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8546f0: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8546f3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8546f6: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8546f9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8546fc: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8546ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 854701: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 854703: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 854705: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 854707: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 854709: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85470c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85470f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 854712: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 854715: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 854718: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85471b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85471e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 854721: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 854723: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 854725: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 854727: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 854729: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85472b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85472e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 854731: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 854734: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 854737: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85473a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85473d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 854740: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 854743: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 854745: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 854747: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 854749: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85474b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85474d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85474f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 854751: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 854753: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 854756: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 854759: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85475c: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 854762: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 854768: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 85476e: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 854771: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 854774: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 854777: movzx edx, word ptr [edi + 8] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x8u)));
/* 85477b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 85477e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 854780: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 854783: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 854786: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 854787: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85478d: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x854793u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 854793: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 854795: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 854798: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 85479e: mov eax, dword ptr [edx + 0x64] */
  eax = R32((uint32_t)(edx + 0x64u));
/* 8547a1: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8547a4: movzx eax, word ptr [edi + 0xe] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0xeu)));
/* 8547a8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8547aa: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8547ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8547ae: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8547b3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8547b9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8547b9: xor ecx, ecx */
  ecx = 0;
/* 8547bb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8547be: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
L_8547c1: /* 8547c1: movzx edx, word ptr [edi + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0xeu)));
/* 8547c5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8547c7: jge 0x854912 */
  if ((sf == of)) goto L_854912;
L_8547cd: /* 8547cd: mov esi, dword ptr [ebp - 0x88] */
  esi = R32((uint32_t)(ebp + 0xffffff78u));
/* 8547d3: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8547d6: lea esi, [esi + edx*2] */
  esi = (uint32_t)(esi + edx*2);
/* 8547d9: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8547dc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8547de: movzx ecx, word ptr [esi] */
  ecx = (uint32_t)(R16((uint32_t)(esi)));
/* 8547e1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8547e4: movzx edx, word ptr [esi + 2] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x2u)));
/* 8547e8: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8547eb: movzx ecx, word ptr [esi + 4] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 8547ef: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8547f2: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8547f5: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 8547f8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8547fb: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8547fe: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 854801: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 854804: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 854807: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 85480a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85480d: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 854810: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 854812: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 854815: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 854818: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85481b: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 85481e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x854824u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 854824: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 854827: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85482a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 85482d: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 854833: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 854836: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 85483c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85483f: frndint  */
  ST0 = fpu_round(ST0);
/* 854841: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 854843: movzx eax, word ptr [esi + 2] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x2u)));
/* 854847: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85484a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 85484d: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 854850: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 854853: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 854856: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 854859: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85485c: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 85485f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 854861: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 854864: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 854867: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 85486a: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85486d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x854873u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 854873: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 854876: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 854879: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 85487c: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 85487f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 854882: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 854885: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 854888: frndint  */
  ST0 = fpu_round(ST0);
/* 85488a: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 85488c: movzx eax, word ptr [esi + 4] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 854890: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 854893: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 854896: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 854899: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 85489f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8548a2: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8548a5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8548a8: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8548ab: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8548ad: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8548b0: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8548b6: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8548bc: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8548c2: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8548c8u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8548c8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8548cb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8548ce: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8548d1: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 8548d7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8548da: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8548e0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8548e3: frndint  */
  ST0 = fpu_round(ST0);
/* 8548e5: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 8548e7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8548ea: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8548ed: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8548ef: jge 0x8548f3 */
  if ((sf == of)) goto L_8548f3;
L_8548f1: /* 8548f1: mov eax, ecx */
  eax = ecx;
L_8548f3: /* 8548f3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8548f6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8548f8: jl 0x8548fc */
  if ((sf != of)) goto L_8548fc;
L_8548fa: /* 8548fa: mov eax, ecx */
  eax = ecx;
L_8548fc: /* 8548fc: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8548ff: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 854902: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 854904: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 854907: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85490a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85490d: jmp 0x8547c1 */
  goto L_8547c1;
L_854912: /* 854912: movzx ecx, word ptr [edi + 0xe] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0xeu)));
/* 854916: push 0x854ca0 */
  { uint32_t v = 0x854ca0u; esp -= 4; W32(esp, v); }
/* 85491b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 85491d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85491e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85491f: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x854925u); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 854925: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 854928: xor ecx, ecx */
  ecx = 0;
/* 85492a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_854930: /* 854930: movzx edx, word ptr [edi + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0xeu)));
/* 854934: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854936: jge 0x8549c4 */
  if ((sf == of)) goto L_8549c4;
L_85493c: /* 85493c: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85493f: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 854945: mov edx, ecx */
  edx = ecx;
/* 854947: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 85494d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 854950: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 854952: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 854955: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 854958: jp 0x854984 */
  if (pf) goto L_854984;
L_85495a: /* 85495a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85495c: mov dx, word ptr [eax + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 854960: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854964: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854967: add dx, word ptr [esi + 0x10] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0x10u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85496b: mov word ptr [ebx - 2], dx */
  W16((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffffu));
/* 85496f: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 854973: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854977: add dx, word ptr [esi + 0x10] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0x10u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85497b: mov word ptr [ebx], dx */
  W16((uint32_t)(ebx), (edx & 0xffffu));
/* 85497e: mov ax, word ptr [eax + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 854982: jmp 0x8549ac */
  goto L_8549ac;
L_854984: /* 854984: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 854986: mov dx, word ptr [eax + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 85498a: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85498e: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854991: add dx, word ptr [esi + 0x10] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0x10u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854995: mov word ptr [ebx - 2], dx */
  W16((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffffu));
/* 854999: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 85499d: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8549a1: add dx, word ptr [esi + 0x10] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0x10u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8549a5: mov word ptr [ebx], dx */
  W16((uint32_t)(ebx), (edx & 0xffffu));
/* 8549a8: mov ax, word ptr [eax + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
L_8549ac: /* 8549ac: sub ax, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8549b0: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8549b3: add ax, word ptr [esi + 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0x10u)));
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8549b7: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8549ba: mov word ptr [ebx - 2], ax */
  W16((uint32_t)(ebx + 0xfffffffeu), (eax & 0xffffu));
/* 8549be: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8549bf: jmp 0x854930 */
  goto L_854930;
L_8549c4: /* 8549c4: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8549c7: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8549cdu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_8549cd: /* 8549cd: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8549d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8549d1: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8549d4: jmp 0x8545e0 */
  goto L_8545e0;
L_8549d9: /* 8549d9: movzx ecx, word ptr [edi + 8] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x8u)));
/* 8549dd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8549df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8549e0: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8549e3: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8549e9: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8549efu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8549ef: mov ecx, eax */
  ecx = eax;
/* 8549f1: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8549f4: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 8549fa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 854a00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 854a02: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 854a05: jp 0x854a77 */
  if (pf) goto L_854a77;
L_854a07: /* 854a07: xor eax, eax */
  eax = 0;
/* 854a09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_854a10: /* 854a10: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 854a14: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854a16: jge 0x8549cd */
  if ((sf == of)) goto L_8549cd;
L_854a18: /* 854a18: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 854a1b: mov word ptr [ebp - 0x58], dx */
  W16((uint32_t)(ebp + 0xffffffa8u), (edx & 0xffffu));
/* 854a1f: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 854a23: mov word ptr [ebp - 0x56], dx */
  W16((uint32_t)(ebp + 0xffffffaau), (edx & 0xffffu));
/* 854a27: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854a2a: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 854a2e: mov word ptr [ebp - 0x54], dx */
  W16((uint32_t)(ebp + 0xffffffacu), (edx & 0xffffu));
/* 854a32: xor edx, edx */
  edx = 0;
/* 854a34: mov dx, word ptr [esi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 854a38: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854a3c: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854a3f: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854a42: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854a45: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854a48: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854a4b: add edx, dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854a4e: mov word ptr [ebx - 6], dx */
  W16((uint32_t)(ebx + 0xfffffffau), (edx & 0xffffu));
/* 854a52: xor edx, edx */
  edx = 0;
/* 854a54: mov dx, word ptr [esi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 854a58: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854a5c: add edx, dword ptr [ebp - 0x56] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffaau)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854a5f: mov word ptr [ebx - 4], dx */
  W16((uint32_t)(ebx + 0xfffffffcu), (edx & 0xffffu));
/* 854a63: xor edx, edx */
  edx = 0;
/* 854a65: mov dx, word ptr [esi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 854a69: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854a6d: add edx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854a70: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 854a71: mov word ptr [ebx - 2], dx */
  W16((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffffu));
/* 854a75: jmp 0x854a10 */
  goto L_854a10;
L_854a77: /* 854a77: xor eax, eax */
  eax = 0;
/* 854a79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_854a80: /* 854a80: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 854a84: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854a86: jge 0x8549cd */
  if ((sf == of)) goto L_8549cd;
L_854a8c: /* 854a8c: mov dx, word ptr [esi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 854a90: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854a94: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854a97: add dx, word ptr [ecx - 2] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx + 0xfffffffeu)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854a9b: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854a9e: mov word ptr [ebx - 2], dx */
  W16((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffffu));
/* 854aa2: mov dx, word ptr [esi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 854aa6: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854aaa: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854aad: add dx, word ptr [ecx - 2] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx + 0xfffffffeu)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854ab1: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854ab4: mov word ptr [ebx - 2], dx */
  W16((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffffu));
/* 854ab8: mov dx, word ptr [esi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 854abc: sub dx, word ptr [edi + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854ac0: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 854ac3: add dx, word ptr [ecx] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 854ac6: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 854ac9: mov word ptr [ebx - 2], dx */
  W16((uint32_t)(ebx + 0xfffffffeu), (edx & 0xffffu));
/* 854acd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 854ace: jmp 0x854a80 */
  goto L_854a80;
L_854b03: /* 854b03: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 854b09: mov eax, dword ptr [0xce83fc] */
  eax = R32((uint32_t)(0xce83fcu));
/* 854b0e: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 854b11: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 854b13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854b15: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 854b18: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854b1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 854b1b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 854b1d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 854b20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 854b21: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 854b28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 854b29: mov esp, ebp */
  esp = ebp;
/* 854b2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 854b2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_854ad0(void) {
  LOAD_REGS();
L_854ad0: /* 854ad0: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 854ad6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 854adb: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 854ade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 854adf: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 854ae2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x854ae7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_854ae7(); return;
}

void f_854ae7(void) {
  LOAD_REGS();
L_854ae7: /* 854ae7: push 0xa16f90 */
  { uint32_t v = 0xa16f90u; esp -= 4; W32(esp, v); }
/* 854aec: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 854af1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x854af7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 854af7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 854afa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854afc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854afe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x854b03u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 854b03: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 854b09: mov eax, dword ptr [0xce83fc] */
  eax = R32((uint32_t)(0xce83fcu));
/* 854b0e: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 854b11: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 854b13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854b15: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 854b18: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 854b1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 854b1b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 854b1d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 854b20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 854b21: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 854b28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 854b29: mov esp, ebp */
  esp = ebp;
/* 854b2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 854b2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_854ca0(void) {
  LOAD_REGS();
L_854ca0: /* 854ca0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 854ca4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 854ca8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 854caa: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 854cac: ret  */
  esp += 4; SPILL(); return;
}

void f_854cc0(void) {
  LOAD_REGS();
L_854cc0: /* 854cc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 854cc1: mov ebp, esp */
  ebp = esp;
/* 854cc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 854cc5: push 0x9d3f30 */
  { uint32_t v = 0x9d3f30u; esp -= 4; W32(esp, v); }
/* 854cca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 854cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854cd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 854cd8: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 854cdb: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 854ce0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 854ce1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 854ce2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 854ce5: mov ecx, dword ptr [0xce8408] */
  ecx = R32((uint32_t)(0xce8408u));
/* 854ceb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 854cec: xor esi, esi */
  esi = 0;
/* 854cee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 854cf1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 854cf4: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 854cf7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 854cf9: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 854cfb: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 854d01: mov eax, dword ptr [0xce8428] */
  eax = R32((uint32_t)(0xce8428u));
/* 854d06: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 854d09: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 854d0b: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 854d0d: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 854d12: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854d15: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854d17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854d18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 854d19: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x854d1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854d1c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854d1f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854d21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 854d22: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x854d25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854d25: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 854d28: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 854d2b: cmp dword ptr [ecx + 0x154], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x154u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854d31: jne 0x854d45 */
  if (!zf) goto L_854d45;
L_854d33: /* 854d33: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x854d39u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 854d39: cmp dword ptr [eax + 0x5c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854d3c: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 854d43: jne 0x854d48 */
  if (!zf) goto L_854d48;
L_854d45: /* 854d45: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_854d48: /* 854d48: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 854d4b: xor edx, edx */
  edx = 0;
L_854d4d: /* 854d4d: cmp edx, dword ptr [eax + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854d50: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 854d53: jge 0x854f12 */
  if ((sf == of)) goto L_854f12;
L_854d59: /* 854d59: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 854d5c: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 854d5f: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 854d61: mov esi, dword ptr [esi + 0x1110] */
  esi = R32((uint32_t)(esi + 0x1110u));
/* 854d67: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 854d6a: lea ebx, [esi + ecx*8] */
  ebx = (uint32_t)(esi + ecx*8);
/* 854d6d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 854d70: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854d72: jne 0x854f0c */
  if (!zf) goto L_854f0c;
L_854d78: /* 854d78: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 854d7b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 854d7e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 854d81: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854d83: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 854d8a: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 854d91: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 854d98: je 0x854dca */
  if (zf) goto L_854dca;
L_854d9a: /* 854d9a: mov eax, dword ptr [ecx + 0x540] */
  eax = R32((uint32_t)(ecx + 0x540u));
/* 854da0: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854da3: je 0x854dc3 */
  if (zf) goto L_854dc3;
L_854da5: /* 854da5: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854da8: je 0x854dc3 */
  if (zf) goto L_854dc3;
L_854daa: /* 854daa: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854dad: je 0x854dc3 */
  if (zf) goto L_854dc3;
L_854daf: /* 854daf: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854db2: je 0x854dc3 */
  if (zf) goto L_854dc3;
L_854db4: /* 854db4: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854db7: jne 0x854dca */
  if (!zf) goto L_854dca;
L_854db9: /* 854db9: mov eax, dword ptr [ecx + 0x538] */
  eax = R32((uint32_t)(ecx + 0x538u));
/* 854dbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854dc1: je 0x854dca */
  if (zf) goto L_854dca;
L_854dc3: /* 854dc3: mov esi, 1 */
  esi = 0x1u;
/* 854dc8: jmp 0x854dcc */
  goto L_854dcc;
L_854dca: /* 854dca: xor esi, esi */
  esi = 0;
L_854dcc: /* 854dcc: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 854dcf: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 854dd2: mov ecx, esp */
  ecx = esp;
/* 854dd4: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 854dd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854dd9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 854ddc: mov eax, esp */
  eax = esp;
/* 854dde: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 854de0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 854de3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 854de6: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 854de9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 854dec: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x854df2u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 854df2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 854df5: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 854df8: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 854dfb: mov edi, dword ptr [edx + 0x540] */
  edi = R32((uint32_t)(edx + 0x540u));
/* 854e01: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854e04: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 854e06: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 854e09: xor ebx, ebx */
  ebx = 0;
/* 854e0b: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854e0e: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 854e11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 854e12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854e14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 854e16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 854e17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854e19: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x854e1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854e1c: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 854e1f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854e22: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 854e24: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 854e26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854e28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854e2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854e2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 854e2d: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x854e30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854e30: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854e33: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 854e36: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 854e39: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854e3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 854e3d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 854e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854e41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854e43: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x854e46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854e46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854e48: je 0x854e6d */
  if (zf) goto L_854e6d;
L_854e4a: /* 854e4a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 854e4d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854e4f: je 0x854e6d */
  if (zf) goto L_854e6d;
L_854e51: /* 854e51: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 854e54: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 854e5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854e5b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 854e5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 854e5e: push 0xae49b0 */
  { uint32_t v = 0xae49b0u; esp -= 4; W32(esp, v); }
/* 854e63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854e64: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x854e6au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 854e6a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_854e6d: /* 854e6d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854e70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854e72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854e74: lea eax, [ebx + 0x34] */
  eax = (uint32_t)(ebx + 0x34u);
/* 854e77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854e78: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x854e7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854e7b: xor edi, edi */
  edi = 0;
/* 854e7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_854e80: /* 854e80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 854e83: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 854e86: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 854e89: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 854e8c: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 854e8f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 854e92: cmp edi, dword ptr [eax + edx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854e95: jge 0x854ef8 */
  if ((sf == of)) goto L_854ef8;
L_854e97: /* 854e97: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 854e9a: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 854e9d: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 854ea0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 854ea3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 854ea6: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 854ea9: movzx eax, word ptr [esi + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 854ead: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854eb0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 854eb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854eb3: movzx eax, word ptr [esi + 0x10] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x10u)));
/* 854eb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854eb8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 854ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854ebc: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 854ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 854ec0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854ec2: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x854ec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854ec5: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 854eca: mov ecx, dword ptr [0xce8400] */
  ecx = R32((uint32_t)(0xce8400u));
/* 854ed0: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 854ed3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 854ed6: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 854edb: mov ecx, dword ptr [0xce8404] */
  ecx = R32((uint32_t)(0xce8404u));
/* 854ee1: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 854ee4: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 854ee9: mov ecx, dword ptr [0xce8424] */
  ecx = R32((uint32_t)(0xce8424u));
/* 854eef: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 854ef2: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 854ef5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 854ef6: jmp 0x854e80 */
  goto L_854e80;
L_854ef8: /* 854ef8: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 854efd: mov ecx, dword ptr [0xce83f0] */
  ecx = R32((uint32_t)(0xce83f0u));
/* 854f03: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 854f06: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 854f09: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_854f0c: /* 854f0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 854f0d: jmp 0x854d4d */
  goto L_854d4d;
L_854f12: /* 854f12: xor edx, edx */
  edx = 0;
L_854f14: /* 854f14: cmp edx, dword ptr [eax + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 854f17: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 854f1a: jge 0x855123 */
  if ((sf == of)) goto L_855123;
L_854f20: /* 854f20: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 854f23: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 854f26: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 854f28: mov esi, dword ptr [esi + 0x1110] */
  esi = R32((uint32_t)(esi + 0x1110u));
/* 854f2e: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 854f31: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 854f34: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 854f37: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854f39: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 854f3c: je 0x85511d */
  if (zf) goto L_85511d;
L_854f42: /* 854f42: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 854f45: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 854f48: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 854f4b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854f4d: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 854f54: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 854f5b: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 854f62: je 0x854f94 */
  if (zf) goto L_854f94;
L_854f64: /* 854f64: mov eax, dword ptr [ecx + 0x540] */
  eax = R32((uint32_t)(ecx + 0x540u));
/* 854f6a: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854f6d: je 0x854f8d */
  if (zf) goto L_854f8d;
L_854f6f: /* 854f6f: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854f72: je 0x854f8d */
  if (zf) goto L_854f8d;
L_854f74: /* 854f74: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854f77: je 0x854f8d */
  if (zf) goto L_854f8d;
L_854f79: /* 854f79: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854f7c: je 0x854f8d */
  if (zf) goto L_854f8d;
L_854f7e: /* 854f7e: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854f81: jne 0x854f94 */
  if (!zf) goto L_854f94;
L_854f83: /* 854f83: mov eax, dword ptr [ecx + 0x538] */
  eax = R32((uint32_t)(ecx + 0x538u));
/* 854f89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 854f8b: je 0x854f94 */
  if (zf) goto L_854f94;
L_854f8d: /* 854f8d: mov edi, 1 */
  edi = 0x1u;
/* 854f92: jmp 0x854f96 */
  goto L_854f96;
L_854f94: /* 854f94: xor edi, edi */
  edi = 0;
L_854f96: /* 854f96: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 854f99: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 854f9c: mov ecx, esp */
  ecx = esp;
/* 854f9e: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* 854fa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854fa3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 854fa6: mov eax, esp */
  eax = esp;
/* 854fa8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 854faa: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 854fad: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 854fb0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 854fb3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 854fb6: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x854fbcu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 854fbc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 854fbf: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 854fc2: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 854fc5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854fc8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 854fca: xor ebx, ebx */
  ebx = 0;
/* 854fcc: cmp dword ptr [edx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 854fd3: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 854fd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 854fd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854fd9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 854fdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 854fdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854fde: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x854fe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854fe1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 854fe4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 854fe6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 854fe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854fea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854fec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 854fee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 854fef: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x854ff2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 854ff2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 854ff5: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 854ff8: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 854ffb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 854ffe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855001: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 855004: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 855007: add edx, 0x194 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85500d: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 85500f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 855012: mov edi, esp */
  edi = esp;
/* 855014: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 855016: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 855019: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 85501c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 85501f: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 855022: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 855025: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 855028: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85502b: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* 85502e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85502f: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 855032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 855033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 855034: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 855037: call 0x6c911a */
  esp -= 4; W32(esp, 0x85503cu); SPILL(); f_6c911a(); if (g_unwind) return; RELOAD();
/* 85503c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85503f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 855041: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 855043: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 855046: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 855047: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855049: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x85504cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85504c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85504e: je 0x855073 */
  if (zf) goto L_855073;
L_855050: /* 855050: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 855053: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855055: je 0x855073 */
  if (zf) goto L_855073;
L_855057: /* 855057: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 85505d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85505f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855060: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855064: push 0xae4a10 */
  { uint32_t v = 0xae4a10u; esp -= 4; W32(esp, v); }
/* 855069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85506a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x855070u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 855070: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_855073: /* 855073: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 855076: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 855078: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85507a: lea edx, [ebp - 0x64] */
  edx = (uint32_t)(ebp + 0xffffff9cu);
/* 85507d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85507e: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x855081u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 855081: mov edi, eax */
  edi = eax;
/* 855083: xor ebx, ebx */
  ebx = 0;
L_855085: /* 855085: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 855088: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85508b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85508e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 855091: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 855094: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 855097: cmp ebx, dword ptr [eax + edx] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85509a: jge 0x855109 */
  if ((sf == of)) goto L_855109;
L_85509c: /* 85509c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85509f: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 8550a2: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 8550a5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8550a8: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8550ab: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8550ae: movzx eax, word ptr [esi + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 8550b2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8550b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8550b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8550b8: movzx eax, word ptr [esi + 0x10] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x10u)));
/* 8550bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8550bd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8550c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8550c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8550c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8550c4: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8550c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8550c7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8550ca: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 8550cd: lea edi, [ecx + eax*2] */
  edi = (uint32_t)(ecx + eax*2);
/* 8550d0: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8550d5: mov ecx, dword ptr [0xce83f4] */
  ecx = R32((uint32_t)(0xce83f4u));
/* 8550db: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 8550de: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8550e1: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8550e6: mov ecx, dword ptr [0xce83f8] */
  ecx = R32((uint32_t)(0xce83f8u));
/* 8550ec: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 8550ef: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8550f2: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8550f7: mov ecx, dword ptr [0xce8424] */
  ecx = R32((uint32_t)(0xce8424u));
/* 8550fd: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 855100: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855103: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 855104: jmp 0x855085 */
  goto L_855085;
L_855109: /* 855109: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85510e: mov ecx, dword ptr [0xce83f0] */
  ecx = R32((uint32_t)(0xce83f0u));
/* 855114: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 855117: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85511a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_85511d: /* 85511d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85511e: jmp 0x854f14 */
  goto L_854f14;
L_855123: /* 855123: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* 85512a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85512d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85512f: mov edx, dword ptr [ecx + 0x1114] */
  edx = R32((uint32_t)(ecx + 0x1114u));
/* 855135: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 855138: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 85513b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 85513e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 855141: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855144: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 855147: xor eax, eax */
  eax = 0;
/* 855149: mov ebx, ecx */
  ebx = ecx;
/* 85514b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 85514e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 855151: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 855153: mov ecx, ebx */
  ecx = ebx;
/* 855155: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 855157: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 85515d: mov edx, dword ptr [0xce8428] */
  edx = R32((uint32_t)(0xce8428u));
/* 855163: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 855166: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 855168: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 85516a: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85516d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85516f: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 855171: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 855176: mov ecx, dword ptr [0xce8408] */
  ecx = R32((uint32_t)(0xce8408u));
/* 85517c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 85517f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 855181: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 855183: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 855186: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 855188: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855189: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85518b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85518e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85518f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855196: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855197: mov esp, ebp */
  esp = ebp;
/* 855199: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85519a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_85519d(void) {
  LOAD_REGS();
L_85519d: /* 85519d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8551a0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8551a5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8551a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8551a9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8551ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8551b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8551b1(); return;
}

void f_8551b1(void) {
  LOAD_REGS();
L_8551b1: /* 8551b1: push 0xa17004 */
  { uint32_t v = 0xa17004u; esp -= 4; W32(esp, v); }
/* 8551b6: push 0xae4a6c */
  { uint32_t v = 0xae4a6cu; esp -= 4; W32(esp, v); }
/* 8551bb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8551c1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8551c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8551c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8551c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8551c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8551cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8551cd: guest_badaddr(0x8551cd); return;
}

void f_855320(void) {
  LOAD_REGS();
L_855320: /* 855320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 855321: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 855322: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 855324: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 855326: mov esi, ecx */
  esi = ecx;
/* 855328: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x85532eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 85532e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 855330: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 855334: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 855337: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 85533a: mov ecx, 5 */
  ecx = 0x5u;
/* 85533f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 855341: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855343: ret 4 */
  esp += 8; SPILL(); return;
}

void f_855360(void) {
  LOAD_REGS();
L_855360: /* 855360: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 855364: mov eax, ecx */
  eax = ecx;
/* 855366: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 85536a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85536d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85536e: mov dword ptr [eax], 0xa1704c */
  W32((uint32_t)(eax), 0xa1704cu);
/* 855374: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 855377: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 85537a: xor edx, edx */
  edx = 0;
/* 85537c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85537e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 855381: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855382: lea edx, [edx*8 + 0x1c] */
  edx = (uint32_t)(edx*8 + 0x1cu);
/* 855389: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 85538c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8553a0(void) {
  LOAD_REGS();
L_8553a0: /* 8553a0: xor eax, eax */
  eax = 0;
/* 8553a2: xor edx, edx */
  edx = 0;
/* 8553a4: ret  */
  esp += 4; SPILL(); return;
}

void f_8553c0(void) {
  LOAD_REGS();
L_8553c0: /* 8553c0: mov eax, 1 */
  eax = 0x1u;
/* 8553c5: ret  */
  esp += 4; SPILL(); return;
}

void f_8553e0(void) {
  LOAD_REGS();
L_8553e0: /* 8553e0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8553e3: ret  */
  esp += 4; SPILL(); return;
}

void f_855400(void) {
  LOAD_REGS();
L_855400: /* 855400: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 855403: ret  */
  esp += 4; SPILL(); return;
}

void f_855420(void) {
  LOAD_REGS();
L_855420: /* 855420: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 855424: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 85542a: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* 855431: mov dword ptr [edx + 8], 4 */
  W32((uint32_t)(edx + 0x8u), 0x4u);
/* 855438: mov dword ptr [edx + 0xc], 2 */
  W32((uint32_t)(edx + 0xcu), 0x2u);
/* 85543f: mov dword ptr [edx + 0x10], 1 */
  W32((uint32_t)(edx + 0x10u), 0x1u);
/* 855446: mov dword ptr [edx + 0x14], 4 */
  W32((uint32_t)(edx + 0x14u), 0x4u);
/* 85544d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 855450: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 855451: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* 855454: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855456: mov eax, 3 */
  eax = 0x3u;
/* 85545b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85545c: je 0x855471 */
  if (zf) goto L_855471;
L_85545e: /* 85545e: mov dword ptr [edx + 0x18], 2 */
  W32((uint32_t)(edx + 0x18u), 0x2u);
/* 855465: mov dword ptr [edx + 0x1c], 5 */
  W32((uint32_t)(edx + 0x1cu), 0x5u);
/* 85546c: mov eax, 4 */
  eax = 0x4u;
L_855471: /* 855471: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8554a0(void) {
  LOAD_REGS();
L_8554a0: /* 8554a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8554a4: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8554aa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8554c0(void) {
  LOAD_REGS();
L_8554c0: /* 8554c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8554c1: mov ebp, esp */
  ebp = esp;
/* 8554c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8554c5: push 0x9d3f40 */
  { uint32_t v = 0x9d3f40u; esp -= 4; W32(esp, v); }
/* 8554ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8554d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8554d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8554d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8554db: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8554de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8554df: mov ebx, ecx */
  ebx = ecx;
/* 8554e1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8554e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8554e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8554e7: xor esi, esi */
  esi = 0;
/* 8554e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8554ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8554ed: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8554f0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8554f3: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8554f6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8554f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_855500: /* 855500: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 855503: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855506: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 855509: jge 0x855575 */
  if ((sf == of)) goto L_855575;
L_85550b: /* 85550b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85550e: mov edi, dword ptr [edx + esi*4 + 4] */
  edi = R32((uint32_t)(edx + esi*4 + 0x4u));
/* 855512: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 855515: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 855517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 855518: mov ecx, edi */
  ecx = edi;
/* 85551a: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x85551du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85551d: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 855520: imul edx, dword ptr [ebx + 0xc] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0xcu)));
  edx = (uint32_t)r;
  }
/* 855524: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 855527: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 855529: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85552a: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85552d: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 855530: jl 0x855540 */
  if ((sf != of)) goto L_855540;
L_855532: /* 855532: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 855535: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 85553b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85553e: xor esi, esi */
  esi = 0;
L_855540: /* 855540: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 855543: jmp 0x855500 */
  goto L_855500;
L_855575: /* 855575: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 855578: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855579: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85557a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855581: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855582: mov esp, ebp */
  esp = ebp;
/* 855584: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 855585: ret 4 */
  esp += 8; SPILL(); return;
}

void f_855545(void) {
  LOAD_REGS();
L_855545: /* 855545: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855548: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85554d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 855550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855551: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 855554: call 0x99caf8 */
  esp -= 4; W32(esp, 0x855559u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_855559(); return;
}

void f_855559(void) {
  LOAD_REGS();
L_855559: /* 855559: push 0xa17078 */
  { uint32_t v = 0xa17078u; esp -= 4; W32(esp, v); }
/* 85555e: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 855563: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x855569u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 855569: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85556c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85556e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855570: call 0x99caf8 */
  esp -= 4; W32(esp, 0x855575u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 855575: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 855578: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855579: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85557a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855581: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855582: mov esp, ebp */
  esp = ebp;
/* 855584: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 855585: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8555d0(void) {
  LOAD_REGS();
L_8555d0: /* 8555d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8555d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8555d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8555d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8555d4: mov esi, ecx */
  esi = ecx;
/* 8555d6: mov dword ptr [esi], 0x9f7d74 */
  W32((uint32_t)(esi), 0x9f7d74u);
/* 8555dc: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8555e2: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8555e5: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8555e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8555ea: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8555ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8555f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8555f1: call 0x99c910 */
  esp -= 4; W32(esp, 0x8555f6u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8555f6: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8555fb: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8555fe: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 855601: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 855604: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 85560a: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 85560d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 855610: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 855614: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 855617: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 85561a: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 855621: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 855623: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x855629u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 855629: or dl, 0xff */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 85562c: xor ecx, ecx */
  ecx = 0;
/* 85562e: mov edi, edi */
  edi = edi;
L_855630: /* 855630: test al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 855632: je 0x85563e */
  if (zf) goto L_85563e;
L_855634: /* 855634: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 855635: shl dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 855637: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85563a: jl 0x855630 */
  if ((sf != of)) goto L_855630;
L_85563c: /* 85563c: jmp 0x855641 */
  goto L_855641;
L_85563e: /* 85563e: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
L_855641: /* 855641: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 855644: lea ecx, [eax*8 + 0x1c] */
  ecx = (uint32_t)(eax*8 + 0x1cu);
/* 85564b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85564c: mov dword ptr [esi + 0x1c], 1 */
  W32((uint32_t)(esi + 0x1cu), 0x1u);
/* 855653: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 855656: mov eax, esi */
  eax = esi;
/* 855658: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855659: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85565a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85565b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_855690(void) {
  LOAD_REGS();
L_855690: /* 855690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 855691: mov ebp, esp */
  ebp = esp;
/* 855693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 855695: push 0x9d3f50 */
  { uint32_t v = 0x9d3f50u; esp -= 4; W32(esp, v); }
/* 85569a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8556a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8556a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8556a8: sub esp, 0xf0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8556ae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8556b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8556b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8556b3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8556b6: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 8556b9: xor esi, esi */
  esi = 0;
/* 8556bb: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8556bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8556be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8556c1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8556c4: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8556c7: je 0x8556cc */
  if (zf) goto L_8556cc;
L_8556c9: /* 8556c9: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_8556cc: /* 8556cc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8556cf: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8556d2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8556d5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8556d8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8556db: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 8556de: mov edi, edi */
  edi = edi;
L_8556e0: /* 8556e0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8556e3: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8556e6: cmp esi, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8556e9: jge 0x855bed */
  if ((sf == of)) goto L_855bed;
L_8556ef: /* 8556ef: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8556f2: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* 8556f5: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8556f8: mov ebx, dword ptr [esi + eax] */
  ebx = R32((uint32_t)(esi + eax));
/* 8556fb: mov ecx, ebx */
  ecx = ebx;
/* 8556fd: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 855700: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x855705u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 855705: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855708: mov edi, dword ptr [ebx + 0x54] */
  edi = R32((uint32_t)(ebx + 0x54u));
/* 85570b: mov ecx, eax */
  ecx = eax;
/* 85570d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 855710: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 855713: mov esi, dword ptr [edx + esi + 4] */
  esi = R32((uint32_t)(edx + esi + 0x4u));
/* 855717: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 85571a: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 85571d: mov esi, dword ptr [ebx + 0x27c] */
  esi = R32((uint32_t)(ebx + 0x27cu));
/* 855723: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855725: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 855728: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 85572b: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 855732: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 855735: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 855738: je 0x855793 */
  if (zf) goto L_855793;
L_85573a: /* 85573a: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 85573d: cmp eax, dword ptr [edi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 855740: jne 0x855793 */
  if (!zf) goto L_855793;
L_855742: /* 855742: xor ebx, ebx */
  ebx = 0;
L_855744: /* 855744: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 855747: jge 0x85576f */
  if ((sf == of)) goto L_85576f;
L_855749: /* 855749: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 85574c: lea edx, [ebx + ebx*4] */
  edx = (uint32_t)(ebx + ebx*4);
/* 85574f: mov edx, dword ptr [eax + edx*4 + 8] */
  edx = R32((uint32_t)(eax + edx*4 + 0x8u));
/* 855753: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 855756: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 855759: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85575c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85575d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 855760: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 855762: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 855765: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 855768: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85576a: jne 0x85577b */
  if (!zf) goto L_85577b;
L_85576c: /* 85576c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85576d: jmp 0x855744 */
  goto L_855744;
L_85576f: /* 85576f: mov eax, 1 */
  eax = 0x1u;
/* 855774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855776: je 0x85577b */
  if (zf) goto L_85577b;
L_855778: /* 855778: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
L_85577b: /* 85577b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 85577e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855780: je 0x855793 */
  if (zf) goto L_855793;
L_855782: /* 855782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 855783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855784: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 855785: call 0x6cac72 */
  esp -= 4; W32(esp, 0x85578au); SPILL(); f_6cac72(); if (g_unwind) return; RELOAD();
/* 85578a: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85578d: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 855790: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_855793: /* 855793: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855796: mov edx, dword ptr [edx + 0x14] */
  edx = R32((uint32_t)(edx + 0x14u));
/* 855799: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 85579f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8557a1: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8557a4: jle 0x8557a9 */
  if ((zf || sf != of)) goto L_8557a9;
L_8557a6: /* 8557a6: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_8557a9: /* 8557a9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8557ac: movzx ebx, word ptr [eax + 0xa] */
  ebx = (uint32_t)(R16((uint32_t)(eax + 0xau)));
L_8557b0: /* 8557b0: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8557b3: movzx eax, word ptr [edx + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0xcu)));
/* 8557b7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8557b9: jg 0x855bac */
  if ((!zf && sf == of)) goto L_855bac;
L_8557bf: /* 8557bf: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 8557c2: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 8557c5: fld dword ptr [eax + edx*8 + 8] */
  { double v = F32((uint32_t)(eax + edx*8 + 0x8u)); FPUSH(v); }
/* 8557c9: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8557cc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8557cf: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 8557d2: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8557d5: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8557d8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8557da: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8557dd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8557e0: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8557e3: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 8557ea: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8557ed: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8557f0: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8557f3: lea edi, [ebp - 0x80] */
  edi = (uint32_t)(ebp + 0xffffff80u);
/* 8557f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8557f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8557fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8557fc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8557ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 855801: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 855804: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 855806: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 855809: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85580c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 85580f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 855812: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 855815: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 855818: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85581b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85581e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 855821: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855823: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855825: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855827: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855829: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85582b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85582e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 855831: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855834: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 855837: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85583a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85583d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855840: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 855843: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855845: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855847: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855849: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85584b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85584d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855850: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 855853: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855856: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 855859: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85585c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85585f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855862: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 855865: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855867: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855869: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85586b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85586d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85586f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855871: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 855873: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 855875: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 855878: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85587b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85587e: mov esi, dword ptr [ebp - 0x80] */
  esi = R32((uint32_t)(ebp + 0xffffff80u));
/* 855881: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 855884: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 855886: mov esi, dword ptr [ebp - 0x7c] */
  esi = R32((uint32_t)(ebp + 0xffffff84u));
/* 855889: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 85588c: mov esi, dword ptr [ebp - 0x78] */
  esi = R32((uint32_t)(ebp + 0xffffff88u));
/* 85588f: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 855892: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855895: mov esi, dword ptr [edx + 0x1c] */
  esi = R32((uint32_t)(edx + 0x1cu));
/* 855898: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85589a: je 0x855976 */
  if (zf) goto L_855976;
L_8558a0: /* 8558a0: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8558a3: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 8558a6: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8558a9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8558ac: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8558af: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8558b2: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8558b5: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8558b8: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8558bb: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8558c2: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8558c5: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8558c8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8558cb: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 8558d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558d3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8558d5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558d7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8558da: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558dc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8558df: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558e1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8558e4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558e7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8558ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558ed: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8558f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558f3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8558f6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558f9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8558fc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8558fe: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855900: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855902: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855904: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 855906: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855909: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85590c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85590f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 855912: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855915: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 855918: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85591b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85591e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855920: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855922: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855924: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855926: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 855928: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85592b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85592e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855931: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 855934: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855937: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85593a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85593d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 855940: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855942: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855944: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855946: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855948: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85594a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85594c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85594e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 855950: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 855953: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 855956: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 855959: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 85595f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 855962: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 855964: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 85596a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85596d: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 855973: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_855976: /* 855976: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 855979: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 85597f: test dh, 0x20 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 855982: je 0x8559a1 */
  if (zf) goto L_8559a1;
L_855984: /* 855984: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855987: mov byte ptr [ebp - 0x24], 0x7f */
  W8((uint32_t)(ebp + 0xffffffdcu), 0x7fu);
/* 85598b: mov byte ptr [ebp - 0x23], 0x7f */
  W8((uint32_t)(ebp + 0xffffffddu), 0x7fu);
/* 85598f: mov byte ptr [ebp - 0x22], 0x7f */
  W8((uint32_t)(ebp + 0xffffffdeu), 0x7fu);
/* 855993: mov byte ptr [ebp - 0x21], 0xff */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xffu);
/* 855997: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85599a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 85599c: jmp 0x855b25 */
  goto L_855b25;
L_8559a1: /* 8559a1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8559a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8559a6: je 0x855a72 */
  if (zf) goto L_855a72;
L_8559ac: /* 8559ac: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 8559af: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 8559b2: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8559b5: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8559b7: movzx eax, byte ptr [ecx + 0xbb] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xbbu)));
/* 8559be: movzx edx, byte ptr [ecx + 0xb8] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xb8u)));
/* 8559c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8559c8: movzx eax, byte ptr [ecx + 0xb9] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xb9u)));
/* 8559cf: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8559d2: movzx ecx, byte ptr [ecx + 0xba] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xbau)));
/* 8559d9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8559df: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8559e2: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8559e7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8559ea: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8559ed: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8559f3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8559f6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8559f9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8559ff: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855a02: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855a08: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 855a0e: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 855a14: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 855a1a: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 855a20: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 855a26: lea edx, [ebp - 0xec] */
  edx = (uint32_t)(ebp + 0xffffff14u);
/* 855a2c: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 855a32: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 855a38: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 855a3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 855a3f: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 855a45: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 855a4b: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 855a51: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x855a57u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 855a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855a58: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 855a5e: call 0x6c576d */
  esp -= 4; W32(esp, 0x855a63u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 855a63: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 855a65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855a66: mov ecx, esi */
  ecx = esi;
/* 855a68: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x855a6du); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
/* 855a6d: jmp 0x855b25 */
  goto L_855b25;
L_855a72: /* 855a72: movzx edx, byte ptr [ecx + 0xbb] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xbbu)));
/* 855a79: movzx eax, byte ptr [ecx + 0xb8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xb8u)));
/* 855a80: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 855a83: movzx edx, byte ptr [ecx + 0xb9] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xb9u)));
/* 855a8a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855a8d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 855a90: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855a96: movzx eax, byte ptr [ecx + 0xba] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xbau)));
/* 855a9d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855aa0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 855aa3: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855aa9: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 855aae: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855ab1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 855ab4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855aba: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855abd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855ac3: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 855ac9: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 855acf: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 855ad5: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 855adb: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 855ae1: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 855ae7: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 855aed: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 855af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 855af4: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 855afa: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 855b00: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 855b06: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 855b0c: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x855b12u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 855b12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855b13: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 855b19: call 0x6c576d */
  esp -= 4; W32(esp, 0x855b1eu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 855b1e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 855b20: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855b23: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_855b25: /* 855b25: xor ecx, ecx */
  ecx = 0;
L_855b27: /* 855b27: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 855b2a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 855b2c: jge 0x855b60 */
  if ((sf == of)) goto L_855b60;
L_855b2e: /* 855b2e: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 855b31: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 855b37: mov eax, ecx */
  eax = ecx;
/* 855b39: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 855b3c: mov edx, dword ptr [eax + edx + 4] */
  edx = R32((uint32_t)(eax + edx + 0x4u));
/* 855b40: mov edi, dword ptr [edx + ebx*8] */
  edi = R32((uint32_t)(edx + ebx*8));
/* 855b43: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 855b46: mov dword ptr [edx + ecx*8], edi */
  W32((uint32_t)(edx + ecx*8), edi);
/* 855b49: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 855b4f: mov eax, dword ptr [eax + esi + 4] */
  eax = R32((uint32_t)(eax + esi + 0x4u));
/* 855b53: mov eax, dword ptr [eax + ebx*8 + 4] */
  eax = R32((uint32_t)(eax + ebx*8 + 0x4u));
/* 855b57: mov dword ptr [edx + ecx*8 + 4], eax */
  W32((uint32_t)(edx + ecx*8 + 0x4u), eax);
/* 855b5b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 855b5c: jmp 0x855b27 */
  goto L_855b27;
L_855b60: /* 855b60: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855b63: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 855b66: jge 0x855b7d */
  if ((sf == of)) goto L_855b7d;
L_855b68: /* 855b68: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 855b6b: mov dword ptr [ecx + eax*8], 0 */
  W32((uint32_t)(ecx + eax*8), 0x0u);
/* 855b72: mov dword ptr [ecx + eax*8 + 4], 0 */
  W32((uint32_t)(ecx + eax*8 + 0x4u), 0x0u);
/* 855b7a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 855b7b: jmp 0x855b60 */
  goto L_855b60;
L_855b7d: /* 855b7d: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 855b80: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 855b83: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 855b86: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 855b89: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855b8c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 855b8e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 855b90: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 855b92: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 855b94: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 855b97: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 855b9a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 855b9d: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 855ba0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 855ba3: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 855ba6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 855ba7: jmp 0x8557b0 */
  goto L_8557b0;
L_855bac: /* 855bac: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 855baf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 855bb0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 855bb3: mov esi, eax */
  esi = eax;
/* 855bb5: jmp 0x8556e0 */
  goto L_8556e0;
L_855bed: /* 855bed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 855bf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855bf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855bf2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855bf9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855bfa: mov esp, ebp */
  esp = ebp;
/* 855bfc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 855bfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_855b5e(void) {
  LOAD_REGS();
  goto L_855b5e;
L_8556e0: /* 8556e0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8556e3: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8556e6: cmp esi, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8556e9: jge 0x855bed */
  if ((sf == of)) goto L_855bed;
L_8556ef: /* 8556ef: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8556f2: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* 8556f5: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8556f8: mov ebx, dword ptr [esi + eax] */
  ebx = R32((uint32_t)(esi + eax));
/* 8556fb: mov ecx, ebx */
  ecx = ebx;
/* 8556fd: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 855700: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x855705u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 855705: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855708: mov edi, dword ptr [ebx + 0x54] */
  edi = R32((uint32_t)(ebx + 0x54u));
/* 85570b: mov ecx, eax */
  ecx = eax;
/* 85570d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 855710: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 855713: mov esi, dword ptr [edx + esi + 4] */
  esi = R32((uint32_t)(edx + esi + 0x4u));
/* 855717: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 85571a: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 85571d: mov esi, dword ptr [ebx + 0x27c] */
  esi = R32((uint32_t)(ebx + 0x27cu));
/* 855723: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855725: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 855728: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 85572b: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 855732: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 855735: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 855738: je 0x855793 */
  if (zf) goto L_855793;
L_85573a: /* 85573a: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 85573d: cmp eax, dword ptr [edi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 855740: jne 0x855793 */
  if (!zf) goto L_855793;
L_855742: /* 855742: xor ebx, ebx */
  ebx = 0;
L_855744: /* 855744: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 855747: jge 0x85576f */
  if ((sf == of)) goto L_85576f;
L_855749: /* 855749: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 85574c: lea edx, [ebx + ebx*4] */
  edx = (uint32_t)(ebx + ebx*4);
/* 85574f: mov edx, dword ptr [eax + edx*4 + 8] */
  edx = R32((uint32_t)(eax + edx*4 + 0x8u));
/* 855753: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 855756: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 855759: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85575c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85575d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 855760: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 855762: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 855765: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 855768: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85576a: jne 0x85577b */
  if (!zf) goto L_85577b;
L_85576c: /* 85576c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85576d: jmp 0x855744 */
  goto L_855744;
L_85576f: /* 85576f: mov eax, 1 */
  eax = 0x1u;
/* 855774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855776: je 0x85577b */
  if (zf) goto L_85577b;
L_855778: /* 855778: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
L_85577b: /* 85577b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 85577e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855780: je 0x855793 */
  if (zf) goto L_855793;
L_855782: /* 855782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 855783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855784: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 855785: call 0x6cac72 */
  esp -= 4; W32(esp, 0x85578au); SPILL(); f_6cac72(); if (g_unwind) return; RELOAD();
/* 85578a: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85578d: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 855790: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_855793: /* 855793: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855796: mov edx, dword ptr [edx + 0x14] */
  edx = R32((uint32_t)(edx + 0x14u));
/* 855799: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 85579f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8557a1: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8557a4: jle 0x8557a9 */
  if ((zf || sf != of)) goto L_8557a9;
L_8557a6: /* 8557a6: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_8557a9: /* 8557a9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8557ac: movzx ebx, word ptr [eax + 0xa] */
  ebx = (uint32_t)(R16((uint32_t)(eax + 0xau)));
L_8557b0: /* 8557b0: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8557b3: movzx eax, word ptr [edx + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0xcu)));
/* 8557b7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8557b9: jg 0x855bac */
  if ((!zf && sf == of)) goto L_855bac;
L_8557bf: /* 8557bf: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 8557c2: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 8557c5: fld dword ptr [eax + edx*8 + 8] */
  { double v = F32((uint32_t)(eax + edx*8 + 0x8u)); FPUSH(v); }
/* 8557c9: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8557cc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8557cf: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 8557d2: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8557d5: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8557d8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8557da: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8557dd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8557e0: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8557e3: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 8557ea: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8557ed: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8557f0: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8557f3: lea edi, [ebp - 0x80] */
  edi = (uint32_t)(ebp + 0xffffff80u);
/* 8557f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8557f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8557fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8557fc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8557ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 855801: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 855804: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 855806: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 855809: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85580c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 85580f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 855812: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 855815: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 855818: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85581b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85581e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 855821: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855823: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855825: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855827: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855829: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85582b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85582e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 855831: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855834: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 855837: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85583a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85583d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855840: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 855843: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855845: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855847: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855849: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85584b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85584d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855850: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 855853: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855856: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 855859: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85585c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85585f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855862: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 855865: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855867: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855869: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85586b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85586d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85586f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855871: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 855873: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 855875: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 855878: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85587b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85587e: mov esi, dword ptr [ebp - 0x80] */
  esi = R32((uint32_t)(ebp + 0xffffff80u));
/* 855881: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 855884: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 855886: mov esi, dword ptr [ebp - 0x7c] */
  esi = R32((uint32_t)(ebp + 0xffffff84u));
/* 855889: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 85588c: mov esi, dword ptr [ebp - 0x78] */
  esi = R32((uint32_t)(ebp + 0xffffff88u));
/* 85588f: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 855892: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855895: mov esi, dword ptr [edx + 0x1c] */
  esi = R32((uint32_t)(edx + 0x1cu));
/* 855898: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85589a: je 0x855976 */
  if (zf) goto L_855976;
L_8558a0: /* 8558a0: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8558a3: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 8558a6: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8558a9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8558ac: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8558af: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8558b2: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8558b5: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8558b8: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8558bb: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8558c2: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8558c5: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8558c8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8558cb: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 8558d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558d3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8558d5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558d7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8558da: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558dc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8558df: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8558e1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8558e4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558e7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8558ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558ed: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8558f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558f3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8558f6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8558f9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8558fc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8558fe: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855900: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855902: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855904: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 855906: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855909: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85590c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85590f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 855912: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 855915: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 855918: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85591b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85591e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855920: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855922: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855924: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855926: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 855928: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85592b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85592e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855931: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 855934: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 855937: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85593a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85593d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 855940: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 855942: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 855944: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855946: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 855948: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85594a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85594c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85594e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 855950: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 855953: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 855956: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 855959: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 85595f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 855962: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 855964: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 85596a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85596d: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 855973: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_855976: /* 855976: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 855979: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 85597f: test dh, 0x20 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 855982: je 0x8559a1 */
  if (zf) goto L_8559a1;
L_855984: /* 855984: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855987: mov byte ptr [ebp - 0x24], 0x7f */
  W8((uint32_t)(ebp + 0xffffffdcu), 0x7fu);
/* 85598b: mov byte ptr [ebp - 0x23], 0x7f */
  W8((uint32_t)(ebp + 0xffffffddu), 0x7fu);
/* 85598f: mov byte ptr [ebp - 0x22], 0x7f */
  W8((uint32_t)(ebp + 0xffffffdeu), 0x7fu);
/* 855993: mov byte ptr [ebp - 0x21], 0xff */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xffu);
/* 855997: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85599a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 85599c: jmp 0x855b25 */
  goto L_855b25;
L_8559a1: /* 8559a1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8559a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8559a6: je 0x855a72 */
  if (zf) goto L_855a72;
L_8559ac: /* 8559ac: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 8559af: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 8559b2: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8559b5: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8559b7: movzx eax, byte ptr [ecx + 0xbb] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xbbu)));
/* 8559be: movzx edx, byte ptr [ecx + 0xb8] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xb8u)));
/* 8559c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8559c8: movzx eax, byte ptr [ecx + 0xb9] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xb9u)));
/* 8559cf: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8559d2: movzx ecx, byte ptr [ecx + 0xba] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xbau)));
/* 8559d9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8559df: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8559e2: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8559e7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8559ea: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8559ed: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8559f3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8559f6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8559f9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8559ff: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855a02: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855a08: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 855a0e: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 855a14: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 855a1a: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 855a20: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 855a26: lea edx, [ebp - 0xec] */
  edx = (uint32_t)(ebp + 0xffffff14u);
/* 855a2c: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 855a32: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 855a38: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 855a3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 855a3f: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 855a45: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 855a4b: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 855a51: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x855a57u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 855a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855a58: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 855a5e: call 0x6c576d */
  esp -= 4; W32(esp, 0x855a63u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 855a63: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 855a65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855a66: mov ecx, esi */
  ecx = esi;
/* 855a68: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x855a6du); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
/* 855a6d: jmp 0x855b25 */
  goto L_855b25;
L_855a72: /* 855a72: movzx edx, byte ptr [ecx + 0xbb] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xbbu)));
/* 855a79: movzx eax, byte ptr [ecx + 0xb8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xb8u)));
/* 855a80: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 855a83: movzx edx, byte ptr [ecx + 0xb9] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xb9u)));
/* 855a8a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855a8d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 855a90: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855a96: movzx eax, byte ptr [ecx + 0xba] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xbau)));
/* 855a9d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855aa0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 855aa3: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855aa9: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 855aae: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855ab1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 855ab4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855aba: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 855abd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 855ac3: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 855ac9: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 855acf: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 855ad5: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 855adb: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 855ae1: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 855ae7: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 855aed: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 855af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 855af4: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 855afa: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 855b00: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 855b06: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 855b0c: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x855b12u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 855b12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855b13: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 855b19: call 0x6c576d */
  esp -= 4; W32(esp, 0x855b1eu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 855b1e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 855b20: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855b23: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_855b25: /* 855b25: xor ecx, ecx */
  ecx = 0;
L_855b27: /* 855b27: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 855b2a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 855b2c: jge 0x855b60 */
  if ((sf == of)) goto L_855b60;
L_855b2e: /* 855b2e: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 855b31: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 855b37: mov eax, ecx */
  eax = ecx;
/* 855b39: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 855b3c: mov edx, dword ptr [eax + edx + 4] */
  edx = R32((uint32_t)(eax + edx + 0x4u));
/* 855b40: mov edi, dword ptr [edx + ebx*8] */
  edi = R32((uint32_t)(edx + ebx*8));
/* 855b43: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 855b46: mov dword ptr [edx + ecx*8], edi */
  W32((uint32_t)(edx + ecx*8), edi);
/* 855b49: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 855b4f: mov eax, dword ptr [eax + esi + 4] */
  eax = R32((uint32_t)(eax + esi + 0x4u));
/* 855b53: mov eax, dword ptr [eax + ebx*8 + 4] */
  eax = R32((uint32_t)(eax + ebx*8 + 0x4u));
/* 855b57: mov dword ptr [edx + ecx*8 + 4], eax */
  W32((uint32_t)(edx + ecx*8 + 0x4u), eax);
/* 855b5b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 855b5c: jmp 0x855b27 */
  goto L_855b27;
L_855b5e: /* 855b5e: mov edi, edi */
  edi = edi;
L_855b60: /* 855b60: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855b63: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 855b66: jge 0x855b7d */
  if ((sf == of)) goto L_855b7d;
L_855b68: /* 855b68: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 855b6b: mov dword ptr [ecx + eax*8], 0 */
  W32((uint32_t)(ecx + eax*8), 0x0u);
/* 855b72: mov dword ptr [ecx + eax*8 + 4], 0 */
  W32((uint32_t)(ecx + eax*8 + 0x4u), 0x0u);
/* 855b7a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 855b7b: jmp 0x855b60 */
  goto L_855b60;
L_855b7d: /* 855b7d: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 855b80: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 855b83: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 855b86: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 855b89: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 855b8c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 855b8e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 855b90: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 855b92: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 855b94: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 855b97: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 855b9a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 855b9d: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 855ba0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 855ba3: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 855ba6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 855ba7: jmp 0x8557b0 */
  goto L_8557b0;
L_855bac: /* 855bac: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 855baf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 855bb0: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 855bb3: mov esi, eax */
  esi = eax;
/* 855bb5: jmp 0x8556e0 */
  goto L_8556e0;
L_855bed: /* 855bed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 855bf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855bf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855bf2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855bf9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855bfa: mov esp, ebp */
  esp = ebp;
/* 855bfc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 855bfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_855bba(void) {
  LOAD_REGS();
L_855bba: /* 855bba: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 855bc0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 855bc5: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 855bc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 855bc9: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 855bcc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x855bd1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_855bd1(); return;
}

void f_855bd1(void) {
  LOAD_REGS();
L_855bd1: /* 855bd1: push 0xa170d8 */
  { uint32_t v = 0xa170d8u; esp -= 4; W32(esp, v); }
/* 855bd6: push 0xae4968 */
  { uint32_t v = 0xae4968u; esp -= 4; W32(esp, v); }
/* 855bdb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x855be1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 855be1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 855be4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855be6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855be8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x855bedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 855bed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 855bf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855bf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855bf2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855bf9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855bfa: mov esp, ebp */
  esp = ebp;
/* 855bfc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 855bfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_855d60(void) {
  LOAD_REGS();
L_855d60: /* 855d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 855d61: mov ebp, esp */
  ebp = esp;
/* 855d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 855d65: push 0x9d3f60 */
  { uint32_t v = 0x9d3f60u; esp -= 4; W32(esp, v); }
/* 855d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 855d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 855d78: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 855d7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 855d7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 855d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 855d80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 855d81: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 855d84: mov ebx, ecx */
  ebx = ecx;
/* 855d86: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 855d89: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 855d8c: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 855d8f: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 855d92: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 855d95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855d97: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 855d9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 855da1: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 855da4: je 0x855dbe */
  if (zf) goto L_855dbe;
L_855da6: /* 855da6: push 0x1c2 */
  { uint32_t v = 0x1c2u; esp -= 4; W32(esp, v); }
/* 855dab: push 0xae4980 */
  { uint32_t v = 0xae4980u; esp -= 4; W32(esp, v); }
/* 855db0: push 0xae4994 */
  { uint32_t v = 0xae4994u; esp -= 4; W32(esp, v); }
/* 855db5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x855dbbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 855dbb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_855dbe: /* 855dbe: mov ax, word ptr [esi + 0x10] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 855dc2: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 855dc5: jne 0x855ddf */
  if (!zf) goto L_855ddf;
L_855dc7: /* 855dc7: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 855dcc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 855dcf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855dd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855dd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855dd8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855dd9: mov esp, ebp */
  esp = ebp;
/* 855ddb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 855ddc: ret 8 */
  esp += 12; SPILL(); return;
L_855ddf: /* 855ddf: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* 855de2: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 855de5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 855de8: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 855deb: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 855ded: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 855df0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 855df1: idiv dword ptr [ebx + 0x2c] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx + 0x2cu)); if (!d) d = (int32_t)guest_divzero(0x855df1);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 855df4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 855df7: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 855df9: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 855dfc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 855dfe: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 855e01: mov word ptr [ebp - 0x1c], ax */
  W16((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffffu));
/* 855e05: sub ax, word ptr [esi + 0xa] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 855e09: add ax, word ptr [esi + 0xc] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0xcu)));
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 855e0d: lea esi, [ebx + 8] */
  esi = (uint32_t)(ebx + 0x8u);
/* 855e10: mov ecx, esi */
  ecx = esi;
/* 855e12: mov word ptr [ebp - 0x1a], ax */
  W16((uint32_t)(ebp + 0xffffffe6u), (eax & 0xffffu));
/* 855e16: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x855e1cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 855e1c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 855e1e: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 855e21: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 855e24: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 855e27: mov ecx, 5 */
  ecx = 0x5u;
/* 855e2c: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* 855e2f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 855e31: movzx ecx, word ptr [edx + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x10u)));
/* 855e35: mov esi, dword ptr [ebx + 0x44] */
  esi = R32((uint32_t)(ebx + 0x44u));
/* 855e38: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 855e3b: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 855e3d: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 855e3f: mov dword ptr [ebx + 0x44], esi */
  W32((uint32_t)(ebx + 0x44u), esi);
/* 855e42: movzx ecx, word ptr [edx + 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0xau)));
/* 855e46: movzx edx, word ptr [edx + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(edx + 0xcu)));
/* 855e4a: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 855e4c: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 855e4f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 855e50: imul edx, dword ptr [ebx + 0x2c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0x2cu)));
  edx = (uint32_t)r;
  }
/* 855e54: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 855e56: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* 855e59: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 855e5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 855e5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 855e5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 855e65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 855e66: mov esp, ebp */
  esp = ebp;
/* 855e68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 855e69: ret 8 */
  esp += 12; SPILL(); return;
}

void f_855e6c(void) {
  LOAD_REGS();
L_855e6c: /* 855e6c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 855e6f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 855e74: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 855e77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 855e78: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 855e7b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x855e80u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_855e80(); return;
}

void f_855e80(void) {
  LOAD_REGS();
L_855e80: /* 855e80: push 0xa17144 */
  { uint32_t v = 0xa17144u; esp -= 4; W32(esp, v); }
/* 855e85: push 0xae49a8 */
  { uint32_t v = 0xae49a8u; esp -= 4; W32(esp, v); }
/* 855e8a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x855e90u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 855e90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 855e93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855e95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855e97: call 0x99caf8 */
  esp -= 4; W32(esp, 0x855e9cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_855e9c: guest_badaddr(0x855e9c); return;
}

void f_855ef0(void) {
  LOAD_REGS();
L_855ef0: /* 855ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 855ef1: mov ebp, esp */
  ebp = esp;
/* 855ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 855ef5: push 0x9d3f70 */
  { uint32_t v = 0x9d3f70u; esp -= 4; W32(esp, v); }
/* 855efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 855f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 855f08: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 855f0b: mov eax, dword ptr [0xcc9b8c] */
  eax = R32((uint32_t)(0xcc9b8cu));
/* 855f10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855f12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 855f13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 855f14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 855f15: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 855f18: mov esi, ecx */
  esi = ecx;
/* 855f1a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 855f21: jne 0x855fa7 */
  if (!zf) goto L_855fa7;
L_855f27: /* 855f27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855f29: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 855f2c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x855f32u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 855f32: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 855f37: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 855f3c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x855f42u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 855f42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 855f44: jne 0x855f5e */
  if (!zf) goto L_855f5e;
L_855f46: /* 855f46: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 855f4b: push 0xae4a78 */
  { uint32_t v = 0xae4a78u; esp -= 4; W32(esp, v); }
/* 855f50: push 0xae4abc */
  { uint32_t v = 0xae4abcu; esp -= 4; W32(esp, v); }
/* 855f55: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x855f5bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 855f5b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_855f5e: /* 855f5e: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x855f64u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 855f64: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 855f6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 855f6c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 855f6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855f71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 855f72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855f74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 855f76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 855f77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 855f78: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 855f7d: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x855f83u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 855f83: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 855f89: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 855f8c: push 0xcc9b8c */
  { uint32_t v = 0xcc9b8cu; esp -= 4; W32(esp, v); }
/* 855f91: mov dword ptr [0xcc9b8c], eax */
  W32((uint32_t)(0xcc9b8cu), eax);
/* 855f96: call 0x6c1203 */
  esp -= 4; W32(esp, 0x855f9bu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 855f9b: mov eax, dword ptr [0xcc9b8c] */
  eax = R32((uint32_t)(0xcc9b8cu));
/* 855fa0: or dword ptr [eax + 0xc8], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xc8u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xc8u), r);
  }
L_855fa7: /* 855fa7: mov eax, dword ptr [0xcc9b8c] */
  eax = R32((uint32_t)(0xcc9b8cu));
/* 855fac: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 855faf: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 855fb2: mov edx, dword ptr [0xcc9b8c] */
  edx = R32((uint32_t)(0xcc9b8cu));
/* 855fb8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 855fbb: mov dword ptr [edx + 0x40], ecx */
  W32((uint32_t)(edx + 0x40u), ecx);
/* 855fbe: mov al, byte ptr [esi + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x14u))) & 0xffu);
/* 855fc1: mov ecx, dword ptr [0xcc9b8c] */
  ecx = R32((uint32_t)(0xcc9b8cu));
/* 855fc7: mov byte ptr [ecx + 0x44], al */
  W8((uint32_t)(ecx + 0x44u), (eax & 0xffu));
/* 855fca: mov dl, byte ptr [esi + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x18u))) & 0xffu);
/* 855fcd: mov eax, dword ptr [0xcc9b8c] */
  eax = R32((uint32_t)(0xcc9b8cu));
/* 855fd2: mov byte ptr [eax + 0x45], dl */
  W8((uint32_t)(eax + 0x45u), (edx & 0xffu));
/* 855fd5: mov eax, dword ptr [0xcc9b8c] */
  eax = R32((uint32_t)(0xcc9b8cu));
/* 855fda: or dword ptr [eax + 0xc8], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xc8u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xc8u), r);
  }
/* 855fe1: mov eax, dword ptr [0xcc9b8c] */
  eax = R32((uint32_t)(0xcc9b8cu));
/* 855fe6: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 855fe9: mov ebx, dword ptr [eax + 0xc8] */
  ebx = R32((uint32_t)(eax + 0xc8u));
/* 855fef: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 855ff2: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 855ff5: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 855ff7: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 855ffa: mov edx, ebx */
  edx = ebx;
/* 855ffc: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 855ffe: mov dword ptr [eax + 0xc8], edx */
  W32((uint32_t)(eax + 0xc8u), edx);
/* 856004: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 856006: mov ecx, edi */
  ecx = edi;
/* 856008: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85600au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85600a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85600d: mov ecx, esp */
  ecx = esp;
/* 85600f: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 856012: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856014: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856017: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 85601e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 856021: mov eax, esp */
  eax = esp;
/* 856023: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 856025: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 85602c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85602f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 856032: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 856039: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85603c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85603f: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x856045u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 856045: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 856047: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856049: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85604b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85604d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85604f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856051: mov ecx, edi */
  ecx = edi;
/* 856053: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x856056u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856056: mov eax, dword ptr [0xcc9b8c] */
  eax = R32((uint32_t)(0xcc9b8cu));
/* 85605b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85605d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85605f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856064: mov ecx, edi */
  ecx = edi;
/* 856066: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x856069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856069: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85606b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85606d: mov ecx, edi */
  ecx = edi;
/* 85606f: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0x856072u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856072: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 856075: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 856078: xor eax, eax */
  eax = 0;
/* 85607a: mov dword ptr [ebp - 0x44], 0xa1704c */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xa1704cu);
/* 856081: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 856084: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 856087: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856089: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85608b: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 85608e: mov dword ptr [ebp - 0x34], 0xa16e9c */
  W32((uint32_t)(ebp + 0xffffffccu), 0xa16e9cu);
/* 856095: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 856098: lea eax, [eax*8 + 0x1c] */
  eax = (uint32_t)(eax*8 + 0x1cu);
/* 85609f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8560a2: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8560a5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8560a8: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8560ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8560ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8560ae: mov ecx, edi */
  ecx = edi;
/* 8560b0: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x8560b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8560b3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8560b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8560b6: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8560b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8560ba: mov ecx, edi */
  ecx = edi;
/* 8560bc: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x8560bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8560bf: mov ecx, eax */
  ecx = eax;
/* 8560c1: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 8560c4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8560c5: idiv dword ptr [esi + 0x20] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x20u)); if (!d) d = (int32_t)guest_divzero(0x8560c5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8560c8: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8560ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8560cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8560cc: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 8560d1: mul dword ptr [esi + 0x28] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esi + 0x28u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8560d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8560d6: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8560d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8560da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8560db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8560dd: mov ecx, edi */
  ecx = edi;
/* 8560df: call dword ptr [ebx + 0x5c] */
  { uint32_t t = R32((uint32_t)(ebx + 0x5cu)); esp -= 4; W32(esp, 0x8560e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8560e2: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8560e7: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 8560ed: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 8560f0: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 8560f3: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8560f5: mov dword ptr [eax + ecx*4], ebx */
  W32((uint32_t)(eax + ecx*4), ebx);
/* 8560f8: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8560fe: mov ebx, dword ptr [0xce8370] */
  ebx = R32((uint32_t)(0xce8370u));
/* 856104: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 856109: mul dword ptr [esi + 0x28] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esi + 0x28u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 85610c: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 85610f: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 856112: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 856114: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* 856117: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 856119: mov ecx, edi */
  ecx = edi;
/* 85611b: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x85611eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85611e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 856121: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 856122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 856123: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85612a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85612b: mov esp, ebp */
  esp = ebp;
/* 85612d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85612e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_856131(void) {
  LOAD_REGS();
L_856131: /* 856131: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 856134: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 856139: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 85613c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85613d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 856140: call 0x99caf8 */
  esp -= 4; W32(esp, 0x856145u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_856145(); return;
}

void f_856145(void) {
  LOAD_REGS();
L_856145: /* 856145: push 0xa1718c */
  { uint32_t v = 0xa1718cu; esp -= 4; W32(esp, v); }
/* 85614a: push 0xae4960 */
  { uint32_t v = 0xae4960u; esp -= 4; W32(esp, v); }
/* 85614f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x856155u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 856155: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 856158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85615a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85615c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x856161u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_856161: guest_badaddr(0x856161); return;
}

void f_856210(void) {
  LOAD_REGS();
L_856210: /* 856210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 856211: mov ebp, esp */
  ebp = esp;
/* 856213: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 856215: push 0x9d3f8b */
  { uint32_t v = 0x9d3f8bu; esp -= 4; W32(esp, v); }
/* 85621a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 856220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856221: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 856228: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85622b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85622c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85622d: mov esi, ecx */
  esi = ecx;
/* 85622f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 856230: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 856233: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 856236: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 856239: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x85623fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 85623f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 856242: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856243: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 856246: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85624d: call 0x6c7e4b */
  esp -= 4; W32(esp, 0x856252u); SPILL(); f_6c7e4b(); if (g_unwind) return; RELOAD();
/* 856252: mov dword ptr [esi + 0x34], 0x9f6b0c */
  W32((uint32_t)(esi + 0x34u), 0x9f6b0cu);
/* 856259: mov eax, dword ptr [0xcfa1b0] */
  eax = R32((uint32_t)(0xcfa1b0u));
/* 85625e: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 856261: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 856263: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856265: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 85626a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85626b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85626c: call 0x99c910 */
  esp -= 4; W32(esp, 0x856271u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 856271: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 856277: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 85627c: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 85627f: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 856282: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 856284: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 85628a: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 85628d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 856290: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 856293: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 856296: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 856299: mov dword ptr [esi + 0x44], 0 */
  W32((uint32_t)(esi + 0x44u), 0x0u);
/* 8562a0: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8562a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8562a4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8562a8: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8562aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8562ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8562b0: je 0x8562c0 */
  if (zf) goto L_8562c0;
L_8562b2: /* 8562b2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8562b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8562b7: jne 0x8562c0 */
  if (!zf) goto L_8562c0;
L_8562b9: /* 8562b9: mov eax, 1 */
  eax = 0x1u;
/* 8562be: jmp 0x8562c2 */
  goto L_8562c2;
L_8562c0: /* 8562c0: xor eax, eax */
  eax = 0;
L_8562c2: /* 8562c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8562c5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8562c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8562c9: mov eax, esi */
  eax = esi;
/* 8562cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8562cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8562d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8562d4: mov esp, ebp */
  esp = ebp;
/* 8562d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8562d7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8562da(void) {
  LOAD_REGS();
L_8562da: /* 8562da: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8562dd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8562e2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8562e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8562e6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8562e9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8562eeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8562ee(); return;
}

void f_8562ee(void) {
  LOAD_REGS();
L_8562ee: /* 8562ee: push 0xa171d8 */
  { uint32_t v = 0xa171d8u; esp -= 4; W32(esp, v); }
/* 8562f3: push 0xae4978 */
  { uint32_t v = 0xae4978u; esp -= 4; W32(esp, v); }
/* 8562f8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8562feu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8562fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 856301: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856303: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856305: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85630au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85630a: guest_badaddr(0x85630a); return;
}

void f_856350(void) {
  LOAD_REGS();
L_856350: /* 856350: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_856370(void) {
  LOAD_REGS();
L_856370: /* 856370: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 856371: mov ebp, esp */
  ebp = esp;
/* 856373: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 856375: push 0x9d3fa8 */
  { uint32_t v = 0x9d3fa8u; esp -= 4; W32(esp, v); }
/* 85637a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 856380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856381: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 856388: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85638b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85638c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85638d: mov esi, ecx */
  esi = ecx;
/* 85638f: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 856395: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856397: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 856398: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85639b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 85639e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8563a5: je 0x856459 */
  if (zf) goto L_856459;
L_8563ab: /* 8563ab: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8563b1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8563b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8563b5: je 0x856459 */
  if (zf) goto L_856459;
L_8563bb: /* 8563bb: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8563be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8563c0: je 0x856459 */
  if (zf) goto L_856459;
L_8563c6: /* 8563c6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8563c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8563cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8563cc: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8563cf: call 0x6c460b */
  esp -= 4; W32(esp, 0x8563d4u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8563d4: lea edx, [esi + 0x3a8] */
  edx = (uint32_t)(esi + 0x3a8u);
/* 8563da: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8563dc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8563df: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8563e2: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8563e5: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8563eb: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8563ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8563f1: mov eax, esi */
  eax = esi;
/* 8563f3: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 8563f5: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8563f8: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 8563fb: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8563fe: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 856404: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 856406: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 856409: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85640f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 856411: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 856414: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 856417: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 85641b: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 85641e: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 856421: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 856424: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 856427: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 85642a: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 85642d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_856430: /* 856430: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 856433: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 856439: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85643b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85643e: je 0x85646c */
  if (zf) goto L_85646c;
L_856440: /* 856440: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 856443: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* 856446: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 856448: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85644b: je 0x85646c */
  if (zf) goto L_85646c;
L_85644d: /* 85644d: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 856450: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 856454: call 0x6cadcb */
  esp -= 4; W32(esp, 0x856459u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_856459: /* 856459: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85645c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85645d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85645e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 856465: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 856466: mov esp, ebp */
  esp = ebp;
/* 856468: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 856469: ret 0xc */
  esp += 16; SPILL(); return;
L_85646c: /* 85646c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 85646f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 856472: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 856478: mov eax, dword ptr [edx + 0x16c] */
  eax = R32((uint32_t)(edx + 0x16cu));
/* 85647e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 856481: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 856486: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 85648c: mov byte ptr [ebp + 0xc], 0xff */
  W8((uint32_t)(ebp + 0xcu), 0xffu);
/* 856490: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 856493: mov byte ptr [ebp + 0xd], 0x40 */
  W8((uint32_t)(ebp + 0xdu), 0x40u);
/* 856497: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 85649d: mov byte ptr [ebp + 0xe], 0xff */
  W8((uint32_t)(ebp + 0xeu), 0xffu);
/* 8564a1: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8564a5: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8564a8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8564ab: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8564ae: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8564b0: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8564b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8564b5: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8564b8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8564bb: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8564be: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 8564c4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8564c7: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 8564cd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8564cf: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8564d2: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 8564d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8564d9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8564dc: mov ecx, esp */
  ecx = esp;
/* 8564de: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8564e1: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8564e3: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8564e6: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8564e9: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8564ec: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8564ef: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 8564f2: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8564f5: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8564f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8564fb: mov edx, esp */
  edx = esp;
/* 8564fd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 856500: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 856502: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 856505: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 856508: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 85650b: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 85650e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856511: call 0x6cc74d */
  esp -= 4; W32(esp, 0x856516u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 856516: jmp 0x856430 */
  goto L_856430;
}

void f_85651b(void) {
  LOAD_REGS();
L_85651b: /* 85651b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85651e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 856523: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 856526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 856527: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85652a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85652fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85652f(); return;
}

void f_85652f(void) {
  LOAD_REGS();
L_85652f: /* 85652f: push 0xa1722c */
  { uint32_t v = 0xa1722cu; esp -= 4; W32(esp, v); }
/* 856534: push 0xae4b5c */
  { uint32_t v = 0xae4b5cu; esp -= 4; W32(esp, v); }
/* 856539: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85653fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85653f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 856542: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856544: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856546: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85654bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85654b: guest_badaddr(0x85654b); return;
}

void f_8565d0(void) {
  LOAD_REGS();
L_8565d0: /* 8565d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8565d1: mov ebp, esp */
  ebp = esp;
/* 8565d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8565d5: push 0x9d3fc8 */
  { uint32_t v = 0x9d3fc8u; esp -= 4; W32(esp, v); }
/* 8565da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8565e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8565e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8565e8: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8565eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8565ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8565ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8565ee: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8565f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8565f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8565f6: mov ebx, ecx */
  ebx = ecx;
/* 8565f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8565f9: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8565fc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 856603: call 0x6c460b */
  esp -= 4; W32(esp, 0x856608u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 856608: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 85660b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85660e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 856612: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x856618u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 856618: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 85661b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 85661e: test dword ptr [ebx + 0x88], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856628: je 0x856688 */
  if (zf) goto L_856688;
L_85662a: /* 85662a: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 85662f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 856631: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856632: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856634: mov ecx, edi */
  ecx = edi;
/* 856636: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x856639u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856639: mov ecx, dword ptr [ebx + 0x284] */
  ecx = R32((uint32_t)(ebx + 0x284u));
/* 85663f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 856642: mov eax, dword ptr [edx + 0xdc] */
  eax = R32((uint32_t)(edx + 0xdcu));
/* 856648: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 856649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85664a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85664d: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 856653: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 856655: mov edx, esp */
  edx = esp;
/* 856657: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 856659: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85665c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85665f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 856662: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 856665: lea edx, [ebx + 0x170] */
  edx = (uint32_t)(ebx + 0x170u);
/* 85666b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 85666d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856670: mov eax, esp */
  eax = esp;
/* 856672: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 856674: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 856677: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 85667a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85667d: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 856680: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 856683: call 0x6ccee1 */
  esp -= 4; W32(esp, 0x856688u); SPILL(); f_6ccee1(); if (g_unwind) return; RELOAD();
L_856688: /* 856688: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 85668b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 85668e: test byte ptr [ecx + 0x534], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x534u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 856695: je 0x856a9b */
  if (zf) goto L_856a9b;
L_85669b: /* 85669b: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 8566a0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8566a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8566a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8566a5: mov ecx, edi */
  ecx = edi;
/* 8566a7: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8566aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8566aa: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8566ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8566af: je 0x8566ee */
  if (zf) goto L_8566ee;
L_8566b1: /* 8566b1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8566b3: mov ecx, ebx */
  ecx = ebx;
/* 8566b5: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x8566bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8566bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8566bd: je 0x8566ee */
  if (zf) goto L_8566ee;
L_8566bf: /* 8566bf: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8566c2: mov ecx, dword ptr [eax + 0xdc] */
  ecx = R32((uint32_t)(eax + 0xdcu));
/* 8566c8: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8566cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8566cc: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8566cf: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8566d5: mov edi, esp */
  edi = esp;
/* 8566d7: mov ecx, 7 */
  ecx = 0x7u;
/* 8566dc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8566de: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8566e1: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x8566e6u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 8566e6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8566e9: jmp 0x856944 */
  goto L_856944;
L_8566ee: /* 8566ee: mov eax, dword ptr [ebx + 0x280] */
  eax = R32((uint32_t)(ebx + 0x280u));
/* 8566f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8566f6: je 0x85670a */
  if (zf) goto L_85670a;
L_8566f8: /* 8566f8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8566fa: mov ecx, ebx */
  ecx = ebx;
/* 8566fc: call dword ptr [edx + 0x174] */
  { uint32_t t = R32((uint32_t)(edx + 0x174u)); esp -= 4; W32(esp, 0x856702u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856702: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856704: jne 0x856944 */
  if (!zf) goto L_856944;
L_85670a: /* 85670a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85670d: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 856710: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856712: je 0x856878 */
  if (zf) goto L_856878;
L_856718: /* 856718: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 85671e: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 856721: je 0x856731 */
  if (zf) goto L_856731;
L_856723: /* 856723: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 856726: je 0x856731 */
  if (zf) goto L_856731;
L_856728: /* 856728: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85672b: jne 0x856878 */
  if (!zf) goto L_856878;
L_856731: /* 856731: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 856738: je 0x856944 */
  if (zf) goto L_856944;
L_85673e: /* 85673e: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 856741: cmp dword ptr [eax + 0x540], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 856748: jne 0x8567d4 */
  if (!zf) goto L_8567d4;
L_85674e: /* 85674e: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 856751: fld dword ptr [esi + 0x5c] */
  { double v = F32((uint32_t)(esi + 0x5cu)); FPUSH(v); }
/* 856754: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 856757: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 85675a: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* 856760: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 856763: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 856766: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 856769: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85676c: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 85676f: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 856772: mov edx, dword ptr [ecx + 0x90] */
  edx = R32((uint32_t)(ecx + 0x90u));
/* 856778: fld dword ptr [esi + 0x68] */
  { double v = F32((uint32_t)(esi + 0x68u)); FPUSH(v); }
/* 85677b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85677e: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 856781: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 856783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856784: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 856787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 856788: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85678b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85678e: mov eax, esp */
  eax = esp;
/* 856790: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 856792: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 856795: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 856798: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85679b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 85679e: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8567a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8567a4: mov edx, esp */
  edx = esp;
/* 8567a6: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8567a8: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8567ab: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8567ae: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8567b1: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 8567b7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8567b9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8567bc: mov edx, esp */
  edx = esp;
/* 8567be: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8567c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8567c3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8567c6: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8567c9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8567cc: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8567cf: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x8567d4u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
L_8567d4: /* 8567d4: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 8567da: mov edx, dword ptr [ebx + 0x2d4] */
  edx = R32((uint32_t)(ebx + 0x2d4u));
/* 8567e0: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 8567e6: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 8567e9: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8567eb: mov eax, edx */
  eax = edx;
/* 8567ed: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 8567f3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8567f6: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 8567f9: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8567fc: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 856802: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 856805: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 856808: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85680b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85680e: fadd dword ptr [ebx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x178u)));
/* 856814: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 856817: fadd dword ptr [ebx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x174u)));
/* 85681d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 856820: fadd dword ptr [ebx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x170u)));
/* 856826: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 856829: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85682c: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85682f: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 856832: cmp dword ptr [edx + 0x540], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 856839: je 0x856944 */
  if (zf) goto L_856944;
L_85683f: /* 85683f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 856842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856843: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 856846: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 856847: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 85684a: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x856850u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 856850: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 856853: mov ecx, dword ptr [edx + 0x90] */
  ecx = R32((uint32_t)(edx + 0x90u));
/* 856859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85685a: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85685d: mov esi, eax */
  esi = eax;
/* 85685f: mov edi, esp */
  edi = esp;
/* 856861: mov ecx, 7 */
  ecx = 0x7u;
/* 856866: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 856868: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 85686b: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x856870u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 856870: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 856873: jmp 0x856944 */
  goto L_856944;
L_856878: /* 856878: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85687f: je 0x856944 */
  if (zf) goto L_856944;
L_856885: /* 856885: mov edx, dword ptr [ebx + 0x2d8] */
  edx = R32((uint32_t)(ebx + 0x2d8u));
/* 85688b: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* 856891: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 856894: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 856896: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 856897: mov edx, dword ptr [ecx + 0x90] */
  edx = R32((uint32_t)(ecx + 0x90u));
/* 85689d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85689e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85689f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8568a2: mov eax, esp */
  eax = esp;
/* 8568a4: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8568ab: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8568ae: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8568b0: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8568b7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8568ba: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8568bd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8568c0: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 8568c7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8568ca: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8568cd: mov edx, esp */
  edx = esp;
/* 8568cf: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8568d6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8568d9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8568db: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 8568e2: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8568e5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8568e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8568eb: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8568f2: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8568f5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8568f8: mov ecx, esp */
  ecx = esp;
/* 8568fa: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 856901: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 856904: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 856906: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 85690d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 856910: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 856913: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 85691a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85691d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 856920: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856923: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 856929: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85692b: mov ecx, esp */
  ecx = esp;
/* 85692d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85692f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 856932: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 856935: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 856938: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 85693b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85693c: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 85693f: call 0x6c118b */
  esp -= 4; W32(esp, 0x856944u); SPILL(); f_6c118b(); if (g_unwind) return; RELOAD();
L_856944: /* 856944: mov eax, dword ptr [ebx + 0xa8] */
  eax = R32((uint32_t)(ebx + 0xa8u));
/* 85694a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85694c: je 0x8569d8 */
  if (zf) goto L_8569d8;
L_856952: /* 856952: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 856955: fld dword ptr [esi + 0x5c] */
  { double v = F32((uint32_t)(esi + 0x5cu)); FPUSH(v); }
/* 856958: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 85695b: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 85695e: mov eax, dword ptr [ebx + 0x2c4] */
  eax = R32((uint32_t)(ebx + 0x2c4u));
/* 856964: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 856967: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 85696a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85696d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 856970: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 856973: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 856976: mov edx, dword ptr [ecx + 0xdc] */
  edx = R32((uint32_t)(ecx + 0xdcu));
/* 85697c: fld dword ptr [esi + 0x68] */
  { double v = F32((uint32_t)(esi + 0x68u)); FPUSH(v); }
/* 85697f: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 856982: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 856985: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 856987: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856988: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85698b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85698c: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85698f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856992: mov eax, esp */
  eax = esp;
/* 856994: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 856996: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 856999: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85699c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85699f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8569a2: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8569a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8569a8: mov edx, esp */
  edx = esp;
/* 8569aa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8569ac: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8569af: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8569b2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8569b5: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 8569bb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8569bd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8569c0: mov edx, esp */
  edx = esp;
/* 8569c2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8569c4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8569c7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8569ca: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8569cd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8569d0: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8569d3: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x8569d8u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
L_8569d8: /* 8569d8: mov al, byte ptr [ebx + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x28u))) & 0xffu);
/* 8569db: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8569dd: je 0x856a9b */
  if (zf) goto L_856a9b;
L_8569e3: /* 8569e3: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8569e6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8569ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8569ee: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8569f1: jne 0x856a9b */
  if (!zf) goto L_856a9b;
L_8569f7: /* 8569f7: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 8569fa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 856a00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 856a02: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 856a05: jne 0x856a9b */
  if (!zf) goto L_856a9b;
L_856a0b: /* 856a0b: fld dword ptr [esi + 0x5c] */
  { double v = F32((uint32_t)(esi + 0x5cu)); FPUSH(v); }
/* 856a0e: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 856a11: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 856a14: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 856a17: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 856a1a: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 856a1d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 856a1f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 856a22: mov ecx, ebx */
  ecx = ebx;
/* 856a24: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 856a27: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 856a2a: fld dword ptr [esi + 0x68] */
  { double v = F32((uint32_t)(esi + 0x68u)); FPUSH(v); }
/* 856a2d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 856a30: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 856a33: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x856a39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856a39: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 856a3c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 856a3f: mov edx, dword ptr [ecx + 0xdc] */
  edx = R32((uint32_t)(ecx + 0xdcu));
/* 856a45: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 856a48: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 856a4b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 856a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856a4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 856a4f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 856a52: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856a55: mov eax, esp */
  eax = esp;
/* 856a57: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 856a59: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 856a5c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 856a5f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 856a62: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 856a65: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 856a68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856a6b: mov edx, esp */
  edx = esp;
/* 856a6d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 856a6f: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 856a72: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 856a75: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 856a78: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 856a7e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 856a80: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856a83: mov edx, esp */
  edx = esp;
/* 856a85: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 856a87: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 856a8a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 856a8d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 856a90: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 856a93: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 856a96: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x856a9bu); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
L_856a9b: /* 856a9b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 856a9e: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 856aa1: test dword ptr [eax + 0x534], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856aab: je 0x856b9f */
  if (zf) goto L_856b9f;
L_856ab1: /* 856ab1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856ab3: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 856ab6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x856abcu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 856abc: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 856abf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 856ac0: lea ecx, [ebx + 0xfc] */
  ecx = (uint32_t)(ebx + 0xfcu);
/* 856ac6: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x856accu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 856acc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856ace: je 0x856b9f */
  if (zf) goto L_856b9f;
L_856ad4: /* 856ad4: test dword ptr [ebx + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856ade: jne 0x856b9f */
  if (!zf) goto L_856b9f;
L_856ae4: /* 856ae4: xor ecx, ecx */
  ecx = 0;
L_856ae6: /* 856ae6: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 856aec: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 856aef: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 856af2: jge 0x856b9f */
  if ((sf == of)) goto L_856b9f;
L_856af8: /* 856af8: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 856afb: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 856afe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856b00: je 0x856b96 */
  if (zf) goto L_856b96;
L_856b06: /* 856b06: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 856b0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 856b0e: jle 0x856b37 */
  if ((zf || sf != of)) goto L_856b37;
L_856b10: /* 856b10: xor edi, edi */
  edi = 0;
L_856b12: /* 856b12: cmp edi, dword ptr [esi + 0x108] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 856b18: jge 0x856b96 */
  if ((sf == of)) goto L_856b96;
L_856b1a: /* 856b1a: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* 856b20: lea eax, [ebx + 0xfc] */
  eax = (uint32_t)(ebx + 0xfcu);
/* 856b26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856b27: lea ecx, [ecx + edi*8] */
  ecx = (uint32_t)(ecx + edi*8);
/* 856b2a: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x856b30u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 856b30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856b32: jne 0x856b4e */
  if (!zf) goto L_856b4e;
L_856b34: /* 856b34: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 856b35: jmp 0x856b12 */
  goto L_856b12;
L_856b37: /* 856b37: lea ecx, [ebx + 0xfc] */
  ecx = (uint32_t)(ebx + 0xfcu);
/* 856b3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 856b3e: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 856b44: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x856b4au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 856b4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 856b4c: je 0x856b96 */
  if (zf) goto L_856b96;
L_856b4e: /* 856b4e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 856b51: mov eax, dword ptr [edx + 0xdc] */
  eax = R32((uint32_t)(edx + 0xdcu));
/* 856b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856b58: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 856b5e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 856b60: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 856b63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856b66: mov ecx, esp */
  ecx = esp;
/* 856b68: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 856b6a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 856b6d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 856b70: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 856b73: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 856b79: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 856b7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856b7e: mov ecx, esp */
  ecx = esp;
/* 856b80: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 856b82: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 856b85: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 856b88: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 856b8b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 856b8e: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 856b91: call 0x6cc74d */
  esp -= 4; W32(esp, 0x856b96u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_856b96: /* 856b96: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 856b99: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 856b9a: jmp 0x856ae6 */
  goto L_856ae6;
L_856b9f: /* 856b9f: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 856ba2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 856ba6: call 0x6cadcb */
  esp -= 4; W32(esp, 0x856babu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 856bab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 856bae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 856baf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 856bb0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 856bb7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 856bb8: mov esp, ebp */
  esp = ebp;
/* 856bba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 856bbb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_856bbe(void) {
  LOAD_REGS();
L_856bbe: /* 856bbe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 856bc1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 856bc6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 856bc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 856bca: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 856bcd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x856bd2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_856bd2(); return;
}

void f_856bd2(void) {
  LOAD_REGS();
L_856bd2: /* 856bd2: push 0xa17278 */
  { uint32_t v = 0xa17278u; esp -= 4; W32(esp, v); }
/* 856bd7: push 0xae4b64 */
  { uint32_t v = 0xae4b64u; esp -= 4; W32(esp, v); }
/* 856bdc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x856be2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 856be2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 856be5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856be9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x856beeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_856bee: guest_badaddr(0x856bee); return;
}

void f_856d80(void) {
  LOAD_REGS();
L_856d80: /* 856d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 856d81: mov ebp, esp */
  ebp = esp;
/* 856d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 856d85: push 0x9d3fe0 */
  { uint32_t v = 0x9d3fe0u; esp -= 4; W32(esp, v); }
/* 856d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 856d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 856d98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 856d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 856d9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 856d9e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 856da1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 856da4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 856da5: mov esi, ecx */
  esi = ecx;
/* 856da7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 856dae: call 0x6cadfd */
  esp -= 4; W32(esp, 0x856db3u); SPILL(); f_6cadfd(); if (g_unwind) return; RELOAD();
/* 856db3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 856db6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 856db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856dba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 856dbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 856dbc: mov ecx, esi */
  ecx = esi;
/* 856dbe: call 0x6c25a9 */
  esp -= 4; W32(esp, 0x856dc3u); SPILL(); f_6c25a9(); if (g_unwind) return; RELOAD();
/* 856dc3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 856dc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 856dc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 856dc8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 856dcf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 856dd0: mov esp, ebp */
  esp = ebp;
/* 856dd2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 856dd3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_856dd6(void) {
  LOAD_REGS();
L_856dd6: /* 856dd6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 856dd9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 856dde: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 856de1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856de2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 856de5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x856deau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_856dea(); return;
}

void f_856dea(void) {
  LOAD_REGS();
L_856dea: /* 856dea: push 0xa172c0 */
  { uint32_t v = 0xa172c0u; esp -= 4; W32(esp, v); }
/* 856def: push 0xae4b34 */
  { uint32_t v = 0xae4b34u; esp -= 4; W32(esp, v); }
/* 856df4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x856dfau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 856dfa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 856dfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856dff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 856e01: call 0x99caf8 */
  esp -= 4; W32(esp, 0x856e06u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_856e06: guest_badaddr(0x856e06); return;
}

void f_856e40(void) {
  LOAD_REGS();
L_856e40: /* 856e40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 856e41: mov ebp, esp */
  ebp = esp;
/* 856e43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 856e45: push 0x9d3ffb */
  { uint32_t v = 0x9d3ffbu; esp -= 4; W32(esp, v); }
/* 856e4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 856e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856e51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 856e58: sub esp, 0x134 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x134u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 856e5e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 856e61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 856e62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 856e63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 856e64: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 856e67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 856e69: mov esi, ecx */
  esi = ecx;
/* 856e6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856e6c: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 856e72: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 856e79: call 0x6c460b */
  esp -= 4; W32(esp, 0x856e7eu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 856e7e: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 856e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 856e85: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 856e8b: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 856e91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 856e92: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 856e95: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 856e99: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x856e9fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 856e9f: fld dword ptr [ebp - 0x120] */
  { double v = F32((uint32_t)(ebp + 0xfffffee0u)); FPUSH(v); }
/* 856ea5: mov eax, dword ptr [ebp - 0x134] */
  eax = R32((uint32_t)(ebp + 0xfffffeccu));
/* 856eab: fchs  */
  ST0 = -ST0;
/* 856ead: fld dword ptr [ebp - 0x124] */
  { double v = F32((uint32_t)(ebp + 0xfffffedcu)); FPUSH(v); }
/* 856eb3: mov ecx, dword ptr [ebp - 0x130] */
  ecx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 856eb9: mov edx, dword ptr [ebp - 0x12c] */
  edx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 856ebf: fchs  */
  ST0 = -ST0;
/* 856ec1: fld dword ptr [ebp - 0x128] */
  { double v = F32((uint32_t)(ebp + 0xfffffed8u)); FPUSH(v); }
/* 856ec7: mov ebx, dword ptr [0xcfa1e0] */
  ebx = R32((uint32_t)(0xcfa1e0u));
/* 856ecd: fchs  */
  ST0 = -ST0;
/* 856ecf: mov dword ptr [ebp - 0xe8], eax */
  W32((uint32_t)(ebp + 0xffffff18u), eax);
/* 856ed5: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 856edb: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 856ede: mov dword ptr [ebp - 0xe4], ecx */
  W32((uint32_t)(ebp + 0xffffff1cu), ecx);
/* 856ee4: mov ecx, dword ptr [ebp - 0x118] */
  ecx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 856eea: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 856eed: mov dword ptr [ebp - 0xe0], edx */
  W32((uint32_t)(ebp + 0xffffff20u), edx);
/* 856ef3: mov edx, dword ptr [ebp - 0x114] */
  edx = R32((uint32_t)(ebp + 0xfffffeecu));
/* 856ef9: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 856efc: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 856f02: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 856f08: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 856f0e: mov dword ptr [ebp - 0x34], 8 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x8u);
/* 856f15: lea edi, [ebp - 0xc0] */
  edi = (uint32_t)(ebp + 0xffffff40u);
/* 856f1b: jmp 0x856f20 */
  goto L_856f20;
L_856f20: /* 856f20: dec dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 856f23: js 0x856f32 */
  if (sf) goto L_856f32;
L_856f25: /* 856f25: mov ecx, edi */
  ecx = edi;
/* 856f27: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x856f29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856f29: mov eax, 0xc */
  eax = 0xcu;
/* 856f2e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 856f30: jmp 0x856f20 */
  goto L_856f20;
L_856f32: /* 856f32: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 856f38: mov edi, dword ptr [0xcfa578] */
  edi = R32((uint32_t)(0xcfa578u));
/* 856f3e: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 856f41: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 856f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856f45: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 856f48: fst dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0);
/* 856f4e: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 856f54: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 856f57: fst dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0);
/* 856f5d: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 856f63: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 856f66: fst dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0);
/* 856f6c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856f6f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 856f72: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 856f75: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x856f77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856f77: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 856f7a: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 856f80: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 856f83: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 856f89: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 856f8c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 856f8e: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 856f94: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 856f97: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 856f9d: fmul dword ptr [0xa17378] */
  ST0 = ST0 * (F32((uint32_t)(0xa17378u)));
/* 856fa3: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 856fa6: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 856fac: fmul dword ptr [0xa17378] */
  ST0 = ST0 * (F32((uint32_t)(0xa17378u)));
/* 856fb2: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 856fb5: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 856fbb: fmul dword ptr [0xa17378] */
  ST0 = ST0 * (F32((uint32_t)(0xa17378u)));
/* 856fc1: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 856fc4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856fc7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 856fc9: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 856fcf: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 856fd2: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 856fd8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 856fdb: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 856fde: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 856fe4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856fe7: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 856fea: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 856fed: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 856ff0: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 856ff3: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 856ff6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856ff9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 856ffc: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 857002: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857005: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 857008: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 85700b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85700e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857011: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 857017: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857018: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 85701b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 85701e: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 857024: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 85702a: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 85702d: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 857033: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 857036: fst dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0);
/* 857039: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 85703f: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 857042: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 857045: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857048: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85704b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85704e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857050u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857050: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857053: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 857059: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85705c: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 857062: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 857065: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 857067: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 85706d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857070: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 857073: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 857076: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 857079: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85707c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85707e: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857084: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 857087: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 85708d: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 857090: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857093: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857099: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85709c: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 85709f: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8570a2: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8570a5: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8570a8: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8570ab: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8570ae: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8570b1: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 8570b7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8570ba: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8570bd: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8570c0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8570c3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8570c6: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 8570cc: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 8570d2: fchs  */
  ST0 = -ST0;
/* 8570d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8570d5: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 8570d8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8570db: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 8570e1: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8570e7: fchs  */
  ST0 = -ST0;
/* 8570e9: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 8570ec: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8570ef: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 8570f5: fchs  */
  ST0 = -ST0;
/* 8570f7: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 8570fa: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8570fd: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 857100: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 857103: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 857106: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857109: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85710c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85710f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857112: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857115: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857117u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857117: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85711a: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85711d: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 857123: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 857126: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 85712c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 85712f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 857131: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 857134: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 85713a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85713d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 857140: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 857143: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 857145: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 85714b: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 85714e: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 857154: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 85715a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85715d: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857163: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 857166: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 857169: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 85716f: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 857172: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857175: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 857178: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85717b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85717e: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 857184: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857187: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85718a: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 857190: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857193: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 857196: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 857199: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 85719c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 85719f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8571a2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8571a5: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8571a8: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8571ab: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8571ae: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8571b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 8571b7: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8571ba: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8571bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8571be: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8571c1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8571c4: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8571c7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8571ca: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8571ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8571cc: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8571cf: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8571d2: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 8571d8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8571db: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 8571e1: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8571e4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8571e6: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8571e9: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 8571ef: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8571f2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8571f5: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8571f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8571fa: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857200: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 857203: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 857209: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 85720f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857212: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857218: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85721b: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85721e: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 857224: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 857227: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85722a: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 85722d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857230: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 857233: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 857239: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 85723f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857242: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 857245: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857248: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85724b: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 857251: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 857257: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 85725d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 857260: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857263: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857264: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 857267: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85726a: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 857270: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 857273: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857275u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857275: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857278: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85727e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 857281: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857287: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 85728d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85728f: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857295: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857298: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 85729e: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8572a4: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 8572a7: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 8572ad: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8572b3: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8572b6: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 8572bc: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8572c2: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8572c5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8572c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8572ca: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 8572d0: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8572d6: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8572dc: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8572e2: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8572e5: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8572eb: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8572ee: fadd dword ptr [ebp - 0xd0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff30u)));
/* 8572f4: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 8572fa: fadd dword ptr [ebp - 0xd4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 857300: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857303: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 857306: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857309: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85730c: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 857312: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 857315: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857318: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85731b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85731e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857321: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 857324: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 85732a: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 85732d: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 857330: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857333: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 857339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85733a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 85733d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857340: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 857343: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857345u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857345: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857348: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85734e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 857351: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 857354: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85735a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85735d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85735f: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 857362: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857368: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85736b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 85736e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 857371: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 857373: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857379: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85737c: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 857382: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 857385: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857388: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 85738e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 857391: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 857394: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 857397: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 85739a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85739d: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8573a0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8573a3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8573a6: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 8573ac: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8573af: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8573b2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8573b5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8573b8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8573bb: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8573be: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8573c1: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8573c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8573c7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8573ca: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8573cd: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8573d0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8573d3: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8573d6: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8573d9: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8573dc: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8573df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8573e0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8573e3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8573e6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8573e9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8573ec: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8573eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8573ee: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8573f1: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 8573f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8573fa: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8573fd: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857403: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 857406: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 857408: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85740b: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857411: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857414: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 857417: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85741a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85741c: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857422: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 857425: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 85742b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85742e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857431: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857437: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85743a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85743d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 857440: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 857443: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857446: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 857449: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85744c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85744f: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 857452: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 857455: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857458: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85745b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85745e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857461: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 857464: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 857467: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 85746a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 85746d: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 857470: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 857473: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 857476: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 857479: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85747c: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 85747f: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 857482: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 857485: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857486: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 857489: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85748c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85748f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857492: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857494u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857494: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857497: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85749d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8574a0: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 8574a6: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8574a9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8574ab: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8574ae: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 8574b4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8574b7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8574ba: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8574bd: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8574c0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8574c2: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 8574c8: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8574cb: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8574d1: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8574d4: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8574d7: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8574dd: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8574e0: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8574e3: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8574e6: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8574e9: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8574ec: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8574ef: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8574f2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8574f5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8574f8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8574fb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8574fe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857501: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 857504: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 857506: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857509: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 85750c: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85750f: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857512: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 857515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857516: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 85751c: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 85751f: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 857522: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 857528: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85752b: mov edx, esp */
  edx = esp;
/* 85752d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85752f: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 857535: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857538: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85753b: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 857541: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 857547: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85754a: mov ecx, esp */
  ecx = esp;
/* 85754c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85754e: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 857554: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857557: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85755a: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 857560: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857565u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857565: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 85756b: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 85756e: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857571: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857574: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857577: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85757a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85757b: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 857581: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857584: mov ecx, esp */
  ecx = esp;
/* 857586: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857588: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 85758e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857591: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857594: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 85759a: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8575a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8575a3: mov eax, esp */
  eax = esp;
/* 8575a5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8575a7: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 8575ad: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8575b0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8575b3: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8575b9: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8575beu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8575be: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8575c4: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8575c7: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8575ca: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8575cd: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8575d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8575d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8575d4: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8575da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8575dd: mov eax, esp */
  eax = esp;
/* 8575df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8575e1: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8575e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8575ea: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8575ed: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 8575f3: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8575f9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8575fc: mov edx, esp */
  edx = esp;
/* 8575fe: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 857600: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 857606: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857609: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85760f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857612: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857617u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857617: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 85761a: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 85761d: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 857623: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857626: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857629: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85762c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85762d: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 857633: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857636: mov edx, esp */
  edx = esp;
/* 857638: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85763a: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 857640: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857643: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857646: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 85764c: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 857652: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857655: mov ecx, esp */
  ecx = esp;
/* 857657: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857659: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 85765f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857662: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857665: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85766b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857670u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857670: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 857676: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857679: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 85767c: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85767f: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857682: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 857685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857686: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 857689: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85768c: mov ecx, esp */
  ecx = esp;
/* 85768e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857690: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 857693: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857696: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857699: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 85769f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8576a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8576a8: mov eax, esp */
  eax = esp;
/* 8576aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8576ac: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8576b2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8576b5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8576b8: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8576be: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8576c3u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8576c3: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8576c6: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8576c9: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8576cc: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8576cf: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8576d2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8576d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8576d6: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8576d9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8576dc: mov eax, esp */
  eax = esp;
/* 8576de: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8576e0: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8576e3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8576e6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8576e9: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8576ef: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 8576f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8576f5: mov edx, esp */
  edx = esp;
/* 8576f7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8576f9: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8576fc: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8576ff: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 857705: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857708: call 0x6cc74d */
  esp -= 4; W32(esp, 0x85770du); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 85770d: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 857710: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857713: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857716: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857719: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 85771c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85771f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857720: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 857723: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857726: mov edx, esp */
  edx = esp;
/* 857728: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85772a: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 85772d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857730: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857733: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 857736: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 857739: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85773c: mov ecx, esp */
  ecx = esp;
/* 85773e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857740: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 857743: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857746: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857749: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85774f: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857754u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857754: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 85775a: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 85775d: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857760: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857763: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857766: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 857769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85776a: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 857770: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857773: mov ecx, esp */
  ecx = esp;
/* 857775: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857777: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 85777d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857780: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857783: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 857786: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 857789: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85778c: mov eax, esp */
  eax = esp;
/* 85778e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857790: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 857793: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 857796: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 857799: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85779f: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8577a4u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8577a4: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8577aa: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8577ad: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8577b0: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8577b3: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8577b6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8577b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8577ba: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8577c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8577c3: mov eax, esp */
  eax = esp;
/* 8577c5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8577c7: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8577cd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8577d0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8577d3: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 8577d9: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 8577df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8577e2: mov edx, esp */
  edx = esp;
/* 8577e4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8577e6: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 8577ec: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8577ef: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8577f5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8577f8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8577fdu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8577fd: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 857803: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857806: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857809: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85780c: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 85780f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 857812: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857813: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 857816: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857819: mov edx, esp */
  edx = esp;
/* 85781b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85781d: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 857820: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857823: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857826: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 85782c: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 857832: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857835: mov ecx, esp */
  ecx = esp;
/* 857837: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857839: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 85783c: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 857842: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857845: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85784b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857850u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857850: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 857853: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857856: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857859: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85785c: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 85785f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 857862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857863: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 857866: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857869: mov ecx, esp */
  ecx = esp;
/* 85786b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85786d: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 857870: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857873: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857876: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 85787c: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 857882: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857885: mov eax, esp */
  eax = esp;
/* 857887: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857889: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 85788f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 857892: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 857895: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85789b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8578a0u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8578a0: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8578a3: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8578a6: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8578a9: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8578ac: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8578af: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8578b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8578b3: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8578b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8578b9: mov eax, esp */
  eax = esp;
/* 8578bb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8578bd: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8578c0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8578c3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8578c6: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 8578cc: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8578d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8578d5: mov edx, esp */
  edx = esp;
/* 8578d7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8578d9: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8578df: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8578e2: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8578e8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8578eb: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8578f0u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8578f0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8578f3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8578f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8578f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8578fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8578fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8578fc: mov ecx, esi */
  ecx = esi;
/* 8578fe: call 0x6c25a9 */
  esp -= 4; W32(esp, 0x857903u); SPILL(); f_6c25a9(); if (g_unwind) return; RELOAD();
/* 857903: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 857909: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85790d: call 0x6cadcb */
  esp -= 4; W32(esp, 0x857912u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 857912: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 857915: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 857916: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 857917: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85791e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85791f: mov esp, ebp */
  esp = ebp;
/* 857921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 857922: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_856f1d(void) {
  LOAD_REGS();
L_856f1d: /* 856f1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_856f20: /* 856f20: dec dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 856f23: js 0x856f32 */
  if (sf) goto L_856f32;
L_856f25: /* 856f25: mov ecx, edi */
  ecx = edi;
/* 856f27: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x856f29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856f29: mov eax, 0xc */
  eax = 0xcu;
/* 856f2e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 856f30: jmp 0x856f20 */
  goto L_856f20;
L_856f32: /* 856f32: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 856f38: mov edi, dword ptr [0xcfa578] */
  edi = R32((uint32_t)(0xcfa578u));
/* 856f3e: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 856f41: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 856f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 856f45: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 856f48: fst dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0);
/* 856f4e: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 856f54: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 856f57: fst dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0);
/* 856f5d: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 856f63: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 856f66: fst dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0);
/* 856f6c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856f6f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 856f72: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 856f75: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x856f77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 856f77: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 856f7a: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 856f80: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 856f83: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 856f89: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 856f8c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 856f8e: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 856f94: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 856f97: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 856f9d: fmul dword ptr [0xa17378] */
  ST0 = ST0 * (F32((uint32_t)(0xa17378u)));
/* 856fa3: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 856fa6: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 856fac: fmul dword ptr [0xa17378] */
  ST0 = ST0 * (F32((uint32_t)(0xa17378u)));
/* 856fb2: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 856fb5: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 856fbb: fmul dword ptr [0xa17378] */
  ST0 = ST0 * (F32((uint32_t)(0xa17378u)));
/* 856fc1: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 856fc4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856fc7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 856fc9: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 856fcf: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 856fd2: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 856fd8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 856fdb: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 856fde: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 856fe4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856fe7: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 856fea: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 856fed: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 856ff0: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 856ff3: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 856ff6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 856ff9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 856ffc: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 857002: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857005: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 857008: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 85700b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85700e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857011: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 857017: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857018: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 85701b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 85701e: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 857024: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 85702a: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 85702d: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 857033: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 857036: fst dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0);
/* 857039: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 85703f: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 857042: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 857045: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857048: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85704b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85704e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857050u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857050: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857053: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 857059: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85705c: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 857062: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 857065: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 857067: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 85706d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857070: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 857073: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 857076: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 857079: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85707c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85707e: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857084: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 857087: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 85708d: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 857090: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857093: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857099: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85709c: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 85709f: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8570a2: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8570a5: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8570a8: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8570ab: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8570ae: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8570b1: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 8570b7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8570ba: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8570bd: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8570c0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8570c3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8570c6: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 8570cc: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 8570d2: fchs  */
  ST0 = -ST0;
/* 8570d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8570d5: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 8570d8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8570db: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 8570e1: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8570e7: fchs  */
  ST0 = -ST0;
/* 8570e9: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 8570ec: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8570ef: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 8570f5: fchs  */
  ST0 = -ST0;
/* 8570f7: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 8570fa: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8570fd: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 857100: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 857103: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 857106: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857109: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85710c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85710f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857112: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857115: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857117u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857117: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85711a: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85711d: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 857123: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 857126: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 85712c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 85712f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 857131: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 857134: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 85713a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85713d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 857140: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 857143: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 857145: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 85714b: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 85714e: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 857154: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 85715a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85715d: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857163: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 857166: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 857169: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 85716f: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 857172: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857175: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 857178: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85717b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85717e: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 857184: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857187: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85718a: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 857190: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857193: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 857196: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 857199: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 85719c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 85719f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8571a2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8571a5: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8571a8: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8571ab: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8571ae: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8571b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 8571b7: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8571ba: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8571bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8571be: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8571c1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8571c4: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8571c7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8571ca: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8571ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8571cc: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8571cf: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8571d2: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 8571d8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8571db: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 8571e1: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8571e4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8571e6: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8571e9: fmul dword ptr [0xa1737c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1737cu)));
/* 8571ef: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8571f2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8571f5: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8571f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8571fa: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857200: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 857203: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 857209: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 85720f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857212: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857218: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85721b: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85721e: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 857224: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 857227: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85722a: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 85722d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857230: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 857233: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 857239: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 85723f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857242: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 857245: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857248: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85724b: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 857251: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 857257: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 85725d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 857260: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857263: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857264: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 857267: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85726a: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 857270: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 857273: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857275u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857275: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857278: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85727e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 857281: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857287: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 85728d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85728f: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857295: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857298: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 85729e: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8572a4: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 8572a7: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 8572ad: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8572b3: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8572b6: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 8572bc: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8572c2: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8572c5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8572c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8572ca: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 8572d0: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8572d6: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8572dc: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8572e2: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8572e5: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8572eb: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8572ee: fadd dword ptr [ebp - 0xd0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff30u)));
/* 8572f4: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 8572fa: fadd dword ptr [ebp - 0xd4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 857300: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857303: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 857306: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857309: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85730c: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 857312: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 857315: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857318: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85731b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85731e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857321: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 857324: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 85732a: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 85732d: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 857330: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857333: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 857339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85733a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 85733d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857340: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 857343: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857345u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857345: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857348: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85734e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 857351: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 857354: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85735a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85735d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85735f: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 857362: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857368: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85736b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 85736e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 857371: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 857373: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857379: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85737c: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 857382: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 857385: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857388: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 85738e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 857391: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 857394: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 857397: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 85739a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85739d: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8573a0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8573a3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8573a6: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 8573ac: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8573af: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8573b2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8573b5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8573b8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8573bb: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8573be: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8573c1: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8573c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8573c7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8573ca: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8573cd: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8573d0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8573d3: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8573d6: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8573d9: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8573dc: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8573df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8573e0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8573e3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8573e6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8573e9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8573ec: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8573eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8573ee: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8573f1: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 8573f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8573fa: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8573fd: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857403: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 857406: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 857408: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85740b: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 857411: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 857414: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 857417: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85741a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85741c: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 857422: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 857425: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 85742b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85742e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857431: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 857437: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85743a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85743d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 857440: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 857443: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 857446: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 857449: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85744c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85744f: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 857452: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 857455: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 857458: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85745b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85745e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857461: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 857464: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 857467: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 85746a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 85746d: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 857470: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 857473: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 857476: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 857479: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85747c: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 85747f: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 857482: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 857485: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857486: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 857489: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85748c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85748f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 857492: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x857494u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 857494: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 857497: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 85749d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8574a0: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 8574a6: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8574a9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8574ab: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8574ae: fmul dword ptr [0xa17374] */
  ST0 = ST0 * (F32((uint32_t)(0xa17374u)));
/* 8574b4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8574b7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8574ba: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8574bd: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8574c0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8574c2: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 8574c8: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8574cb: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8574d1: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8574d4: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8574d7: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8574dd: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8574e0: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8574e3: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8574e6: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8574e9: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8574ec: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8574ef: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8574f2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8574f5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8574f8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8574fb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8574fe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857501: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 857504: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 857506: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857509: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 85750c: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85750f: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857512: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 857515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857516: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 85751c: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 85751f: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 857522: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 857528: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85752b: mov edx, esp */
  edx = esp;
/* 85752d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85752f: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 857535: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857538: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85753b: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 857541: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 857547: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85754a: mov ecx, esp */
  ecx = esp;
/* 85754c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85754e: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 857554: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857557: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85755a: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 857560: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857565u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857565: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 85756b: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 85756e: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857571: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857574: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857577: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85757a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85757b: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 857581: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857584: mov ecx, esp */
  ecx = esp;
/* 857586: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857588: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 85758e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857591: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857594: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 85759a: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8575a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8575a3: mov eax, esp */
  eax = esp;
/* 8575a5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8575a7: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 8575ad: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8575b0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8575b3: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8575b9: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8575beu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8575be: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8575c4: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8575c7: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8575ca: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8575cd: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8575d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8575d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8575d4: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8575da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8575dd: mov eax, esp */
  eax = esp;
/* 8575df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8575e1: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8575e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8575ea: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8575ed: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 8575f3: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8575f9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8575fc: mov edx, esp */
  edx = esp;
/* 8575fe: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 857600: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 857606: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857609: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85760f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857612: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857617u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857617: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 85761a: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 85761d: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 857623: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857626: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857629: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85762c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85762d: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 857633: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857636: mov edx, esp */
  edx = esp;
/* 857638: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85763a: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 857640: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857643: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857646: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 85764c: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 857652: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857655: mov ecx, esp */
  ecx = esp;
/* 857657: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857659: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 85765f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857662: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857665: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85766b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857670u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857670: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 857676: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857679: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 85767c: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85767f: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857682: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 857685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857686: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 857689: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85768c: mov ecx, esp */
  ecx = esp;
/* 85768e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857690: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 857693: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857696: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857699: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 85769f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8576a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8576a8: mov eax, esp */
  eax = esp;
/* 8576aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8576ac: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8576b2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8576b5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8576b8: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8576be: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8576c3u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8576c3: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8576c6: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8576c9: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8576cc: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8576cf: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8576d2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8576d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8576d6: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8576d9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8576dc: mov eax, esp */
  eax = esp;
/* 8576de: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8576e0: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8576e3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8576e6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8576e9: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8576ef: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 8576f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8576f5: mov edx, esp */
  edx = esp;
/* 8576f7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8576f9: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8576fc: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8576ff: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 857705: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857708: call 0x6cc74d */
  esp -= 4; W32(esp, 0x85770du); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 85770d: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 857710: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857713: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857716: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857719: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 85771c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85771f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857720: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 857723: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857726: mov edx, esp */
  edx = esp;
/* 857728: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85772a: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 85772d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857730: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857733: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 857736: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 857739: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85773c: mov ecx, esp */
  ecx = esp;
/* 85773e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857740: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 857743: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857746: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857749: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85774f: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857754u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857754: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 85775a: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 85775d: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857760: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 857763: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 857766: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 857769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85776a: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 857770: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857773: mov ecx, esp */
  ecx = esp;
/* 857775: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857777: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 85777d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857780: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857783: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 857786: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 857789: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85778c: mov eax, esp */
  eax = esp;
/* 85778e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857790: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 857793: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 857796: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 857799: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85779f: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8577a4u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8577a4: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8577aa: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8577ad: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8577b0: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8577b3: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8577b6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8577b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8577ba: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8577c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8577c3: mov eax, esp */
  eax = esp;
/* 8577c5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8577c7: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8577cd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8577d0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8577d3: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 8577d9: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 8577df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8577e2: mov edx, esp */
  edx = esp;
/* 8577e4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8577e6: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 8577ec: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8577ef: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8577f5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8577f8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8577fdu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8577fd: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 857803: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857806: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857809: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85780c: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 85780f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 857812: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857813: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 857816: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857819: mov edx, esp */
  edx = esp;
/* 85781b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85781d: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 857820: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857823: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857826: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 85782c: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 857832: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857835: mov ecx, esp */
  ecx = esp;
/* 857837: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 857839: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 85783c: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 857842: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857845: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85784b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857850u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 857850: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 857853: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 857856: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 857859: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 85785c: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 85785f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 857862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857863: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 857866: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857869: mov ecx, esp */
  ecx = esp;
/* 85786b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85786d: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 857870: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 857873: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 857876: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 85787c: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 857882: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857885: mov eax, esp */
  eax = esp;
/* 857887: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857889: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 85788f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 857892: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 857895: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 85789b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8578a0u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8578a0: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8578a3: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 8578a6: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 8578a9: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 8578ac: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 8578af: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8578b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8578b3: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8578b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8578b9: mov eax, esp */
  eax = esp;
/* 8578bb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8578bd: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8578c0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8578c3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8578c6: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 8578cc: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8578d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8578d5: mov edx, esp */
  edx = esp;
/* 8578d7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8578d9: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8578df: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8578e2: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 8578e8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8578eb: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8578f0u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8578f0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8578f3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8578f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8578f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8578fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8578fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8578fc: mov ecx, esi */
  ecx = esi;
/* 8578fe: call 0x6c25a9 */
  esp -= 4; W32(esp, 0x857903u); SPILL(); f_6c25a9(); if (g_unwind) return; RELOAD();
/* 857903: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 857909: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85790d: call 0x6cadcb */
  esp -= 4; W32(esp, 0x857912u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 857912: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 857915: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 857916: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 857917: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85791e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85791f: mov esp, ebp */
  esp = ebp;
/* 857921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 857922: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_857925(void) {
  LOAD_REGS();
L_857925: /* 857925: mov ecx, dword ptr [ebp - 0x110] */
  ecx = R32((uint32_t)(ebp + 0xfffffef0u));
/* 85792b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 857930: lea edx, [ebp - 0xec] */
  edx = (uint32_t)(ebp + 0xffffff14u);
/* 857936: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857937: mov dword ptr [ebp - 0xec], ecx */
  W32((uint32_t)(ebp + 0xffffff14u), ecx);
/* 85793d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x857942u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_857942(); return;
}

void f_857942(void) {
  LOAD_REGS();
L_857942: /* 857942: push 0xa17310 */
  { uint32_t v = 0xa17310u; esp -= 4; W32(esp, v); }
/* 857947: push 0xae4b44 */
  { uint32_t v = 0xae4b44u; esp -= 4; W32(esp, v); }
/* 85794c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x857952u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 857952: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 857955: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 857957: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 857959: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85795eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85795e: guest_badaddr(0x85795e); return;
}

void f_857c30(void) {
  LOAD_REGS();
L_857c30: /* 857c30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 857c31: mov ebp, esp */
  ebp = esp;
/* 857c33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 857c35: push 0x9d4018 */
  { uint32_t v = 0x9d4018u; esp -= 4; W32(esp, v); }
/* 857c3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 857c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857c41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 857c48: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857c4b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 857c4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 857c4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 857c50: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 857c53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 857c54: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 857c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857c58: mov edi, ecx */
  edi = ecx;
/* 857c5a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 857c5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 857c5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857c5f: xor ebx, ebx */
  ebx = 0;
/* 857c61: mov ecx, edi */
  ecx = edi;
/* 857c63: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 857c66: call 0x6c25a9 */
  esp -= 4; W32(esp, 0x857c6bu); SPILL(); f_6c25a9(); if (g_unwind) return; RELOAD();
/* 857c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 857c6c: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 857c6f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x857c75u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 857c75: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 857c78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857c79: lea ecx, [edi + 0x3a4] */
  ecx = (uint32_t)(edi + 0x3a4u);
/* 857c7f: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x857c85u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 857c85: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 857c87: je 0x857d40 */
  if (zf) goto L_857d40;
L_857c8d: /* 857c8d: test dword ptr [edi + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857c97: jne 0x857d40 */
  if (!zf) goto L_857d40;
L_857c9d: /* 857c9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 857c9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 857c9f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 857ca2: call 0x6c460b */
  esp -= 4; W32(esp, 0x857ca7u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 857ca7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 857cab: jmp 0x857cb0 */
  goto L_857cb0;
L_857cb0: /* 857cb0: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 857cb6: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 857cb9: jge 0x857d34 */
  if ((sf == of)) goto L_857d34;
L_857cbb: /* 857cbb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 857cbe: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 857cc1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857cc3: je 0x857d2e */
  if (zf) goto L_857d2e;
L_857cc5: /* 857cc5: lea ecx, [edi + 0x3a4] */
  ecx = (uint32_t)(edi + 0x3a4u);
/* 857ccb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857ccc: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 857cd2: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x857cd8u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 857cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857cda: je 0x857d2e */
  if (zf) goto L_857d2e;
L_857cdc: /* 857cdc: mov byte ptr [ebp + 0x10], 0xff */
  W8((uint32_t)(ebp + 0x10u), 0xffu);
/* 857ce0: mov byte ptr [ebp + 0x11], 0 */
  W8((uint32_t)(ebp + 0x11u), 0x0u);
/* 857ce4: mov byte ptr [ebp + 0x12], 0 */
  W8((uint32_t)(ebp + 0x12u), 0x0u);
/* 857ce8: mov byte ptr [ebp + 0x13], 0xff */
  W8((uint32_t)(ebp + 0x13u), 0xffu);
/* 857cec: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 857cef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857cf0: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 857cf6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 857cf8: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 857cfb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857cfe: mov eax, esp */
  eax = esp;
/* 857d00: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857d02: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 857d05: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 857d08: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 857d0b: lea edx, [edi + 0x170] */
  edx = (uint32_t)(edi + 0x170u);
/* 857d11: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 857d13: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857d16: mov eax, esp */
  eax = esp;
/* 857d18: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857d1a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 857d1d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 857d20: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 857d23: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 857d26: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 857d29: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857d2eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_857d2e: /* 857d2e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 857d2f: jmp 0x857cb0 */
  goto L_857cb0;
L_857d34: /* 857d34: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 857d37: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 857d3b: call 0x6cadcb */
  esp -= 4; W32(esp, 0x857d40u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_857d40: /* 857d40: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 857d43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 857d44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 857d45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 857d4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 857d4d: mov esp, ebp */
  esp = ebp;
/* 857d4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 857d50: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_857cad(void) {
  LOAD_REGS();
L_857cad: /* 857cad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_857cb0: /* 857cb0: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 857cb6: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 857cb9: jge 0x857d34 */
  if ((sf == of)) goto L_857d34;
L_857cbb: /* 857cbb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 857cbe: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 857cc1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857cc3: je 0x857d2e */
  if (zf) goto L_857d2e;
L_857cc5: /* 857cc5: lea ecx, [edi + 0x3a4] */
  ecx = (uint32_t)(edi + 0x3a4u);
/* 857ccb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857ccc: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 857cd2: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x857cd8u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 857cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857cda: je 0x857d2e */
  if (zf) goto L_857d2e;
L_857cdc: /* 857cdc: mov byte ptr [ebp + 0x10], 0xff */
  W8((uint32_t)(ebp + 0x10u), 0xffu);
/* 857ce0: mov byte ptr [ebp + 0x11], 0 */
  W8((uint32_t)(ebp + 0x11u), 0x0u);
/* 857ce4: mov byte ptr [ebp + 0x12], 0 */
  W8((uint32_t)(ebp + 0x12u), 0x0u);
/* 857ce8: mov byte ptr [ebp + 0x13], 0xff */
  W8((uint32_t)(ebp + 0x13u), 0xffu);
/* 857cec: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 857cef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857cf0: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 857cf6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 857cf8: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 857cfb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857cfe: mov eax, esp */
  eax = esp;
/* 857d00: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857d02: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 857d05: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 857d08: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 857d0b: lea edx, [edi + 0x170] */
  edx = (uint32_t)(edi + 0x170u);
/* 857d11: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 857d13: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857d16: mov eax, esp */
  eax = esp;
/* 857d18: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 857d1a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 857d1d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 857d20: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 857d23: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 857d26: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 857d29: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857d2eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_857d2e: /* 857d2e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 857d2f: jmp 0x857cb0 */
  goto L_857cb0;
L_857d34: /* 857d34: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 857d37: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 857d3b: call 0x6cadcb */
  esp -= 4; W32(esp, 0x857d40u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 857d40: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 857d43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 857d44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 857d45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 857d4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 857d4d: mov esp, ebp */
  esp = ebp;
/* 857d4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 857d50: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_857d53(void) {
  LOAD_REGS();
L_857d53: /* 857d53: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 857d56: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 857d5b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 857d5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857d5f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 857d62: call 0x99caf8 */
  esp -= 4; W32(esp, 0x857d67u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_857d67(); return;
}

void f_857d67(void) {
  LOAD_REGS();
L_857d67: /* 857d67: push 0xa17380 */
  { uint32_t v = 0xa17380u; esp -= 4; W32(esp, v); }
/* 857d6c: push 0xae4b54 */
  { uint32_t v = 0xae4b54u; esp -= 4; W32(esp, v); }
/* 857d71: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x857d77u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 857d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 857d7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 857d7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 857d7e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x857d83u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_857d83: guest_badaddr(0x857d83); return;
}

void f_857df0(void) {
  LOAD_REGS();
L_857df0: /* 857df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 857df1: mov ebp, esp */
  ebp = esp;
/* 857df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 857df5: push 0x9d4038 */
  { uint32_t v = 0x9d4038u; esp -= 4; W32(esp, v); }
/* 857dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 857e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 857e08: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857e0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 857e0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 857e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 857e10: mov esi, ecx */
  esi = ecx;
/* 857e12: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 857e15: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 857e18: test dword ptr [edx + 0x534], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857e22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 857e23: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 857e26: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 857e2d: je 0x85802c */
  if (zf) goto L_85802c;
L_857e33: /* 857e33: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x857e39u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 857e39: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 857e3c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 857e3f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 857e41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857e42: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 857e45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 857e48: call 0x6c460b */
  esp -= 4; W32(esp, 0x857e4du); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 857e4d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 857e53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857e55: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 857e59: je 0x857f3c */
  if (zf) goto L_857f3c;
L_857e5f: /* 857e5f: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 857e64: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 857e66: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 857e69: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 857e6c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 857e6f: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 857e72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 857e74: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 857e77: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 857e7a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x857e80u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 857e80: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 857e83: lea ebx, [esi + 0x36c] */
  ebx = (uint32_t)(esi + 0x36cu);
/* 857e89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857e8a: mov ecx, ebx */
  ecx = ebx;
/* 857e8c: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x857e92u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 857e92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857e94: je 0x857ef9 */
  if (zf) goto L_857ef9;
L_857e96: /* 857e96: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 857e9c: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 857ea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857ea4: je 0x857ef9 */
  if (zf) goto L_857ef9;
L_857ea6: /* 857ea6: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 857eab: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x857eb1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 857eb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857eb3: je 0x857ef9 */
  if (zf) goto L_857ef9;
L_857eb5: /* 857eb5: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 857ebb: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 857ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857ec2: call 0x6c8116 */
  esp -= 4; W32(esp, 0x857ec7u); SPILL(); f_6c8116(); if (g_unwind) return; RELOAD();
/* 857ec7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 857ec9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 857ecc: mov edi, eax */
  edi = eax;
/* 857ece: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857ecf: mov ecx, edi */
  ecx = edi;
/* 857ed1: call 0x6cceaa */
  esp -= 4; W32(esp, 0x857ed6u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 857ed6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 857ed9: je 0x857ef9 */
  if (zf) goto L_857ef9;
L_857edb: /* 857edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857edc: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 857edf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857ee0: mov ecx, edi */
  ecx = edi;
/* 857ee2: call 0x6c5060 */
  esp -= 4; W32(esp, 0x857ee7u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 857ee7: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 857eea: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 857eed: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 857ef0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 857ef3: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 857ef6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_857ef9: /* 857ef9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 857efc: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 857f02: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 857f05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857f06: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 857f09: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857f0c: mov edx, esp */
  edx = esp;
/* 857f0e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 857f10: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 857f13: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 857f16: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 857f19: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 857f1f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 857f21: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857f24: mov edx, esp */
  edx = esp;
/* 857f26: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 857f28: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 857f2b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 857f2e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 857f31: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 857f34: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 857f37: call 0x6cc74d */
  esp -= 4; W32(esp, 0x857f3cu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_857f3c: /* 857f3c: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 857f42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857f44: je 0x858020 */
  if (zf) goto L_858020;
L_857f4a: /* 857f4a: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 857f4f: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 857f51: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 857f54: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 857f57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 857f59: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 857f5c: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 857f5f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 857f62: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x857f68u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 857f68: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 857f6b: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 857f71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857f72: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x857f78u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 857f78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857f7a: je 0x857fe0 */
  if (zf) goto L_857fe0;
L_857f7c: /* 857f7c: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 857f82: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 857f88: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857f8a: je 0x857fe0 */
  if (zf) goto L_857fe0;
L_857f8c: /* 857f8c: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 857f91: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x857f97u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 857f97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 857f99: je 0x857fe0 */
  if (zf) goto L_857fe0;
L_857f9b: /* 857f9b: mov ecx, dword ptr [esi + 0x368] */
  ecx = R32((uint32_t)(esi + 0x368u));
/* 857fa1: mov edx, dword ptr [ecx + 0xec] */
  edx = R32((uint32_t)(ecx + 0xecu));
/* 857fa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857fa8: call 0x6c8116 */
  esp -= 4; W32(esp, 0x857fadu); SPILL(); f_6c8116(); if (g_unwind) return; RELOAD();
/* 857fad: mov edi, eax */
  edi = eax;
/* 857faf: mov eax, dword ptr [esi + 0x370] */
  eax = R32((uint32_t)(esi + 0x370u));
/* 857fb5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 857fb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857fb9: mov ecx, edi */
  ecx = edi;
/* 857fbb: call 0x6cceaa */
  esp -= 4; W32(esp, 0x857fc0u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 857fc0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 857fc3: je 0x857fe0 */
  if (zf) goto L_857fe0;
L_857fc5: /* 857fc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 857fc6: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 857fc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 857fca: mov ecx, edi */
  ecx = edi;
/* 857fcc: call 0x6c5060 */
  esp -= 4; W32(esp, 0x857fd1u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 857fd1: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 857fd4: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 857fd7: mov ebx, dword ptr [ebp - 0x7c] */
  ebx = R32((uint32_t)(ebp + 0xffffff84u));
/* 857fda: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 857fdd: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_857fe0: /* 857fe0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 857fe3: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* 857fe9: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 857fec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 857fed: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 857ff0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 857ff3: mov eax, esp */
  eax = esp;
/* 857ff5: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 857ff7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 857ffa: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 857ffd: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 858003: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 858005: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858008: mov ecx, esp */
  ecx = esp;
/* 85800a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85800c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85800f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 858012: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 858015: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 858018: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 85801b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x858020u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_858020: /* 858020: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 858023: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 858027: call 0x6cadcb */
  esp -= 4; W32(esp, 0x85802cu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_85802c: /* 85802c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 85802f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 858032: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 858035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858036: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858037: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858038: mov ecx, esi */
  ecx = esi;
/* 85803a: call 0x6c25a9 */
  esp -= 4; W32(esp, 0x85803fu); SPILL(); f_6c25a9(); if (g_unwind) return; RELOAD();
/* 85803f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 858042: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 858043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 858044: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85804b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85804c: mov esp, ebp */
  esp = ebp;
/* 85804e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85804f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_858052(void) {
  LOAD_REGS();
L_858052: /* 858052: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 858055: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85805a: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 85805d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85805e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 858061: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858066u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_858066(); return;
}

void f_858066(void) {
  LOAD_REGS();
L_858066: /* 858066: push 0xa173c8 */
  { uint32_t v = 0xa173c8u; esp -= 4; W32(esp, v); }
/* 85806b: push 0xae4b6c */
  { uint32_t v = 0xae4b6cu; esp -= 4; W32(esp, v); }
/* 858070: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x858076u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 858076: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858079: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85807b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85807d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858082u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_858082: guest_badaddr(0x858082); return;
}

void f_858140(void) {
  LOAD_REGS();
L_858140: /* 858140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 858141: mov ebp, esp */
  ebp = esp;
/* 858143: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 858145: push 0x9d408e */
  { uint32_t v = 0x9d408eu; esp -= 4; W32(esp, v); }
/* 85814a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 858150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858151: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 858158: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85815e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85815f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 858160: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858161: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 858164: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 85816a: xor edi, edi */
  edi = 0;
/* 85816c: mov esi, 0x40000000 */
  esi = 0x40000000u;
/* 858171: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 858173: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 858176: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 858179: je 0x858192 */
  if (zf) goto L_858192;
L_85817b: /* 85817b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 85817e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 858180: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858181: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 858184: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858185: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 858188: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858189: call dword ptr [eax + 0x104] */
  { uint32_t t = R32((uint32_t)(eax + 0x104u)); esp -= 4; W32(esp, 0x85818fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85818f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_858192: /* 858192: cmp byte ptr [ecx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 858196: jne 0x8582a2 */
  if (!zf) goto L_8582a2;
L_85819c: /* 85819c: cmp dword ptr [ecx + 0x2b4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x2b4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8581a2: je 0x8582a2 */
  if (zf) goto L_8582a2;
L_8581a8: /* 8581a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8581ab: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8581ae: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8581b1: mov edx, dword ptr [eax + 0x534] */
  edx = R32((uint32_t)(eax + 0x534u));
/* 8581b7: test dh, 8 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8581ba: jne 0x8582a2 */
  if (!zf) goto L_8582a2;
L_8581c0: /* 8581c0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8581c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8581c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8581c5: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8581c8: call 0x6c460b */
  esp -= 4; W32(esp, 0x8581cdu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8581cd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8581d0: test dword ptr [edx + 0x88], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8581d6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8581da: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8581de: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8581e2: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8581e5: je 0x8581f1 */
  if (zf) goto L_8581f1;
L_8581e7: /* 8581e7: mov byte ptr [ebp - 0x13], 0x80 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x80u);
/* 8581eb: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8581ef: jmp 0x8581f9 */
  goto L_8581f9;
L_8581f1: /* 8581f1: mov byte ptr [ebp - 0x13], 0x40 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x40u);
/* 8581f5: mov byte ptr [ebp - 0x12], 0x80 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x80u);
L_8581f9: /* 8581f9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8581fb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8581fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 858200: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 858203: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 858206: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 858209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85820a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85820b: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x85820eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85820e: /* 85820e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 858211: mov eax, dword ptr [ecx + 0x2b4] */
  eax = R32((uint32_t)(ecx + 0x2b4u));
/* 858217: cmp edi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85821a: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 85821d: jge 0x858293 */
  if ((sf == of)) goto L_858293;
L_85821f: /* 85821f: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 858222: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 858225: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 858227: xor ecx, ecx */
  ecx = 0;
/* 858229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_858230: /* 858230: mov ebx, dword ptr [edi + 0x14] */
  ebx = R32((uint32_t)(edi + 0x14u));
/* 858233: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 858235: jge 0x85828a */
  if ((sf == of)) goto L_85828a;
L_858237: /* 858237: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85823a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85823b: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 85823e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 858241: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 858242: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x858242);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 858244: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 858247: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85824a: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 85824d: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 858250: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 858252: mov eax, esp */
  eax = esp;
/* 858254: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 858256: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 858259: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 85825c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 85825f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 858262: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 858265: lea ecx, [esi + eax*4] */
  ecx = (uint32_t)(esi + eax*4);
/* 858268: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85826a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85826d: mov edx, esp */
  edx = esp;
/* 85826f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 858271: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 858274: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 858277: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85827a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 85827d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 858280: call 0x6cc74d */
  esp -= 4; W32(esp, 0x858285u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 858285: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 858288: jmp 0x858230 */
  goto L_858230;
L_85828a: /* 85828a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85828d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85828e: jmp 0x85820e */
  goto L_85820e;
L_858293: /* 858293: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 858296: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85829a: call 0x6cadcb */
  esp -= 4; W32(esp, 0x85829fu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 85829f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_8582a2: /* 8582a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8582a5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8582a8: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 8582ab: test dword ptr [edx + 0x534], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8582b5: je 0x858682 */
  if (zf) goto L_858682;
L_8582bb: /* 8582bb: cmp byte ptr [ecx + 0x51], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8582bf: jne 0x858682 */
  if (!zf) goto L_858682;
L_8582c5: /* 8582c5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8582c8: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* 8582ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8582cf: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8582d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8582d5: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8582db: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x8582e0u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 8582e0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8582e3: mov ecx, dword ptr [edx + 0x278] */
  ecx = R32((uint32_t)(edx + 0x278u));
/* 8582e9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8582eb: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8582ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8582f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8582f2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8582f5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8582f8: fld dword ptr [eax + 0x290] */
  { double v = F32((uint32_t)(eax + 0x290u)); FPUSH(v); }
/* 8582fe: fmul dword ptr [eax + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x284u)));
/* 858304: mov eax, dword ptr [eax + 0x278] */
  eax = R32((uint32_t)(eax + 0x278u));
/* 85830a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85830c: mov ecx, eax */
  ecx = eax;
/* 85830e: fimul dword ptr [ebp - 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 858311: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 858317: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 85831a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x85831du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85831d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 858320: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 858323: fld dword ptr [eax + 0x28c] */
  { double v = F32((uint32_t)(eax + 0x28cu)); FPUSH(v); }
/* 858329: fmul dword ptr [eax + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x284u)));
/* 85832f: mov eax, dword ptr [eax + 0x278] */
  eax = R32((uint32_t)(eax + 0x278u));
/* 858335: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 858337: mov ecx, eax */
  ecx = eax;
/* 858339: fimul dword ptr [ebp - 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 85833c: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 858342: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 858345: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x858348u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 858348: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85834b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85834e: fld dword ptr [eax + 0x288] */
  { double v = F32((uint32_t)(eax + 0x288u)); FPUSH(v); }
/* 858354: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858357: fmul dword ptr [eax + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x284u)));
/* 85835d: fimul dword ptr [ebp - 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 858360: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 858366: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 858369: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 85836c: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 858372: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 858375: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 85837b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85837e: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 858384: mov eax, esp */
  eax = esp;
/* 858386: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 858389: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85838c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 85838e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 858391: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 858394: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 858397: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 85839a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85839d: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8583a0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8583a3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8583a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8583a7: call 0x6c6221 */
  esp -= 4; W32(esp, 0x8583acu); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 8583ac: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8583af: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8583b2: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8583b5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8583b8: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8583bb: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8583be: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 8583c4: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8583c7: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 8583ce: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8583d1: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8583d4: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8583d7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8583da: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 8583dd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8583df: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8583e1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8583e3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8583e6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8583e8: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8583eb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8583ed: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8583f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8583f3: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8583f6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8583f9: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8583fc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8583ff: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 858402: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 858405: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 858408: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85840a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85840c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85840e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 858410: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 858412: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 858415: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 858418: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85841b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 85841e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 858421: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 858424: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 858427: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85842a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85842c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85842e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 858430: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 858432: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 858434: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 858437: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85843a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85843d: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 858440: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 858443: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 858446: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 858449: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 85844c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85844e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 858450: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 858452: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 858454: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 858456: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 858458: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85845a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85845c: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 85845f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 858462: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 858465: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 858468: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 85846b: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 85846e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 858470: push 0xae4b74 */
  { uint32_t v = 0xae4b74u; esp -= 4; W32(esp, v); }
/* 858475: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 858478: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858479: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 85847c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85847d: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 858480: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858482: call dword ptr [ecx + 0x80] */
  { uint32_t t = R32((uint32_t)(ecx + 0x80u)); esp -= 4; W32(esp, 0x858488u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 858488: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85848b: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 858491: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858494: test ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85849a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 85849d: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8584a1: je 0x8584b1 */
  if (zf) goto L_8584b1;
L_8584a3: /* 8584a3: mov byte ptr [ebp - 0x14], 0x80 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x80u);
/* 8584a7: mov byte ptr [ebp - 0x13], 0xe6 */
  W8((uint32_t)(ebp + 0xffffffedu), 0xe6u);
/* 8584ab: mov byte ptr [ebp - 0x12], 0x80 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x80u);
/* 8584af: jmp 0x8584bd */
  goto L_8584bd;
L_8584b1: /* 8584b1: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8584b5: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8584b9: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
L_8584bd: /* 8584bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8584c0: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8584c3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8584c6: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8584c9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8584cb: mov dword ptr [ecx + 0x58], edx */
  W32((uint32_t)(ecx + 0x58u), edx);
/* 8584ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8584d1: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8584d4: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8584d7: call 0x99c958 */
  esp -= 4; W32(esp, 0x8584dcu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8584dc: fild dword ptr [esi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8cu)); FPUSH(v); }
/* 8584e2: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8584e4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8584e7: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8584ea: call 0x99c958 */
  esp -= 4; W32(esp, 0x8584efu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8584ef: fild dword ptr [esi + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 8584f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8584f6: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8584f9: call 0x99c958 */
  esp -= 4; W32(esp, 0x8584feu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8584fe: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 858501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858502: call 0x99c958 */
  esp -= 4; W32(esp, 0x858507u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 858507: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85850a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85850b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85850c: mov ecx, edi */
  ecx = edi;
/* 85850e: call dword ptr [ebx + 0xb0] */
  { uint32_t t = R32((uint32_t)(ebx + 0xb0u)); esp -= 4; W32(esp, 0x858514u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 858514: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 858517: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x85851du); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 85851d: mov ecx, eax */
  ecx = eax;
/* 85851f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x858525u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 858525: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 858528: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 85852b: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* 85852e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 858530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858531: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 858534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858537: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858538: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x85853eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85853e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 858541: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 858544: fild dword ptr [esi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8cu)); FPUSH(v); }
/* 85854a: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 85854d: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 85854f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858552: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 858555: call 0x99c958 */
  esp -= 4; W32(esp, 0x85855au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85855a: fild dword ptr [esi + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 858560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858561: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 858564: call 0x99c958 */
  esp -= 4; W32(esp, 0x858569u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 858569: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85856c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85856d: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 858570: call 0x99c958 */
  esp -= 4; W32(esp, 0x858575u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 858575: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 858578: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858579: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85857a: mov ecx, edi */
  ecx = edi;
/* 85857c: call dword ptr [ebx + 0xb0] */
  { uint32_t t = R32((uint32_t)(ebx + 0xb0u)); esp -= 4; W32(esp, 0x858582u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 858582: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 858585: add ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85858b: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x858591u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 858591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858592: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 858595: push 0xae4b78 */
  { uint32_t v = 0xae4b78u; esp -= 4; W32(esp, v); }
/* 85859a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85859b: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8585a1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8585a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8585a4: mov ecx, eax */
  ecx = eax;
/* 8585a6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8585aa: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8585b0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8585b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8585b3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8585b6: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 8585b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8585bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8585bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8585be: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 8585c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8585c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8585c3: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8585c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8585c9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8585cc: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8585cf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8585d3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8585d9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8585d9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8585dc: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 8585df: fild dword ptr [esi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8cu)); FPUSH(v); }
/* 8585e5: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8585e8: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8585ea: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8585ed: call 0x99c958 */
  esp -= 4; W32(esp, 0x8585f2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8585f2: fild dword ptr [esi + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 8585f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8585f9: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8585fc: call 0x99c958 */
  esp -= 4; W32(esp, 0x858601u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 858601: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 858604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858605: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 858607: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 85860a: call 0x99c958 */
  esp -= 4; W32(esp, 0x85860fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85860f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 858612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858613: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858614: mov ecx, edi */
  ecx = edi;
/* 858616: call dword ptr [ebx + 0xb0] */
  { uint32_t t = R32((uint32_t)(ebx + 0xb0u)); esp -= 4; W32(esp, 0x85861cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85861c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85861f: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 858625: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x85862bu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 85862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85862c: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 85862f: push 0xae4b84 */
  { uint32_t v = 0xae4b84u; esp -= 4; W32(esp, v); }
/* 858634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858635: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x85863bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 85863b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85863e: mov ecx, eax */
  ecx = eax;
/* 858640: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 858644: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x85864au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 85864a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85864d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 858650: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 858653: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 858655: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858656: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 858659: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85865b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85865c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85865d: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x858663u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 858663: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858666: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 858669: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 85866d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x858673u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 858673: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 858679: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85867d: call 0x6caac4 */
  esp -= 4; W32(esp, 0x858682u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
L_858682: /* 858682: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 858685: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 858688: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 85868b: test byte ptr [eax + 0x534], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x534u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 858692: je 0x8588a2 */
  if (zf) goto L_8588a2;
L_858698: /* 858698: test byte ptr [0xcc9b94], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9b94u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85869f: jne 0x8586ee */
  if (!zf) goto L_8586ee;
L_8586a1: /* 8586a1: or dword ptr [0xcc9b94], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9b94u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9b94u), r);
  }
/* 8586a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8586aa: push 0xae4b90 */
  { uint32_t v = 0xae4b90u; esp -= 4; W32(esp, v); }
/* 8586af: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8586b1: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8586b6: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8586ba: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x8586c0u); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 8586c0: mov esi, eax */
  esi = eax;
/* 8586c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8586c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8586c7: je 0x8586e0 */
  if (zf) goto L_8586e0;
L_8586c9: /* 8586c9: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8586ce: mov ecx, esi */
  ecx = esi;
/* 8586d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8586d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8586d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8586d8: mov dword ptr [0xcc9b90], esi */
  W32((uint32_t)(0xcc9b90u), esi);
/* 8586de: jne 0x8586ea */
  if (!zf) goto L_8586ea;
L_8586e0: /* 8586e0: mov dword ptr [0xcc9b90], 0 */
  W32((uint32_t)(0xcc9b90u), 0x0u);
L_8586ea: /* 8586ea: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_8586ee: /* 8586ee: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8586f1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8586f4: mov edx, dword ptr [eax + 0x148] */
  edx = R32((uint32_t)(eax + 0x148u));
/* 8586fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8586fb: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 858700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858701: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 858707: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x85870cu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 85870c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85870f: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 858714: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 858716: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858719: mov ecx, esp */
  ecx = esp;
/* 85871b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85871d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 858720: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 858723: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 858726: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 858729: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 85872c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85872d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 858730: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 858734: call 0x6c6221 */
  esp -= 4; W32(esp, 0x858739u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 858739: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 85873c: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 85873f: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 858742: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 858745: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 858748: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 85874b: lea eax, [ebp - 0x104] */
  eax = (uint32_t)(ebp + 0xfffffefcu);
/* 858751: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 858754: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 85875b: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 85875e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 858761: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 858764: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 858767: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 85876a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85876c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 85876e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 858770: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 858773: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 858775: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 858778: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85877a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85877d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 858780: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 858783: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 858786: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 858789: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85878c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85878f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 858792: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 858795: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 858797: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 858799: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85879b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85879d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85879f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8587a2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8587a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8587a8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8587ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8587ae: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8587b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8587b4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8587b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8587b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8587bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8587bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8587bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8587c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8587c4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8587c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8587ca: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8587cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8587d0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8587d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8587d6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8587d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8587db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8587dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8587df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8587e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8587e3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8587e5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8587e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8587e9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8587ec: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8587ef: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8587f2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8587f5: test dword ptr [ecx + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8587ff: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* 858803: je 0x858813 */
  if (zf) goto L_858813;
L_858805: /* 858805: mov byte ptr [ebp - 0x1c], 0x80 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x80u);
/* 858809: mov byte ptr [ebp - 0x1b], 0xe6 */
  W8((uint32_t)(ebp + 0xffffffe5u), 0xe6u);
/* 85880d: mov byte ptr [ebp - 0x1a], 0x80 */
  W8((uint32_t)(ebp + 0xffffffe6u), 0x80u);
/* 858811: jmp 0x85881f */
  goto L_85881f;
L_858813: /* 858813: mov byte ptr [ebp - 0x1c], 0xff */
  W8((uint32_t)(ebp + 0xffffffe4u), 0xffu);
/* 858817: mov byte ptr [ebp - 0x1b], 0xff */
  W8((uint32_t)(ebp + 0xffffffe5u), 0xffu);
/* 85881b: mov byte ptr [ebp - 0x1a], 0xff */
  W8((uint32_t)(ebp + 0xffffffe6u), 0xffu);
L_85881f: /* 85881f: mov ecx, dword ptr [0xcc9b90] */
  ecx = R32((uint32_t)(0xcc9b90u));
/* 858825: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 858828: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85882b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85882c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85882e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 858830: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 858833: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 858836: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 858839: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85883a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85883b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85883d: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 858840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858841: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 858843: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858844: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 858847: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85884a: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 85884d: fild dword ptr [ecx + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x4cu)); FPUSH(v); }
/* 858850: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 858854: fild dword ptr [ecx + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* 858857: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 85885d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 858860: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858862: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 858865: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858867: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 858869: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85886c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 858870: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 858873: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 858875: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 858879: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 85887c: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 85887e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 858882: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 858885: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 858887: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85888a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85888c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85888e: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x858893u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 858893: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 858899: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85889d: call 0x6caac4 */
  esp -= 4; W32(esp, 0x8588a2u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
L_8588a2: /* 8588a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8588a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8588a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8588a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8588ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8588af: mov esp, ebp */
  esp = ebp;
/* 8588b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8588b2: ret 0xc */
  esp += 16; SPILL(); return;
}
