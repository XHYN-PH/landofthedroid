#include "recomp.h"
#include "rec_mod.h"

void f_79e630(void) {
  LOAD_REGS();
L_79e630: /* 79e630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e631: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 79e635: test dword ptr [esi + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e63f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e640: mov edi, ecx */
  edi = ecx;
/* 79e642: je 0x79e655 */
  if (zf) goto L_79e655;
L_79e644: /* 79e644: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 79e64a: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79e64d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e64e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79e651: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e652: ret 4 */
  esp += 8; SPILL(); return;
L_79e655: /* 79e655: mov ecx, edi */
  ecx = edi;
/* 79e657: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e65cu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e65c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e65e: je 0x79e670 */
  if (zf) goto L_79e670;
L_79e660: /* 79e660: test dword ptr [esi + 0x80], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e66a: jne 0x79e7e8 */
  if (!zf) goto L_79e7e8;
L_79e670: /* 79e670: mov ecx, esi */
  ecx = esi;
/* 79e672: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e677u); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e677: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e679: je 0x79e68b */
  if (zf) goto L_79e68b;
L_79e67b: /* 79e67b: test dword ptr [edi + 0x80], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x80u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e685: jne 0x79e7e8 */
  if (!zf) goto L_79e7e8;
L_79e68b: /* 79e68b: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 79e691: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e693: je 0x79e6a7 */
  if (zf) goto L_79e6a7;
L_79e695: /* 79e695: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79e697: mov ecx, esi */
  ecx = esi;
/* 79e699: call dword ptr [eax + 0x174] */
  { uint32_t t = R32((uint32_t)(eax + 0x174u)); esp -= 4; W32(esp, 0x79e69fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e69f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e6a1: jne 0x79e792 */
  if (!zf) goto L_79e792;
L_79e6a7: /* 79e6a7: mov ecx, esi */
  ecx = esi;
/* 79e6a9: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e6aeu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e6ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e6b0: jne 0x79e792 */
  if (!zf) goto L_79e792;
L_79e6b6: /* 79e6b6: mov ecx, edi */
  ecx = edi;
/* 79e6b8: call 0x6cd012 */
  esp -= 4; W32(esp, 0x79e6bdu); SPILL(); f_6cd012(); if (g_unwind) return; RELOAD();
/* 79e6bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e6bf: jne 0x79e747 */
  if (!zf) goto L_79e747;
L_79e6c5: /* 79e6c5: mov ecx, edi */
  ecx = edi;
/* 79e6c7: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e6ccu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e6cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e6ce: jne 0x79e747 */
  if (!zf) goto L_79e747;
L_79e6d0: /* 79e6d0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 79e6d2: mov ecx, edi */
  ecx = edi;
/* 79e6d4: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x79e6d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e6d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e6d9: jne 0x79e6f4 */
  if (!zf) goto L_79e6f4;
L_79e6db: /* 79e6db: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 79e6dd: mov ecx, edi */
  ecx = edi;
/* 79e6df: call dword ptr [eax + 0x188] */
  { uint32_t t = R32((uint32_t)(eax + 0x188u)); esp -= 4; W32(esp, 0x79e6e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e6e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e6e7: jne 0x79e6f4 */
  if (!zf) goto L_79e6f4;
L_79e6e9: /* 79e6e9: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 79e6ef: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79e6f2: jmp 0x79e6fd */
  goto L_79e6fd;
L_79e6f4: /* 79e6f4: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 79e6fa: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
L_79e6fd: /* 79e6fd: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79e700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e702: je 0x79e7e8 */
  if (zf) goto L_79e7e8;
L_79e708: /* 79e708: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79e70a: mov ecx, esi */
  ecx = esi;
/* 79e70c: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x79e70fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e70f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e711: jne 0x79e734 */
  if (!zf) goto L_79e734;
L_79e713: /* 79e713: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79e715: mov ecx, esi */
  ecx = esi;
/* 79e717: call dword ptr [eax + 0x188] */
  { uint32_t t = R32((uint32_t)(eax + 0x188u)); esp -= 4; W32(esp, 0x79e71du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e71d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e71f: jne 0x79e734 */
  if (!zf) goto L_79e734;
L_79e721: /* 79e721: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 79e727: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79e72a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79e72d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e72f: jmp 0x79e7dc */
  goto L_79e7dc;
L_79e734: /* 79e734: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 79e73a: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79e73d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79e740: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e742: jmp 0x79e7dc */
  goto L_79e7dc;
L_79e747: /* 79e747: mov ecx, edi */
  ecx = edi;
/* 79e749: call 0x6c1771 */
  esp -= 4; W32(esp, 0x79e74eu); SPILL(); f_6c1771(); if (g_unwind) return; RELOAD();
/* 79e74e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e750: je 0x79e764 */
  if (zf) goto L_79e764;
L_79e752: /* 79e752: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79e754: mov ecx, esi */
  ecx = esi;
/* 79e756: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x79e75cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e75c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e75e: jne 0x79e7e8 */
  if (!zf) goto L_79e7e8;
L_79e764: /* 79e764: test byte ptr [esi + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e76b: je 0x79e7e8 */
  if (zf) goto L_79e7e8;
L_79e76d: /* 79e76d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79e76f: mov ecx, esi */
  ecx = esi;
/* 79e771: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x79e774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e776: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 79e77c: je 0x79e788 */
  if (zf) goto L_79e788;
L_79e77e: /* 79e77e: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79e781: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79e784: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e786: jmp 0x79e7dc */
  goto L_79e7dc;
L_79e788: /* 79e788: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79e78b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79e78e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e790: jmp 0x79e7dc */
  goto L_79e7dc;
L_79e792: /* 79e792: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 79e795: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e797: je 0x79e7b5 */
  if (zf) goto L_79e7b5;
L_79e799: /* 79e799: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79e79b: mov ecx, esi */
  ecx = esi;
/* 79e79d: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x79e7a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e7a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e7a5: je 0x79e7b5 */
  if (zf) goto L_79e7b5;
L_79e7a7: /* 79e7a7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 79e7a9: mov ecx, edi */
  ecx = edi;
/* 79e7ab: call dword ptr [eax + 0x180] */
  { uint32_t t = R32((uint32_t)(eax + 0x180u)); esp -= 4; W32(esp, 0x79e7b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e7b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e7b3: jne 0x79e7e8 */
  if (!zf) goto L_79e7e8;
L_79e7b5: /* 79e7b5: test byte ptr [edi + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e7bc: je 0x79e7e8 */
  if (zf) goto L_79e7e8;
L_79e7be: /* 79e7be: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 79e7c0: mov ecx, edi */
  ecx = edi;
/* 79e7c2: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x79e7c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e7c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e7c7: mov esi, dword ptr [esi + 0x88] */
  esi = R32((uint32_t)(esi + 0x88u));
/* 79e7cd: je 0x79e7d4 */
  if (zf) goto L_79e7d4;
L_79e7cf: /* 79e7cf: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 79e7d2: jmp 0x79e7d7 */
  goto L_79e7d7;
L_79e7d4: /* 79e7d4: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
L_79e7d7: /* 79e7d7: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 79e7da: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_79e7dc: /* 79e7dc: je 0x79e7e8 */
  if (zf) goto L_79e7e8;
L_79e7de: /* 79e7de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e7df: mov eax, 1 */
  eax = 0x1u;
/* 79e7e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e7e5: ret 4 */
  esp += 8; SPILL(); return;
L_79e7e8: /* 79e7e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e7e9: xor eax, eax */
  eax = 0;
/* 79e7eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e7ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79e860(void) {
  LOAD_REGS();
L_79e860: /* 79e860: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e863: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79e864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e865: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e866: mov edi, ecx */
  edi = ecx;
/* 79e868: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 79e86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e870: je 0x79e986 */
  if (zf) goto L_79e986;
L_79e876: /* 79e876: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 79e87b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79e881u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79e881: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e883: je 0x79e986 */
  if (zf) goto L_79e986;
L_79e889: /* 79e889: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 79e88d: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 79e893: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79e895: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e896: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e897: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x79e89du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e89d: mov ecx, eax */
  ecx = eax;
/* 79e89f: call 0x6cceaa */
  esp -= 4; W32(esp, 0x79e8a4u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 79e8a4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79e8a7: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 79e8ab: mov ebx, dword ptr [0xcfa600] */
  ebx = R32((uint32_t)(0xcfa600u));
/* 79e8b1: jle 0x79e919 */
  if ((zf || sf != of)) goto L_79e919;
L_79e8b3: /* 79e8b3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e8b5: je 0x79e95b */
  if (zf) goto L_79e95b;
L_79e8bb: /* 79e8bb: mov ecx, esi */
  ecx = esi;
/* 79e8bd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x79e8bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e8bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e8c1: je 0x79e919 */
  if (zf) goto L_79e919;
L_79e8c3: /* 79e8c3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 79e8c7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79e8c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79e8cb: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 79e8d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e8d4: mov eax, esp */
  eax = esp;
/* 79e8d6: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 79e8de: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 79e8e2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79e8e4: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 79e8ec: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 79e8f0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 79e8f3: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* 79e8fb: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 79e8ff: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 79e902: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e903: mov ecx, esi */
  ecx = esi;
/* 79e905: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x79e90bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e90b: mov eax, 1 */
  eax = 0x1u;
/* 79e910: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e912: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e913: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e916: ret 8 */
  esp += 12; SPILL(); return;
L_79e919: /* 79e919: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e91b: je 0x79e95b */
  if (zf) goto L_79e95b;
L_79e91d: /* 79e91d: mov ecx, esi */
  ecx = esi;
/* 79e91f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x79e921u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e923: je 0x79e95b */
  if (zf) goto L_79e95b;
L_79e925: /* 79e925: mov ecx, edi */
  ecx = edi;
/* 79e927: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x79e92du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 79e92d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e92e: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 79e932: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x79e938u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 79e938: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 79e93e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e93f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 79e941: push 0xacccd0 */
  { uint32_t v = 0xacccd0u; esp -= 4; W32(esp, v); }
/* 79e946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e947: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x79e94du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 79e94d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e950: xor eax, eax */
  eax = 0;
/* 79e952: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e953: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e954: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e955: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e958: ret 8 */
  esp += 12; SPILL(); return;
L_79e95b: /* 79e95b: mov ecx, edi */
  ecx = edi;
/* 79e95d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x79e963u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 79e963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e964: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 79e968: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x79e96eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 79e96e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 79e974: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79e976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e977: push 0xaccd68 */
  { uint32_t v = 0xaccd68u; esp -= 4; W32(esp, v); }
/* 79e97c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79e97d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x79e983u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 79e983: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79e986: /* 79e986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e987: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e988: xor eax, eax */
  eax = 0;
/* 79e98a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e98b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e98e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79e9f0(void) {
  LOAD_REGS();
L_79e9f0: /* 79e9f0: mov ecx, dword ptr [ecx + 0xd0] */
  ecx = R32((uint32_t)(ecx + 0xd0u));
/* 79e9f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e9f9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e9fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e9fc: je 0x79ea72 */
  if (zf) goto L_79ea72;
L_79e9fe: /* 79e9fe: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 79ea03: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79ea09u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79ea09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ea0b: je 0x79ea72 */
  if (zf) goto L_79ea72;
L_79ea0d: /* 79ea0d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 79ea11: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79ea13: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79ea15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ea18: mov ecx, esp */
  ecx = esp;
/* 79ea1a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 79ea22: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 79ea26: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 79ea28: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 79ea30: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 79ea34: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 79ea37: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 79ea3f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 79ea43: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 79ea46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ea48: mov ecx, esi */
  ecx = esi;
/* 79ea4a: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x79ea50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79ea50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ea52: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 79ea56: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x79ea5cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 79ea5c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 79ea60: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 79ea66: mov eax, 1 */
  eax = 0x1u;
/* 79ea6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ea6c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ea6f: ret 4 */
  esp += 8; SPILL(); return;
L_79ea72: /* 79ea72: xor eax, eax */
  eax = 0;
/* 79ea74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ea75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ea78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79eab0(void) {
  LOAD_REGS();
L_79eab0: /* 79eab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79eab1: mov ebp, esp */
  ebp = esp;
/* 79eab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79eab5: push 0x9ce2a0 */
  { uint32_t v = 0x9ce2a0u; esp -= 4; W32(esp, v); }
/* 79eaba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79eac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79eac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79eac8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79eacb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79eacc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79eacd: mov esi, ecx */
  esi = ecx;
/* 79eacf: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 79ead5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ead7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79ead8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79eadb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79eae2: je 0x79eb10 */
  if (zf) goto L_79eb10;
L_79eae4: /* 79eae4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79eae6: je 0x79eb10 */
  if (zf) goto L_79eb10;
L_79eae8: /* 79eae8: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 79eaee: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eaf1: jne 0x79eb10 */
  if (!zf) goto L_79eb10;
L_79eaf3: /* 79eaf3: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 79eaf6: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eaf9: je 0x79eb13 */
  if (zf) goto L_79eb13;
L_79eafb: /* 79eafb: xor eax, eax */
  eax = 0;
/* 79eafd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79eb00: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79eb07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79eb08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79eb09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79eb0a: mov esp, ebp */
  esp = ebp;
/* 79eb0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79eb0d: ret 8 */
  esp += 12; SPILL(); return;
L_79eb10: /* 79eb10: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_79eb13: /* 79eb13: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79eb16: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb18: je 0x79eb23 */
  if (zf) goto L_79eb23;
L_79eb1a: /* 79eb1a: test byte ptr [edi + 0x83], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x83u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb21: jne 0x79eafb */
  if (!zf) goto L_79eafb;
L_79eb23: /* 79eb23: test byte ptr [esi + 0x83], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x83u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb2a: je 0x79eb3e */
  if (zf) goto L_79eb3e;
L_79eb2c: /* 79eb2c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb2e: je 0x79eb3e */
  if (zf) goto L_79eb3e;
L_79eb30: /* 79eb30: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 79eb32: mov ecx, edi */
  ecx = edi;
/* 79eb34: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x79eb3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79eb3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb3c: je 0x79eafb */
  if (zf) goto L_79eafb;
L_79eb3e: /* 79eb3e: test bh, bh */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 79eb40: jns 0x79eb61 */
  if (!sf) goto L_79eb61;
L_79eb42: /* 79eb42: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79eb48: shr eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79eb4b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79eb4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79eb51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79eb58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79eb59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79eb5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79eb5b: mov esp, ebp */
  esp = ebp;
/* 79eb5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79eb5e: ret 8 */
  esp += 12; SPILL(); return;
L_79eb61: /* 79eb61: test bh, 0x20 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb64: je 0x79eb87 */
  if (zf) goto L_79eb87;
L_79eb66: /* 79eb66: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 79eb69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb6b: je 0x79eb77 */
  if (zf) goto L_79eb77;
L_79eb6d: /* 79eb6d: cmp byte ptr [esi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79eb71: je 0x79ebf9 */
  if (zf) goto L_79ebf9;
L_79eb77: /* 79eb77: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 79eb7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb7f: je 0x79eb87 */
  if (zf) goto L_79eb87;
L_79eb81: /* 79eb81: cmp byte ptr [esi + 0x51], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79eb85: je 0x79ebf9 */
  if (zf) goto L_79ebf9;
L_79eb87: /* 79eb87: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eb8a: je 0x79ebab */
  if (zf) goto L_79ebab;
L_79eb8c: /* 79eb8c: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 79eb92: shr eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 79eb95: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79eb98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79eb9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79eba2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79eba3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79eba4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79eba5: mov esp, ebp */
  esp = ebp;
/* 79eba7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79eba8: ret 8 */
  esp += 12; SPILL(); return;
L_79ebab: /* 79ebab: test dword ptr [esi + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ebb5: je 0x79ebd1 */
  if (zf) goto L_79ebd1;
L_79ebb7: /* 79ebb7: mov eax, ebx */
  eax = ebx;
/* 79ebb9: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 79ebbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ebc1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ebc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ebc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ebca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ebcb: mov esp, ebp */
  esp = ebp;
/* 79ebcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ebce: ret 8 */
  esp += 12; SPILL(); return;
L_79ebd1: /* 79ebd1: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ebd4: je 0x79eafb */
  if (zf) goto L_79eafb;
L_79ebda: /* 79ebda: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ebdd: je 0x79ec11 */
  if (zf) goto L_79ec11;
L_79ebdf: /* 79ebdf: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 79ebe5: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ebe7: jne 0x79ebf9 */
  if (!zf) goto L_79ebf9;
L_79ebe9: /* 79ebe9: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ebeb: je 0x79eafb */
  if (zf) goto L_79eafb;
L_79ebf1: /* 79ebf1: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ebf3: je 0x79eafb */
  if (zf) goto L_79eafb;
L_79ebf9: /* 79ebf9: mov eax, 1 */
  eax = 0x1u;
/* 79ebfe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ec01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ec08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ec09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ec0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ec0b: mov esp, ebp */
  esp = ebp;
/* 79ec0d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ec0e: ret 8 */
  esp += 12; SPILL(); return;
L_79ec11: /* 79ec11: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ec14: je 0x79ebf9 */
  if (zf) goto L_79ebf9;
L_79ec16: /* 79ec16: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ec18: je 0x79eafb */
  if (zf) goto L_79eafb;
L_79ec1e: /* 79ec1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79ec1f: mov ecx, edi */
  ecx = edi;
/* 79ec21: call 0x6cb05a */
  esp -= 4; W32(esp, 0x79ec26u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 79ec26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ec28: je 0x79eafb */
  if (zf) goto L_79eafb;
L_79ec2e: /* 79ec2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ec31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ec32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ec33: mov eax, 1 */
  eax = 0x1u;
/* 79ec38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ec3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ec40: mov esp, ebp */
  esp = ebp;
/* 79ec42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ec43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79ec46(void) {
  LOAD_REGS();
L_79ec46: /* 79ec46: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79ec49: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79ec4e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79ec51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79ec52: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79ec55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79ec5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79ec5a(); return;
}

void f_79ec5a(void) {
  LOAD_REGS();
L_79ec5a: /* 79ec5a: push 0xa0b068 */
  { uint32_t v = 0xa0b068u; esp -= 4; W32(esp, v); }
/* 79ec5f: push 0xacce28 */
  { uint32_t v = 0xacce28u; esp -= 4; W32(esp, v); }
/* 79ec64: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79ec6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79ec6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ec6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ec6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ec71: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79ec76u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79ec76: guest_badaddr(0x79ec76); return;
}

void f_79ed00(void) {
  LOAD_REGS();
L_79ed00: /* 79ed00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79ed01: mov ebp, esp */
  ebp = esp;
/* 79ed03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79ed05: push 0x9ce2b0 */
  { uint32_t v = 0x9ce2b0u; esp -= 4; W32(esp, v); }
/* 79ed0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79ed10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ed11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79ed18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ed1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ed1c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 79ed1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79ed20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79ed21: mov edi, ecx */
  edi = ecx;
/* 79ed23: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 79ed29: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed2c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79ed2f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79ed36: jne 0x79ed41 */
  if (!zf) goto L_79ed41;
L_79ed38: /* 79ed38: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed3b: jne 0x79ee19 */
  if (!zf) goto L_79ee19;
L_79ed41: /* 79ed41: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 79ed44: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed46: je 0x79ed55 */
  if (zf) goto L_79ed55;
L_79ed48: /* 79ed48: test byte ptr [esi + 0x83], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x83u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed4f: jne 0x79ee19 */
  if (!zf) goto L_79ee19;
L_79ed55: /* 79ed55: test byte ptr [edi + 0x83], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x83u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed5c: je 0x79ed74 */
  if (zf) goto L_79ed74;
L_79ed5e: /* 79ed5e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed60: je 0x79ed74 */
  if (zf) goto L_79ed74;
L_79ed62: /* 79ed62: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79ed64: mov ecx, esi */
  ecx = esi;
/* 79ed66: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x79ed6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79ed6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed6e: je 0x79ee19 */
  if (zf) goto L_79ee19;
L_79ed74: /* 79ed74: test dword ptr [edi + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed7e: je 0x79ed84 */
  if (zf) goto L_79ed84;
L_79ed80: /* 79ed80: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 79ed82: js 0x79eda4 */
  if (sf) goto L_79eda4;
L_79ed84: /* 79ed84: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed87: je 0x79ee19 */
  if (zf) goto L_79ee19;
L_79ed8d: /* 79ed8d: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed90: je 0x79edbc */
  if (zf) goto L_79edbc;
L_79ed92: /* 79ed92: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 79ed98: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed9a: jne 0x79eda4 */
  if (!zf) goto L_79eda4;
L_79ed9c: /* 79ed9c: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ed9e: je 0x79ee19 */
  if (zf) goto L_79ee19;
L_79eda0: /* 79eda0: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eda2: je 0x79ee19 */
  if (zf) goto L_79ee19;
L_79eda4: /* 79eda4: mov eax, 1 */
  eax = 0x1u;
/* 79eda9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79edac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79edb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79edb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79edb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79edb6: mov esp, ebp */
  esp = ebp;
/* 79edb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79edb9: ret 8 */
  esp += 12; SPILL(); return;
L_79edbc: /* 79edbc: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79edbf: je 0x79eda4 */
  if (zf) goto L_79eda4;
L_79edc1: /* 79edc1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79edc3: je 0x79ee19 */
  if (zf) goto L_79ee19;
L_79edc5: /* 79edc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79edc6: mov ecx, esi */
  ecx = esi;
/* 79edc8: call 0x6cb05a */
  esp -= 4; W32(esp, 0x79edcdu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 79edcd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79edcf: je 0x79ee19 */
  if (zf) goto L_79ee19;
L_79edd1: /* 79edd1: mov eax, 1 */
  eax = 0x1u;
/* 79edd6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79edd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ede0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ede1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ede2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ede3: mov esp, ebp */
  esp = ebp;
/* 79ede5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ede6: ret 8 */
  esp += 12; SPILL(); return;
L_79ee19: /* 79ee19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ee1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ee1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ee1e: xor eax, eax */
  eax = 0;
/* 79ee20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ee27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ee28: mov esp, ebp */
  esp = ebp;
/* 79ee2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ee2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79ede9(void) {
  LOAD_REGS();
L_79ede9: /* 79ede9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79edec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79edf1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79edf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79edf5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79edf8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79edfdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79edfd(); return;
}

void f_79edfd(void) {
  LOAD_REGS();
L_79edfd: /* 79edfd: push 0xa0b098 */
  { uint32_t v = 0xa0b098u; esp -= 4; W32(esp, v); }
/* 79ee02: push 0xacce30 */
  { uint32_t v = 0xacce30u; esp -= 4; W32(esp, v); }
/* 79ee07: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79ee0du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79ee0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ee10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ee12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ee14: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79ee19u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 79ee19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ee1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ee1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ee1e: xor eax, eax */
  eax = 0;
/* 79ee20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ee27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ee28: mov esp, ebp */
  esp = ebp;
/* 79ee2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ee2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79ee80(void) {
  LOAD_REGS();
L_79ee80: /* 79ee80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79ee81: mov ebp, esp */
  ebp = esp;
/* 79ee83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79ee85: push 0x9ce2dc */
  { uint32_t v = 0x9ce2dcu; esp -= 4; W32(esp, v); }
/* 79ee8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79ee90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ee91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79ee98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ee9b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79ee9e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 79eea1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79eea2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 79eea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79eea6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79eea7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79eeaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79eeab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79eeae: mov esi, ecx */
  esi = ecx;
/* 79eeb0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79eeb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79eeb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79eeb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79eeb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79eeb7: mov ecx, esi */
  ecx = esi;
/* 79eeb9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79eec0: call 0x6c3760 */
  esp -= 4; W32(esp, 0x79eec5u); SPILL(); f_6c3760(); if (g_unwind) return; RELOAD();
/* 79eec5: mov edi, eax */
  edi = eax;
/* 79eec7: mov eax, dword ptr [0xb71f90] */
  eax = R32((uint32_t)(0xb71f90u));
/* 79eecc: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eecf: je 0x79ef92 */
  if (zf) goto L_79ef92;
L_79eed5: /* 79eed5: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79eedc: jne 0x79ef92 */
  if (!zf) goto L_79ef92;
L_79eee2: /* 79eee2: mov cl, byte ptr [esi + 0x384] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x384u))) & 0xffu);
/* 79eee8: cmp cl, byte ptr [ebx + 0x384] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x384u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79eeee: je 0x79ef3c */
  if (zf) goto L_79ef3c;
L_79eef0: /* 79eef0: mov cl, byte ptr [0xb78040] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb78040u))) & 0xffu);
/* 79eef6: mov eax, 1 */
  eax = 0x1u;
/* 79eefb: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79eefd: jne 0x79ef2d */
  if (!zf) goto L_79ef2d;
L_79eeff: /* 79eeff: or dword ptr [0xb78040], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78040u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb78040u), r);
  }
/* 79ef05: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79ef08: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79ef0eu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79ef0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ef10: push 0xacce40 */
  { uint32_t v = 0xacce40u; esp -= 4; W32(esp, v); }
/* 79ef15: push 0xb71af8 */
  { uint32_t v = 0xb71af8u; esp -= 4; W32(esp, v); }
/* 79ef1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ef1b: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79ef21u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79ef21: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ef24: mov dword ptr [0xb7803c], eax */
  W32((uint32_t)(0xb7803cu), eax);
/* 79ef29: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79ef2d: /* 79ef2d: mov edx, dword ptr [0xb7803c] */
  edx = R32((uint32_t)(0xb7803cu));
/* 79ef33: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79ef37: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79ef39: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79ef3c: /* 79ef3c: mov ecx, dword ptr [esi + 0x374] */
  ecx = R32((uint32_t)(esi + 0x374u));
/* 79ef42: cmp ecx, dword ptr [ebx + 0x374] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x374u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79ef48: je 0x79ef92 */
  if (zf) goto L_79ef92;
L_79ef4a: /* 79ef4a: mov cl, byte ptr [0xb78040] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb78040u))) & 0xffu);
/* 79ef50: mov eax, 2 */
  eax = 0x2u;
/* 79ef55: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ef57: jne 0x79ef83 */
  if (!zf) goto L_79ef83;
L_79ef59: /* 79ef59: or dword ptr [0xb78040], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78040u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb78040u), r);
  }
/* 79ef5f: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79ef62: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79ef68u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79ef68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ef6a: push 0xacce50 */
  { uint32_t v = 0xacce50u; esp -= 4; W32(esp, v); }
/* 79ef6f: push 0xb71af8 */
  { uint32_t v = 0xb71af8u; esp -= 4; W32(esp, v); }
/* 79ef74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ef75: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79ef7bu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79ef7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ef7e: mov dword ptr [0xb78038], eax */
  W32((uint32_t)(0xb78038u), eax);
L_79ef83: /* 79ef83: mov edx, dword ptr [0xb78038] */
  edx = R32((uint32_t)(0xb78038u));
/* 79ef89: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79ef8d: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79ef8f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79ef92: /* 79ef92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ef95: mov eax, edi */
  eax = edi;
/* 79ef97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ef98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ef99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79efa0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79efa1: mov esp, ebp */
  esp = ebp;
/* 79efa3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79efa4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79efa7(void) {
  LOAD_REGS();
L_79efa7: /* 79efa7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79efaa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79efaf: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79efb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79efb3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79efb6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79efbbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79efbb(); return;
}

void f_79efbb(void) {
  LOAD_REGS();
L_79efbb: /* 79efbb: push 0xa0b0d0 */
  { uint32_t v = 0xa0b0d0u; esp -= 4; W32(esp, v); }
/* 79efc0: push 0xacce64 */
  { uint32_t v = 0xacce64u; esp -= 4; W32(esp, v); }
/* 79efc5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79efcbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79efcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79efce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79efd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79efd2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79efd7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79efd7: guest_badaddr(0x79efd7); return;
}

void f_79f040(void) {
  LOAD_REGS();
L_79f040: /* 79f040: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 79f044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f046: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 79f049: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 79f04a: mov esi, ecx */
  esi = ecx;
/* 79f04c: mov ecx, edi */
  ecx = edi;
/* 79f04e: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 79f051: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79f054: jne 0x79f06b */
  if (!zf) goto L_79f06b;
L_79f056: /* 79f056: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 79f057: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 79f05a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 79f05d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f05f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f060: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 79f065: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x79f06bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79f06b: /* 79f06b: mov cl, byte ptr [esi + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 79f06e: cmp cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79f071: jne 0x79f0be */
  if (!zf) goto L_79f0be;
L_79f073: /* 79f073: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 79f079: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f07b: je 0x79f0be */
  if (zf) goto L_79f0be;
L_79f07d: /* 79f07d: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 79f080: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79f081: lea edi, [esi + 0x2a0] */
  edi = (uint32_t)(esi + 0x2a0u);
/* 79f087: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79f089: mov ecx, edi */
  ecx = edi;
/* 79f08b: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x79f091u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 79f091: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 79f097: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 79f09a: xor eax, eax */
  eax = 0;
/* 79f09c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 79f09e: jle 0x79f113 */
  if ((zf || sf != of)) goto L_79f113;
L_79f0a0: /* 79f0a0: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 79f0a3: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 79f0a6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 79f0a8: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 79f0ab: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 79f0b1: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 79f0b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79f0b5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f0b7: jl 0x79f0a0 */
  if ((sf != of)) goto L_79f0a0;
L_79f0b9: /* 79f0b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f0ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f0bb: ret 8 */
  esp += 12; SPILL(); return;
L_79f0be: /* 79f0be: cmp cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79f0c1: jne 0x79f113 */
  if (!zf) goto L_79f113;
L_79f0c3: /* 79f0c3: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 79f0c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f0c8: je 0x79f113 */
  if (zf) goto L_79f113;
L_79f0ca: /* 79f0ca: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 79f0d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f0d1: lea edi, [esi + 0x2a0] */
  edi = (uint32_t)(esi + 0x2a0u);
/* 79f0d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79f0d9: mov ecx, edi */
  ecx = edi;
/* 79f0db: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x79f0e1u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 79f0e1: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 79f0e4: mov edx, dword ptr [eax + 0xfc] */
  edx = R32((uint32_t)(eax + 0xfcu));
/* 79f0ea: xor ecx, ecx */
  ecx = 0;
/* 79f0ec: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 79f0ee: jle 0x79f113 */
  if ((zf || sf != of)) goto L_79f113;
L_79f0f0: /* 79f0f0: xor edx, edx */
  edx = 0;
/* 79f0f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_79f0f3: /* 79f0f3: mov eax, dword ptr [eax + 0xf8] */
  eax = R32((uint32_t)(eax + 0xf8u));
/* 79f0f9: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* 79f0fc: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 79f0fe: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
/* 79f101: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 79f104: mov ebx, dword ptr [eax + 0xfc] */
  ebx = R32((uint32_t)(eax + 0xfcu));
/* 79f10a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 79f10b: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79f10e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f110: jl 0x79f0f3 */
  if ((sf != of)) goto L_79f0f3;
L_79f112: /* 79f112: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_79f113: /* 79f113: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f114: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f115: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79f160(void) {
  LOAD_REGS();
L_79f160: /* 79f160: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 79f164: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 79f16a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 79f16d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 79f16f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f170: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f171: jle 0x79f18a */
  if ((zf || sf != of)) goto L_79f18a;
L_79f173: /* 79f173: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_79f177: /* 79f177: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 79f179: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 79f17b: mov edi, dword ptr [edi + edx*4] */
  edi = R32((uint32_t)(edi + edx*4));
/* 79f17e: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f180: je 0x79f191 */
  if (zf) goto L_79f191;
L_79f182: /* 79f182: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 79f183: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79f185: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f188: jl 0x79f177 */
  if ((sf != of)) goto L_79f177;
L_79f18a: /* 79f18a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f18b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f18c: xor eax, eax */
  eax = 0;
/* 79f18e: ret 8 */
  esp += 12; SPILL(); return;
L_79f191: /* 79f191: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f192: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f193: mov eax, 1 */
  eax = 0x1u;
/* 79f198: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79f1b0(void) {
  LOAD_REGS();
L_79f1b0: /* 79f1b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f1b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 79f1b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f1b6: mov esi, ecx */
  esi = ecx;
/* 79f1b8: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 79f1bb: xor eax, eax */
  eax = 0;
/* 79f1bd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 79f1bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f1c0: jle 0x79f1d2 */
  if ((zf || sf != of)) goto L_79f1d2;
L_79f1c2: /* 79f1c2: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 79f1c4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_79f1c6: /* 79f1c6: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f1c8: je 0x79f1e5 */
  if (zf) goto L_79f1e5;
L_79f1ca: /* 79f1ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79f1cb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79f1ce: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f1d0: jl 0x79f1c6 */
  if ((sf != of)) goto L_79f1c6;
L_79f1d2: /* 79f1d2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79f1d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f1d6: mov ecx, esi */
  ecx = esi;
/* 79f1d8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x79f1deu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 79f1de: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 79f1e0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 79f1e2: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_79f1e5: /* 79f1e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f1e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f1e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79f1e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79f200(void) {
  LOAD_REGS();
L_79f200: /* 79f200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f201: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79f203: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f205: mov esi, ecx */
  esi = ecx;
/* 79f207: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x79f20du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 79f20d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 79f211: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 79f213: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 79f215: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 79f218: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f219: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79f230(void) {
  LOAD_REGS();
L_79f230: /* 79f230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f231: mov esi, ecx */
  esi = ecx;
/* 79f233: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 79f236: jne 0x79f24a */
  if (!zf) goto L_79f24a;
L_79f238: /* 79f238: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x79f23du); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 79f23d: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79f242: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 79f244: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79f246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f247: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x79f24au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79f24a: /* 79f24a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f24b: ret  */
  esp += 4; SPILL(); return;
}

void f_79f260(void) {
  LOAD_REGS();
L_79f260: /* 79f260: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f264: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f265: mov esi, ecx */
  esi = ecx;
/* 79f267: cmp byte ptr [esi + 0x91], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79f26e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 79f274: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f275: jne 0x79f4d9 */
  if (!zf) goto L_79f4d9;
L_79f27b: /* 79f27b: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 79f281: mov edx, eax */
  edx = eax;
/* 79f283: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 79f287: mov eax, dword ptr [esi + 0x2d8] */
  eax = R32((uint32_t)(esi + 0x2d8u));
/* 79f28d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 79f291: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 79f295: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 79f29b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f29c: xor ebx, ebx */
  ebx = 0;
/* 79f29e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f29f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f2a2: mov eax, esp */
  eax = esp;
/* 79f2a4: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 79f2a6: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 79f2aa: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 79f2ae: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 79f2b1: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 79f2b5: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 79f2b8: mov edi, dword ptr [0xb734e8] */
  edi = R32((uint32_t)(0xb734e8u));
/* 79f2be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f2c1: mov eax, esp */
  eax = esp;
/* 79f2c3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 79f2c5: mov edi, dword ptr [0xb734ec] */
  edi = R32((uint32_t)(0xb734ecu));
/* 79f2cb: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 79f2ce: mov edi, dword ptr [0xb734f0] */
  edi = R32((uint32_t)(0xb734f0u));
/* 79f2d4: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 79f2d7: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 79f2db: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 79f2df: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 79f2e3: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 79f2e7: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 79f2eb: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 79f2ef: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* 79f2f3: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 79f2f7: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 79f2fb: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* 79f2ff: mov dword ptr [esp + 0x70], 0x3f800000 */
  W32((uint32_t)(esp + 0x70u), 0x3f800000u);
/* 79f307: mov dword ptr [esp + 0x74], 0xffffffff */
  W32((uint32_t)(esp + 0x74u), 0xffffffffu);
/* 79f30f: mov dword ptr [esp + 0x78], ebx */
  W32((uint32_t)(esp + 0x78u), ebx);
/* 79f313: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79f315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f316: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x79f31cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79f31c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f31e: je 0x79f379 */
  if (zf) goto L_79f379;
L_79f320: /* 79f320: mov ecx, esi */
  ecx = esi;
/* 79f322: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x79f328u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 79f328: mov ecx, eax */
  ecx = eax;
/* 79f32a: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x79f330u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 79f330: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 79f336: fcomp dword ptr [eax + 0x2d4] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x2d4u)));
  FPOP();
/* 79f33c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79f33e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79f341: jp 0x79f36c */
  if (pf) goto L_79f36c;
L_79f343: /* 79f343: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 79f349: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f34c: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 79f352: mov ecx, esi */
  ecx = esi;
/* 79f354: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 79f358: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 79f35e: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 79f364: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 79f367: call 0x6c389b */
  esp -= 4; W32(esp, 0x79f36cu); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
L_79f36c: /* 79f36c: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 79f372: or eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 79f377: jmp 0x79f3b3 */
  goto L_79f3b3;
L_79f379: /* 79f379: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 79f37f: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x79f385u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 79f385: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f387: je 0x79f396 */
  if (zf) goto L_79f396;
L_79f389: /* 79f389: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 79f38f: or eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 79f394: jmp 0x79f3b3 */
  goto L_79f3b3;
L_79f396: /* 79f396: fld dword ptr [0xb734f0] */
  { double v = F32((uint32_t)(0xb734f0u)); FPUSH(v); }
/* 79f39c: fadd dword ptr [0xa0b130] */
  ST0 = ST0 + (F32((uint32_t)(0xa0b130u)));
/* 79f3a2: fstp dword ptr [0xb734f0] */
  WF32((uint32_t)(0xb734f0u), ST0); FPOP();
/* 79f3a8: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 79f3ae: and eax, 0xbfffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_79f3b3: /* 79f3b3: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 79f3b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f3bb: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 79f3c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f3c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f3c4: mov ebx, dword ptr [0xb734e8] */
  ebx = R32((uint32_t)(0xb734e8u));
/* 79f3ca: mov ecx, edi */
  ecx = edi;
/* 79f3cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79f3ce: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 79f3d1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79f3d4: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 79f3d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f3db: mov eax, esp */
  eax = esp;
/* 79f3dd: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 79f3df: mov ebx, dword ptr [0xb734ec] */
  ebx = R32((uint32_t)(0xb734ecu));
/* 79f3e5: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 79f3e9: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 79f3ef: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 79f3f2: mov ebx, dword ptr [0xb734f0] */
  ebx = R32((uint32_t)(0xb734f0u));
/* 79f3f8: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 79f3fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79f3fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f3ff: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 79f402: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x79f408u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79f408: test dword ptr [esi + 0x390], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f412: jne 0x79f507 */
  if (!zf) goto L_79f507;
L_79f418: /* 79f418: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 79f41c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 79f420: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 79f422: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 79f426: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 79f42a: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 79f42d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 79f431: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 79f435: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 79f438: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 79f43c: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x79f442u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 79f442: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 79f446: fcomp dword ptr [0xa0a848] */
  fpu_com(ST0, F32((uint32_t)(0xa0a848u)));
  FPOP();
/* 79f44c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79f44e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79f451: jne 0x79f507 */
  if (!zf) goto L_79f507;
L_79f457: /* 79f457: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 79f45d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 79f461: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 79f467: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 79f46b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 79f46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79f46f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79f472: jp 0x79f480 */
  if (pf) goto L_79f480;
L_79f474: /* 79f474: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 79f478: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 79f47a: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 79f47e: jmp 0x79f484 */
  goto L_79f484;
L_79f480: /* 79f480: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_79f484: /* 79f484: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 79f488: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x79f48eu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 79f48e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 79f492: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 79f496: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f499: mov edx, esp */
  edx = esp;
/* 79f49b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 79f49f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 79f4a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 79f4a7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 79f4a9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 79f4ad: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 79f4b1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 79f4b5: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 79f4b9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 79f4bd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 79f4c0: mov ecx, esi */
  ecx = esi;
/* 79f4c2: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 79f4c6: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 79f4ca: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 79f4cd: call 0x6c5321 */
  esp -= 4; W32(esp, 0x79f4d2u); SPILL(); f_6c5321(); if (g_unwind) return; RELOAD();
/* 79f4d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f4d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f4d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79f4d5: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79f4d8: ret  */
  esp += 4; SPILL(); return;
L_79f4d9: /* 79f4d9: mov edi, dword ptr [0xb734e8] */
  edi = R32((uint32_t)(0xb734e8u));
/* 79f4df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79f4e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f4e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f4e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f4e7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f4ea: mov eax, esp */
  eax = esp;
/* 79f4ec: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 79f4ee: mov edi, dword ptr [0xb734ec] */
  edi = R32((uint32_t)(0xb734ecu));
/* 79f4f4: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 79f4f7: mov edi, dword ptr [0xb734f0] */
  edi = R32((uint32_t)(0xb734f0u));
/* 79f4fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f4fe: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 79f501: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x79f507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79f507: /* 79f507: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f508: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f509: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79f50a: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79f50d: ret  */
  esp += 4; SPILL(); return;
}

void f_79f5c0(void) {
  LOAD_REGS();
L_79f5c0: /* 79f5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79f5c1: mov ebp, esp */
  ebp = esp;
/* 79f5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79f5c5: push 0x9ce2f0 */
  { uint32_t v = 0x9ce2f0u; esp -= 4; W32(esp, v); }
/* 79f5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79f5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79f5d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f5db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f5dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f5de: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79f5e1: xor ebx, ebx */
  ebx = 0;
/* 79f5e3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f5e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79f5e8: mov esi, ecx */
  esi = ecx;
/* 79f5ea: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 79f5ed: jne 0x79f607 */
  if (!zf) goto L_79f607;
L_79f5ef: /* 79f5ef: push 0x500 */
  { uint32_t v = 0x500u; esp -= 4; W32(esp, v); }
/* 79f5f4: push 0xaccab0 */
  { uint32_t v = 0xaccab0u; esp -= 4; W32(esp, v); }
/* 79f5f9: push 0xaccabc */
  { uint32_t v = 0xaccabcu; esp -= 4; W32(esp, v); }
/* 79f5fe: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x79f604u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 79f604: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79f607: /* 79f607: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 79f60a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f60c: je 0x79f614 */
  if (zf) goto L_79f614;
L_79f60e: /* 79f60e: mov dword ptr [eax + 0x4c0], ebx */
  W32((uint32_t)(eax + 0x4c0u), ebx);
L_79f614: /* 79f614: mov dword ptr [esi + 0x4c0], edi */
  W32((uint32_t)(esi + 0x4c0u), edi);
/* 79f61a: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 79f61d: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 79f623: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 79f626: mov eax, dword ptr [esi + 0x7c8] */
  eax = R32((uint32_t)(esi + 0x7c8u));
/* 79f62c: cmp eax, 0x708 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x708u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f631: jle 0x79f667 */
  if ((zf || sf != of)) goto L_79f667;
L_79f633: /* 79f633: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f635: je 0x79f667 */
  if (zf) goto L_79f667;
L_79f637: /* 79f637: mov ebx, dword ptr [ecx + 0x38] */
  ebx = R32((uint32_t)(ecx + 0x38u));
/* 79f63a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f63c: je 0x79f667 */
  if (zf) goto L_79f667;
L_79f63e: /* 79f63e: cmp eax, 0x708 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x708u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f643: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 79f646: jge 0x79f64f */
  if ((sf == of)) goto L_79f64f;
L_79f648: /* 79f648: mov eax, 0x708 */
  eax = 0x708u;
/* 79f64d: jmp 0x79f655 */
  goto L_79f655;
L_79f64f: /* 79f64f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f651: jl 0x79f655 */
  if ((sf != of)) goto L_79f655;
L_79f653: /* 79f653: mov eax, edx */
  eax = edx;
L_79f655: /* 79f655: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* 79f658: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 79f65b: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 79f661: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 79f664: mov dword ptr [ecx + 0x44], edx */
  W32((uint32_t)(ecx + 0x44u), edx);
L_79f667: /* 79f667: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 79f66c: mov ecx, edi */
  ecx = edi;
/* 79f66e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79f674u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79f674: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f676: je 0x79f694 */
  if (zf) goto L_79f694;
L_79f678: /* 79f678: mov eax, dword ptr [0xb7e414] */
  eax = R32((uint32_t)(0xb7e414u));
/* 79f67d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f67f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f680: mov ecx, esi */
  ecx = esi;
/* 79f682: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x79f688u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 79f688: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79f68a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f68c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f68f: mov ecx, esi */
  ecx = esi;
/* 79f691: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x79f694u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79f694: /* 79f694: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 79f69a: cmp byte ptr [eax + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79f6a1: jne 0x79f6c0 */
  if (!zf) goto L_79f6c0;
L_79f6a3: /* 79f6a3: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 79f6a9: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 79f6ac: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 79f6af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f6b1: je 0x79f6c0 */
  if (zf) goto L_79f6c0;
L_79f6b3: /* 79f6b3: mov edx, ecx */
  edx = ecx;
/* 79f6b5: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 79f6b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 79f6ba: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x79f6c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79f6c0: /* 79f6c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79f6c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f6c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f6c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79f6cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79f6cd: mov esp, ebp */
  esp = ebp;
/* 79f6cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79f6d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79f6d3(void) {
  LOAD_REGS();
L_79f6d3: /* 79f6d3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79f6d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79f6db: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79f6de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79f6df: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79f6e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79f6e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79f6e7(); return;
}

void f_79f6e7(void) {
  LOAD_REGS();
L_79f6e7: /* 79f6e7: push 0xa0b134 */
  { uint32_t v = 0xa0b134u; esp -= 4; W32(esp, v); }
/* 79f6ec: push 0xaccacc */
  { uint32_t v = 0xaccaccu; esp -= 4; W32(esp, v); }
/* 79f6f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79f6f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79f6f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79f6fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f6fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f6fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79f703u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79f703: guest_badaddr(0x79f703); return;
}

void f_79f770(void) {
  LOAD_REGS();
L_79f770: /* 79f770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79f771: mov ebp, esp */
  ebp = esp;
/* 79f773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79f775: push 0x9ce300 */
  { uint32_t v = 0x9ce300u; esp -= 4; W32(esp, v); }
/* 79f77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79f780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79f788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f78b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f78c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f78d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f78e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79f791: mov edi, ecx */
  edi = ecx;
/* 79f793: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79f79a: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x79f7a0u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 79f7a0: mov ecx, edi */
  ecx = edi;
/* 79f7a2: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x79f7a8u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 79f7a8: test byte ptr [eax + 0x498], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x498u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79f7af: je 0x79f7b9 */
  if (zf) goto L_79f7b9;
L_79f7b1: /* 79f7b1: mov ecx, edi */
  ecx = edi;
/* 79f7b3: call dword ptr [0xcfa608] */
  esp -= 4; W32(esp, 0x79f7b9u); SPILL(); f_4e1d66(); if (g_unwind) return; /* Core!?LoadLocalized@UObject@@QAEXXZ */ RELOAD();
L_79f7b9: /* 79f7b9: mov ecx, dword ptr [edi + 0x280] */
  ecx = R32((uint32_t)(edi + 0x280u));
/* 79f7bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f7c1: je 0x79f7cb */
  if (zf) goto L_79f7cb;
L_79f7c3: /* 79f7c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f7c5: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x79f7cbu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_79f7cb: /* 79f7cb: mov eax, dword ptr [edi + 0x280] */
  eax = R32((uint32_t)(edi + 0x280u));
/* 79f7d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f7d3: je 0x79f7e6 */
  if (zf) goto L_79f7e6;
L_79f7d5: /* 79f7d5: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 79f7d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f7da: je 0x79f7e6 */
  if (zf) goto L_79f7e6;
L_79f7dc: /* 79f7dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f7de: mov ecx, eax */
  ecx = eax;
/* 79f7e0: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x79f7e6u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_79f7e6: /* 79f7e6: xor esi, esi */
  esi = 0;
L_79f7e8: /* 79f7e8: cmp esi, dword ptr [edi + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f7ee: jge 0x79f814 */
  if ((sf == of)) goto L_79f814;
L_79f7f0: /* 79f7f0: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* 79f7f6: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 79f7f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f7fb: lea ecx, [edi + 0x1fc] */
  ecx = (uint32_t)(edi + 0x1fcu);
/* 79f801: je 0x79f808 */
  if (zf) goto L_79f808;
L_79f803: /* 79f803: cmp dword ptr [eax + 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f806: je 0x79f811 */
  if (zf) goto L_79f811;
L_79f808: /* 79f808: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f80a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f80b: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x79f810u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 79f810: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_79f811: /* 79f811: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 79f812: jmp 0x79f7e8 */
  goto L_79f7e8;
L_79f814: /* 79f814: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f815: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x79f81au); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 79f81a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79f81d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f81e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f81f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79f826: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79f827: mov esp, ebp */
  esp = ebp;
/* 79f829: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79f82a: ret  */
  esp += 4; SPILL(); return;
}

void f_79f82b(void) {
  LOAD_REGS();
L_79f82b: /* 79f82b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79f82e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79f833: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79f836: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79f837: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79f83a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79f83fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79f83f(); return;
}

void f_79f83f(void) {
  LOAD_REGS();
L_79f83f: /* 79f83f: push 0xa0b17c */
  { uint32_t v = 0xa0b17cu; esp -= 4; W32(esp, v); }
/* 79f844: push 0xaccbb4 */
  { uint32_t v = 0xaccbb4u; esp -= 4; W32(esp, v); }
/* 79f849: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79f84fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79f84f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79f852: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f854: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f856: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79f85bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79f85b: guest_badaddr(0x79f85b); return;
}

void f_79f8a0(void) {
  LOAD_REGS();
L_79f8a0: /* 79f8a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79f8a1: mov ebp, esp */
  ebp = esp;
/* 79f8a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79f8a5: push 0x9ce310 */
  { uint32_t v = 0x9ce310u; esp -= 4; W32(esp, v); }
/* 79f8aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79f8b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f8b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79f8b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f8bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f8bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f8bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f8be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79f8c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f8c3: add ecx, 0x11c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79f8c9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79f8cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79f8d2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x79f8d8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 79f8d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79f8db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79f8dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79f8dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79f8e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79f8e5: mov esp, ebp */
  esp = ebp;
/* 79f8e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79f8e8: ret  */
  esp += 4; SPILL(); return;
}

void f_79f8e9(void) {
  LOAD_REGS();
L_79f8e9: /* 79f8e9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79f8ec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79f8f1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79f8f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79f8f5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79f8f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79f8fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79f8fd(); return;
}

void f_79f8fd(void) {
  LOAD_REGS();
L_79f8fd: /* 79f8fd: push 0xa0b1a4 */
  { uint32_t v = 0xa0b1a4u; esp -= 4; W32(esp, v); }
/* 79f902: push 0xaccbd4 */
  { uint32_t v = 0xaccbd4u; esp -= 4; W32(esp, v); }
/* 79f907: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79f90du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79f90d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79f910: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f912: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79f914: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79f919u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79f919: guest_badaddr(0x79f919); return;
}

void f_79f940(void) {
  LOAD_REGS();
L_79f940: /* 79f940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79f941: mov ebp, esp */
  ebp = esp;
/* 79f943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79f945: push 0x9ce320 */
  { uint32_t v = 0x9ce320u; esp -= 4; W32(esp, v); }
/* 79f94a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79f950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79f951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79f958: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79f95b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79f95c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79f95d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79f95e: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 79f964: mov esi, edx */
  esi = edx;
/* 79f966: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f968: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79f96b: mov ebx, ecx */
  ebx = ecx;
/* 79f96d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79f974: jne 0x79f98a */
  if (!zf) goto L_79f98a;
L_79f976: /* 79f976: push 0x73e */
  { uint32_t v = 0x73eu; esp -= 4; W32(esp, v); }
/* 79f97b: push 0xaccc14 */
  { uint32_t v = 0xaccc14u; esp -= 4; W32(esp, v); }
/* 79f980: push 0xaccc20 */
  { uint32_t v = 0xaccc20u; esp -= 4; W32(esp, v); }
/* 79f985: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79f987u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79f987: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79f98a: /* 79f98a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79f98c: jne 0x79f9a2 */
  if (!zf) goto L_79f9a2;
L_79f98e: /* 79f98e: push 0x73f */
  { uint32_t v = 0x73fu; esp -= 4; W32(esp, v); }
/* 79f993: push 0xaccc28 */
  { uint32_t v = 0xaccc28u; esp -= 4; W32(esp, v); }
/* 79f998: push 0xaccc34 */
  { uint32_t v = 0xaccc34u; esp -= 4; W32(esp, v); }
/* 79f99d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79f99fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79f99f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79f9a2: /* 79f9a2: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f9a4: jne 0x79f9ba */
  if (!zf) goto L_79f9ba;
L_79f9a6: /* 79f9a6: push 0x740 */
  { uint32_t v = 0x740u; esp -= 4; W32(esp, v); }
/* 79f9ab: push 0xaccc3c */
  { uint32_t v = 0xaccc3cu; esp -= 4; W32(esp, v); }
/* 79f9b0: push 0xaccc48 */
  { uint32_t v = 0xaccc48u; esp -= 4; W32(esp, v); }
/* 79f9b5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79f9b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79f9b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79f9ba: /* 79f9ba: xor eax, eax */
  eax = 0;
/* 79f9bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_79f9c0: /* 79f9c0: cmp eax, dword ptr [esi + 0x114] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79f9c6: jge 0x79f9d6 */
  if ((sf == of)) goto L_79f9d6;
L_79f9c8: /* 79f9c8: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 79f9ce: cmp dword ptr [ecx + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79f9d1: je 0x79fa3c */
  if (zf) goto L_79fa3c;
L_79f9d3: /* 79f9d3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79f9d4: jmp 0x79f9c0 */
  goto L_79f9c0;
L_79f9d6: /* 79f9d6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79f9d8: lea edi, [esi + 0x110] */
  edi = (uint32_t)(esi + 0x110u);
/* 79f9de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79f9e0: mov ecx, edi */
  ecx = edi;
/* 79f9e2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x79f9e8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 79f9e8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 79f9ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79f9eb: mov ecx, esp */
  ecx = esp;
/* 79f9ed: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 79f9f2: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 79f9f5: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x79f9fbu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 79f9fb: mov ecx, esi */
  ecx = esi;
/* 79f9fd: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x79fa03u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 79fa03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fa05: je 0x79fa28 */
  if (zf) goto L_79fa28;
L_79fa07: /* 79fa07: mov eax, dword ptr [0xb7e2b4] */
  eax = R32((uint32_t)(0xb7e2b4u));
/* 79fa0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79fa0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fa0f: mov ecx, esi */
  ecx = esi;
/* 79fa11: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 79fa14: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x79fa1au); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 79fa1a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79fa1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79fa1e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79fa21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79fa22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fa23: mov ecx, esi */
  ecx = esi;
/* 79fa25: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x79fa28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79fa28: /* 79fa28: xor eax, eax */
  eax = 0;
/* 79fa2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_79fa30: /* 79fa30: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79fa33: jge 0x79fa55 */
  if ((sf == of)) goto L_79fa55;
L_79fa35: /* 79fa35: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 79fa37: cmp dword ptr [edx + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79fa3a: jne 0x79fa52 */
  if (!zf) goto L_79fa52;
L_79fa3c: /* 79fa3c: mov eax, 1 */
  eax = 0x1u;
/* 79fa41: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79fa44: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79fa4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79fa4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79fa4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79fa4e: mov esp, ebp */
  esp = ebp;
/* 79fa50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79fa51: ret  */
  esp += 4; SPILL(); return;
L_79fa52: /* 79fa52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79fa53: jmp 0x79fa30 */
  goto L_79fa30;
L_79fa55: /* 79fa55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79fa58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79fa59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79fa5a: xor eax, eax */
  eax = 0;
/* 79fa5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79fa63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79fa64: mov esp, ebp */
  esp = ebp;
/* 79fa66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79fa67: ret  */
  esp += 4; SPILL(); return;
}

void f_79fa68(void) {
  LOAD_REGS();
L_79fa68: /* 79fa68: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 79fa6b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79fa70: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 79fa73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79fa74: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 79fa77: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79fa7cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79fa7c(); return;
}

void f_79fa7c(void) {
  LOAD_REGS();
L_79fa7c: /* 79fa7c: push 0xa0b1e0 */
  { uint32_t v = 0xa0b1e0u; esp -= 4; W32(esp, v); }
/* 79fa81: push 0xaccc58 */
  { uint32_t v = 0xaccc58u; esp -= 4; W32(esp, v); }
/* 79fa86: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79fa8cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79fa8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79fa8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79fa91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79fa93: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79fa98u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79fa98: guest_badaddr(0x79fa98); return;
}

void f_79fb00(void) {
  LOAD_REGS();
L_79fb00: /* 79fb00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79fb01: mov ebp, esp */
  ebp = esp;
/* 79fb03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79fb05: push 0x9ce330 */
  { uint32_t v = 0x9ce330u; esp -= 4; W32(esp, v); }
/* 79fb0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79fb10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fb11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79fb18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79fb1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79fb1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79fb1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79fb1e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79fb21: mov esi, ecx */
  esi = ecx;
/* 79fb23: mov ecx, edi */
  ecx = edi;
/* 79fb25: mov edx, esi */
  edx = esi;
/* 79fb27: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79fb2a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79fb31: call 0x79f940 */
  esp -= 4; W32(esp, 0x79fb36u); SPILL(); f_79f940(); if (g_unwind) return; RELOAD();
/* 79fb36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fb38: je 0x79fb43 */
  if (zf) goto L_79fb43;
L_79fb3a: /* 79fb3a: mov ecx, esi */
  ecx = esi;
/* 79fb3c: mov edx, edi */
  edx = edi;
/* 79fb3e: call 0x79f940 */
  esp -= 4; W32(esp, 0x79fb43u); SPILL(); f_79f940(); if (g_unwind) return; RELOAD();
L_79fb43: /* 79fb43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79fb46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79fb47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79fb48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79fb4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79fb50: mov esp, ebp */
  esp = ebp;
/* 79fb52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79fb53: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79fb56(void) {
  LOAD_REGS();
L_79fb56: /* 79fb56: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79fb59: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79fb5e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79fb61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79fb62: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79fb65: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79fb6au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79fb6a(); return;
}

void f_79fb6a(void) {
  LOAD_REGS();
L_79fb6a: /* 79fb6a: push 0xa0b1f4 */
  { uint32_t v = 0xa0b1f4u; esp -= 4; W32(esp, v); }
/* 79fb6f: push 0xaccc60 */
  { uint32_t v = 0xaccc60u; esp -= 4; W32(esp, v); }
/* 79fb74: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79fb7au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79fb7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79fb7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79fb7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79fb81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79fb86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79fb86: guest_badaddr(0x79fb86); return;
}

void f_79fbc0(void) {
  LOAD_REGS();
L_79fbc0: /* 79fbc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79fbc1: mov ebp, esp */
  ebp = esp;
/* 79fbc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79fbc5: push 0x9ce348 */
  { uint32_t v = 0x9ce348u; esp -= 4; W32(esp, v); }
/* 79fbca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79fbd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fbd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79fbd8: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79fbdb: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 79fbe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79fbe1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79fbe2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79fbe5: mov ecx, dword ptr [0xce8490] */
  ecx = R32((uint32_t)(0xce8490u));
/* 79fbeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79fbec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79fbef: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79fbf6: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 79fbf9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 79fbfb: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 79fbfd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fc00: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 79fc06: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79fc09: jne 0x79fdeb */
  if (!zf) goto L_79fdeb;
L_79fc0f: /* 79fc0f: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 79fc12: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fc14: jne 0x79fc31 */
  if (!zf) goto L_79fc31;
L_79fc16: /* 79fc16: push 0x7b5 */
  { uint32_t v = 0x7b5u; esp -= 4; W32(esp, v); }
/* 79fc1b: push 0xaccc90 */
  { uint32_t v = 0xaccc90u; esp -= 4; W32(esp, v); }
/* 79fc20: push 0xaccc9c */
  { uint32_t v = 0xaccc9cu; esp -= 4; W32(esp, v); }
/* 79fc25: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x79fc2bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 79fc2b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fc2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79fc31: /* 79fc31: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 79fc34: call 0x6c5042 */
  esp -= 4; W32(esp, 0x79fc39u); SPILL(); f_6c5042(); if (g_unwind) return; RELOAD();
/* 79fc39: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 79fc3f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79fc42: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fc45: jne 0x79fdfc */
  if (!zf) goto L_79fdfc;
L_79fc4b: /* 79fc4b: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 79fc4e: lea edi, [eax + 0xc4] */
  edi = (uint32_t)(eax + 0xc4u);
/* 79fc54: lea ebx, [eax + 0x8c] */
  ebx = (uint32_t)(eax + 0x8cu);
/* 79fc5a: mov al, byte ptr [edi + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x18u))) & 0xffu);
/* 79fc5d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79fc5f: je 0x79fdfc */
  if (zf) goto L_79fdfc;
L_79fc65: /* 79fc65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79fc66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79fc67: call 0x6c50d8 */
  esp -= 4; W32(esp, 0x79fc6cu); SPILL(); f_6c50d8(); if (g_unwind) return; RELOAD();
/* 79fc6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79fc6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fc71: je 0x79fdfc */
  if (zf) goto L_79fdfc;
L_79fc77: /* 79fc77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79fc78: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79fc7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79fc7c: call 0x6c50d8 */
  esp -= 4; W32(esp, 0x79fc81u); SPILL(); f_6c50d8(); if (g_unwind) return; RELOAD();
/* 79fc81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79fc84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fc86: je 0x79fdfc */
  if (zf) goto L_79fdfc;
L_79fc8c: /* 79fc8c: xor eax, eax */
  eax = 0;
/* 79fc8e: mov al, byte ptr [esi + 0x86] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x86u))) & 0xffu);
/* 79fc94: mov edi, eax */
  edi = eax;
/* 79fc96: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 79fc99: je 0x79fca9 */
  if (zf) goto L_79fca9;
L_79fc9b: /* 79fc9b: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 79fc9e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fca0: je 0x79fca9 */
  if (zf) goto L_79fca9;
L_79fca2: /* 79fca2: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x79fca7u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 79fca7: jmp 0x79fcab */
  goto L_79fcab;
L_79fca9: /* 79fca9: mov eax, esi */
  eax = esi;
L_79fcab: /* 79fcab: cmp byte ptr [eax + 0x2b0], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x2b0u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79fcb2: jne 0x79fce9 */
  if (!zf) goto L_79fce9;
L_79fcb4: /* 79fcb4: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 79fcba: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 79fcc0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79fcc3: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 79fcc9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 79fccc: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x79fcd2u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 79fcd2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fcd5: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 79fcd8: fmul qword ptr [0xa0b288] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b288u)));
/* 79fcde: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79fce1: fadd qword ptr [0xa0b278] */
  ST0 = ST0 + (F64((uint32_t)(0xa0b278u)));
/* 79fce7: jmp 0x79fd10 */
  goto L_79fd10;
L_79fce9: /* 79fce9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fceb: je 0x79fcfb */
  if (zf) goto L_79fcfb;
L_79fced: /* 79fced: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 79fcf0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fcf2: je 0x79fcfb */
  if (zf) goto L_79fcfb;
L_79fcf4: /* 79fcf4: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x79fcf9u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 79fcf9: jmp 0x79fcfd */
  goto L_79fcfd;
L_79fcfb: /* 79fcfb: mov eax, esi */
  eax = esi;
L_79fcfd: /* 79fcfd: movzx edx, byte ptr [eax + 0x2b0] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2b0u)));
/* 79fd04: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 79fd07: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 79fd0a: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
L_79fd10: /* 79fd10: mov esi, dword ptr [esi + 0x60] */
  esi = R32((uint32_t)(esi + 0x60u));
/* 79fd13: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 79fd15: fadd dword ptr [esi + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xe8u)));
/* 79fd1b: add esi, 0xe0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 79fd21: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 79fd23: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 79fd2a: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 79fd2d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 79fd2f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 79fd31: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 79fd34: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 79fd37: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 79fd39: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 79fd3c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 79fd3f: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 79fd42: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 79fd45: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 79fd48: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 79fd4b: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 79fd4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fd4f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 79fd52: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 79fd55: call 0x6c576d */
  esp -= 4; W32(esp, 0x79fd5au); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 79fd5a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fd5d: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 79fd60: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 79fd62: mov dword ptr [edx + 0xb8], eax */
  W32((uint32_t)(edx + 0xb8u), eax);
/* 79fd68: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 79fd6e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79fd71: jne 0x79fdd1 */
  if (!zf) goto L_79fdd1;
L_79fd73: /* 79fd73: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fd76: cmp byte ptr [eax + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79fd7a: jne 0x79fdd1 */
  if (!zf) goto L_79fdd1;
L_79fd7c: /* 79fd7c: mov ecx, dword ptr [eax + 0x2b4] */
  ecx = R32((uint32_t)(eax + 0x2b4u));
/* 79fd82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79fd84: je 0x79fdd1 */
  if (zf) goto L_79fdd1;
L_79fd86: /* 79fd86: xor esi, esi */
  esi = 0;
L_79fd88: /* 79fd88: cmp esi, dword ptr [eax + 0xdc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79fd8e: jge 0x79fdd1 */
  if ((sf == of)) goto L_79fdd1;
L_79fd90: /* 79fd90: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 79fd96: mov edx, dword ptr [eax + 0xd8] */
  edx = R32((uint32_t)(eax + 0xd8u));
/* 79fd9c: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 79fd9f: mov edi, dword ptr [ecx + 0x8c] */
  edi = R32((uint32_t)(ecx + 0x8cu));
/* 79fda5: mov edi, dword ptr [edi + 0xc0] */
  edi = R32((uint32_t)(edi + 0xc0u));
/* 79fdab: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 79fdae: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 79fdb1: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 79fdb4: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 79fdb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fdb8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 79fdba: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 79fdbd: mov eax, dword ptr [ecx + 0x1128] */
  eax = R32((uint32_t)(ecx + 0x1128u));
/* 79fdc3: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 79fdc6: call 0x6ca00b */
  esp -= 4; W32(esp, 0x79fdcbu); SPILL(); f_6ca00b(); if (g_unwind) return; RELOAD();
/* 79fdcb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fdce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 79fdcf: jmp 0x79fd88 */
  goto L_79fd88;
L_79fdd1: /* 79fdd1: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 79fdd7: mov edx, dword ptr [0xce8490] */
  edx = R32((uint32_t)(0xce8490u));
/* 79fddd: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 79fde0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
L_79fde2: /* 79fde2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79fde4: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79fde7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79fde9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_79fdeb: /* 79fdeb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79fdee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79fdef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79fdf0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79fdf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79fdf8: mov esp, ebp */
  esp = ebp;
/* 79fdfa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79fdfb: ret  */
  esp += 4; SPILL(); return;
L_79fdfc: /* 79fdfc: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 79fdff: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79fe01: jne 0x79fe9d */
  if (!zf) goto L_79fe9d;
L_79fe07: /* 79fe07: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 79fe0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fe0b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 79fe0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79fe0f: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 79fe12: add ecx, 0x8c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79fe18: call dword ptr [0xcfa610] */
  esp -= 4; W32(esp, 0x79fe1eu); SPILL(); f_4e326f(); if (g_unwind) return; /* Core!?GetCenterAndExtents@FBox@@QBEXAAVFVector@@0@Z */ RELOAD();
/* 79fe1e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fe21: mov eax, dword ptr [edx + 0x60] */
  eax = R32((uint32_t)(edx + 0x60u));
/* 79fe24: mov byte ptr [eax + 0xdc], 1 */
  W8((uint32_t)(eax + 0xdcu), 0x1u);
/* 79fe2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fe2e: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 79fe31: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 79fe34: add edx, 0xd0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79fe3a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 79fe3c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 79fe3f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 79fe42: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 79fe45: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 79fe48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fe4b: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 79fe4e: lea edx, [eax + 0xd0] */
  edx = (uint32_t)(eax + 0xd0u);
/* 79fe54: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 79fe56: add eax, 0xc4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79fe5b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79fe5d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 79fe60: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 79fe63: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 79fe66: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 79fe69: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 79fe6c: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x79fe72u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 79fe72: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 79fe75: fmul dword ptr [0xa0b260] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b260u)));
/* 79fe7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79fe7c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fe7f: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* 79fe82: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 79fe85: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 79fe88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fe89: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79fe8f: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x79fe95u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 79fe95: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fe98: mov edi, dword ptr [edx + 0x60] */
  edi = R32((uint32_t)(edx + 0x60u));
/* 79fe9b: jmp 0x79fed9 */
  goto L_79fed9;
L_79fe9d: /* 79fe9d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79fe9f: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 79fea2: mov ecx, 7 */
  ecx = 0x7u;
/* 79fea7: lea edi, [eax + 0xc4] */
  edi = (uint32_t)(eax + 0xc4u);
/* 79fead: lea esi, [eax + 0x8c] */
  esi = (uint32_t)(eax + 0x8cu);
/* 79feb3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 79feb5: je 0x79fee8 */
  if (zf) goto L_79fee8;
L_79feb7: /* 79feb7: mov eax, dword ptr [0xa0a7f4] */
  eax = R32((uint32_t)(0xa0a7f4u));
/* 79febc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79febf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79fec0: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 79fec3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79fec4: mov ecx, dword ptr [edx + 0x60] */
  ecx = R32((uint32_t)(edx + 0x60u));
/* 79fec7: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79fecd: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x79fed3u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 79fed3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79fed6: mov edi, dword ptr [ecx + 0x60] */
  edi = R32((uint32_t)(ecx + 0x60u));
L_79fed9: /* 79fed9: mov esi, eax */
  esi = eax;
/* 79fedb: add edi, 0xc4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 79fee1: mov ecx, 7 */
  ecx = 0x7u;
/* 79fee6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_79fee8: /* 79fee8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79feeb: mov edx, dword ptr [eax + 0xdc] */
  edx = R32((uint32_t)(eax + 0xdcu));
/* 79fef1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79fef2: lea ecx, [eax + 0xd8] */
  ecx = (uint32_t)(eax + 0xd8u);
/* 79fef8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79fefa: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x79ff00u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 79ff00: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79ff03: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 79ff06: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 79ff0c: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ff0f: mov edi, esp */
  edi = esp;
/* 79ff11: add esi, 0xc4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 79ff17: mov ecx, 7 */
  ecx = 0x7u;
/* 79ff1c: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 79ff1f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 79ff21: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 79ff27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79ff28: call 0x6c9156 */
  esp -= 4; W32(esp, 0x79ff2du); SPILL(); f_6c9156(); if (g_unwind) return; RELOAD();
/* 79ff2d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79ff30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ff31: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79ff37: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 79ff3b: call 0x6c5eac */
  esp -= 4; W32(esp, 0x79ff40u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 79ff40: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 79ff43: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79ff47: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x79ff4cu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 79ff4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ff4e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 79ff51: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x79ff57u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 79ff57: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 79ff5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79ff5b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79ff5e: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79ff61: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x79ff67u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 79ff67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ff69: je 0x79ffe0 */
  if (zf) goto L_79ffe0;
L_79ff6b: /* 79ff6b: xor esi, esi */
  esi = 0;
/* 79ff6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_79ff70: /* 79ff70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79ff73: cmp esi, dword ptr [ecx + 0xdc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79ff79: jge 0x79ffe3 */
  if ((sf == of)) goto L_79ffe3;
L_79ff7b: /* 79ff7b: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 79ff81: mov edx, dword ptr [ecx + 0xd8] */
  edx = R32((uint32_t)(ecx + 0xd8u));
/* 79ff87: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 79ff8a: mov edi, dword ptr [eax + 0x8c] */
  edi = R32((uint32_t)(eax + 0x8cu));
/* 79ff90: mov edi, dword ptr [edi + 0xc0] */
  edi = R32((uint32_t)(edi + 0xc0u));
/* 79ff96: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 79ff99: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 79ff9c: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 79ff9e: mov edi, dword ptr [eax + 0x8c] */
  edi = R32((uint32_t)(eax + 0x8cu));
/* 79ffa4: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 79ffa7: mov edx, dword ptr [edi + edx*8 + 0x11c] */
  edx = R32((uint32_t)(edi + edx*8 + 0x11cu));
/* 79ffae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ffb0: jne 0x79ffb7 */
  if (!zf) goto L_79ffb7;
L_79ffb2: /* 79ffb2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 79ffb5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
L_79ffb7: /* 79ffb7: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79ffba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79ffbb: lea ecx, [edx + 0x100] */
  ecx = (uint32_t)(edx + 0x100u);
/* 79ffc1: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x79ffc7u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 79ffc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ffc9: je 0x79ffdd */
  if (zf) goto L_79ffdd;
L_79ffcb: /* 79ffcb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79ffce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79ffd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79ffd1: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79ffd7: call 0x6c392c */
  esp -= 4; W32(esp, 0x79ffdcu); SPILL(); f_6c392c(); if (g_unwind) return; RELOAD();
/* 79ffdc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_79ffdd: /* 79ffdd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 79ffde: jmp 0x79ff70 */
  goto L_79ff70;
L_79ffe0: /* 79ffe0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_79ffe3: /* 79ffe3: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 79ffea: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 79fff1: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 79fff8: xor esi, esi */
  esi = 0;
/* 79fffa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7a0000: /* 7a0000: cmp esi, dword ptr [ecx + 0xdc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a0006: jge 0x7a009b */
  if ((sf == of)) goto L_7a009b;
L_7a000c: /* 7a000c: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7a0012: mov edx, dword ptr [ecx + 0xd8] */
  edx = R32((uint32_t)(ecx + 0xd8u));
/* 7a0018: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 7a001b: mov edi, dword ptr [eax + 0x8c] */
  edi = R32((uint32_t)(eax + 0x8cu));
/* 7a0021: mov edi, dword ptr [edi + 0xc0] */
  edi = R32((uint32_t)(edi + 0xc0u));
/* 7a0027: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 7a002a: mov edx, dword ptr [edi + edx*4] */
  edx = R32((uint32_t)(edi + edx*4));
/* 7a002d: mov edi, dword ptr [eax + 0x8c] */
  edi = R32((uint32_t)(eax + 0x8cu));
/* 7a0033: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 7a0036: mov edx, dword ptr [edi + edx*8 + 0x11c] */
  edx = R32((uint32_t)(edi + edx*8 + 0x11cu));
/* 7a003d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a003f: jne 0x7a0046 */
  if (!zf) goto L_7a0046;
L_7a0041: /* 7a0041: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7a0044: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
L_7a0046: /* 7a0046: fld dword ptr [edx + 0x368] */
  { double v = F32((uint32_t)(edx + 0x368u)); FPUSH(v); }
/* 7a004c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a004f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7a0051: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a0053: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0056: je 0x7a005d */
  if (zf) goto L_7a005d;
L_7a0058: /* 7a0058: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a005b: jmp 0x7a005f */
  goto L_7a005f;
L_7a005d: /* 7a005d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7a005f: /* 7a005f: fld dword ptr [edx + 0x36c] */
  { double v = F32((uint32_t)(edx + 0x36cu)); FPUSH(v); }
/* 7a0065: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a0068: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7a006a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a006c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a006f: je 0x7a0076 */
  if (zf) goto L_7a0076;
L_7a0071: /* 7a0071: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a0074: jmp 0x7a0078 */
  goto L_7a0078;
L_7a0076: /* 7a0076: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7a0078: /* 7a0078: fld dword ptr [edx + 0x370] */
  { double v = F32((uint32_t)(edx + 0x370u)); FPUSH(v); }
/* 7a007e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a0081: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7a0083: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a0085: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0088: je 0x7a0093 */
  if (zf) goto L_7a0093;
L_7a008a: /* 7a008a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a008d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a008e: jmp 0x7a0000 */
  goto L_7a0000;
L_7a0093: /* 7a0093: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a0095: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a0096: jmp 0x7a0000 */
  goto L_7a0000;
L_7a009b: /* 7a009b: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* 7a009e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a00a1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a00a4: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a00aa: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a00ac: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a00af: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7a00b2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a00b5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a00b8: xor eax, eax */
  eax = 0;
/* 7a00ba: mov al, byte ptr [esi + 0x86] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x86u))) & 0xffu);
/* 7a00c0: mov edi, eax */
  edi = eax;
/* 7a00c2: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 7a00c5: je 0x7a00d5 */
  if (zf) goto L_7a00d5;
L_7a00c7: /* 7a00c7: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7a00ca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a00cc: je 0x7a00d5 */
  if (zf) goto L_7a00d5;
L_7a00ce: /* 7a00ce: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x7a00d3u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 7a00d3: jmp 0x7a00d7 */
  goto L_7a00d7;
L_7a00d5: /* 7a00d5: mov eax, esi */
  eax = esi;
L_7a00d7: /* 7a00d7: cmp byte ptr [eax + 0x2b0], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x2b0u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a00de: jne 0x7a0115 */
  if (!zf) goto L_7a0115;
L_7a00e0: /* 7a00e0: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7a00e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7a00ec: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a00ef: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 7a00f5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7a00f8: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7a00feu); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7a00fe: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0101: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7a0104: fmul qword ptr [0xa0b288] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b288u)));
/* 7a010a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a010d: fadd qword ptr [0xa0b278] */
  ST0 = ST0 + (F64((uint32_t)(0xa0b278u)));
/* 7a0113: jmp 0x7a013c */
  goto L_7a013c;
L_7a0115: /* 7a0115: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0117: je 0x7a0127 */
  if (zf) goto L_7a0127;
L_7a0119: /* 7a0119: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7a011c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a011e: je 0x7a0127 */
  if (zf) goto L_7a0127;
L_7a0120: /* 7a0120: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x7a0125u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 7a0125: jmp 0x7a0129 */
  goto L_7a0129;
L_7a0127: /* 7a0127: mov eax, esi */
  eax = esi;
L_7a0129: /* 7a0129: movzx edx, byte ptr [eax + 0x2b0] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2b0u)));
/* 7a0130: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7a0133: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a0136: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
L_7a013c: /* 7a013c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7a013f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7a0141: fadd dword ptr [eax + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xe8u)));
/* 7a0147: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a014c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7a014e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7a0155: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7a0158: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7a015a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a015c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7a015f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a0162: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a0164: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7a0167: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a016a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a016d: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7a0170: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7a0173: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a0176: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7a0179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a017a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a017d: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a0180: call 0x6c576d */
  esp -= 4; W32(esp, 0x7a0185u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 7a0185: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0188: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 7a018b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7a018d: mov dword ptr [edx + 0xb8], eax */
  W32((uint32_t)(edx + 0xb8u), eax);
/* 7a0193: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a0199: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a019c: jne 0x7a0216 */
  if (!zf) goto L_7a0216;
L_7a019e: /* 7a019e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a01a1: cmp byte ptr [edx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a01a5: jne 0x7a0216 */
  if (!zf) goto L_7a0216;
L_7a01a7: /* 7a01a7: mov eax, dword ptr [edx + 0x2b4] */
  eax = R32((uint32_t)(edx + 0x2b4u));
/* 7a01ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a01af: je 0x7a0216 */
  if (zf) goto L_7a0216;
L_7a01b1: /* 7a01b1: xor ebx, ebx */
  ebx = 0;
L_7a01b3: /* 7a01b3: cmp ebx, dword ptr [edx + 0xdc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a01b9: jge 0x7a0216 */
  if ((sf == of)) goto L_7a0216;
L_7a01bb: /* 7a01bb: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7a01c1: mov ecx, dword ptr [edx + 0xd8] */
  ecx = R32((uint32_t)(edx + 0xd8u));
/* 7a01c7: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 7a01ca: mov esi, dword ptr [eax + 0x8c] */
  esi = R32((uint32_t)(eax + 0x8cu));
/* 7a01d0: mov esi, dword ptr [esi + 0xc0] */
  esi = R32((uint32_t)(esi + 0xc0u));
/* 7a01d6: mov eax, dword ptr [eax + 0x1128] */
  eax = R32((uint32_t)(eax + 0x1128u));
/* 7a01dc: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 7a01df: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7a01e2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7a01e4: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7a01e7: lea esi, [eax + ecx*4] */
  esi = (uint32_t)(eax + ecx*4);
/* 7a01ea: mov edi, edx */
  edi = edx;
/* 7a01ec: xor eax, eax */
  eax = 0;
/* 7a01ee: mov edi, edi */
  edi = edi;
L_7a01f0: /* 7a01f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a01f3: jge 0x7a01ff */
  if ((sf == of)) goto L_7a01ff;
L_7a01f5: /* 7a01f5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a01f7: cmp dword ptr [ecx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a01fa: je 0x7a0213 */
  if (zf) goto L_7a0213;
L_7a01fc: /* 7a01fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a01fd: jmp 0x7a01f0 */
  goto L_7a01f0;
L_7a01ff: /* 7a01ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a0201: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a0203: mov ecx, esi */
  ecx = esi;
/* 7a0205: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a020bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a020b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a020d: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7a0210: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_7a0213: /* 7a0213: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7a0214: jmp 0x7a01b3 */
  goto L_7a01b3;
L_7a0216: /* 7a0216: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7a021b: mov ecx, dword ptr [0xce8490] */
  ecx = R32((uint32_t)(0xce8490u));
/* 7a0221: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7a0224: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7a0226: jmp 0x79fde2 */
  goto L_79fde2;
}

void f_7a0065(void) {
  LOAD_REGS();
  goto L_7a0065;
L_79fde2: /* 79fde2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79fde4: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79fde7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79fde9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 79fdeb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79fdee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79fdef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79fdf0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79fdf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79fdf8: mov esp, ebp */
  esp = ebp;
/* 79fdfa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79fdfb: ret  */
  esp += 4; SPILL(); return;
L_7a0000: /* 7a0000: cmp esi, dword ptr [ecx + 0xdc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a0006: jge 0x7a009b */
  if ((sf == of)) goto L_7a009b;
L_7a000c: /* 7a000c: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7a0012: mov edx, dword ptr [ecx + 0xd8] */
  edx = R32((uint32_t)(ecx + 0xd8u));
/* 7a0018: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 7a001b: mov edi, dword ptr [eax + 0x8c] */
  edi = R32((uint32_t)(eax + 0x8cu));
/* 7a0021: mov edi, dword ptr [edi + 0xc0] */
  edi = R32((uint32_t)(edi + 0xc0u));
/* 7a0027: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 7a002a: mov edx, dword ptr [edi + edx*4] */
  edx = R32((uint32_t)(edi + edx*4));
/* 7a002d: mov edi, dword ptr [eax + 0x8c] */
  edi = R32((uint32_t)(eax + 0x8cu));
/* 7a0033: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 7a0036: mov edx, dword ptr [edi + edx*8 + 0x11c] */
  edx = R32((uint32_t)(edi + edx*8 + 0x11cu));
/* 7a003d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a003f: jne 0x7a0046 */
  if (!zf) goto L_7a0046;
L_7a0041: /* 7a0041: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7a0044: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
L_7a0046: /* 7a0046: fld dword ptr [edx + 0x368] */
  { double v = F32((uint32_t)(edx + 0x368u)); FPUSH(v); }
/* 7a004c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a004f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7a0051: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a0053: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0056: je 0x7a005d */
  if (zf) goto L_7a005d;
L_7a0058: /* 7a0058: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a005b: jmp 0x7a005f */
  goto L_7a005f;
L_7a005d: /* 7a005d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7a005f: /* 7a005f: fld dword ptr [edx + 0x36c] */
  { double v = F32((uint32_t)(edx + 0x36cu)); FPUSH(v); }
L_7a0065: /* 7a0065: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a0068: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7a006a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a006c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a006f: je 0x7a0076 */
  if (zf) goto L_7a0076;
L_7a0071: /* 7a0071: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a0074: jmp 0x7a0078 */
  goto L_7a0078;
L_7a0076: /* 7a0076: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7a0078: /* 7a0078: fld dword ptr [edx + 0x370] */
  { double v = F32((uint32_t)(edx + 0x370u)); FPUSH(v); }
/* 7a007e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a0081: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7a0083: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a0085: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0088: je 0x7a0093 */
  if (zf) goto L_7a0093;
L_7a008a: /* 7a008a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a008d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a008e: jmp 0x7a0000 */
  goto L_7a0000;
L_7a0093: /* 7a0093: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a0095: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a0096: jmp 0x7a0000 */
  goto L_7a0000;
L_7a009b: /* 7a009b: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* 7a009e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a00a1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a00a4: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a00aa: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a00ac: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a00af: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7a00b2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a00b5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a00b8: xor eax, eax */
  eax = 0;
/* 7a00ba: mov al, byte ptr [esi + 0x86] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x86u))) & 0xffu);
/* 7a00c0: mov edi, eax */
  edi = eax;
/* 7a00c2: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 7a00c5: je 0x7a00d5 */
  if (zf) goto L_7a00d5;
L_7a00c7: /* 7a00c7: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7a00ca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a00cc: je 0x7a00d5 */
  if (zf) goto L_7a00d5;
L_7a00ce: /* 7a00ce: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x7a00d3u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 7a00d3: jmp 0x7a00d7 */
  goto L_7a00d7;
L_7a00d5: /* 7a00d5: mov eax, esi */
  eax = esi;
L_7a00d7: /* 7a00d7: cmp byte ptr [eax + 0x2b0], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x2b0u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a00de: jne 0x7a0115 */
  if (!zf) goto L_7a0115;
L_7a00e0: /* 7a00e0: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7a00e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7a00ec: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a00ef: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 7a00f5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7a00f8: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7a00feu); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7a00fe: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0101: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7a0104: fmul qword ptr [0xa0b288] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b288u)));
/* 7a010a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a010d: fadd qword ptr [0xa0b278] */
  ST0 = ST0 + (F64((uint32_t)(0xa0b278u)));
/* 7a0113: jmp 0x7a013c */
  goto L_7a013c;
L_7a0115: /* 7a0115: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0117: je 0x7a0127 */
  if (zf) goto L_7a0127;
L_7a0119: /* 7a0119: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7a011c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a011e: je 0x7a0127 */
  if (zf) goto L_7a0127;
L_7a0120: /* 7a0120: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x7a0125u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 7a0125: jmp 0x7a0129 */
  goto L_7a0129;
L_7a0127: /* 7a0127: mov eax, esi */
  eax = esi;
L_7a0129: /* 7a0129: movzx edx, byte ptr [eax + 0x2b0] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2b0u)));
/* 7a0130: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7a0133: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a0136: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
L_7a013c: /* 7a013c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7a013f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7a0141: fadd dword ptr [eax + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xe8u)));
/* 7a0147: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a014c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7a014e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7a0155: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7a0158: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7a015a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a015c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7a015f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a0162: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a0164: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7a0167: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a016a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a016d: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7a0170: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7a0173: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a0176: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7a0179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a017a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a017d: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a0180: call 0x6c576d */
  esp -= 4; W32(esp, 0x7a0185u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 7a0185: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0188: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 7a018b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7a018d: mov dword ptr [edx + 0xb8], eax */
  W32((uint32_t)(edx + 0xb8u), eax);
/* 7a0193: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a0199: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a019c: jne 0x7a0216 */
  if (!zf) goto L_7a0216;
L_7a019e: /* 7a019e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a01a1: cmp byte ptr [edx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a01a5: jne 0x7a0216 */
  if (!zf) goto L_7a0216;
L_7a01a7: /* 7a01a7: mov eax, dword ptr [edx + 0x2b4] */
  eax = R32((uint32_t)(edx + 0x2b4u));
/* 7a01ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a01af: je 0x7a0216 */
  if (zf) goto L_7a0216;
L_7a01b1: /* 7a01b1: xor ebx, ebx */
  ebx = 0;
L_7a01b3: /* 7a01b3: cmp ebx, dword ptr [edx + 0xdc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a01b9: jge 0x7a0216 */
  if ((sf == of)) goto L_7a0216;
L_7a01bb: /* 7a01bb: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7a01c1: mov ecx, dword ptr [edx + 0xd8] */
  ecx = R32((uint32_t)(edx + 0xd8u));
/* 7a01c7: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 7a01ca: mov esi, dword ptr [eax + 0x8c] */
  esi = R32((uint32_t)(eax + 0x8cu));
/* 7a01d0: mov esi, dword ptr [esi + 0xc0] */
  esi = R32((uint32_t)(esi + 0xc0u));
/* 7a01d6: mov eax, dword ptr [eax + 0x1128] */
  eax = R32((uint32_t)(eax + 0x1128u));
/* 7a01dc: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 7a01df: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7a01e2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7a01e4: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7a01e7: lea esi, [eax + ecx*4] */
  esi = (uint32_t)(eax + ecx*4);
/* 7a01ea: mov edi, edx */
  edi = edx;
/* 7a01ec: xor eax, eax */
  eax = 0;
/* 7a01ee: mov edi, edi */
  edi = edi;
L_7a01f0: /* 7a01f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a01f3: jge 0x7a01ff */
  if ((sf == of)) goto L_7a01ff;
L_7a01f5: /* 7a01f5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a01f7: cmp dword ptr [ecx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a01fa: je 0x7a0213 */
  if (zf) goto L_7a0213;
L_7a01fc: /* 7a01fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a01fd: jmp 0x7a01f0 */
  goto L_7a01f0;
L_7a01ff: /* 7a01ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a0201: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a0203: mov ecx, esi */
  ecx = esi;
/* 7a0205: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a020bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a020b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a020d: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7a0210: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_7a0213: /* 7a0213: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7a0214: jmp 0x7a01b3 */
  goto L_7a01b3;
L_7a0216: /* 7a0216: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7a021b: mov ecx, dword ptr [0xce8490] */
  ecx = R32((uint32_t)(0xce8490u));
/* 7a0221: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7a0224: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7a0226: jmp 0x79fde2 */
  goto L_79fde2;
}

void f_7a022b(void) {
  LOAD_REGS();
L_7a022b: /* 7a022b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a022e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a0233: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7a0236: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0237: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7a023a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a023fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a023f(); return;
}

void f_7a023f(void) {
  LOAD_REGS();
L_7a023f: /* 7a023f: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7a0245: push 0xa0b224 */
  { uint32_t v = 0xa0b224u; esp -= 4; W32(esp, v); }
/* 7a024a: push 0xacccac */
  { uint32_t v = 0xacccacu; esp -= 4; W32(esp, v); }
/* 7a024f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7a0251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a0251: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0254: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a0257: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0259: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7a025fu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7a025f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0260: push 0xacccb4 */
  { uint32_t v = 0xacccb4u; esp -= 4; W32(esp, v); }
/* 7a0265: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7a0267u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a0267: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a026a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a026c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a026e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0273u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a0273: guest_badaddr(0x7a0273); return;
}

void f_7a0430(void) {
  LOAD_REGS();
L_7a0430: /* 7a0430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a0431: mov ebp, esp */
  ebp = esp;
/* 7a0433: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a0435: push 0x9ce360 */
  { uint32_t v = 0x9ce360u; esp -= 4; W32(esp, v); }
/* 7a043a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a0440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0441: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a0448: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a044b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a044c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a044d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a044e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a0451: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a0458: call 0x6cb45b */
  esp -= 4; W32(esp, 0x7a045du); SPILL(); f_6cb45b(); if (g_unwind) return; RELOAD();
/* 7a045d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a0460: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a0461: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a0462: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a0469: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a046a: mov esp, ebp */
  esp = ebp;
/* 7a046c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a046d: ret  */
  esp += 4; SPILL(); return;
}

void f_7a046e(void) {
  LOAD_REGS();
L_7a046e: /* 7a046e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a0471: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a0476: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a0479: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a047a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a047d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0482u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a0482(); return;
}

void f_7a0482(void) {
  LOAD_REGS();
L_7a0482: /* 7a0482: push 0xa0b298 */
  { uint32_t v = 0xa0b298u; esp -= 4; W32(esp, v); }
/* 7a0487: push 0xacce20 */
  { uint32_t v = 0xacce20u; esp -= 4; W32(esp, v); }
/* 7a048c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a0492u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a0492: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a0495: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0497: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0499: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a049eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a049e: guest_badaddr(0x7a049e); return;
}

void f_7a04c0(void) {
  LOAD_REGS();
L_7a04c0: /* 7a04c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a04c1: mov ebp, esp */
  ebp = esp;
/* 7a04c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a04c5: push 0x9ce370 */
  { uint32_t v = 0x9ce370u; esp -= 4; W32(esp, v); }
/* 7a04ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a04d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a04d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a04d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a04db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a04dc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7a04df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a04e0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7a04e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a04e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a04e7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a04e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a04ea: mov ecx, ebx */
  ecx = ebx;
/* 7a04ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a04f3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7a04f9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7a04f9: mov ecx, esi */
  ecx = esi;
/* 7a04fb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7a0501u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7a0501: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0503: je 0x7a0581 */
  if (zf) goto L_7a0581;
L_7a0505: /* 7a0505: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7a0508: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0509: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a050a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7a0510u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7a0510: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a0513: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a0516: xor eax, eax */
  eax = 0;
L_7a0518: /* 7a0518: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a051b: jge 0x7a0520 */
  if ((sf == of)) goto L_7a0520;
L_7a051d: /* 7a051d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a051e: jmp 0x7a0518 */
  goto L_7a0518;
L_7a0520: /* 7a0520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0521: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a0523: mov ecx, ebx */
  ecx = ebx;
/* 7a0525: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7a052bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7a052b: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_7a0532: /* 7a0532: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0535: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a0538: jge 0x7a05d0 */
  if ((sf == of)) goto L_7a05d0;
L_7a053e: /* 7a053e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a0540: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a0542: mov ecx, ebx */
  ecx = ebx;
/* 7a0544: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a054au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a054a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7a054c: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 7a054f: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 7a0551: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 7a0554: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7a0556: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 7a0559: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a055a: mov ecx, esi */
  ecx = esi;
/* 7a055c: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7a055fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a055f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a0561: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a0564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a0565: mov ecx, eax */
  ecx = eax;
/* 7a0567: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a056au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a056a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a056c: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7a056f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a0570: mov ecx, eax */
  ecx = eax;
/* 7a0572: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a0575u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a0575: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0578: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7a057b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a057c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a057f: jmp 0x7a0532 */
  goto L_7a0532;
L_7a0581: /* 7a0581: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 7a0584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0585: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a0586: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7a058cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7a058c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a058f: xor eax, eax */
  eax = 0;
/* 7a0591: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7a0594: /* 7a0594: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a0597: jge 0x7a05d0 */
  if ((sf == of)) goto L_7a05d0;
L_7a0599: /* 7a0599: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7a059b: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 7a059e: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7a05a0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a05a2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a05a5: lea eax, [edi + 0x18] */
  eax = (uint32_t)(edi + 0x18u);
/* 7a05a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a05a9: mov ecx, esi */
  ecx = esi;
/* 7a05ab: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a05aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a05ae: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a05b0: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a05b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a05b4: mov ecx, eax */
  ecx = eax;
/* 7a05b6: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a05b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a05b9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a05bc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a05be: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a05c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a05c2: mov ecx, eax */
  ecx = eax;
/* 7a05c4: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a05c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a05c7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a05ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a05cb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a05ce: jmp 0x7a0594 */
  goto L_7a0594;
L_7a05d0: /* 7a05d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a05d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a05d4: mov eax, esi */
  eax = esi;
/* 7a05d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a05d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a05de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a05df: mov esp, ebp */
  esp = ebp;
/* 7a05e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a05e2: ret  */
  esp += 4; SPILL(); return;
}

void f_7a05e3(void) {
  LOAD_REGS();
L_7a05e3: /* 7a05e3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a05e6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a05eb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7a05ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a05ef: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a05f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a05f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a05f7(); return;
}

void f_7a05f7(void) {
  LOAD_REGS();
L_7a05f7: /* 7a05f7: push 0xa0b2c0 */
  { uint32_t v = 0xa0b2c0u; esp -= 4; W32(esp, v); }
/* 7a05fc: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7a0601: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a0607u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a0607: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a060a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a060c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a060e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0613u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a0613: guest_badaddr(0x7a0613); return;
}

void f_7a0680(void) {
  LOAD_REGS();
L_7a0680: /* 7a0680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a0681: mov ebp, esp */
  ebp = esp;
/* 7a0683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a0685: push 0x9ce380 */
  { uint32_t v = 0x9ce380u; esp -= 4; W32(esp, v); }
/* 7a068a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a0690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a0698: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a069b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a069c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7a069f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a06a0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7a06a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a06a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a06a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a06a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a06aa: mov ecx, ebx */
  ecx = ebx;
/* 7a06ac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a06b3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7a06b9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7a06b9: mov ecx, esi */
  ecx = esi;
/* 7a06bb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7a06c1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7a06c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a06c3: je 0x7a0729 */
  if (zf) goto L_7a0729;
L_7a06c5: /* 7a06c5: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7a06c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a06c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a06ca: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7a06d0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7a06d0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a06d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a06d6: xor eax, eax */
  eax = 0;
L_7a06d8: /* 7a06d8: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a06db: jge 0x7a06e0 */
  if ((sf == of)) goto L_7a06e0;
L_7a06dd: /* 7a06dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a06de: jmp 0x7a06d8 */
  goto L_7a06d8;
L_7a06e0: /* 7a06e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a06e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a06e3: mov ecx, ebx */
  ecx = ebx;
/* 7a06e5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7a06ebu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7a06eb: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_7a06f2: /* 7a06f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a06f5: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a06f8: jge 0x7a0769 */
  if ((sf == of)) goto L_7a0769;
L_7a06fa: /* 7a06fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a06fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a06fe: mov ecx, ebx */
  ecx = ebx;
/* 7a0700: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a0706u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a0706: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7a0708: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 7a070b: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 7a070e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7a0710: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 7a0713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0714: mov ecx, esi */
  ecx = esi;
/* 7a0716: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7a0719u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a0719: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a071b: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a071e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a071f: mov ecx, eax */
  ecx = eax;
/* 7a0721: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a0724u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a0724: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7a0727: jmp 0x7a06f2 */
  goto L_7a06f2;
L_7a0729: /* 7a0729: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 7a072c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a072d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a072e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7a0734u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7a0734: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a0737: xor eax, eax */
  eax = 0;
/* 7a0739: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a073c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a0740: /* 7a0740: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a0743: jge 0x7a0769 */
  if ((sf == of)) goto L_7a0769;
L_7a0745: /* 7a0745: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7a0747: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 7a074a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a074c: lea eax, [edi + 0x18] */
  eax = (uint32_t)(edi + 0x18u);
/* 7a074f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0750: mov ecx, esi */
  ecx = esi;
/* 7a0752: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a0755u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a0755: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a0757: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a075a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a075b: mov ecx, eax */
  ecx = eax;
/* 7a075d: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a0760u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a0760: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0763: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a0764: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a0767: jmp 0x7a0740 */
  goto L_7a0740;
L_7a0769: /* 7a0769: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a076c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a076d: mov eax, esi */
  eax = esi;
/* 7a076f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a0770: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a0777: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a0778: mov esp, ebp */
  esp = ebp;
/* 7a077a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a077b: ret  */
  esp += 4; SPILL(); return;
}

void f_7a077c(void) {
  LOAD_REGS();
L_7a077c: /* 7a077c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a077f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a0784: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7a0787: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0788: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7a078b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0790u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a0790(); return;
}

void f_7a0790(void) {
  LOAD_REGS();
L_7a0790: /* 7a0790: push 0xa0b2d8 */
  { uint32_t v = 0xa0b2d8u; esp -= 4; W32(esp, v); }
/* 7a0795: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7a079a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a07a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a07a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a07a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a07a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a07a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a07acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a07ac: guest_badaddr(0x7a07ac); return;
}

void f_7a0800(void) {
  LOAD_REGS();
L_7a0800: /* 7a0800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a0801: mov ebp, esp */
  ebp = esp;
/* 7a0803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a0805: push 0x9ce390 */
  { uint32_t v = 0x9ce390u; esp -= 4; W32(esp, v); }
/* 7a080a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a0810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a0818: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a081b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a081c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a081d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a081e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a0821: mov esi, ecx */
  esi = ecx;
/* 7a0823: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a082a: call 0x6c9d8b */
  esp -= 4; W32(esp, 0x7a082fu); SPILL(); f_6c9d8b(); if (g_unwind) return; RELOAD();
/* 7a082f: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0836: je 0x7a0852 */
  if (zf) goto L_7a0852;
L_7a0838: /* 7a0838: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a083e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0840: je 0x7a0852 */
  if (zf) goto L_7a0852;
L_7a0842: /* 7a0842: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a0848: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a084a: je 0x7a0852 */
  if (zf) goto L_7a0852;
L_7a084c: /* 7a084c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a084e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a084f: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7a0852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a0852: /* 7a0852: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a0855: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a0856: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a0857: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a085e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a085f: mov esp, ebp */
  esp = ebp;
/* 7a0861: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a0862: ret  */
  esp += 4; SPILL(); return;
}

void f_7a0863(void) {
  LOAD_REGS();
L_7a0863: /* 7a0863: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a0866: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a086b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7a086e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a086f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a0872: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0877u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a0877(); return;
}

void f_7a0877(void) {
  LOAD_REGS();
L_7a0877: /* 7a0877: push 0xa0b2f0 */
  { uint32_t v = 0xa0b2f0u; esp -= 4; W32(esp, v); }
/* 7a087c: push 0xaccbcc */
  { uint32_t v = 0xaccbccu; esp -= 4; W32(esp, v); }
/* 7a0881: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a0887u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a0887: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a088a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a088c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a088e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0893u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a0893: guest_badaddr(0x7a0893); return;
}

void f_7a08d0(void) {
  LOAD_REGS();
L_7a08d0: /* 7a08d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a08d1: mov ebp, esp */
  ebp = esp;
/* 7a08d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a08d5: push 0x9ce3a0 */
  { uint32_t v = 0x9ce3a0u; esp -= 4; W32(esp, v); }
/* 7a08da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a08e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a08e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a08e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a08eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a08ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a08ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a08ee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7a08f1: mov esi, ecx */
  esi = ecx;
/* 7a08f3: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a08f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a08f8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a08ff: jne 0x7a0919 */
  if (!zf) goto L_7a0919;
L_7a0901: /* 7a0901: push 0x76c */
  { uint32_t v = 0x76cu; esp -= 4; W32(esp, v); }
/* 7a0906: push 0xaccc68 */
  { uint32_t v = 0xaccc68u; esp -= 4; W32(esp, v); }
/* 7a090b: push 0xaccc74 */
  { uint32_t v = 0xaccc74u; esp -= 4; W32(esp, v); }
/* 7a0910: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7a0916u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7a0916: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a0919: /* 7a0919: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7a091c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a091e: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7a0925: jne 0x7a0946 */
  if (!zf) goto L_7a0946;
L_7a0927: /* 7a0927: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7a092a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a092b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7a092e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a092f: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 7a0935: call 0x6c68f2 */
  esp -= 4; W32(esp, 0x7a093au); SPILL(); f_6c68f2(); if (g_unwind) return; RELOAD();
/* 7a093a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a093c: je 0x7a0946 */
  if (zf) goto L_7a0946;
L_7a093e: /* 7a093e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a093f: mov ecx, esi */
  ecx = esi;
/* 7a0941: call 0x6c278e */
  esp -= 4; W32(esp, 0x7a0946u); SPILL(); f_6c278e(); if (g_unwind) return; RELOAD();
L_7a0946: /* 7a0946: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7a0949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a094a: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 7a0950: call 0x6c79f5 */
  esp -= 4; W32(esp, 0x7a0955u); SPILL(); f_6c79f5(); if (g_unwind) return; RELOAD();
/* 7a0955: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7a0958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0959: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7a095c: lea ebx, [edi + 0x110] */
  ebx = (uint32_t)(edi + 0x110u);
/* 7a0962: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0963: mov ecx, ebx */
  ecx = ebx;
/* 7a0965: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 7a0968: call 0x6c68f2 */
  esp -= 4; W32(esp, 0x7a096du); SPILL(); f_6c68f2(); if (g_unwind) return; RELOAD();
/* 7a096d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a096f: je 0x7a0987 */
  if (zf) goto L_7a0987;
L_7a0971: /* 7a0971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a0972: mov ecx, edi */
  ecx = edi;
/* 7a0974: call 0x6c278e */
  esp -= 4; W32(esp, 0x7a0979u); SPILL(); f_6c278e(); if (g_unwind) return; RELOAD();
/* 7a0979: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7a097c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a097d: mov ecx, ebx */
  ecx = ebx;
/* 7a097f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 7a0982: call 0x6c79f5 */
  esp -= 4; W32(esp, 0x7a0987u); SPILL(); f_6c79f5(); if (g_unwind) return; RELOAD();
L_7a0987: /* 7a0987: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a098a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a098b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a098c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a0993: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a0994: mov esp, ebp */
  esp = ebp;
/* 7a0996: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a0997: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7a099a(void) {
  LOAD_REGS();
L_7a099a: /* 7a099a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a099d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a09a2: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a09a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a09a6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a09a9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a09aeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a09ae(); return;
}

void f_7a09ae(void) {
  LOAD_REGS();
L_7a09ae: /* 7a09ae: push 0xa0b324 */
  { uint32_t v = 0xa0b324u; esp -= 4; W32(esp, v); }
/* 7a09b3: push 0xaccc80 */
  { uint32_t v = 0xaccc80u; esp -= 4; W32(esp, v); }
/* 7a09b8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a09beu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a09be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a09c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a09c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a09c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a09cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a09ca: guest_badaddr(0x7a09ca); return;
}

void f_7a0a10(void) {
  LOAD_REGS();
L_7a0a10: /* 7a0a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a0a11: mov ebp, esp */
  ebp = esp;
/* 7a0a13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a0a15: push 0x9ce3b0 */
  { uint32_t v = 0x9ce3b0u; esp -= 4; W32(esp, v); }
/* 7a0a1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a0a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0a21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a0a28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0a2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a0a2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a0a2d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7a0a30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a0a31: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a0a34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a0a35: mov edi, ecx */
  edi = ecx;
/* 7a0a37: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a0a3e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7a0a44u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7a0a44: mov ecx, esi */
  ecx = esi;
/* 7a0a46: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7a0a4cu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7a0a4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0a4e: jne 0x7a0a7c */
  if (!zf) goto L_7a0a7c;
L_7a0a50: /* 7a0a50: mov ecx, esi */
  ecx = esi;
/* 7a0a52: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x7a0a58u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 7a0a58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0a5a: jne 0x7a0a7c */
  if (!zf) goto L_7a0a7c;
L_7a0a5c: /* 7a0a5c: lea eax, [edi + 0x260] */
  eax = (uint32_t)(edi + 0x260u);
/* 7a0a62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0a63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a0a64: call 0x6c7e82 */
  esp -= 4; W32(esp, 0x7a0a69u); SPILL(); f_6c7e82(); if (g_unwind) return; RELOAD();
/* 7a0a69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a0a6c: add edi, 0x26c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a0a72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a0a73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0a74: call 0x6c7162 */
  esp -= 4; W32(esp, 0x7a0a79u); SPILL(); f_6c7162(); if (g_unwind) return; RELOAD();
/* 7a0a79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a0a7c: /* 7a0a7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a0a7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a0a80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a0a81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a0a88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a0a89: mov esp, ebp */
  esp = ebp;
/* 7a0a8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a0a8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a0a8f(void) {
  LOAD_REGS();
L_7a0a8f: /* 7a0a8f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a0a92: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a0a97: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7a0a9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a0a9b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a0a9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0aa3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a0aa3(); return;
}

void f_7a0aa3(void) {
  LOAD_REGS();
L_7a0aa3: /* 7a0aa3: push 0xa0b34c */
  { uint32_t v = 0xa0b34cu; esp -= 4; W32(esp, v); }
/* 7a0aa8: push 0xaccc88 */
  { uint32_t v = 0xaccc88u; esp -= 4; W32(esp, v); }
/* 7a0aad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a0ab3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a0ab3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a0ab6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0ab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0aba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0abfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a0abf: guest_badaddr(0x7a0abf); return;
}

void f_7a0af0(void) {
  LOAD_REGS();
L_7a0af0: /* 7a0af0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0af1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a0af2: mov esi, ecx */
  esi = ecx;
/* 7a0af4: inc dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x68u), r);
  }
/* 7a0af7: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a0afc: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a0aff: jne 0x7a0b63 */
  if (!zf) goto L_7a0b63;
L_7a0b01: /* 7a0b01: mov eax, dword ptr [esi + 0x2b4] */
  eax = R32((uint32_t)(esi + 0x2b4u));
/* 7a0b07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0b09: je 0x7a0b63 */
  if (zf) goto L_7a0b63;
L_7a0b0b: /* 7a0b0b: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 7a0b11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a0b12: xor edi, edi */
  edi = 0;
/* 7a0b14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a0b16: jle 0x7a0b62 */
  if ((zf || sf != of)) goto L_7a0b62;
L_7a0b18: /* 7a0b18: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7a0b1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a0b20: /* 7a0b20: mov edx, dword ptr [esi + 0xd8] */
  edx = R32((uint32_t)(esi + 0xd8u));
/* 7a0b26: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a0b2c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7a0b30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0b31: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7a0b34: mov edx, dword ptr [eax + 0x8c] */
  edx = R32((uint32_t)(eax + 0x8cu));
/* 7a0b3a: mov edx, dword ptr [edx + 0xc0] */
  edx = R32((uint32_t)(edx + 0xc0u));
/* 7a0b40: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 7a0b43: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 7a0b46: mov edx, dword ptr [eax + 0x1128] */
  edx = R32((uint32_t)(eax + 0x1128u));
/* 7a0b4c: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7a0b4f: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7a0b52: call 0x6c79f5 */
  esp -= 4; W32(esp, 0x7a0b57u); SPILL(); f_6c79f5(); if (g_unwind) return; RELOAD();
/* 7a0b57: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 7a0b5d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7a0b5e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a0b60: jl 0x7a0b20 */
  if ((sf != of)) goto L_7a0b20;
L_7a0b62: /* 7a0b62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7a0b63: /* 7a0b63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a0b64: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7a0b65: ret  */
  esp += 4; SPILL(); return;
}

void f_7a0b90(void) {
  LOAD_REGS();
L_7a0b90: /* 7a0b90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a0b91: mov ebp, esp */
  ebp = esp;
/* 7a0b93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a0b95: push 0x9ce41c */
  { uint32_t v = 0x9ce41cu; esp -= 4; W32(esp, v); }
/* 7a0b9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a0ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0ba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a0ba8: sub esp, 0x258 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x258u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0bae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a0baf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a0bb0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7a0bb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a0bb4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a0bb7: mov ebx, ecx */
  ebx = ecx;
/* 7a0bb9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a0bc0: mov eax, esi */
  eax = esi;
L_7a0bc2: /* 7a0bc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0bc4: je 0x7a0bd3 */
  if (zf) goto L_7a0bd3;
L_7a0bc6: /* 7a0bc6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a0bc8: je 0x7a0f54 */
  if (zf) goto L_7a0f54;
L_7a0bce: /* 7a0bce: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* 7a0bd1: jmp 0x7a0bc2 */
  goto L_7a0bc2;
L_7a0bd3: /* 7a0bd3: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a0bd6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a0bd8: je 0x7a0f1e */
  if (zf) goto L_7a0f1e;
L_7a0bde: /* 7a0bde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0be0: je 0x7a0c09 */
  if (zf) goto L_7a0c09;
L_7a0be2: /* 7a0be2: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0bec: jne 0x7a0c09 */
  if (!zf) goto L_7a0c09;
L_7a0bee: /* 7a0bee: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7a0bf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0bf2: lea ecx, [eax + 0x1fc] */
  ecx = (uint32_t)(eax + 0x1fcu);
/* 7a0bf8: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7a0bfb: call 0x6c79f5 */
  esp -= 4; W32(esp, 0x7a0c00u); SPILL(); f_6c79f5(); if (g_unwind) return; RELOAD();
/* 7a0c00: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 7a0c03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a0c04: call 0x6c30fd */
  esp -= 4; W32(esp, 0x7a0c09u); SPILL(); f_6c30fd(); if (g_unwind) return; RELOAD();
L_7a0c09: /* 7a0c09: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0c0b: mov dword ptr [ebx + 0x5c], esi */
  W32((uint32_t)(ebx + 0x5cu), esi);
/* 7a0c0e: je 0x7a0ead */
  if (zf) goto L_7a0ead;
L_7a0c14: /* 7a0c14: test dword ptr [esi + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0c1e: jne 0x7a0ead */
  if (!zf) goto L_7a0ead;
L_7a0c24: /* 7a0c24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0c26: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7a0c29: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a0c2fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a0c2f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7a0c32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a0c33: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7a0c39: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7a0c3fu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7a0c3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0c41: je 0x7a0ead */
  if (zf) goto L_7a0ead;
L_7a0c47: /* 7a0c47: test byte ptr [ebx + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0c4e: jne 0x7a0ead */
  if (!zf) goto L_7a0ead;
L_7a0c54: /* 7a0c54: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7a0c5a: mov esi, 0x1000 */
  esi = 0x1000u;
/* 7a0c5f: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0c61: je 0x7a0c6c */
  if (zf) goto L_7a0c6c;
L_7a0c63: /* 7a0c63: cmp byte ptr [ebx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a0c6a: jne 0x7a0cb8 */
  if (!zf) goto L_7a0cb8;
L_7a0c6c: /* 7a0c6c: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 7a0c72: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a0c75: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7a0c7b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a0c80: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 7a0c86: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7a0c89: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 7a0c8f: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7a0c91: lea eax, [ebx + 0x208] */
  eax = (uint32_t)(ebx + 0x208u);
/* 7a0c97: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a0c9a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a0c9d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a0c9f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a0ca2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a0ca5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7a0ca8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a0cab: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0cae: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7a0cb1: mov ecx, ebx */
  ecx = ebx;
/* 7a0cb3: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7a0cb8u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7a0cb8: /* 7a0cb8: test dword ptr [ebx + 0x84], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x84u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0cbe: je 0x7a0ead */
  if (zf) goto L_7a0ead;
L_7a0cc4: /* 7a0cc4: mov edx, dword ptr [ebx + 0x5c] */
  edx = R32((uint32_t)(ebx + 0x5cu));
/* 7a0cc7: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a0ccd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a0ccf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0cd2: mov eax, esp */
  eax = esp;
/* 7a0cd4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a0cd6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7a0cd9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a0cdc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7a0cdf: lea ecx, [ebp - 0x224] */
  ecx = (uint32_t)(ebp + 0xfffffddcu);
/* 7a0ce5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7a0ce8: call 0x6c818e */
  esp -= 4; W32(esp, 0x7a0cedu); SPILL(); f_6c818e(); if (g_unwind) return; RELOAD();
/* 7a0ced: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0cf2: mov esi, eax */
  esi = eax;
/* 7a0cf4: lea edi, [ebp - 0x124] */
  edi = (uint32_t)(ebp + 0xfffffedcu);
/* 7a0cfa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0cfc: mov esi, eax */
  esi = eax;
/* 7a0cfe: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a0d01: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a0d06: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0d0b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7a0d0e: lea edi, [ebp - 0x64] */
  edi = (uint32_t)(ebp + 0xffffff9cu);
/* 7a0d11: fchs  */
  ST0 = -ST0;
/* 7a0d13: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0d15: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7a0d18: fchs  */
  ST0 = -ST0;
/* 7a0d1a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7a0d1c: fchs  */
  ST0 = -ST0;
/* 7a0d1e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a0d21: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a0d24: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a0d27: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a0d2a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a0d2d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0d30: mov eax, esp */
  eax = esp;
/* 7a0d32: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a0d34: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a0d37: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7a0d3a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7a0d3d: lea ecx, [ebp - 0x1a4] */
  ecx = (uint32_t)(ebp + 0xfffffe5cu);
/* 7a0d43: call 0x6cb389 */
  esp -= 4; W32(esp, 0x7a0d48u); SPILL(); f_6cb389(); if (g_unwind) return; RELOAD();
/* 7a0d48: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0d4b: mov edi, esp */
  edi = esp;
/* 7a0d4d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0d52: lea esi, [ebp - 0x64] */
  esi = (uint32_t)(ebp + 0xffffff9cu);
/* 7a0d55: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 7a0d5b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0d5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a0d5e: mov ecx, eax */
  ecx = eax;
/* 7a0d60: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a0d64: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a0d6au); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a0d6a: lea ecx, [ebp - 0x1a4] */
  ecx = (uint32_t)(ebp + 0xfffffe5cu);
/* 7a0d70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a0d74: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0d7au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0d7a: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 7a0d80: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7a0d84: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0d8au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0d8a: lea ecx, [ebp - 0x224] */
  ecx = (uint32_t)(ebp + 0xfffffddcu);
/* 7a0d90: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7a0d94: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0d9au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0d9a: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 7a0da0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a0da2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0da5: mov ecx, esp */
  ecx = esp;
/* 7a0da7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a0da9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a0dac: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a0daf: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a0db2: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7a0db5: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 7a0dbb: call 0x6cb389 */
  esp -= 4; W32(esp, 0x7a0dc0u); SPILL(); f_6cb389(); if (g_unwind) return; RELOAD();
/* 7a0dc0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0dc5: mov esi, eax */
  esi = eax;
/* 7a0dc7: lea edi, [ebp - 0x1e4] */
  edi = (uint32_t)(ebp + 0xfffffe1cu);
/* 7a0dcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0dcf: mov esi, eax */
  esi = eax;
/* 7a0dd1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0dd6: lea edi, [ebp - 0x64] */
  edi = (uint32_t)(ebp + 0xffffff9cu);
/* 7a0dd9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0ddb: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7a0de1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a0de3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0de6: mov edx, esp */
  edx = esp;
/* 7a0de8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a0dea: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7a0ded: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a0df0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7a0df3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7a0df6: lea ecx, [ebp - 0x164] */
  ecx = (uint32_t)(ebp + 0xfffffe9cu);
/* 7a0dfc: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7a0e01u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7a0e01: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0e04: mov edi, esp */
  edi = esp;
/* 7a0e06: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0e0b: lea esi, [ebp - 0x64] */
  esi = (uint32_t)(ebp + 0xffffff9cu);
/* 7a0e0e: lea edx, [ebp - 0xe4] */
  edx = (uint32_t)(ebp + 0xffffff1cu);
/* 7a0e14: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0e16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a0e17: mov ecx, eax */
  ecx = eax;
/* 7a0e19: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7a0e1d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a0e23u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a0e23: lea ecx, [ebp - 0x164] */
  ecx = (uint32_t)(ebp + 0xfffffe9cu);
/* 7a0e29: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7a0e2d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0e33u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0e33: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7a0e39: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7a0e3d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0e43u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0e43: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 7a0e49: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7a0e4d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0e53u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0e53: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a0e56: mov edi, esp */
  edi = esp;
/* 7a0e58: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0e5d: lea esi, [ebp - 0xa4] */
  esi = (uint32_t)(ebp + 0xffffff5cu);
/* 7a0e63: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 7a0e66: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0e68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0e69: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 7a0e6f: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a0e75u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a0e75: mov esi, eax */
  esi = eax;
/* 7a0e77: lea edi, [ebx + 0x220] */
  edi = (uint32_t)(ebx + 0x220u);
/* 7a0e7d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a0e82: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a0e84: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 7a0e87: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0e8du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0e8d: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 7a0e93: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7a0e97: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0e9du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a0e9d: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7a0ea3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a0ea7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a0eadu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7a0ead: /* 7a0ead: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a0eb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0eb2: je 0x7a0ee0 */
  if (zf) goto L_7a0ee0;
L_7a0eb4: /* 7a0eb4: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0ebe: jne 0x7a0ee0 */
  if (!zf) goto L_7a0ee0;
L_7a0ec0: /* 7a0ec0: lea esi, [eax + 0x1fc] */
  esi = (uint32_t)(eax + 0x1fcu);
/* 7a0ec6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a0ec8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a0eca: mov ecx, esi */
  ecx = esi;
/* 7a0ecc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a0ed2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a0ed2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a0ed4: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 7a0ed7: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 7a0eda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a0edb: call 0x6c6415 */
  esp -= 4; W32(esp, 0x7a0ee0u); SPILL(); f_6c6415(); if (g_unwind) return; RELOAD();
L_7a0ee0: /* 7a0ee0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7a0ee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0ee5: je 0x7a0f1e */
  if (zf) goto L_7a0f1e;
L_7a0ee7: /* 7a0ee7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a0ee8: mov ecx, esp */
  ecx = esp;
/* 7a0eea: push 0x13e */
  { uint32_t v = 0x13eu; esp -= 4; W32(esp, v); }
/* 7a0eef: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a0ef5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a0ef5: mov ecx, ebx */
  ecx = ebx;
/* 7a0ef7: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7a0efdu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7a0efd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0eff: je 0x7a0f1e */
  if (zf) goto L_7a0f1e;
L_7a0f01: /* 7a0f01: mov edx, dword ptr [0xb7e2c0] */
  edx = R32((uint32_t)(0xb7e2c0u));
/* 7a0f07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0f09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a0f0a: mov ecx, ebx */
  ecx = ebx;
/* 7a0f0c: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7a0f12u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7a0f12: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7a0f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0f16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0f18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0f19: mov ecx, ebx */
  ecx = ebx;
/* 7a0f1b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7a0f1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a0f1e: /* 7a0f1e: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a0f21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0f23: je 0x7a0f31 */
  if (zf) goto L_7a0f31;
L_7a0f25: /* 7a0f25: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a0f2f: je 0x7a0f54 */
  if (zf) goto L_7a0f54;
L_7a0f31: /* 7a0f31: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 7a0f37: cmp byte ptr [eax + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a0f3e: je 0x7a0f54 */
  if (zf) goto L_7a0f54;
L_7a0f40: /* 7a0f40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0f42: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7a0f45: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a0f4bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a0f4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a0f4e: mov dword ptr [ebx + 0xac], ecx */
  W32((uint32_t)(ebx + 0xacu), ecx);
L_7a0f54: /* 7a0f54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a0f57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a0f58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a0f59: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a0f60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a0f61: mov esp, ebp */
  esp = ebp;
/* 7a0f63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a0f64: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7a0f67(void) {
  LOAD_REGS();
L_7a0f67: /* 7a0f67: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a0f6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a0f6f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7a0f72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a0f73: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7a0f76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0f7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a0f7b(); return;
}

void f_7a0f7b(void) {
  LOAD_REGS();
L_7a0f7b: /* 7a0f7b: push 0xa0b378 */
  { uint32_t v = 0xa0b378u; esp -= 4; W32(esp, v); }
/* 7a0f80: push 0xacccc4 */
  { uint32_t v = 0xacccc4u; esp -= 4; W32(esp, v); }
/* 7a0f85: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a0f8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a0f8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a0f8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a0f92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a0f97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a0f97: guest_badaddr(0x7a0f97); return;
}

void f_7a10b0(void) {
  LOAD_REGS();
L_7a10b0: /* 7a10b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a10b1: mov ebp, esp */
  ebp = esp;
/* 7a10b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a10b5: push 0x9ce440 */
  { uint32_t v = 0x9ce440u; esp -= 4; W32(esp, v); }
/* 7a10ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a10c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a10c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a10c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a10cb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7a10ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a10cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a10d0: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7a10d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a10d4: lea eax, [ecx + 0x44c] */
  eax = (uint32_t)(ecx + 0x44cu);
/* 7a10da: mov edi, eax */
  edi = eax;
/* 7a10dc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7a10df: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7a10e1: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7a10e4: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 7a10e7: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7a10ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a10ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a10ee: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a10f1: mov edi, esp */
  edi = esp;
/* 7a10f3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7a10f5: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7a10f8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a10fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a10fc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a1103: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 7a1106: call 0x6c4a4d */
  esp -= 4; W32(esp, 0x7a110bu); SPILL(); f_6c4a4d(); if (g_unwind) return; RELOAD();
/* 7a110b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a110e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a110f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a1110: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a1117: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a1118: mov esp, ebp */
  esp = ebp;
/* 7a111a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a111b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7a111e(void) {
  LOAD_REGS();
L_7a111e: /* 7a111e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1121: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a1126: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a1129: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a112a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a112d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a1132u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a1132(); return;
}

void f_7a1132(void) {
  LOAD_REGS();
L_7a1132: /* 7a1132: push 0xa0b3a0 */
  { uint32_t v = 0xa0b3a0u; esp -= 4; W32(esp, v); }
/* 7a1137: push 0xaccdfc */
  { uint32_t v = 0xaccdfcu; esp -= 4; W32(esp, v); }
/* 7a113c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a1142u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a1142: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a1145: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1147: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1149: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a114eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a114e: guest_badaddr(0x7a114e); return;
}

void f_7a1180(void) {
  LOAD_REGS();
L_7a1180: /* 7a1180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1181: mov esi, ecx */
  esi = ecx;
/* 7a1183: call 0x6c3684 */
  esp -= 4; W32(esp, 0x7a1188u); SPILL(); f_6c3684(); if (g_unwind) return; RELOAD();
/* 7a1188: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a118d: je 0x7a119c */
  if (zf) goto L_7a119c;
L_7a118f: /* 7a118f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7a1194: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a1196: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a1198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1199: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7a119cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a119c: /* 7a119c: mov eax, esi */
  eax = esi;
/* 7a119e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a119f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a11c0(void) {
  LOAD_REGS();
L_7a11c0: /* 7a11c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a11c1: mov ebp, esp */
  ebp = esp;
/* 7a11c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a11c5: push 0x9ce450 */
  { uint32_t v = 0x9ce450u; esp -= 4; W32(esp, v); }
/* 7a11ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a11d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a11d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a11d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a11db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a11dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a11dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a11de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a11e1: mov edi, ecx */
  edi = ecx;
/* 7a11e3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a11ea: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x7a11f0u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 7a11f0: xor esi, esi */
  esi = 0;
L_7a11f2: /* 7a11f2: cmp esi, dword ptr [edi + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a11f8: jge 0x7a1218 */
  if ((sf == of)) goto L_7a1218;
L_7a11fa: /* 7a11fa: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* 7a1200: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1204: lea ecx, [edi + 0x1fc] */
  ecx = (uint32_t)(edi + 0x1fcu);
/* 7a120a: jne 0x7a1215 */
  if (!zf) goto L_7a1215;
L_7a120c: /* 7a120c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a120e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a120f: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x7a1214u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 7a1214: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_7a1215: /* 7a1215: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a1216: jmp 0x7a11f2 */
  goto L_7a11f2;
L_7a1218: /* 7a1218: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a121e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1221: je 0x7a122a */
  if (zf) goto L_7a122a;
L_7a1223: /* 7a1223: or dword ptr [edi + 0x80], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x80u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x80u), r);
  }
L_7a122a: /* 7a122a: mov ecx, edi */
  ecx = edi;
/* 7a122c: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7a1231u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7a1231: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a1234: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a1235: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a1236: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a123d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a123e: mov esp, ebp */
  esp = ebp;
/* 7a1240: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a1241: ret  */
  esp += 4; SPILL(); return;
}

void f_7a1242(void) {
  LOAD_REGS();
L_7a1242: /* 7a1242: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1245: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a124a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7a124d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a124e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a1251: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a1256u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a1256(); return;
}

void f_7a1256(void) {
  LOAD_REGS();
L_7a1256: /* 7a1256: push 0xa0b3c4 */
  { uint32_t v = 0xa0b3c4u; esp -= 4; W32(esp, v); }
/* 7a125b: push 0xaccbbc */
  { uint32_t v = 0xaccbbcu; esp -= 4; W32(esp, v); }
/* 7a1260: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a1266u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a1266: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a1269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a126b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a126d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a1272u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a1272: guest_badaddr(0x7a1272); return;
}

void f_7a12b0(void) {
  LOAD_REGS();
L_7a12b0: /* 7a12b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a12b1: mov ebp, esp */
  ebp = esp;
/* 7a12b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a12b5: push 0x9ce460 */
  { uint32_t v = 0x9ce460u; esp -= 4; W32(esp, v); }
/* 7a12ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a12c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a12c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a12c8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a12cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a12cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a12cd: mov esi, ecx */
  esi = ecx;
/* 7a12cf: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 7a12d5: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a12d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a12d8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7a12db: mov edi, eax */
  edi = eax;
/* 7a12dd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a12e0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a12e7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7a12ea: je 0x7a1302 */
  if (zf) goto L_7a1302;
L_7a12ec: /* 7a12ec: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a12f2: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a12f8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a12fa: je 0x7a1302 */
  if (zf) goto L_7a1302;
L_7a12fc: /* 7a12fc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a12fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a12ff: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a1302u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1302: /* 7a1302: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1309: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7a130c: je 0x7a1339 */
  if (zf) goto L_7a1339;
L_7a130e: /* 7a130e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1310: jne 0x7a1339 */
  if (!zf) goto L_7a1339;
L_7a1312: /* 7a1312: xor edi, edi */
  edi = 0;
L_7a1314: /* 7a1314: cmp edi, dword ptr [esi + 0x114] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a131a: jge 0x7a1336 */
  if ((sf == of)) goto L_7a1336;
L_7a131c: /* 7a131c: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 7a1322: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7a1325: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1327: je 0x7a1333 */
  if (zf) goto L_7a1333;
L_7a1329: /* 7a1329: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a132b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a132c: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7a1331u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7a1331: jmp 0x7a1314 */
  goto L_7a1314;
L_7a1333: /* 7a1333: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7a1334: jmp 0x7a1314 */
  goto L_7a1314;
L_7a1336: /* 7a1336: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_7a1339: /* 7a1339: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7a133c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7a133f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a1342: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a1344: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a1347: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a1349: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 7a134f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a1352: mov ecx, ebx */
  ecx = ebx;
/* 7a1354: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7a1357: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a1359: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a135b: and edx, 0xffffffe5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe5u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a135e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a1360: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1362: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 7a1368: je 0x7a1380 */
  if (zf) goto L_7a1380;
L_7a136a: /* 7a136a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a1370: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1376: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1378: je 0x7a1380 */
  if (zf) goto L_7a1380;
L_7a137a: /* 7a137a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a137c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a137d: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7a1380u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1380: /* 7a1380: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1382: je 0x7a1447 */
  if (zf) goto L_7a1447;
L_7a1388: /* 7a1388: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a138a: jne 0x7a1447 */
  if (!zf) goto L_7a1447;
L_7a1390: /* 7a1390: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7a1396: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1397: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a139a: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7a13a0u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7a13a0: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a13a6: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a13ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a13ae: je 0x7a13fa */
  if (zf) goto L_7a13fa;
L_7a13b0: /* 7a13b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a13b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a13b3: push 0x9f */
  { uint32_t v = 0x9fu; esp -= 4; W32(esp, v); }
/* 7a13b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a13bb: mov edi, esp */
  edi = esp;
/* 7a13bd: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7a13c3: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7a13c5: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7a13c7: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7a13ca: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a13cd: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7a13d0: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7a13d3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a13d6: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7a13dc: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7a13de: mov edi, esp */
  edi = esp;
/* 7a13e0: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7a13e2: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7a13e5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a13e8: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7a13eb: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7a13ee: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7a13f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a13f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a13f5: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x7a13f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a13f8: jmp 0x7a13fc */
  goto L_7a13fc;
L_7a13fa: /* 7a13fa: xor eax, eax */
  eax = 0;
L_7a13fc: /* 7a13fc: mov edi, eax */
  edi = eax;
/* 7a13fe: mov edi, edi */
  edi = edi;
L_7a1400: /* 7a1400: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1402: je 0x7a143b */
  if (zf) goto L_7a143b;
L_7a1404: /* 7a1404: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7a1407: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1409: je 0x7a1437 */
  if (zf) goto L_7a1437;
L_7a140b: /* 7a140b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a140c: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7a1411u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7a1411: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1413: jne 0x7a1437 */
  if (!zf) goto L_7a1437;
L_7a1415: /* 7a1415: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7a1418: cmp eax, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a141e: je 0x7a1437 */
  if (zf) goto L_7a1437;
L_7a1420: /* 7a1420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a1421: mov ecx, esi */
  ecx = esi;
/* 7a1423: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7a1428u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7a1428: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a142a: jne 0x7a1437 */
  if (!zf) goto L_7a1437;
L_7a142c: /* 7a142c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7a142f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1430: mov ecx, esi */
  ecx = esi;
/* 7a1432: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7a1437u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7a1437: /* 7a1437: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7a1439: jmp 0x7a1400 */
  goto L_7a1400;
L_7a143b: /* 7a143b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a143e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7a1444u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7a1444: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_7a1447: /* 7a1447: mov edx, dword ptr [esi + 0x80] */
  edx = R32((uint32_t)(esi + 0x80u));
/* 7a144d: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 7a1453: or edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7a1459: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a145c: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 7a1462: je 0x7a1492 */
  if (zf) goto L_7a1492;
L_7a1464: /* 7a1464: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 7a146a: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a146d: jne 0x7a1492 */
  if (!zf) goto L_7a1492;
L_7a146f: /* 7a146f: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a1471: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7a1474: je 0x7a14a5 */
  if (zf) goto L_7a14a5;
L_7a1476: /* 7a1476: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1478: jne 0x7a14a5 */
  if (!zf) goto L_7a14a5;
L_7a147a: /* 7a147a: mov cl, byte ptr [esi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7a147d: cmp cl, 0xe */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1480: je 0x7a1487 */
  if (zf) goto L_7a1487;
L_7a1482: /* 7a1482: cmp cl, 0xd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1485: jne 0x7a14a5 */
  if (!zf) goto L_7a14a5;
L_7a1487: /* 7a1487: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a1489: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a148a: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x7a148fu); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 7a148f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a1492: /* 7a1492: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a1495: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a149c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a149d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a149e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a149f: mov esp, ebp */
  esp = ebp;
/* 7a14a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a14a2: ret 0xc */
  esp += 16; SPILL(); return;
L_7a14a5: /* 7a14a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a14a7: jne 0x7a1492 */
  if (!zf) goto L_7a1492;
L_7a14a9: /* 7a14a9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a14ab: je 0x7a1492 */
  if (zf) goto L_7a1492;
L_7a14ad: /* 7a14ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a14ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a14af: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x7a14b4u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 7a14b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a14b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a14b8: call 0x6cb4ec */
  esp -= 4; W32(esp, 0x7a14bdu); SPILL(); f_6cb4ec(); if (g_unwind) return; RELOAD();
/* 7a14bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a14c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a14c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a14c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a14c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a14cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a14cd: mov esp, ebp */
  esp = ebp;
/* 7a14cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a14d0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7a14d3(void) {
  LOAD_REGS();
L_7a14d3: /* 7a14d3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a14d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a14db: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a14de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a14df: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a14e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a14e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a14e7(); return;
}

void f_7a14e7(void) {
  LOAD_REGS();
L_7a14e7: /* 7a14e7: push 0xa0b3fc */
  { uint32_t v = 0xa0b3fcu; esp -= 4; W32(esp, v); }
/* 7a14ec: push 0xaccbdc */
  { uint32_t v = 0xaccbdcu; esp -= 4; W32(esp, v); }
/* 7a14f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a14f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a14f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a14fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a14fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a14fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a1503u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a1503: guest_badaddr(0x7a1503); return;
}

void f_7a15b0(void) {
  LOAD_REGS();
L_7a15b0: /* 7a15b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a15b1: mov ebp, esp */
  ebp = esp;
/* 7a15b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a15b5: push 0x9ce470 */
  { uint32_t v = 0x9ce470u; esp -= 4; W32(esp, v); }
/* 7a15ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a15c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a15c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a15c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a15cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a15cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a15cd: mov esi, ecx */
  esi = ecx;
/* 7a15cf: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 7a15d5: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 7a15d7: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a15d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a15da: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a15dd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a15e4: je 0x7a15fc */
  if (zf) goto L_7a15fc;
L_7a15e6: /* 7a15e6: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a15ec: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a15f2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a15f4: je 0x7a15fc */
  if (zf) goto L_7a15fc;
L_7a15f6: /* 7a15f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a15f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a15f9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a15fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a15fc: /* 7a15fc: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1602: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a1605: mov dword ptr [esi + 0x284], ecx */
  W32((uint32_t)(esi + 0x284u), ecx);
/* 7a160b: je 0x7a1623 */
  if (zf) goto L_7a1623;
L_7a160d: /* 7a160d: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a1613: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1619: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a161b: je 0x7a1623 */
  if (zf) goto L_7a1623;
L_7a161d: /* 7a161d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a161f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1620: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7a1623u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1623: /* 7a1623: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7a1629: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a162e: mov ecx, esi */
  ecx = esi;
/* 7a1630: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7a1636: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7a163bu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7a163b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a163e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a163f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a1640: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a1647: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a1648: mov esp, ebp */
  esp = ebp;
/* 7a164a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a164b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a164e(void) {
  LOAD_REGS();
L_7a164e: /* 7a164e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1651: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a1656: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a1659: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a165a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a165d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a1662u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a1662(); return;
}

void f_7a1662(void) {
  LOAD_REGS();
L_7a1662: /* 7a1662: push 0xa0b430 */
  { uint32_t v = 0xa0b430u; esp -= 4; W32(esp, v); }
/* 7a1667: push 0xaccbec */
  { uint32_t v = 0xaccbecu; esp -= 4; W32(esp, v); }
/* 7a166c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a1672u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a1672: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a1675: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1677: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1679: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a167eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a167e: guest_badaddr(0x7a167e); return;
}

void f_7a16c0(void) {
  LOAD_REGS();
L_7a16c0: /* 7a16c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a16c1: mov ebp, esp */
  ebp = esp;
/* 7a16c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a16c5: push 0x9ce480 */
  { uint32_t v = 0x9ce480u; esp -= 4; W32(esp, v); }
/* 7a16ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a16d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a16d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a16d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a16db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a16dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a16dd: mov esi, ecx */
  esi = ecx;
/* 7a16df: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 7a16e5: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 7a16e7: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a16e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a16ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a16ed: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a16f4: je 0x7a170c */
  if (zf) goto L_7a170c;
L_7a16f6: /* 7a16f6: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a16fc: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1702: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1704: je 0x7a170c */
  if (zf) goto L_7a170c;
L_7a1706: /* 7a1706: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a1708: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1709: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a170cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a170c: /* 7a170c: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1712: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a1715: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 7a1718: je 0x7a1730 */
  if (zf) goto L_7a1730;
L_7a171a: /* 7a171a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a1720: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1726: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1728: je 0x7a1730 */
  if (zf) goto L_7a1730;
L_7a172a: /* 7a172a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a172c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a172d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7a1730u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1730: /* 7a1730: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7a1736: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a173b: mov ecx, esi */
  ecx = esi;
/* 7a173d: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7a1743: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7a1748u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7a1748: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a174b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a174c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a174d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a1754: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a1755: mov esp, ebp */
  esp = ebp;
/* 7a1757: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a1758: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a175b(void) {
  LOAD_REGS();
L_7a175b: /* 7a175b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a175e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a1763: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a1766: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1767: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a176a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a176fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a176f(); return;
}

void f_7a176f(void) {
  LOAD_REGS();
L_7a176f: /* 7a176f: push 0xa0b464 */
  { uint32_t v = 0xa0b464u; esp -= 4; W32(esp, v); }
/* 7a1774: push 0xaccbf4 */
  { uint32_t v = 0xaccbf4u; esp -= 4; W32(esp, v); }
/* 7a1779: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a177fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a177f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a1782: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1786: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a178bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a178b: guest_badaddr(0x7a178b); return;
}

void f_7a17d0(void) {
  LOAD_REGS();
L_7a17d0: /* 7a17d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a17d1: mov ebp, esp */
  ebp = esp;
/* 7a17d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a17d5: push 0x9ce490 */
  { uint32_t v = 0x9ce490u; esp -= 4; W32(esp, v); }
/* 7a17da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a17e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a17e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a17e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a17eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a17ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a17ed: mov esi, ecx */
  esi = ecx;
/* 7a17ef: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 7a17f5: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 7a17f7: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a17f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a17fa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a17fd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a1804: je 0x7a181c */
  if (zf) goto L_7a181c;
L_7a1806: /* 7a1806: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a180c: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1812: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1814: je 0x7a181c */
  if (zf) goto L_7a181c;
L_7a1816: /* 7a1816: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a1818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1819: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a181cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a181c: /* 7a181c: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1822: mov cl, byte ptr [ebp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7a1825: mov byte ptr [esi + 0x51], cl */
  W8((uint32_t)(esi + 0x51u), (ecx & 0xffu));
/* 7a1828: je 0x7a1840 */
  if (zf) goto L_7a1840;
L_7a182a: /* 7a182a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a1830: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1836: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1838: je 0x7a1840 */
  if (zf) goto L_7a1840;
L_7a183a: /* 7a183a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a183c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a183d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7a1840u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1840: /* 7a1840: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7a1846: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a184b: mov ecx, esi */
  ecx = esi;
/* 7a184d: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7a1853: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7a1858u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7a1858: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a185b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a185c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a185d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a1864: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a1865: mov esp, ebp */
  esp = ebp;
/* 7a1867: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a1868: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a186b(void) {
  LOAD_REGS();
L_7a186b: /* 7a186b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a186e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a1873: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a1876: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1877: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a187a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a187fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a187f(); return;
}

void f_7a187f(void) {
  LOAD_REGS();
L_7a187f: /* 7a187f: push 0xa0b498 */
  { uint32_t v = 0xa0b498u; esp -= 4; W32(esp, v); }
/* 7a1884: push 0xaccbfc */
  { uint32_t v = 0xaccbfcu; esp -= 4; W32(esp, v); }
/* 7a1889: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a188fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a188f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a1892: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1894: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1896: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a189bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a189b: guest_badaddr(0x7a189b); return;
}

void f_7a18e0(void) {
  LOAD_REGS();
L_7a18e0: /* 7a18e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a18e1: mov ebp, esp */
  ebp = esp;
/* 7a18e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a18e5: push 0x9ce4a0 */
  { uint32_t v = 0x9ce4a0u; esp -= 4; W32(esp, v); }
/* 7a18ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a18f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a18f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a18f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a18fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a18fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a18fd: mov esi, ecx */
  esi = ecx;
/* 7a18ff: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 7a1905: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 7a1907: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1909: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a190a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a190d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a1914: je 0x7a192c */
  if (zf) goto L_7a192c;
L_7a1916: /* 7a1916: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a191c: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1922: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1924: je 0x7a192c */
  if (zf) goto L_7a192c;
L_7a1926: /* 7a1926: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a1928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1929: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a192cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a192c: /* 7a192c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a192f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7a1932: lea ecx, [esi + 0x288] */
  ecx = (uint32_t)(esi + 0x288u);
/* 7a1938: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a193a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7a193d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7a1940: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1946: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a1949: je 0x7a1961 */
  if (zf) goto L_7a1961;
L_7a194b: /* 7a194b: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a1951: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1957: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1959: je 0x7a1961 */
  if (zf) goto L_7a1961;
L_7a195b: /* 7a195b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a195d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a195e: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7a1961u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1961: /* 7a1961: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7a1967: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a196c: mov ecx, esi */
  ecx = esi;
/* 7a196e: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7a1974: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7a1979u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7a1979: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a197c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a197d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a197e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a1985: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a1986: mov esp, ebp */
  esp = ebp;
/* 7a1988: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a1989: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7a198c(void) {
  LOAD_REGS();
L_7a198c: /* 7a198c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a198f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a1994: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7a1997: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a1998: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a199b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a19a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a19a0(); return;
}

void f_7a19a0(void) {
  LOAD_REGS();
L_7a19a0: /* 7a19a0: push 0xa0b4cc */
  { uint32_t v = 0xa0b4ccu; esp -= 4; W32(esp, v); }
/* 7a19a5: push 0xaccc04 */
  { uint32_t v = 0xaccc04u; esp -= 4; W32(esp, v); }
/* 7a19aa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a19b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a19b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a19b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a19b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a19b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a19bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a19bc: guest_badaddr(0x7a19bc); return;
}

void f_7a1a00(void) {
  LOAD_REGS();
L_7a1a00: /* 7a1a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a1a01: mov ebp, esp */
  ebp = esp;
/* 7a1a03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a1a05: push 0x9ce4b0 */
  { uint32_t v = 0x9ce4b0u; esp -= 4; W32(esp, v); }
/* 7a1a0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a1a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a1a11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a1a18: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a1a1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a1a1f: mov ebx, ecx */
  ebx = ecx;
/* 7a1a21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1a22: lea esi, [ebx + 0x170] */
  esi = (uint32_t)(ebx + 0x170u);
/* 7a1a28: mov edx, esi */
  edx = esi;
/* 7a1a2a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a1a2c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7a1a2f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a1a32: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a1a35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a1a36: mov edi, dword ptr [0xb734e8] */
  edi = R32((uint32_t)(0xb734e8u));
/* 7a1a3c: mov edx, esi */
  edx = esi;
/* 7a1a3e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7a1a40: mov edi, dword ptr [0xb734ec] */
  edi = R32((uint32_t)(0xb734ecu));
/* 7a1a46: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7a1a49: mov edi, dword ptr [0xb734f0] */
  edi = R32((uint32_t)(0xb734f0u));
/* 7a1a4f: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 7a1a52: mov dword ptr [0xb734e8], eax */
  W32((uint32_t)(0xb734e8u), eax);
/* 7a1a57: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1a5a: mov dword ptr [0xb734ec], ecx */
  W32((uint32_t)(0xb734ecu), ecx);
/* 7a1a60: mov dword ptr [0xb734f0], eax */
  W32((uint32_t)(0xb734f0u), eax);
/* 7a1a65: lea edi, [ebx + 0x17c] */
  edi = (uint32_t)(ebx + 0x17cu);
/* 7a1a6b: mov ecx, edi */
  ecx = edi;
/* 7a1a6d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a1a6f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7a1a72: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a1a75: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7a1a78: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a1a7b: mov ecx, dword ptr [0xb73500] */
  ecx = R32((uint32_t)(0xb73500u));
/* 7a1a81: mov edx, edi */
  edx = edi;
/* 7a1a83: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7a1a85: mov ecx, dword ptr [0xb73504] */
  ecx = R32((uint32_t)(0xb73504u));
/* 7a1a8b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7a1a8e: mov ecx, dword ptr [0xb73508] */
  ecx = R32((uint32_t)(0xb73508u));
/* 7a1a94: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7a1a97: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1a9a: mov dword ptr [0xb73500], eax */
  W32((uint32_t)(0xb73500u), eax);
/* 7a1a9f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1aa2: mov dword ptr [0xb73504], edx */
  W32((uint32_t)(0xb73504u), edx);
/* 7a1aa8: mov dword ptr [0xb73508], eax */
  W32((uint32_t)(0xb73508u), eax);
/* 7a1aad: lea eax, [ebx + 0x208] */
  eax = (uint32_t)(ebx + 0x208u);
/* 7a1ab3: mov edx, eax */
  edx = eax;
/* 7a1ab5: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a1ab7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a1aba: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7a1abd: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a1ac0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a1ac3: mov edx, dword ptr [0xb734f4] */
  edx = R32((uint32_t)(0xb734f4u));
/* 7a1ac9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7a1acb: mov edx, dword ptr [0xb734f8] */
  edx = R32((uint32_t)(0xb734f8u));
/* 7a1ad1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7a1ad4: mov edx, dword ptr [0xb734fc] */
  edx = R32((uint32_t)(0xb734fcu));
/* 7a1ada: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7a1add: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a1ae0: mov dword ptr [0xb734f4], eax */
  W32((uint32_t)(0xb734f4u), eax);
/* 7a1ae5: mov dword ptr [0xb734f8], ecx */
  W32((uint32_t)(0xb734f8u), ecx);
/* 7a1aeb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1aee: mov dword ptr [0xb734fc], ecx */
  W32((uint32_t)(0xb734fcu), ecx);
/* 7a1af4: lea eax, [ebx + 0x214] */
  eax = (uint32_t)(ebx + 0x214u);
/* 7a1afa: mov edx, eax */
  edx = eax;
/* 7a1afc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a1afe: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a1b01: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7a1b04: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a1b07: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a1b0a: mov edx, dword ptr [0xb7350c] */
  edx = R32((uint32_t)(0xb7350cu));
/* 7a1b10: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7a1b12: mov edx, dword ptr [0xb73510] */
  edx = R32((uint32_t)(0xb73510u));
/* 7a1b18: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7a1b1b: mov edx, dword ptr [0xb73514] */
  edx = R32((uint32_t)(0xb73514u));
/* 7a1b21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7a1b24: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a1b27: mov edx, dword ptr [0xb5bf64] */
  edx = R32((uint32_t)(0xb5bf64u));
/* 7a1b2d: mov dword ptr [0xb73510], ecx */
  W32((uint32_t)(0xb73510u), ecx);
/* 7a1b33: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1b36: mov dword ptr [0xb7350c], eax */
  W32((uint32_t)(0xb7350cu), eax);
/* 7a1b3b: mov dword ptr [0xb73514], ecx */
  W32((uint32_t)(0xb73514u), ecx);
/* 7a1b41: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a1b44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a1b47: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a1b4e: mov dword ptr [ebx + 0x5c], edx */
  W32((uint32_t)(ebx + 0x5cu), edx);
/* 7a1b51: mov edx, dword ptr [0xb5bf60] */
  edx = R32((uint32_t)(0xb5bf60u));
/* 7a1b57: mov dword ptr [0xb5bf64], eax */
  W32((uint32_t)(0xb5bf64u), eax);
/* 7a1b5c: mov ecx, dword ptr [ebx + 0x88] */
  ecx = R32((uint32_t)(ebx + 0x88u));
/* 7a1b62: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a1b64: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a1b66: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a1b69: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a1b6b: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 7a1b71: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7a1b77: mov eax, ecx */
  eax = ecx;
/* 7a1b79: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a1b7b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a1b7e: mov dword ptr [0xb5bf60], eax */
  W32((uint32_t)(0xb5bf60u), eax);
/* 7a1b83: mov eax, dword ptr [0xb5bf5c] */
  eax = R32((uint32_t)(0xb5bf5cu));
/* 7a1b88: mov dword ptr [ebx + 0x2d4], eax */
  W32((uint32_t)(ebx + 0x2d4u), eax);
/* 7a1b8e: fstp dword ptr [0xb5bf5c] */
  WF32((uint32_t)(0xb5bf5cu), ST0); FPOP();
/* 7a1b94: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7a1b9a: mov ecx, dword ptr [0xb5bf58] */
  ecx = R32((uint32_t)(0xb5bf58u));
/* 7a1ba0: mov dword ptr [ebx + 0x2d8], ecx */
  W32((uint32_t)(ebx + 0x2d8u), ecx);
/* 7a1ba6: fstp dword ptr [0xb5bf58] */
  WF32((uint32_t)(0xb5bf58u), ST0); FPOP();
/* 7a1bac: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 7a1bb2: mov edx, dword ptr [0xb5bf54] */
  edx = R32((uint32_t)(0xb5bf54u));
/* 7a1bb8: mov dword ptr [ebx + 0x284], edx */
  W32((uint32_t)(ebx + 0x284u), edx);
/* 7a1bbe: fstp dword ptr [0xb5bf54] */
  WF32((uint32_t)(0xb5bf54u), ST0); FPOP();
/* 7a1bc4: lea eax, [ebx + 0x288] */
  eax = (uint32_t)(ebx + 0x288u);
/* 7a1bca: mov edx, eax */
  edx = eax;
/* 7a1bcc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a1bce: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a1bd1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7a1bd4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a1bd7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a1bda: mov edx, dword ptr [0xb73530] */
  edx = R32((uint32_t)(0xb73530u));
/* 7a1be0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7a1be2: mov edx, dword ptr [0xb73534] */
  edx = R32((uint32_t)(0xb73534u));
/* 7a1be8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7a1beb: mov edx, dword ptr [0xb73538] */
  edx = R32((uint32_t)(0xb73538u));
/* 7a1bf1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7a1bf4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a1bf7: mov dl, byte ptr [0xb5bf50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf50u))) & 0xffu);
/* 7a1bfd: mov dword ptr [0xb73534], ecx */
  W32((uint32_t)(0xb73534u), ecx);
/* 7a1c03: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1c06: mov dword ptr [0xb73530], eax */
  W32((uint32_t)(0xb73530u), eax);
/* 7a1c0b: mov dword ptr [0xb73538], ecx */
  W32((uint32_t)(0xb73538u), ecx);
/* 7a1c11: mov al, byte ptr [ebx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x51u))) & 0xffu);
/* 7a1c14: mov byte ptr [ebx + 0x51], dl */
  W8((uint32_t)(ebx + 0x51u), (edx & 0xffu));
/* 7a1c17: mov ecx, dword ptr [0xb5bf48] */
  ecx = R32((uint32_t)(0xb5bf48u));
/* 7a1c1d: mov edx, dword ptr [0xb5bf40] */
  edx = R32((uint32_t)(0xb5bf40u));
/* 7a1c23: mov byte ptr [0xb5bf50], al */
  W8((uint32_t)(0xb5bf50u), (eax & 0xffu));
/* 7a1c28: mov eax, dword ptr [ebx + 0x2ac] */
  eax = R32((uint32_t)(ebx + 0x2acu));
/* 7a1c2e: mov dword ptr [ebx + 0x2ac], ecx */
  W32((uint32_t)(ebx + 0x2acu), ecx);
/* 7a1c34: mov dword ptr [0xb5bf48], eax */
  W32((uint32_t)(0xb5bf48u), eax);
/* 7a1c39: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 7a1c3f: shl edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7a1c42: mov eax, ecx */
  eax = ecx;
/* 7a1c44: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a1c47: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a1c4a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a1c4c: and edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a1c52: mov dword ptr [0xb5bf40], eax */
  W32((uint32_t)(0xb5bf40u), eax);
/* 7a1c57: mov al, byte ptr [ebx + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x88u))) & 0xffu);
/* 7a1c5d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a1c5f: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1c61: mov dword ptr [ebx + 0x84], edx */
  W32((uint32_t)(ebx + 0x84u), edx);
/* 7a1c67: je 0x7a1c7b */
  if (zf) goto L_7a1c7b;
L_7a1c69: /* 7a1c69: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 7a1c6f: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a1c75: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a1c77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a1c78: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7a1c7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1c7b: /* 7a1c7b: mov eax, dword ptr [ebx + 0xd0] */
  eax = R32((uint32_t)(ebx + 0xd0u));
/* 7a1c81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1c83: je 0x7a1ce1 */
  if (zf) goto L_7a1ce1;
L_7a1c85: /* 7a1c85: mov ecx, dword ptr [0xb73518] */
  ecx = R32((uint32_t)(0xb73518u));
/* 7a1c8b: mov edx, dword ptr [0xb7351c] */
  edx = R32((uint32_t)(0xb7351cu));
/* 7a1c91: mov eax, dword ptr [0xb73520] */
  eax = R32((uint32_t)(0xb73520u));
/* 7a1c96: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7a1c99: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7a1c9c: lea ecx, [ebx + 0x314] */
  ecx = (uint32_t)(ebx + 0x314u);
/* 7a1ca2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a1ca4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a1ca7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7a1caa: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a1cad: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a1cb0: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7a1cb3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a1cb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a1cb7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7a1cba: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a1cbd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a1cc3u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a1cc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1cc5: jne 0x7a1cda */
  if (!zf) goto L_7a1cda;
L_7a1cc7: /* 7a1cc7: mov al, byte ptr [ebp - 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 7a1cca: cmp al, byte ptr [ebp - 0x24] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1ccd: jne 0x7a1cda */
  if (!zf) goto L_7a1cda;
L_7a1ccf: /* 7a1ccf: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a1cd2: xor ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7a1cd5: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1cd8: je 0x7a1ce1 */
  if (zf) goto L_7a1ce1;
L_7a1cda: /* 7a1cda: mov ecx, ebx */
  ecx = ebx;
/* 7a1cdc: call 0x6cc8b5 */
  esp -= 4; W32(esp, 0x7a1ce1u); SPILL(); f_6cc8b5(); if (g_unwind) return; RELOAD();
L_7a1ce1: /* 7a1ce1: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7a1ce7: fcomp dword ptr [0xb5bf5c] */
  fpu_com(ST0, F32((uint32_t)(0xb5bf5cu)));
  FPOP();
/* 7a1ced: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a1cef: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a1cf2: jp 0x7a1d07 */
  if (pf) goto L_7a1d07;
L_7a1cf4: /* 7a1cf4: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7a1cfa: fcomp dword ptr [0xb5bf58] */
  fpu_com(ST0, F32((uint32_t)(0xb5bf58u)));
  FPOP();
/* 7a1d00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a1d02: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a1d05: jnp 0x7a1d1b */
  if (!pf) goto L_7a1d1b;
L_7a1d07: /* 7a1d07: mov edx, dword ptr [0xb5bf58] */
  edx = R32((uint32_t)(0xb5bf58u));
/* 7a1d0d: mov eax, dword ptr [0xb5bf5c] */
  eax = R32((uint32_t)(0xb5bf5cu));
/* 7a1d12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a1d13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a1d14: mov ecx, ebx */
  ecx = ebx;
/* 7a1d16: call 0x6c389b */
  esp -= 4; W32(esp, 0x7a1d1bu); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
L_7a1d1b: /* 7a1d1b: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 7a1d21: mov ecx, dword ptr [0xb5bf60] */
  ecx = R32((uint32_t)(0xb5bf60u));
/* 7a1d27: mov edx, eax */
  edx = eax;
/* 7a1d29: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7a1d2b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a1d2e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1d30: je 0x7a1d4a */
  if (zf) goto L_7a1d4a;
L_7a1d32: /* 7a1d32: mov edx, eax */
  edx = eax;
/* 7a1d34: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7a1d37: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a1d3a: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a1d3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a1d3e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a1d41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a1d42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1d43: mov ecx, ebx */
  ecx = ebx;
/* 7a1d45: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x7a1d4au); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
L_7a1d4a: /* 7a1d4a: push 0xb734e8 */
  { uint32_t v = 0xb734e8u; esp -= 4; W32(esp, v); }
/* 7a1d4f: mov ecx, esi */
  ecx = esi;
/* 7a1d51: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7a1d57u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7a1d57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1d59: je 0x7a1d65 */
  if (zf) goto L_7a1d65;
L_7a1d5b: /* 7a1d5b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7a1d5d: mov ecx, ebx */
  ecx = ebx;
/* 7a1d5f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x7a1d65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1d65: /* 7a1d65: push 0xb73500 */
  { uint32_t v = 0xb73500u; esp -= 4; W32(esp, v); }
/* 7a1d6a: mov ecx, edi */
  ecx = edi;
/* 7a1d6c: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7a1d72u); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7a1d72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1d74: je 0x7a1de2 */
  if (zf) goto L_7a1de2;
L_7a1d76: /* 7a1d76: mov esi, dword ptr [0xb73500] */
  esi = R32((uint32_t)(0xb73500u));
/* 7a1d7c: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 7a1d82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a1d84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1d86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1d88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1d8a: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 7a1d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a1d8e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a1d91: mov eax, esp */
  eax = esp;
/* 7a1d93: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7a1d95: mov esi, dword ptr [0xb73504] */
  esi = R32((uint32_t)(0xb73504u));
/* 7a1d9b: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7a1d9e: mov esi, dword ptr [0xb73508] */
  esi = R32((uint32_t)(0xb73508u));
/* 7a1da4: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7a1da7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a1daa: mov eax, esp */
  eax = esp;
/* 7a1dac: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a1db3: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a1db6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7a1db8: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7a1dbf: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1dc2: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7a1dc5: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 7a1dcc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a1dce: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7a1dd5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1dd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a1dd9: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7a1ddc: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7a1de2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1de2: /* 7a1de2: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 7a1de8: fcomp dword ptr [0xb5bf54] */
  fpu_com(ST0, F32((uint32_t)(0xb5bf54u)));
  FPOP();
/* 7a1dee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a1df0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a1df3: jnp 0x7a1e03 */
  if (!pf) goto L_7a1e03;
L_7a1df5: /* 7a1df5: mov ecx, dword ptr [0xb5bf54] */
  ecx = R32((uint32_t)(0xb5bf54u));
/* 7a1dfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1dfc: mov ecx, ebx */
  ecx = ebx;
/* 7a1dfe: call 0x6c25ef */
  esp -= 4; W32(esp, 0x7a1e03u); SPILL(); f_6c25ef(); if (g_unwind) return; RELOAD();
L_7a1e03: /* 7a1e03: push 0xb73530 */
  { uint32_t v = 0xb73530u; esp -= 4; W32(esp, v); }
/* 7a1e08: lea ecx, [ebx + 0x288] */
  ecx = (uint32_t)(ebx + 0x288u);
/* 7a1e0e: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7a1e14u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7a1e14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1e16: je 0x7a1e3c */
  if (zf) goto L_7a1e3c;
L_7a1e18: /* 7a1e18: mov eax, dword ptr [0xb73530] */
  eax = R32((uint32_t)(0xb73530u));
/* 7a1e1d: mov ecx, dword ptr [0xb73534] */
  ecx = R32((uint32_t)(0xb73534u));
/* 7a1e23: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a1e26: mov edx, esp */
  edx = esp;
/* 7a1e28: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a1e2a: mov eax, dword ptr [0xb73538] */
  eax = R32((uint32_t)(0xb73538u));
/* 7a1e2f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7a1e32: mov ecx, ebx */
  ecx = ebx;
/* 7a1e34: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7a1e37: call 0x6c477d */
  esp -= 4; W32(esp, 0x7a1e3cu); SPILL(); f_6c477d(); if (g_unwind) return; RELOAD();
L_7a1e3c: /* 7a1e3c: mov al, byte ptr [0xb5bf50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf50u))) & 0xffu);
/* 7a1e41: cmp byte ptr [ebx + 0x51], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x51u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1e44: je 0x7a1e51 */
  if (zf) goto L_7a1e51;
L_7a1e46: /* 7a1e46: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 7a1e49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1e4a: mov ecx, ebx */
  ecx = ebx;
/* 7a1e4c: call 0x6c8a49 */
  esp -= 4; W32(esp, 0x7a1e51u); SPILL(); f_6c8a49(); if (g_unwind) return; RELOAD();
L_7a1e51: /* 7a1e51: mov edx, dword ptr [ebx + 0x5c] */
  edx = R32((uint32_t)(ebx + 0x5cu));
/* 7a1e54: mov esi, dword ptr [0xb5bf64] */
  esi = R32((uint32_t)(0xb5bf64u));
/* 7a1e5a: xor eax, eax */
  eax = 0;
/* 7a1e5c: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1e5e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7a1e61: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7a1e64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1e66: mov eax, dword ptr [0xb5bf40] */
  eax = R32((uint32_t)(0xb5bf40u));
/* 7a1e6b: je 0x7a1f58 */
  if (zf) goto L_7a1f58;
L_7a1e71: /* 7a1e71: mov edi, dword ptr [ebx + 0x84] */
  edi = R32((uint32_t)(ebx + 0x84u));
/* 7a1e77: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a1e7a: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7a1e7c: and eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a1e81: mov edx, edi */
  edx = edi;
/* 7a1e83: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a1e85: mov dword ptr [ebx + 0x84], edx */
  W32((uint32_t)(ebx + 0x84u), edx);
/* 7a1e8b: mov eax, dword ptr [0xb5bf64] */
  eax = R32((uint32_t)(0xb5bf64u));
/* 7a1e90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1e92: je 0x7a1ea8 */
  if (zf) goto L_7a1ea8;
L_7a1e94: /* 7a1e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a1e95: mov ecx, ebx */
  ecx = ebx;
/* 7a1e97: call 0x6c32f1 */
  esp -= 4; W32(esp, 0x7a1e9cu); SPILL(); f_6c32f1(); if (g_unwind) return; RELOAD();
/* 7a1e9c: mov ecx, dword ptr [0xb5bf64] */
  ecx = R32((uint32_t)(0xb5bf64u));
/* 7a1ea2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a1ea3: call 0x6c32f1 */
  esp -= 4; W32(esp, 0x7a1ea8u); SPILL(); f_6c32f1(); if (g_unwind) return; RELOAD();
L_7a1ea8: /* 7a1ea8: lea esi, [ebx + 0x208] */
  esi = (uint32_t)(ebx + 0x208u);
/* 7a1eae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a1eaf: mov ecx, 0xb734f4 */
  ecx = 0xb734f4u;
/* 7a1eb4: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7a1ebau); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7a1eba: lea edi, [ebx + 0x214] */
  edi = (uint32_t)(ebx + 0x214u);
/* 7a1ec0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a1ec1: mov ecx, 0xb7350c */
  ecx = 0xb7350cu;
/* 7a1ec6: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7a1ec9: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7a1ecfu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7a1ecf: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7a1ed1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a1ed3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7a1ed6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a1ed9: mov eax, esp */
  eax = esp;
/* 7a1edb: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a1ee2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a1ee5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a1ee7: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7a1eee: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1ef1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7a1ef4: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 7a1efb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1efe: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7a1f01: mov eax, dword ptr [0xb5bf64] */
  eax = R32((uint32_t)(0xb5bf64u));
/* 7a1f06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a1f07: mov ecx, ebx */
  ecx = ebx;
/* 7a1f09: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7a1f0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a1f0f: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a1f12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1f14: jne 0x7a1f2f */
  if (!zf) goto L_7a1f2f;
L_7a1f16: /* 7a1f16: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a1f18: mov dword ptr [0xb734f4], ecx */
  W32((uint32_t)(0xb734f4u), ecx);
/* 7a1f1e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7a1f21: mov dword ptr [0xb734f8], edx */
  W32((uint32_t)(0xb734f8u), edx);
/* 7a1f27: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7a1f2a: mov dword ptr [0xb734fc], eax */
  W32((uint32_t)(0xb734fcu), eax);
L_7a1f2f: /* 7a1f2f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a1f32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1f34: jne 0x7a1ff4 */
  if (!zf) goto L_7a1ff4;
L_7a1f3a: /* 7a1f3a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7a1f3c: mov dword ptr [0xb7350c], ecx */
  W32((uint32_t)(0xb7350cu), ecx);
/* 7a1f42: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 7a1f45: mov dword ptr [0xb73510], edx */
  W32((uint32_t)(0xb73510u), edx);
/* 7a1f4b: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 7a1f4e: mov dword ptr [0xb73514], eax */
  W32((uint32_t)(0xb73514u), eax);
/* 7a1f53: jmp 0x7a1ff4 */
  goto L_7a1ff4;
L_7a1f58: /* 7a1f58: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 7a1f5e: mov edx, ecx */
  edx = ecx;
/* 7a1f60: shr edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7a1f63: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a1f66: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a1f68: je 0x7a1ff4 */
  if (zf) goto L_7a1ff4;
L_7a1f6e: /* 7a1f6e: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a1f71: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7a1f73: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a1f75: and eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a1f7a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7a1f7c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a1f7f: mov ecx, esp */
  ecx = esp;
/* 7a1f81: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a1f88: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a1f8b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a1f8d: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7a1f94: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1f97: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a1f9a: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 7a1fa1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1fa4: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7a1faa: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7a1fac: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a1faf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a1fb1: mov ecx, ebx */
  ecx = ebx;
/* 7a1fb3: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7a1fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a1fb9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7a1fbb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a1fbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a1fc0: mov ecx, esp */
  ecx = esp;
/* 7a1fc2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a1fc9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a1fcc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a1fce: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7a1fd5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a1fd8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a1fdb: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 7a1fe2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a1fe5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a1fe8: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 7a1feb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a1fec: mov ecx, ebx */
  ecx = ebx;
/* 7a1fee: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7a1ff4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a1ff4: /* 7a1ff4: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a1ff7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a1ff9: je 0x7a2261 */
  if (zf) goto L_7a2261;
L_7a1fff: /* 7a1fff: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2009: jne 0x7a2261 */
  if (!zf) goto L_7a2261;
L_7a200f: /* 7a200f: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 7a2015: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2018: je 0x7a2064 */
  if (zf) goto L_7a2064;
L_7a201a: /* 7a201a: mov eax, dword ptr [eax + 0xd0] */
  eax = R32((uint32_t)(eax + 0xd0u));
/* 7a2020: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2022: je 0x7a2064 */
  if (zf) goto L_7a2064;
L_7a2024: /* 7a2024: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7a2029: mov ecx, eax */
  ecx = eax;
/* 7a202b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7a2031u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7a2031: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2033: je 0x7a2064 */
  if (zf) goto L_7a2064;
L_7a2035: /* 7a2035: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a203c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a203f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7a2046: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a2049: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7a2050: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a2053: mov dword ptr [0xb734f4], edx */
  W32((uint32_t)(0xb734f4u), edx);
/* 7a2059: mov dword ptr [0xb734f8], eax */
  W32((uint32_t)(0xb734f8u), eax);
/* 7a205e: mov dword ptr [0xb734fc], ecx */
  W32((uint32_t)(0xb734fcu), ecx);
L_7a2064: /* 7a2064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2066: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7a2069: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a206fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a206f: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7a2072: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a2073: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7a2079: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a207fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a207f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2081: je 0x7a20ce */
  if (zf) goto L_7a20ce;
L_7a2083: /* 7a2083: mov eax, dword ptr [0xb734f4] */
  eax = R32((uint32_t)(0xb734f4u));
/* 7a2088: mov dword ptr [ebx + 0x208], eax */
  W32((uint32_t)(ebx + 0x208u), eax);
/* 7a208e: mov ecx, dword ptr [0xb734f8] */
  ecx = R32((uint32_t)(0xb734f8u));
/* 7a2094: mov dword ptr [ebx + 0x20c], ecx */
  W32((uint32_t)(ebx + 0x20cu), ecx);
/* 7a209a: mov edx, dword ptr [0xb734fc] */
  edx = R32((uint32_t)(0xb734fcu));
/* 7a20a0: mov dword ptr [ebx + 0x210], edx */
  W32((uint32_t)(ebx + 0x210u), edx);
/* 7a20a6: mov eax, dword ptr [0xb7350c] */
  eax = R32((uint32_t)(0xb7350cu));
/* 7a20ab: mov dword ptr [ebx + 0x214], eax */
  W32((uint32_t)(ebx + 0x214u), eax);
/* 7a20b1: mov ecx, dword ptr [0xb73510] */
  ecx = R32((uint32_t)(0xb73510u));
/* 7a20b7: mov dword ptr [ebx + 0x218], ecx */
  W32((uint32_t)(ebx + 0x218u), ecx);
/* 7a20bd: mov edx, dword ptr [0xb73514] */
  edx = R32((uint32_t)(0xb73514u));
/* 7a20c3: mov dword ptr [ebx + 0x21c], edx */
  W32((uint32_t)(ebx + 0x21cu), edx);
/* 7a20c9: jmp 0x7a2261 */
  goto L_7a2261;
L_7a20ce: /* 7a20ce: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a20d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a20d3: jne 0x7a20ee */
  if (!zf) goto L_7a20ee;
L_7a20d5: /* 7a20d5: push 0xb734f4 */
  { uint32_t v = 0xb734f4u; esp -= 4; W32(esp, v); }
/* 7a20da: lea ecx, [ebx + 0x208] */
  ecx = (uint32_t)(ebx + 0x208u);
/* 7a20e0: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7a20e6u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7a20e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a20e8: je 0x7a216e */
  if (zf) goto L_7a216e;
L_7a20ee: /* 7a20ee: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a20f1: fld dword ptr [0xb734fc] */
  { double v = F32((uint32_t)(0xb734fcu)); FPUSH(v); }
/* 7a20f7: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7a20fd: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 7a2103: fld dword ptr [0xb734f8] */
  { double v = F32((uint32_t)(0xb734f8u)); FPUSH(v); }
/* 7a2109: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a210e: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7a2111: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a2113: fld dword ptr [0xb734f4] */
  { double v = F32((uint32_t)(0xb734f4u)); FPUSH(v); }
/* 7a2119: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a211b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a211d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a211f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2121: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a2124: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a2127: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a212a: mov edx, esp */
  edx = esp;
/* 7a212c: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7a212e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a2131: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a2134: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7a2137: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a213a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a213d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a213e: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 7a2141: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x7a2147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a2147: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2149: mov eax, dword ptr [0xb734f4] */
  eax = R32((uint32_t)(0xb734f4u));
/* 7a214e: mov dword ptr [ebx + 0x208], eax */
  W32((uint32_t)(ebx + 0x208u), eax);
/* 7a2154: mov ecx, dword ptr [0xb734f8] */
  ecx = R32((uint32_t)(0xb734f8u));
/* 7a215a: mov dword ptr [ebx + 0x20c], ecx */
  W32((uint32_t)(ebx + 0x20cu), ecx);
/* 7a2160: mov edx, dword ptr [0xb734fc] */
  edx = R32((uint32_t)(0xb734fcu));
/* 7a2166: mov dword ptr [ebx + 0x210], edx */
  W32((uint32_t)(ebx + 0x210u), edx);
/* 7a216c: jne 0x7a2187 */
  if (!zf) goto L_7a2187;
L_7a216e: /* 7a216e: push 0xb7350c */
  { uint32_t v = 0xb7350cu; esp -= 4; W32(esp, v); }
/* 7a2173: lea ecx, [ebx + 0x214] */
  ecx = (uint32_t)(ebx + 0x214u);
/* 7a2179: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7a217fu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7a217f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2181: je 0x7a2261 */
  if (zf) goto L_7a2261;
L_7a2187: /* 7a2187: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7a218a: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a218f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2190: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7a2196: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a2197: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7a219d: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a21a0: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7a21a7: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7a21adu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7a21ad: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7a21b3: push 0xb7350c */
  { uint32_t v = 0xb7350cu; esp -= 4; W32(esp, v); }
/* 7a21b8: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 7a21bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a21bc: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a21bf: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7a21c5u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7a21c5: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 7a21cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a21cc: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7a21d2: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x7a21d8u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 7a21d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a21d9: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 7a21df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a21e0: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7a21e3: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7a21e9u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7a21e9: mov esi, eax */
  esi = eax;
/* 7a21eb: mov ecx, 0xc */
  ecx = 0xcu;
/* 7a21f0: lea edi, [ebp - 0x6c] */
  edi = (uint32_t)(ebp + 0xffffff94u);
/* 7a21f3: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7a21f6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a21f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a21f9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7a21fc: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7a2202u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7a2202: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a2205: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 7a220b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a220d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a220f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2213: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2215: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 7a221b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a221c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a221f: mov edx, esp */
  edx = esp;
/* 7a2221: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7a2223: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a2226: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7a2229: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a222c: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 7a222f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a2232: mov edx, esp */
  edx = esp;
/* 7a2234: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a223b: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a223e: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7a2240: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7a2247: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a224a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7a224d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7a2254: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a2257: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a2258: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 7a225b: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x7a2261u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2261: /* 7a2261: mov edx, dword ptr [ebx + 0x88] */
  edx = R32((uint32_t)(ebx + 0x88u));
/* 7a2267: mov ecx, dword ptr [ebx + 0x2ac] */
  ecx = R32((uint32_t)(ebx + 0x2acu));
/* 7a226d: and edx, 0xfffdffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a2273: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 7a2279: mov eax, dword ptr [0xb5bf48] */
  eax = R32((uint32_t)(0xb5bf48u));
/* 7a227e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2280: je 0x7a22c2 */
  if (zf) goto L_7a22c2;
L_7a2282: /* 7a2282: mov ecx, dword ptr [ebx + 0x2a4] */
  ecx = R32((uint32_t)(ebx + 0x2a4u));
/* 7a2288: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a228a: jne 0x7a22af */
  if (!zf) goto L_7a22af;
L_7a228c: /* 7a228c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a228e: je 0x7a22bc */
  if (zf) goto L_7a22bc;
L_7a2290: /* 7a2290: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a2292: lea esi, [ebx + 0x2a0] */
  esi = (uint32_t)(ebx + 0x2a0u);
/* 7a2298: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a229a: mov ecx, esi */
  ecx = esi;
/* 7a229c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a22a2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a22a2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a22a4: mov edx, dword ptr [0xb5bf48] */
  edx = R32((uint32_t)(0xb5bf48u));
/* 7a22aa: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7a22ad: jmp 0x7a22b7 */
  goto L_7a22b7;
L_7a22af: /* 7a22af: mov ecx, dword ptr [ebx + 0x2a0] */
  ecx = R32((uint32_t)(ebx + 0x2a0u));
/* 7a22b5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_7a22b7: /* 7a22b7: mov eax, dword ptr [0xb5bf48] */
  eax = R32((uint32_t)(0xb5bf48u));
L_7a22bc: /* 7a22bc: mov dword ptr [ebx + 0x2ac], eax */
  W32((uint32_t)(ebx + 0x2acu), eax);
L_7a22c2: /* 7a22c2: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 7a22c8: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a22cb: je 0x7a2304 */
  if (zf) goto L_7a2304;
L_7a22cd: /* 7a22cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a22ce: mov ecx, esp */
  ecx = esp;
/* 7a22d0: push 0x162 */
  { uint32_t v = 0x162u; esp -= 4; W32(esp, v); }
/* 7a22d5: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a22dbu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a22db: mov ecx, ebx */
  ecx = ebx;
/* 7a22dd: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7a22e3u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7a22e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a22e5: je 0x7a2304 */
  if (zf) goto L_7a2304;
L_7a22e7: /* 7a22e7: mov edx, dword ptr [0xb7e338] */
  edx = R32((uint32_t)(0xb7e338u));
/* 7a22ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a22ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a22f0: mov ecx, ebx */
  ecx = ebx;
/* 7a22f2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7a22f8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7a22f8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7a22fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a22fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a22fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a22ff: mov ecx, ebx */
  ecx = ebx;
/* 7a2301: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7a2304u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2304: /* 7a2304: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a2307: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a2308: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a2309: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a2310: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a2311: mov esp, ebp */
  esp = ebp;
/* 7a2313: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a2314: ret  */
  esp += 4; SPILL(); return;
}

void f_7a2315(void) {
  LOAD_REGS();
L_7a2315: /* 7a2315: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a2318: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a231d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7a2320: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a2321: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7a2324: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2329u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a2329(); return;
}

void f_7a2329(void) {
  LOAD_REGS();
L_7a2329: /* 7a2329: push 0xa0b504 */
  { uint32_t v = 0xa0b504u; esp -= 4; W32(esp, v); }
/* 7a232e: push 0xacca90 */
  { uint32_t v = 0xacca90u; esp -= 4; W32(esp, v); }
/* 7a2333: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a2339u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a2339: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a233c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a233e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2340: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2345u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a2345: guest_badaddr(0x7a2345); return;
}

void f_7a25b0(void) {
  LOAD_REGS();
L_7a25b0: /* 7a25b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a25b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a25b2: mov esi, ecx */
  esi = ecx;
/* 7a25b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a25b5: lea edi, [esi + 0x574] */
  edi = (uint32_t)(esi + 0x574u);
/* 7a25bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a25bc: mov ecx, 0xb73540 */
  ecx = 0xb73540u;
/* 7a25c1: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7a25c7u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7a25c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a25c9: jne 0x7a25f7 */
  if (!zf) goto L_7a25f7;
L_7a25cb: /* 7a25cb: lea eax, [esi + 0x580] */
  eax = (uint32_t)(esi + 0x580u);
/* 7a25d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a25d2: mov ecx, 0xb7354c */
  ecx = 0xb7354cu;
/* 7a25d7: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7a25ddu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7a25dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a25df: jne 0x7a25f7 */
  if (!zf) goto L_7a25f7;
L_7a25e1: /* 7a25e1: lea ecx, [esi + 0x58c] */
  ecx = (uint32_t)(esi + 0x58cu);
/* 7a25e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a25e8: mov ecx, 0xb73558 */
  ecx = 0xb73558u;
/* 7a25ed: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7a25f3u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7a25f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a25f5: je 0x7a2645 */
  if (zf) goto L_7a2645;
L_7a25f7: /* 7a25f7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7a25f9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7a25fc: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 7a2602: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a2604: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 7a2607: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7a260a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7a260d: lea ecx, [esi + 0x580] */
  ecx = (uint32_t)(esi + 0x580u);
/* 7a2613: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a2615: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7a261b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a261d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7a2620: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a2623: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7a2626: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7a2629: lea edx, [esi + 0x58c] */
  edx = (uint32_t)(esi + 0x58cu);
/* 7a262f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a2631: lea eax, [esi + 0x188] */
  eax = (uint32_t)(esi + 0x188u);
/* 7a2637: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a2639: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7a263c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a263f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7a2642: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_7a2645: /* 7a2645: mov ecx, esi */
  ecx = esi;
/* 7a2647: call 0x6c2bc1 */
  esp -= 4; W32(esp, 0x7a264cu); SPILL(); f_6c2bc1(); if (g_unwind) return; RELOAD();
/* 7a264c: lea edi, [esi + 0x510] */
  edi = (uint32_t)(esi + 0x510u);
/* 7a2652: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2653: mov ecx, 0xb7353c */
  ecx = 0xb7353cu;
/* 7a2658: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a265eu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a265e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2660: je 0x7a267f */
  if (zf) goto L_7a267f;
L_7a2662: /* 7a2662: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2664: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7a2668: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a266eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a266e: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7a2672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2673: mov ecx, edi */
  ecx = edi;
/* 7a2675: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a267bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a267b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a267d: jne 0x7a26ad */
  if (!zf) goto L_7a26ad;
L_7a267f: /* 7a267f: mov ecx, dword ptr [esi + 0x35c] */
  ecx = R32((uint32_t)(esi + 0x35cu));
/* 7a2685: xor ecx, dword ptr [esi + 0x354] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7a268b: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a268e: je 0x7a26e8 */
  if (zf) goto L_7a26e8;
L_7a2690: /* 7a2690: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2692: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7a2696: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a269cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a269c: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 7a26a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a26a1: mov ecx, edi */
  ecx = edi;
/* 7a26a3: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a26a9u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a26a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a26ab: je 0x7a26e8 */
  if (zf) goto L_7a26e8;
L_7a26ad: /* 7a26ad: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 7a26b3: mov ecx, dword ptr [esi + 0x35c] */
  ecx = R32((uint32_t)(esi + 0x35cu));
/* 7a26b9: mov edx, dword ptr [esi + 0x35c] */
  edx = R32((uint32_t)(esi + 0x35cu));
/* 7a26bf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7a26c1: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7a26c4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a26c6: mov ecx, edx */
  ecx = edx;
/* 7a26c8: mov dword ptr [esi + 0x35c], edx */
  W32((uint32_t)(esi + 0x35cu), edx);
/* 7a26ce: movzx edx, byte ptr [esi + 0x358] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x358u)));
/* 7a26d5: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7a26d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a26d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a26da: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a26dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a26de: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7a26e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a26e1: mov ecx, esi */
  ecx = esi;
/* 7a26e3: call 0x6cc063 */
  esp -= 4; W32(esp, 0x7a26e8u); SPILL(); f_6cc063(); if (g_unwind) return; RELOAD();
L_7a26e8: /* 7a26e8: fld dword ptr [0xb5bf4c] */
  { double v = F32((uint32_t)(0xb5bf4cu)); FPUSH(v); }
/* 7a26ee: fcomp dword ptr [esi + 0x480] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x480u)));
  FPOP();
/* 7a26f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a26f6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a26f9: jnp 0x7a2724 */
  if (!pf) goto L_7a2724;
L_7a26fb: /* 7a26fb: mov ecx, dword ptr [esi + 0x480] */
  ecx = R32((uint32_t)(esi + 0x480u));
/* 7a2701: mov eax, dword ptr [0xb7e4ec] */
  eax = R32((uint32_t)(0xb7e4ecu));
/* 7a2706: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7a2708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a270a: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 7a270e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a270f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2711: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7a2715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2716: mov ecx, esi */
  ecx = esi;
/* 7a2718: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7a271eu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7a271e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a271f: mov ecx, esi */
  ecx = esi;
/* 7a2721: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7a2724u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2724: /* 7a2724: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a2725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a2726: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7a2727: ret  */
  esp += 4; SPILL(); return;
}

void f_7a2790(void) {
  LOAD_REGS();
L_7a2790: /* 7a2790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a2791: mov ebp, esp */
  ebp = esp;
/* 7a2793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a2795: push 0x9ce4c0 */
  { uint32_t v = 0x9ce4c0u; esp -= 4; W32(esp, v); }
/* 7a279a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a27a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a27a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a27a8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a27ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a27ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a27ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a27ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a27b1: mov esi, ecx */
  esi = ecx;
/* 7a27b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a27ba: call 0x6c2bc1 */
  esp -= 4; W32(esp, 0x7a27bfu); SPILL(); f_6c2bc1(); if (g_unwind) return; RELOAD();
/* 7a27bf: lea edi, [esi + 0x670] */
  edi = (uint32_t)(esi + 0x670u);
/* 7a27c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a27c6: mov ecx, 0xb73524 */
  ecx = 0xb73524u;
/* 7a27cb: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7a27d1u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7a27d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a27d3: je 0x7a2896 */
  if (zf) goto L_7a2896;
L_7a27d9: /* 7a27d9: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7a27db: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7a27e1: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 7a27e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a27e9: lea ecx, [esi + 0x600] */
  ecx = (uint32_t)(esi + 0x600u);
/* 7a27ef: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a27f1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a27f4: fstp dword ptr [esi + 0x648] */
  WF32((uint32_t)(esi + 0x648u), ST0); FPOP();
/* 7a27fa: fld dword ptr [esi + 0x674] */
  { double v = F32((uint32_t)(esi + 0x674u)); FPUSH(v); }
/* 7a2800: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a2803: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 7a2809: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a280c: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* 7a2812: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7a2815: mov ecx, dword ptr [esi + 0x180] */
  ecx = R32((uint32_t)(esi + 0x180u));
/* 7a281b: fstp dword ptr [esi + 0x64c] */
  WF32((uint32_t)(esi + 0x64cu), ST0); FPOP();
/* 7a2821: mov eax, dword ptr [esi + 0x184] */
  eax = R32((uint32_t)(esi + 0x184u));
/* 7a2827: fld dword ptr [esi + 0x678] */
  { double v = F32((uint32_t)(esi + 0x678u)); FPUSH(v); }
/* 7a282d: mov dword ptr [esi + 0x634], ecx */
  W32((uint32_t)(esi + 0x634u), ecx);
/* 7a2833: mov dword ptr [esi + 0x630], edx */
  W32((uint32_t)(esi + 0x630u), edx);
/* 7a2839: mov dword ptr [esi + 0x638], eax */
  W32((uint32_t)(esi + 0x638u), eax);
/* 7a283f: call 0x99c958 */
  esp -= 4; W32(esp, 0x7a2844u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7a2844: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a2846: mov byte ptr [esi + 0x33f], al */
  W8((uint32_t)(esi + 0x33fu), (eax & 0xffu));
/* 7a284c: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7a284f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a2852: mov byte ptr [esi + 0x340], al */
  W8((uint32_t)(esi + 0x340u), (eax & 0xffu));
/* 7a2858: mov eax, esp */
  eax = esp;
/* 7a285a: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7a2861: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a2864: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a2866: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7a286d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a2870: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7a2873: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 7a287a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a287d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a287f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7a2882: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7a2884: mov ecx, esi */
  ecx = esi;
/* 7a2886: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x7a288cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a288c: or dword ptr [esi + 0x88], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
L_7a2896: /* 7a2896: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a2899: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a289a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a289b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a28a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a28a3: mov esp, ebp */
  esp = ebp;
/* 7a28a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a28a6: ret  */
  esp += 4; SPILL(); return;
}

void f_7a28a7(void) {
  LOAD_REGS();
L_7a28a7: /* 7a28a7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a28aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a28af: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7a28b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a28b3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a28b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a28bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a28bb(); return;
}

void f_7a28bb(void) {
  LOAD_REGS();
L_7a28bb: /* 7a28bb: push 0xa0b53c */
  { uint32_t v = 0xa0b53cu; esp -= 4; W32(esp, v); }
/* 7a28c0: push 0xacca98 */
  { uint32_t v = 0xacca98u; esp -= 4; W32(esp, v); }
/* 7a28c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a28cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a28cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a28ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a28d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a28d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a28d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a28d7: guest_badaddr(0x7a28d7); return;
}

void f_7a2940(void) {
  LOAD_REGS();
L_7a2940: /* 7a2940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a2941: mov ebp, esp */
  ebp = esp;
/* 7a2943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a2945: push 0x9ce4d0 */
  { uint32_t v = 0x9ce4d0u; esp -= 4; W32(esp, v); }
/* 7a294a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a2950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a2958: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a295b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a295c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a295d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a295e: xor edi, edi */
  edi = 0;
/* 7a2960: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a2963: mov esi, ecx */
  esi = ecx;
/* 7a2965: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7a2968: call 0x6c2bc1 */
  esp -= 4; W32(esp, 0x7a296du); SPILL(); f_6c2bc1(); if (g_unwind) return; RELOAD();
/* 7a296d: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7a2973: cmp byte ptr [eax + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a297a: jne 0x7a2a5c */
  if (!zf) goto L_7a2a5c;
L_7a2980: /* 7a2980: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a2986: cmp dword ptr [eax + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2989: je 0x7a29c4 */
  if (zf) goto L_7a29c4;
L_7a298b: /* 7a298b: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7a298e: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7a2991: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* 7a2994: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a2996: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7a2999: cmp dword ptr [ecx + 0x448], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x448u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a299f: jne 0x7a29c4 */
  if (!zf) goto L_7a29c4;
L_7a29a1: /* 7a29a1: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7a29a4: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 7a29a7: fld qword ptr [eax + 0x248] */
  { double v = F64((uint32_t)(eax + 0x248u)); FPUSH(v); }
/* 7a29ad: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 7a29b3: fmul qword ptr [0xa0b5d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5d8u)));
/* 7a29b9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7a29beu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7a29be: add dword ptr [esi + 0x348], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x348u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x348u), r);
  }
L_7a29c4: /* 7a29c4: cmp dword ptr [esi + 0x348], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x348u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a29ca: jge 0x7a29d2 */
  if ((sf == of)) goto L_7a29d2;
L_7a29cc: /* 7a29cc: mov dword ptr [esi + 0x348], edi */
  W32((uint32_t)(esi + 0x348u), edi);
L_7a29d2: /* 7a29d2: lea ebx, [esi + 0x358] */
  ebx = (uint32_t)(esi + 0x358u);
/* 7a29d8: lea edi, [esi + 0x388] */
  edi = (uint32_t)(esi + 0x388u);
/* 7a29de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a29df: mov ecx, edi */
  ecx = edi;
/* 7a29e1: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x7a29e7u); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 7a29e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a29e9: je 0x7a2a1e */
  if (zf) goto L_7a2a1e;
L_7a29eb: /* 7a29eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a29ec: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 7a29f2: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7a29f8u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7a29f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a29f9: mov ecx, edi */
  ecx = edi;
/* 7a29fb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7a2a01u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7a2a01: mov ecx, dword ptr [0xb7e4e8] */
  ecx = R32((uint32_t)(0xb7e4e8u));
/* 7a2a07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a2a0a: mov ecx, esi */
  ecx = esi;
/* 7a2a0c: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7a2a12u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7a2a12: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a2a14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2a19: mov ecx, esi */
  ecx = esi;
/* 7a2a1b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7a2a1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2a1e: /* 7a2a1e: lea edi, [esi + 0x370] */
  edi = (uint32_t)(esi + 0x370u);
/* 7a2a24: lea ebx, [esi + 0x364] */
  ebx = (uint32_t)(esi + 0x364u);
/* 7a2a2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2a2b: mov ecx, ebx */
  ecx = ebx;
/* 7a2a2d: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x7a2a33u); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 7a2a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2a35: je 0x7a2a5c */
  if (zf) goto L_7a2a5c;
L_7a2a37: /* 7a2a37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a2a38: mov ecx, edi */
  ecx = edi;
/* 7a2a3a: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7a2a40u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7a2a40: mov eax, dword ptr [0xb7e4e4] */
  eax = R32((uint32_t)(0xb7e4e4u));
/* 7a2a45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2a48: mov ecx, esi */
  ecx = esi;
/* 7a2a4a: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7a2a50u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7a2a50: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a2a52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2a57: mov ecx, esi */
  ecx = esi;
/* 7a2a59: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7a2a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2a5c: /* 7a2a5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a2a5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a2a60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a2a61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a2a68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a2a69: mov esp, ebp */
  esp = ebp;
/* 7a2a6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a2a6c: ret  */
  esp += 4; SPILL(); return;
}

void f_7a2a6d(void) {
  LOAD_REGS();
L_7a2a6d: /* 7a2a6d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a2a70: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a2a75: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a2a78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a2a79: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a2a7c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2a81u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a2a81(); return;
}

void f_7a2a81(void) {
  LOAD_REGS();
L_7a2a81: /* 7a2a81: push 0xa0b578 */
  { uint32_t v = 0xa0b578u; esp -= 4; W32(esp, v); }
/* 7a2a86: push 0xaccaa0 */
  { uint32_t v = 0xaccaa0u; esp -= 4; W32(esp, v); }
/* 7a2a8b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a2a91u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a2a91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a2a94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2a98: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2a9du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a2a9d: guest_badaddr(0x7a2a9d); return;
}

void f_7a2b00(void) {
  LOAD_REGS();
L_7a2b00: /* 7a2b00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a2b01: mov ebp, esp */
  ebp = esp;
/* 7a2b03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a2b05: push 0x9ce4e0 */
  { uint32_t v = 0x9ce4e0u; esp -= 4; W32(esp, v); }
/* 7a2b0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a2b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2b11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a2b18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a2b1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a2b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a2b1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2b1e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a2b21: mov esi, ecx */
  esi = ecx;
/* 7a2b23: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a2b2a: call 0x6c2bc1 */
  esp -= 4; W32(esp, 0x7a2b2fu); SPILL(); f_6c2bc1(); if (g_unwind) return; RELOAD();
/* 7a2b2f: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7a2b35: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2b37: je 0x7a2bd0 */
  if (zf) goto L_7a2bd0;
L_7a2b3d: /* 7a2b3d: cmp ecx, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2b40: jne 0x7a2bd0 */
  if (!zf) goto L_7a2bd0;
L_7a2b46: /* 7a2b46: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7a2b4c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2b4f: jne 0x7a2bd0 */
  if (!zf) goto L_7a2bd0;
L_7a2b51: /* 7a2b51: call 0x6c1195 */
  esp -= 4; W32(esp, 0x7a2b56u); SPILL(); f_6c1195(); if (g_unwind) return; RELOAD();
/* 7a2b56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2b58: je 0x7a2b76 */
  if (zf) goto L_7a2b76;
L_7a2b5a: /* 7a2b5a: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 7a2b60: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7a2b66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2b68: je 0x7a2bd0 */
  if (zf) goto L_7a2bd0;
L_7a2b6a: /* 7a2b6a: test dword ptr [eax + 0x88], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2b74: je 0x7a2bd0 */
  if (zf) goto L_7a2bd0;
L_7a2b76: /* 7a2b76: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 7a2b7c: mov cl, byte ptr [esi + 0x33c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x33cu))) & 0xffu);
/* 7a2b82: cmp byte ptr [eax + 0x398], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x398u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2b88: je 0x7a2b97 */
  if (zf) goto L_7a2b97;
L_7a2b8a: /* 7a2b8a: mov byte ptr [eax + 0x398], cl */
  W8((uint32_t)(eax + 0x398u), (ecx & 0xffu));
/* 7a2b90: mov ecx, esi */
  ecx = esi;
/* 7a2b92: call 0x6c79a0 */
  esp -= 4; W32(esp, 0x7a2b97u); SPILL(); f_6c79a0(); if (g_unwind) return; RELOAD();
L_7a2b97: /* 7a2b97: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* 7a2b9d: mov ecx, dword ptr [edx + 0x394] */
  ecx = R32((uint32_t)(edx + 0x394u));
/* 7a2ba3: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 7a2ba9: mov edi, ecx */
  edi = ecx;
/* 7a2bab: shr edi, 0xd */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 7a2bae: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a2bb1: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7a2bb4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2bb6: je 0x7a2bd0 */
  if (zf) goto L_7a2bd0;
L_7a2bb8: /* 7a2bb8: and ecx, 0xffffdfff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7a2bbe: shl eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a2bc1: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7a2bc3: mov dword ptr [edx + 0x394], ecx */
  W32((uint32_t)(edx + 0x394u), ecx);
/* 7a2bc9: mov ecx, esi */
  ecx = esi;
/* 7a2bcb: call 0x6c79a0 */
  esp -= 4; W32(esp, 0x7a2bd0u); SPILL(); f_6c79a0(); if (g_unwind) return; RELOAD();
L_7a2bd0: /* 7a2bd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a2bd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a2bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a2bd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a2bdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a2bdd: mov esp, ebp */
  esp = ebp;
/* 7a2bdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a2be0: ret  */
  esp += 4; SPILL(); return;
}

void f_7a2be1(void) {
  LOAD_REGS();
L_7a2be1: /* 7a2be1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a2be4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a2be9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7a2bec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a2bed: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a2bf0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2bf5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a2bf5(); return;
}

void f_7a2bf5(void) {
  LOAD_REGS();
L_7a2bf5: /* 7a2bf5: push 0xa0b5f8 */
  { uint32_t v = 0xa0b5f8u; esp -= 4; W32(esp, v); }
/* 7a2bfa: push 0xaccaa8 */
  { uint32_t v = 0xaccaa8u; esp -= 4; W32(esp, v); }
/* 7a2bff: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a2c05u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a2c05: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a2c08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2c0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2c0c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2c11u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a2c11: guest_badaddr(0x7a2c11); return;
}

void f_7a2c70(void) {
  LOAD_REGS();
L_7a2c70: /* 7a2c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a2c71: mov ebp, esp */
  ebp = esp;
/* 7a2c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a2c75: push 0x9ce4f0 */
  { uint32_t v = 0x9ce4f0u; esp -= 4; W32(esp, v); }
/* 7a2c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a2c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a2c88: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a2c8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a2c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a2c8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2c8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a2c91: mov edi, ecx */
  edi = ecx;
/* 7a2c93: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a2c9a: call 0x6c45ed */
  esp -= 4; W32(esp, 0x7a2c9fu); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 7a2c9f: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a2ca4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2ca7: je 0x7a2d4d */
  if (zf) goto L_7a2d4d;
L_7a2cad: /* 7a2cad: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7a2cb3: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 7a2cb6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a2cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2cba: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7a2cbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a2cbd: xor eax, eax */
  eax = 0;
/* 7a2cbf: mov al, byte ptr [edi + 0x374] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x374u))) & 0xffu);
/* 7a2cc5: xor ecx, ecx */
  ecx = 0;
/* 7a2cc7: mov cl, byte ptr [edi + 0x376] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x376u))) & 0xffu);
/* 7a2ccd: xor edx, edx */
  edx = 0;
/* 7a2ccf: mov dl, byte ptr [edi + 0x375] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x375u))) & 0xffu);
/* 7a2cd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2cd6: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7a2cd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a2cda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a2cdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2cdc: call 0x6c3954 */
  esp -= 4; W32(esp, 0x7a2ce1u); SPILL(); f_6c3954(); if (g_unwind) return; RELOAD();
/* 7a2ce1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a2ce3: lea ecx, [edi + 0x368] */
  ecx = (uint32_t)(edi + 0x368u);
/* 7a2ce9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a2ceb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a2cee: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a2cf1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a2cf4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a2cf7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7a2cfa: xor esi, esi */
  esi = 0;
/* 7a2cfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a2d00: /* 7a2d00: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7a2d06: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a2d09: jge 0x7a2d4d */
  if ((sf == of)) goto L_7a2d4d;
L_7a2d0b: /* 7a2d0b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7a2d0e: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7a2d11: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2d13: je 0x7a2d1a */
  if (zf) goto L_7a2d1a;
L_7a2d15: /* 7a2d15: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7a2d1au); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7a2d1a: /* 7a2d1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a2d1b: jmp 0x7a2d00 */
  goto L_7a2d00;
L_7a2d4d: /* 7a2d4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a2d50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a2d51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a2d52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a2d59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a2d5a: mov esp, ebp */
  esp = ebp;
/* 7a2d5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a2d5d: ret  */
  esp += 4; SPILL(); return;
}

void f_7a2d1d(void) {
  LOAD_REGS();
L_7a2d1d: /* 7a2d1d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a2d20: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a2d25: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7a2d28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2d29: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a2d2c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2d31u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a2d31(); return;
}

void f_7a2d31(void) {
  LOAD_REGS();
L_7a2d31: /* 7a2d31: push 0xa0b64c */
  { uint32_t v = 0xa0b64cu; esp -= 4; W32(esp, v); }
/* 7a2d36: push 0xaccad4 */
  { uint32_t v = 0xaccad4u; esp -= 4; W32(esp, v); }
/* 7a2d3b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a2d41u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a2d41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a2d44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2d48: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2d4du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a2d4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a2d50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a2d51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a2d52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a2d59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a2d5a: mov esp, ebp */
  esp = ebp;
/* 7a2d5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a2d5d: ret  */
  esp += 4; SPILL(); return;
}

void f_7a2da0(void) {
  LOAD_REGS();
L_7a2da0: /* 7a2da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a2da1: mov ebp, esp */
  ebp = esp;
/* 7a2da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a2da5: push 0x9ce522 */
  { uint32_t v = 0x9ce522u; esp -= 4; W32(esp, v); }
/* 7a2daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a2db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a2db8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a2dbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a2dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a2dbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2dbe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a2dc1: mov esi, ecx */
  esi = ecx;
/* 7a2dc3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a2dca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7a2dd0: /* 7a2dd0: mov ebx, dword ptr [esi + 0x264] */
  ebx = R32((uint32_t)(esi + 0x264u));
/* 7a2dd6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a2dd8: jle 0x7a2e0f */
  if ((zf || sf != of)) goto L_7a2e0f;
L_7a2dda: /* 7a2dda: mov eax, dword ptr [esi + 0x260] */
  eax = R32((uint32_t)(esi + 0x260u));
/* 7a2de0: mov edi, dword ptr [eax + ebx*4 - 4] */
  edi = R32((uint32_t)(eax + ebx*4 + 0xfffffffcu));
/* 7a2de4: dec dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(edi + 0x4u), r);
  }
/* 7a2de7: jne 0x7a2dfe */
  if (!zf) goto L_7a2dfe;
L_7a2de9: /* 7a2de9: mov ecx, edi */
  ecx = edi;
/* 7a2deb: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x7a2df0u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 7a2df0: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7a2df6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7a2df8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a2dfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2dfb: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7a2dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2dfe: /* 7a2dfe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a2e00: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 7a2e01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a2e02: lea ecx, [esi + 0x260] */
  ecx = (uint32_t)(esi + 0x260u);
/* 7a2e08: call 0x6cb320 */
  esp -= 4; W32(esp, 0x7a2e0du); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 7a2e0d: jmp 0x7a2dd0 */
  goto L_7a2dd0;
L_7a2e0f: /* 7a2e0f: xor ebx, ebx */
  ebx = 0;
L_7a2e11: /* 7a2e11: cmp ebx, dword ptr [esi + 0x270] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x270u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a2e17: jge 0x7a2e84 */
  if ((sf == of)) goto L_7a2e84;
L_7a2e19: /* 7a2e19: mov eax, dword ptr [esi + 0x26c] */
  eax = R32((uint32_t)(esi + 0x26cu));
/* 7a2e1f: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 7a2e22: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7a2e24: dec dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(edi + 0x4u), r);
  }
/* 7a2e27: jne 0x7a2e3e */
  if (!zf) goto L_7a2e3e;
L_7a2e29: /* 7a2e29: mov ecx, edi */
  ecx = edi;
/* 7a2e2b: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x7a2e30u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 7a2e30: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7a2e36: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a2e38: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a2e3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2e3b: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a2e3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2e3e: /* 7a2e3e: mov ecx, dword ptr [esi + 0x26c] */
  ecx = R32((uint32_t)(esi + 0x26cu));
/* 7a2e44: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 7a2e47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a2e49: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7a2e4c: je 0x7a2e81 */
  if (zf) goto L_7a2e81;
L_7a2e4e: /* 7a2e4e: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 7a2e51: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7a2e55: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7a2e5bu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7a2e5b: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 7a2e5e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7a2e62: call 0x6cb555 */
  esp -= 4; W32(esp, 0x7a2e67u); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 7a2e67: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7a2e6a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a2e6e: call 0x6cae43 */
  esp -= 4; W32(esp, 0x7a2e73u); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 7a2e73: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7a2e79: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a2e7b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a2e7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2e7e: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a2e81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a2e81: /* 7a2e81: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7a2e82: jmp 0x7a2e11 */
  goto L_7a2e11;
L_7a2e84: /* 7a2e84: lea ecx, [esi + 0x26c] */
  ecx = (uint32_t)(esi + 0x26cu);
/* 7a2e8a: xor eax, eax */
  eax = 0;
/* 7a2e8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a2e90: /* 7a2e90: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a2e93: jge 0x7a2e98 */
  if ((sf == of)) goto L_7a2e98;
L_7a2e95: /* 7a2e95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a2e96: jmp 0x7a2e90 */
  goto L_7a2e90;
L_7a2e98: /* 7a2e98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2e9a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a2e9c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7a2ea2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7a2ea2: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 7a2ea5: xor ebx, ebx */
  ebx = 0;
/* 7a2ea7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2ea9: je 0x7a2ebc */
  if (zf) goto L_7a2ebc;
L_7a2eab: /* 7a2eab: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7a2eb1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7a2eb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a2eb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2eb6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7a2eb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a2eb9: mov dword ptr [esi + 0x64], ebx */
  W32((uint32_t)(esi + 0x64u), ebx);
L_7a2ebc: /* 7a2ebc: mov edi, dword ptr [esi + 0x60] */
  edi = R32((uint32_t)(esi + 0x60u));
/* 7a2ebf: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2ec1: je 0x7a2ef0 */
  if (zf) goto L_7a2ef0;
L_7a2ec3: /* 7a2ec3: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7a2ec6: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* 7a2ec9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a2ecd: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a2ed3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a2ed3: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7a2ed6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a2eda: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a2ee0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a2ee0: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7a2ee5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a2ee7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a2ee9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a2eea: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7a2eedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a2eed: mov dword ptr [esi + 0x60], ebx */
  W32((uint32_t)(esi + 0x60u), ebx);
L_7a2ef0: /* 7a2ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a2ef1: call 0x6c20a4 */
  esp -= 4; W32(esp, 0x7a2ef6u); SPILL(); f_6c20a4(); if (g_unwind) return; RELOAD();
/* 7a2ef6: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7a2efc: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2efe: je 0x7a2f35 */
  if (zf) goto L_7a2f35;
L_7a2f00: /* 7a2f00: xor eax, eax */
  eax = 0;
L_7a2f02: /* 7a2f02: cmp eax, dword ptr [ecx + 0x1188] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1188u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a2f08: jge 0x7a2f35 */
  if ((sf == of)) goto L_7a2f35;
L_7a2f0a: /* 7a2f0a: mov edx, dword ptr [ecx + 0x1184] */
  edx = R32((uint32_t)(ecx + 0x1184u));
/* 7a2f10: cmp dword ptr [edx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2f13: je 0x7a2f18 */
  if (zf) goto L_7a2f18;
L_7a2f15: /* 7a2f15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a2f16: jmp 0x7a2f02 */
  goto L_7a2f02;
L_7a2f18: /* 7a2f18: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2f1b: je 0x7a2f35 */
  if (zf) goto L_7a2f35;
L_7a2f1d: /* 7a2f1d: push 0x558 */
  { uint32_t v = 0x558u; esp -= 4; W32(esp, v); }
/* 7a2f22: push 0xaccadc */
  { uint32_t v = 0xaccadcu; esp -= 4; W32(esp, v); }
/* 7a2f27: push 0xaccae8 */
  { uint32_t v = 0xaccae8u; esp -= 4; W32(esp, v); }
/* 7a2f2c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7a2f32u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7a2f32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a2f35: /* 7a2f35: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 7a2f3b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2f3d: je 0x7a2f55 */
  if (zf) goto L_7a2f55;
L_7a2f3f: /* 7a2f3f: mov eax, dword ptr [0xcfa5f4] */
  eax = R32((uint32_t)(0xcfa5f4u));
/* 7a2f44: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2f46: jne 0x7a2f55 */
  if (!zf) goto L_7a2f55;
L_7a2f48: /* 7a2f48: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a2f4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a2f4c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7a2f4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a2f4f: mov dword ptr [esi + 0x30c], ebx */
  W32((uint32_t)(esi + 0x30cu), ebx);
L_7a2f55: /* 7a2f55: cmp dword ptr [esi + 0x120], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x120u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a2f5b: jle 0x7a2f99 */
  if ((zf || sf != of)) goto L_7a2f99;
L_7a2f5d: /* 7a2f5d: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7a2f63: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2f65: je 0x7a2f79 */
  if (zf) goto L_7a2f79;
L_7a2f67: /* 7a2f67: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7a2f6d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a2f6f: je 0x7a2f79 */
  if (zf) goto L_7a2f79;
L_7a2f71: /* 7a2f71: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a2f73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a2f74: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7a2f77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a2f77: jmp 0x7a2f99 */
  goto L_7a2f99;
L_7a2f79: /* 7a2f79: mov ecx, esi */
  ecx = esi;
/* 7a2f7b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7a2f81u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7a2f81: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7a2f87: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a2f89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a2f8a: push 0xaccb28 */
  { uint32_t v = 0xaccb28u; esp -= 4; W32(esp, v); }
/* 7a2f8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a2f90: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7a2f96u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7a2f96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a2f99: /* 7a2f99: mov ecx, esi */
  ecx = esi;
/* 7a2f9b: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x7a2fa1u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 7a2fa1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a2fa4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a2fa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a2fa6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a2fad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a2fae: mov esp, ebp */
  esp = ebp;
/* 7a2fb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a2fb1: ret  */
  esp += 4; SPILL(); return;
}

void f_7a2fb2(void) {
  LOAD_REGS();
L_7a2fb2: /* 7a2fb2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a2fb5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a2fba: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a2fbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a2fbe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a2fc1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2fc6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a2fc6(); return;
}

void f_7a2fc6(void) {
  LOAD_REGS();
L_7a2fc6: /* 7a2fc6: push 0xa0b68c */
  { uint32_t v = 0xa0b68cu; esp -= 4; W32(esp, v); }
/* 7a2fcb: push 0xaccbac */
  { uint32_t v = 0xaccbacu; esp -= 4; W32(esp, v); }
/* 7a2fd0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a2fd6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a2fd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a2fd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2fdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a2fdd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a2fe2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a2fe2: guest_badaddr(0x7a2fe2); return;
}

void f_7a3090(void) {
  LOAD_REGS();
L_7a3090: /* 7a3090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3091: mov ebp, esp */
  ebp = esp;
/* 7a3093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3095: push 0x9ce540 */
  { uint32_t v = 0x9ce540u; esp -= 4; W32(esp, v); }
/* 7a309a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a30a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a30a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a30a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a30ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a30ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a30ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a30ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a30b1: mov esi, ecx */
  esi = ecx;
/* 7a30b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a30ba: call 0x6c2bc1 */
  esp -= 4; W32(esp, 0x7a30bfu); SPILL(); f_6c2bc1(); if (g_unwind) return; RELOAD();
/* 7a30bf: mov al, byte ptr [esi + 0x384] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x384u))) & 0xffu);
/* 7a30c5: cmp al, byte ptr [esi + 0x385] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x385u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a30cb: je 0x7a30fe */
  if (zf) goto L_7a30fe;
L_7a30cd: /* 7a30cd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a30cf: mov eax, dword ptr [0xb7e4a0] */
  eax = R32((uint32_t)(0xb7e4a0u));
/* 7a30d4: mov ecx, esi */
  ecx = esi;
/* 7a30d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a30d8: jne 0x7a30df */
  if (!zf) goto L_7a30df;
L_7a30da: /* 7a30da: mov eax, dword ptr [0xb7e4a4] */
  eax = R32((uint32_t)(0xb7e4a4u));
L_7a30df: /* 7a30df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a30e0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7a30e6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7a30e6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a30e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a30ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a30ec: mov ecx, esi */
  ecx = esi;
/* 7a30ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a30ef: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7a30f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a30f2: mov al, byte ptr [esi + 0x384] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x384u))) & 0xffu);
/* 7a30f8: mov byte ptr [esi + 0x385], al */
  W8((uint32_t)(esi + 0x385u), (eax & 0xffu));
L_7a30fe: /* 7a30fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3101: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3102: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a3103: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a310a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a310b: mov esp, ebp */
  esp = ebp;
/* 7a310d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a310e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a310f(void) {
  LOAD_REGS();
L_7a310f: /* 7a310f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3112: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a3117: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7a311a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a311b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a311e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3123u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a3123(); return;
}

void f_7a3123(void) {
  LOAD_REGS();
L_7a3123: /* 7a3123: push 0xa0b6b8 */
  { uint32_t v = 0xa0b6b8u; esp -= 4; W32(esp, v); }
/* 7a3128: push 0xacce38 */
  { uint32_t v = 0xacce38u; esp -= 4; W32(esp, v); }
/* 7a312d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a3133u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a3133: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a3136: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3138: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a313a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a313fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a313f: guest_badaddr(0x7a313f); return;
}

void f_7a3170(void) {
  LOAD_REGS();
L_7a3170: /* 7a3170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3171: mov ebp, esp */
  ebp = esp;
/* 7a3173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3175: push 0x9ce550 */
  { uint32_t v = 0x9ce550u; esp -= 4; W32(esp, v); }
/* 7a317a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a3180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a3188: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a318b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a318c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a318d: mov esi, ecx */
  esi = ecx;
/* 7a318f: fld dword ptr [esi + 0x50c] */
  { double v = F32((uint32_t)(esi + 0x50cu)); FPUSH(v); }
/* 7a3195: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a3196: fcomp dword ptr [0xb5bf44] */
  fpu_com(ST0, F32((uint32_t)(0xb5bf44u)));
  FPOP();
/* 7a319c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a319f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a31a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a31a8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a31ab: jnp 0x7a31be */
  if (!pf) goto L_7a31be;
L_7a31ad: /* 7a31ad: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7a31b2u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7a31b2: mov ecx, dword ptr [esi + 0x50c] */
  ecx = R32((uint32_t)(esi + 0x50cu));
/* 7a31b8: mov dword ptr [eax + 0x3cc], ecx */
  W32((uint32_t)(eax + 0x3ccu), ecx);
L_7a31be: /* 7a31be: mov ecx, esi */
  ecx = esi;
/* 7a31c0: call 0x6c2bc1 */
  esp -= 4; W32(esp, 0x7a31c5u); SPILL(); f_6c2bc1(); if (g_unwind) return; RELOAD();
/* 7a31c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a31c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a31c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a31ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a31d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a31d2: mov esp, ebp */
  esp = ebp;
/* 7a31d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a31d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7a31d6(void) {
  LOAD_REGS();
L_7a31d6: /* 7a31d6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a31d9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a31de: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7a31e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a31e2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a31e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a31eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a31ea(); return;
}

void f_7a31ea(void) {
  LOAD_REGS();
L_7a31ea: /* 7a31ea: push 0xa0b70c */
  { uint32_t v = 0xa0b70cu; esp -= 4; W32(esp, v); }
/* 7a31ef: push 0xacca88 */
  { uint32_t v = 0xacca88u; esp -= 4; W32(esp, v); }
/* 7a31f4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a31fau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a31fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a31fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a31ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3201: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3206u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a3206: guest_badaddr(0x7a3206); return;
}

void f_7a3240(void) {
  LOAD_REGS();
L_7a3240: /* 7a3240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3241: mov ebp, esp */
  ebp = esp;
/* 7a3243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3245: push 0x9ce560 */
  { uint32_t v = 0x9ce560u; esp -= 4; W32(esp, v); }
/* 7a324a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a3250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a3258: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3259: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a325c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a325d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a325e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a325f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a3262: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a3265: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a326c: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3273: je 0x7a328a */
  if (zf) goto L_7a328a;
L_7a3275: /* 7a3275: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3278: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3279: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a327f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a3281: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a3287: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7a328au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a328a: /* 7a328a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a328d: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x7a3293u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 7a3293: jmp 0x7a32c5 */
  goto L_7a32c5;
L_7a32c5: /* 7a32c5: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a32cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a32cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a32d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a32d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a32d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a32d9: mov esp, ebp */
  esp = ebp;
/* 7a32db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a32dc: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3295(void) {
  LOAD_REGS();
L_7a3295: /* 7a3295: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3298: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a329b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a32a0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a32a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a32a4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a32a9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a32a9(); return;
}

void f_7a32a9(void) {
  LOAD_REGS();
L_7a32a9: /* 7a32a9: push 0xa0b74c */
  { uint32_t v = 0xa0b74cu; esp -= 4; W32(esp, v); }
/* 7a32ae: push 0xacd5a0 */
  { uint32_t v = 0xacd5a0u; esp -= 4; W32(esp, v); }
/* 7a32b3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a32b9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a32b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a32bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a32be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a32c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a32c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a32c5: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a32cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a32cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a32d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a32d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a32d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a32d9: mov esp, ebp */
  esp = ebp;
/* 7a32db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a32dc: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3310(void) {
  LOAD_REGS();
L_7a3310: /* 7a3310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3311: mov ebp, esp */
  ebp = esp;
/* 7a3313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3315: push 0x9ce570 */
  { uint32_t v = 0x9ce570u; esp -= 4; W32(esp, v); }
/* 7a331a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a3320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a3328: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3329: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a332c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a332d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a332e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a332f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a3332: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a3335: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a333c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a333f: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x7a3345u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 7a3345: jmp 0x7a3377 */
  goto L_7a3377;
L_7a3377: /* 7a3377: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a337e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3381: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a3388: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3389: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a338a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a338b: mov esp, ebp */
  esp = ebp;
/* 7a338d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a338e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3347(void) {
  LOAD_REGS();
L_7a3347: /* 7a3347: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a334a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a334d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a3352: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a3355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3356: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a335bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a335b(); return;
}

void f_7a335b(void) {
  LOAD_REGS();
L_7a335b: /* 7a335b: push 0xa0b774 */
  { uint32_t v = 0xa0b774u; esp -= 4; W32(esp, v); }
/* 7a3360: push 0xacd5a8 */
  { uint32_t v = 0xacd5a8u; esp -= 4; W32(esp, v); }
/* 7a3365: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a336bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a336b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a336e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3370: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3372: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3377u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a3377: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a337e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3381: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a3388: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3389: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a338a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a338b: mov esp, ebp */
  esp = ebp;
/* 7a338d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a338e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a33b0(void) {
  LOAD_REGS();
L_7a33b0: /* 7a33b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a33b1: mov ebp, esp */
  ebp = esp;
/* 7a33b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a33b5: push 0x9ce580 */
  { uint32_t v = 0x9ce580u; esp -= 4; W32(esp, v); }
/* 7a33ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a33c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a33c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a33c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a33c9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a33cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a33cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a33ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a33cf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a33d2: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a33d5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a33dc: jmp 0x7a340e */
  goto L_7a340e;
L_7a340e: /* 7a340e: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a3415: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3418: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a341f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a3421: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a3422: mov esp, ebp */
  esp = ebp;
/* 7a3424: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a3425: ret  */
  esp += 4; SPILL(); return;
}

void f_7a33de(void) {
  LOAD_REGS();
L_7a33de: /* 7a33de: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a33e1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a33e4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a33e9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a33ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a33ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a33f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a33f2(); return;
}

void f_7a33f2(void) {
  LOAD_REGS();
L_7a33f2: /* 7a33f2: push 0xa0b79c */
  { uint32_t v = 0xa0b79cu; esp -= 4; W32(esp, v); }
/* 7a33f7: push 0xacd5b0 */
  { uint32_t v = 0xacd5b0u; esp -= 4; W32(esp, v); }
/* 7a33fc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a3402u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a3402: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a3405: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3407: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3409: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a340eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a340e: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a3415: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3418: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a341f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a3421: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a3422: mov esp, ebp */
  esp = ebp;
/* 7a3424: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a3425: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3450(void) {
  LOAD_REGS();
L_7a3450: /* 7a3450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3451: mov ebp, esp */
  ebp = esp;
/* 7a3453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3455: push 0x9ce590 */
  { uint32_t v = 0x9ce590u; esp -= 4; W32(esp, v); }
/* 7a345a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a3460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a3468: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3469: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a346c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a346d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a346e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a346f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a3472: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7a3475: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a347c: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a347f: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7a3482: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7a3484: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7a3487: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7a348e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a3491: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7a3493: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a3496: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a3499: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 7a349c: movsx edx, word ptr [ecx] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx)));
/* 7a349f: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7a34a2: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a34a5: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 7a34a8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a34ab: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7a34b2: jmp 0x7a34bd */
  goto L_7a34bd;
L_7a34b4: /* 7a34b4: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a34b7: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a34ba: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
L_7a34bd: /* 7a34bd: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a34c0: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a34c3: jae 0x7a354f */
  if (!cf) goto L_7a354f;
L_7a34c9: /* 7a34c9: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a34cc: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a34ce: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a34d1: movsx eax, word ptr [edx + ecx*2] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + ecx*2)));
/* 7a34d5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a34d8: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a34db: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a34dd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a34e0: movsx eax, word ptr [edx + ecx*2 + 2] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + ecx*2 + 0x2u)));
/* 7a34e5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7a34e8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a34eb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a34ee: lea eax, [edx + ecx + 0x20000] */
  eax = (uint32_t)(edx + ecx + 0x20000u);
/* 7a34f5: add eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a34f8: add eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a34fb: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7a34fe: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a3501: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7a3504: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a3507: add edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a350a: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7a350d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a3510: add eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3515: and eax, 0xfffffc00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffc00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a351a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a351d: cmp dword ptr [ebp - 0x24], 0x3fc00 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x3fc00u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a3524: jle 0x7a352d */
  if ((zf || sf != of)) goto L_7a352d;
L_7a3526: /* 7a3526: mov dword ptr [ebp - 0x24], 0x3fc00 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3fc00u);
L_7a352d: /* 7a352d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a3530: sar ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 7a3533: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7a3536: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3539: add edx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a353c: mov al, byte ptr [ebp - 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc4u))) & 0xffu);
/* 7a353f: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 7a3541: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a3544: sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a3547: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7a354a: jmp 0x7a34b4 */
  goto L_7a34b4;
L_7a354f: /* 7a354f: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a3552: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3555: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 7a3558: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a355b: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 7a355e: mov word ptr [edx], 8 */
  W16((uint32_t)(edx), 0x8u);
/* 7a3563: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a3566: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a3568: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a356a: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7a356c: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a356f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a3571: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a3573: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a3576: mov dword ptr [edx + 0x3c], 1 */
  W32((uint32_t)(edx + 0x3cu), 0x1u);
/* 7a357d: jmp 0x7a35af */
  goto L_7a35af;
L_7a35af: /* 7a35af: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a35b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a35b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a35c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a35c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a35c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a35c3: mov esp, ebp */
  esp = ebp;
/* 7a35c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a35c6: ret  */
  esp += 4; SPILL(); return;
}

void f_7a357f(void) {
  LOAD_REGS();
L_7a357f: /* 7a357f: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a3582: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7a3585: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a358a: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7a358d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a358e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3593u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a3593(); return;
}

void f_7a3593(void) {
  LOAD_REGS();
L_7a3593: /* 7a3593: push 0xa0b7cc */
  { uint32_t v = 0xa0b7ccu; esp -= 4; W32(esp, v); }
/* 7a3598: push 0xacd5d8 */
  { uint32_t v = 0xacd5d8u; esp -= 4; W32(esp, v); }
/* 7a359d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a35a3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a35a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a35a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a35a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a35aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a35afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a35af: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a35b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a35b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a35c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a35c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a35c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a35c3: mov esp, ebp */
  esp = ebp;
/* 7a35c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a35c6: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3630(void) {
  LOAD_REGS();
L_7a3630: /* 7a3630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3631: mov ebp, esp */
  ebp = esp;
/* 7a3633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3635: push 0x9ce5a0 */
  { uint32_t v = 0x9ce5a0u; esp -= 4; W32(esp, v); }
/* 7a363a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a3640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a3648: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3649: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a364c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a364d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a364e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a364f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a3652: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7a3655: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a365c: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a365f: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7a3662: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7a3664: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a3667: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7a366e: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a3671: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 7a3674: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a3677: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a367e: jmp 0x7a3689 */
  goto L_7a3689;
L_7a3680: /* 7a3680: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a3683: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3686: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_7a3689: /* 7a3689: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a368c: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a368f: jae 0x7a36e6 */
  if (!cf) goto L_7a36e6;
L_7a3691: /* 7a3691: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a3694: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3697: movsx edx, word ptr [ecx + eax*2] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + eax*2)));
/* 7a369b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a369e: lea ecx, [eax + edx + 0x8000] */
  ecx = (uint32_t)(eax + edx + 0x8000u);
/* 7a36a5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7a36a8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a36ab: add edx, 0x7f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a36ae: and edx, 0xffffff00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a36b4: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a36b7: cmp dword ptr [ebp - 0x1c], 0xff00 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a36be: jle 0x7a36c7 */
  if ((zf || sf != of)) goto L_7a36c7;
L_7a36c0: /* 7a36c0: mov dword ptr [ebp - 0x1c], 0xff00 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xff00u);
L_7a36c7: /* 7a36c7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a36ca: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7a36cd: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7a36d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a36d3: add ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a36d6: mov dl, byte ptr [ebp - 0x2c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd4u))) & 0xffu);
/* 7a36d9: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 7a36db: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a36de: sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a36e1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a36e4: jmp 0x7a3680 */
  goto L_7a3680;
L_7a36e6: /* 7a36e6: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a36e9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a36ec: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 7a36ef: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a36f2: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7a36f5: mov word ptr [ecx], 8 */
  W16((uint32_t)(ecx), 0x8u);
/* 7a36fa: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a36fd: mov dword ptr [edx + 0x3c], 1 */
  W32((uint32_t)(edx + 0x3cu), 0x1u);
/* 7a3704: jmp 0x7a3736 */
  goto L_7a3736;
L_7a3736: /* 7a3736: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a373d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3740: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a3747: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a3749: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a374a: mov esp, ebp */
  esp = ebp;
/* 7a374c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a374d: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3706(void) {
  LOAD_REGS();
L_7a3706: /* 7a3706: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a3709: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7a370c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a3711: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7a3714: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3715: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a371au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a371a(); return;
}

void f_7a371a(void) {
  LOAD_REGS();
L_7a371a: /* 7a371a: push 0xa0b818 */
  { uint32_t v = 0xa0b818u; esp -= 4; W32(esp, v); }
/* 7a371f: push 0xacd5e0 */
  { uint32_t v = 0xacd5e0u; esp -= 4; W32(esp, v); }
/* 7a3724: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a372au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a372a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a372d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a372f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3731: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3736u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a3736: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a373d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3740: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a3747: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a3749: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a374a: mov esp, ebp */
  esp = ebp;
/* 7a374c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a374d: ret  */
  esp += 4; SPILL(); return;
}

void f_7a37a0(void) {
  LOAD_REGS();
L_7a37a0: /* 7a37a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a37a1: mov ebp, esp */
  ebp = esp;
/* 7a37a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a37a5: push 0x9ce5b0 */
  { uint32_t v = 0x9ce5b0u; esp -= 4; W32(esp, v); }
/* 7a37aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a37b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a37b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a37b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a37b9: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a37bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a37bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a37be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a37bf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a37c2: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 7a37c5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a37cc: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a37cf: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7a37d2: movzx edx, word ptr [ecx] */
  edx = (uint32_t)(R16((uint32_t)(ecx)));
/* 7a37d5: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a37d8: jne 0x7a38d1 */
  if (!zf) goto L_7a38d1;
L_7a37de: /* 7a37de: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a37e1: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7a37e4: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7a37e6: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7a37e9: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7a37f0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a37f3: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7a37f5: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7a37f8: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a37fb: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 7a37fe: movsx edx, word ptr [ecx] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx)));
/* 7a3801: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a3804: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a3807: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 7a380a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a380d: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7a3814: jmp 0x7a381f */
  goto L_7a381f;
L_7a3816: /* 7a3816: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a3819: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a381c: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
L_7a381f: /* 7a381f: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a3822: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a3825: jae 0x7a38b1 */
  if (!cf) goto L_7a38b1;
L_7a382b: /* 7a382b: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a382e: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a3830: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3833: movsx eax, word ptr [edx + ecx*2] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + ecx*2)));
/* 7a3837: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a383a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a383d: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a383f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3842: movsx eax, word ptr [edx + ecx*2 + 2] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + ecx*2 + 0x2u)));
/* 7a3847: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7a384a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a384d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3850: lea eax, [edx + ecx + 0x20000] */
  eax = (uint32_t)(edx + ecx + 0x20000u);
/* 7a3857: add eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a385a: add eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a385d: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7a3860: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a3863: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a3866: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a3869: add edx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a386c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7a386f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a3872: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3875: and eax, 0x3fffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a387a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7a387d: cmp dword ptr [ebp - 0x20], 0x3fffc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x3fffcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a3884: jle 0x7a388d */
  if ((zf || sf != of)) goto L_7a388d;
L_7a3886: /* 7a3886: mov dword ptr [ebp - 0x20], 0x3fffc */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3fffcu);
L_7a388d: /* 7a388d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a3890: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 7a3893: sub ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a3899: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a389c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a389f: mov word ptr [eax + edx*2], cx */
  W16((uint32_t)(eax + edx*2), (ecx & 0xffffu));
/* 7a38a3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a38a6: sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a38a9: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7a38ac: jmp 0x7a3816 */
  goto L_7a3816;
L_7a38b1: /* 7a38b1: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a38b4: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7a38b6: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a38b9: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 7a38bc: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a38bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a38c1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a38c3: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a38c5: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a38c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a38ca: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a38cc: jmp 0x7a39ae */
  goto L_7a39ae;
L_7a38d1: /* 7a38d1: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a38d4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7a38d7: movzx edx, word ptr [ecx] */
  edx = (uint32_t)(R16((uint32_t)(ecx)));
/* 7a38da: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a38dd: jne 0x7a39ae */
  if (!zf) goto L_7a39ae;
L_7a38e3: /* 7a38e3: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7a38ea: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a38ed: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7a38f0: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7a38f2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 7a38f5: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a38f8: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 7a38fb: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7a38fe: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a3901: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 7a3904: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7a3907: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7a390e: jmp 0x7a3919 */
  goto L_7a3919;
L_7a3910: /* 7a3910: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7a3913: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3916: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
L_7a3919: /* 7a3919: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7a391c: cmp ecx, dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a391f: jae 0x7a3995 */
  if (!cf) goto L_7a3995;
L_7a3921: /* 7a3921: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7a3924: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a3927: movzx ecx, byte ptr [eax + edx*2] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 7a392b: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7a392e: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7a3931: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a3934: movzx ecx, byte ptr [eax + edx*2 + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx*2 + 0x1u)));
/* 7a3939: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 7a393c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a393f: add edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3942: add edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3945: add edx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3948: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 7a394b: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7a394e: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 7a3951: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7a3954: add ecx, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3957: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 7a395a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7a395d: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3960: and edx, 0x3fc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a3966: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 7a3969: cmp dword ptr [ebp - 0x50], 0x3fc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a3970: jle 0x7a3979 */
  if ((zf || sf != of)) goto L_7a3979;
L_7a3972: /* 7a3972: mov dword ptr [ebp - 0x50], 0x3fc */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3fcu);
L_7a3979: /* 7a3979: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a397c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7a397f: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a3982: add ecx, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3985: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 7a3987: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7a398a: sub edx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a398d: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 7a3990: jmp 0x7a3910 */
  goto L_7a3910;
L_7a3995: /* 7a3995: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a3998: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a399b: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 7a399e: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a39a1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a39a3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a39a5: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7a39a7: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a39aa: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a39ac: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7a39ae: /* 7a39ae: jmp 0x7a39e0 */
  goto L_7a39e0;
L_7a39e0: /* 7a39e0: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a39e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a39ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a39f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a39f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a39f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a39f4: mov esp, ebp */
  esp = ebp;
/* 7a39f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a39f7: ret  */
  esp += 4; SPILL(); return;
}

void f_7a39b0(void) {
  LOAD_REGS();
L_7a39b0: /* 7a39b0: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7a39b3: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 7a39b6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a39bb: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 7a39be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a39bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a39c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a39c4(); return;
}

void f_7a39c4(void) {
  LOAD_REGS();
L_7a39c4: /* 7a39c4: push 0xa0b858 */
  { uint32_t v = 0xa0b858u; esp -= 4; W32(esp, v); }
/* 7a39c9: push 0xacd5e8 */
  { uint32_t v = 0xacd5e8u; esp -= 4; W32(esp, v); }
/* 7a39ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a39d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a39d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a39d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a39d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a39db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a39e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a39e0: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a39e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a39ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a39f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a39f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a39f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a39f4: mov esp, ebp */
  esp = ebp;
/* 7a39f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a39f7: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3a90(void) {
  LOAD_REGS();
L_7a3a90: /* 7a3a90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3a91: mov ebp, esp */
  ebp = esp;
/* 7a3a93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3a94: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 7a3a97: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 7a3a9a: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x7a3aa0u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 7a3aa0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 7a3aa3: mov dword ptr [eax + 0x98], 1 */
  W32((uint32_t)(eax + 0x98u), 0x1u);
/* 7a3aad: mov esp, ebp */
  esp = ebp;
/* 7a3aaf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a3ab0: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3ac0(void) {
  LOAD_REGS();
L_7a3ac0: /* 7a3ac0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a3ac4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a3ac6: jge 0x7a3aca */
  if ((sf == of)) goto L_7a3aca;
L_7a3ac8: /* 7a3ac8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_7a3aca: /* 7a3aca: ret  */
  esp += 4; SPILL(); return;
}

void f_7a3ae0(void) {
  LOAD_REGS();
L_7a3ae0: /* 7a3ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3ae1: mov ebp, esp */
  ebp = esp;
/* 7a3ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3ae5: push 0x9ce5c0 */
  { uint32_t v = 0x9ce5c0u; esp -= 4; W32(esp, v); }
/* 7a3aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a3af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a3af8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3af9: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a3afc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a3afd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a3afe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a3aff: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a3b02: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7a3b05: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a3b0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3b0e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a3b11: call 0x6cc324 */
  esp -= 4; W32(esp, 0x7a3b16u); SPILL(); f_6cc324(); if (g_unwind) return; RELOAD();
/* 7a3b16: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7a3b19: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7a3b1c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a3b1f: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7a3b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3b24: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a3b27: call 0x6cc324 */
  esp -= 4; W32(esp, 0x7a3b2cu); SPILL(); f_6cc324(); if (g_unwind) return; RELOAD();
/* 7a3b2c: add eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3b2f: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3b32: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* 7a3b35: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3b38: cmp dword ptr [eax + 8], 0x45564157 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x45564157u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3b3f: je 0x7a3b48 */
  if (zf) goto L_7a3b48;
L_7a3b41: /* 7a3b41: xor eax, eax */
  eax = 0;
/* 7a3b43: jmp 0x7a3d48 */
  goto L_7a3d48;
L_7a3b48: /* 7a3b48: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3b4b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3b4e: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3b51: mov dword ptr [edx + 0x1c], ecx */
  W32((uint32_t)(edx + 0x1cu), ecx);
/* 7a3b54: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7a3b56: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a3b59: call 0x6cc324 */
  esp -= 4; W32(esp, 0x7a3b5eu); SPILL(); f_6cc324(); if (g_unwind) return; RELOAD();
/* 7a3b5e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7a3b61: /* 7a3b61: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3b64: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3b67: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3b6a: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a3b6d: jae 0x7a3b95 */
  if (!cf) goto L_7a3b95;
L_7a3b6f: /* 7a3b6f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3b72: cmp dword ptr [edx], 0x20746d66 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x20746d66u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3b78: je 0x7a3b95 */
  if (zf) goto L_7a3b95;
L_7a3b7a: /* 7a3b7a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3b7d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a3b80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3b81: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3b84: call 0x6c4282 */
  esp -= 4; W32(esp, 0x7a3b89u); SPILL(); f_6c4282(); if (g_unwind) return; RELOAD();
/* 7a3b89: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3b8c: lea eax, [edx + eax + 8] */
  eax = (uint32_t)(edx + eax + 0x8u);
/* 7a3b90: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a3b93: jmp 0x7a3b61 */
  goto L_7a3b61;
L_7a3b95: /* 7a3b95: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3b98: cmp dword ptr [ecx], 0x20746d66 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x20746d66u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3b9e: je 0x7a3ba7 */
  if (zf) goto L_7a3ba7;
L_7a3ba0: /* 7a3ba0: xor eax, eax */
  eax = 0;
/* 7a3ba2: jmp 0x7a3d48 */
  goto L_7a3d48;
L_7a3ba7: /* 7a3ba7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3baa: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3bad: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7a3bb0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3bb3: add eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3bb6: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3bb9: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 7a3bbc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3bbf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3bc2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3bc5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7a3bc7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3bca: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3bcd: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3bd0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7a3bd3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3bd6: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3bd9: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3bdc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7a3bdf: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3be2: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3be5: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3be8: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 7a3beb: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7a3bed: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a3bf0: call 0x6cc324 */
  esp -= 4; W32(esp, 0x7a3bf5u); SPILL(); f_6cc324(); if (g_unwind) return; RELOAD();
/* 7a3bf5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7a3bf8: /* 7a3bf8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3bfb: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3bfe: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c01: cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a3c04: jae 0x7a3c2c */
  if (!cf) goto L_7a3c2c;
L_7a3c06: /* 7a3c06: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c09: cmp dword ptr [eax], 0x61746164 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x61746164u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3c0f: je 0x7a3c2c */
  if (zf) goto L_7a3c2c;
L_7a3c11: /* 7a3c11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c14: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7a3c17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a3c18: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c1b: call 0x6c4282 */
  esp -= 4; W32(esp, 0x7a3c20u); SPILL(); f_6c4282(); if (g_unwind) return; RELOAD();
/* 7a3c20: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c23: lea edx, [ecx + eax + 8] */
  edx = (uint32_t)(ecx + eax + 0x8u);
/* 7a3c27: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a3c2a: jmp 0x7a3bf8 */
  goto L_7a3bf8;
L_7a3c2c: /* 7a3c2c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c2f: cmp dword ptr [eax], 0x61746164 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x61746164u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3c35: je 0x7a3c3e */
  if (zf) goto L_7a3c3e;
L_7a3c37: /* 7a3c37: xor eax, eax */
  eax = 0;
/* 7a3c39: jmp 0x7a3d48 */
  goto L_7a3d48;
L_7a3c3e: /* 7a3c3e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c41: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3c44: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c47: mov dword ptr [edx + 0x20], ecx */
  W32((uint32_t)(edx + 0x20u), ecx);
/* 7a3c4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3c50: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c53: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 7a3c56: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c59: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c5c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a3c5f: mov dword ptr [edx + 0x28], ecx */
  W32((uint32_t)(edx + 0x28u), ecx);
/* 7a3c62: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3c65: movzx eax, word ptr [edx + 0xe] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0xeu)));
/* 7a3c69: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c6c: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 7a3c6f: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c72: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 7a3c75: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c78: add eax, dword ptr [ecx + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3c7b: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c7e: mov dword ptr [edx + 0x24], eax */
  W32((uint32_t)(edx + 0x24u), eax);
/* 7a3c81: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c84: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3c87: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 7a3c8a: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 7a3c8d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7a3c8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a3c92: call 0x6cc324 */
  esp -= 4; W32(esp, 0x7a3c97u); SPILL(); f_6cc324(); if (g_unwind) return; RELOAD();
/* 7a3c97: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7a3c9a: /* 7a3c9a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3c9d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3ca0: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3ca3: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a3ca6: jae 0x7a3cce */
  if (!cf) goto L_7a3cce;
L_7a3ca8: /* 7a3ca8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3cab: cmp dword ptr [edx], 0x6c706d73 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x6c706d73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3cb1: je 0x7a3cce */
  if (zf) goto L_7a3cce;
L_7a3cb3: /* 7a3cb3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3cb6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a3cb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3cba: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3cbd: call 0x6c4282 */
  esp -= 4; W32(esp, 0x7a3cc2u); SPILL(); f_6c4282(); if (g_unwind) return; RELOAD();
/* 7a3cc2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3cc5: lea eax, [edx + eax + 8] */
  eax = (uint32_t)(edx + eax + 0x8u);
/* 7a3cc9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a3ccc: jmp 0x7a3c9a */
  goto L_7a3c9a;
L_7a3cce: /* 7a3cce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3cd1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3cd4: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3cd7: cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a3cda: jge 0x7a3d11 */
  if ((sf == of)) goto L_7a3d11;
L_7a3cdc: /* 7a3cdc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3cdf: cmp dword ptr [eax], 0x6c706d73 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x6c706d73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3ce5: jne 0x7a3d11 */
  if (!zf) goto L_7a3d11;
L_7a3ce7: /* 7a3ce7: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7a3ce9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3cec: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a3cef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3cf0: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7a3cf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a3cf4: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7a3cf9u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7a3cf9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a3cfc: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3cff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a3d02: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 7a3d05: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3d08: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3d0b: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7a3d0e: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
L_7a3d11: /* 7a3d11: mov eax, 1 */
  eax = 0x1u;
/* 7a3d16: jmp 0x7a3d48 */
  goto L_7a3d48;
L_7a3d48: /* 7a3d48: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a3d4f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3d52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a3d59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3d5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a3d5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a3d5c: mov esp, ebp */
  esp = ebp;
/* 7a3d5e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a3d5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a3d18(void) {
  LOAD_REGS();
L_7a3d18: /* 7a3d18: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a3d1b: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 7a3d1e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a3d23: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 7a3d26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a3d27: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3d2cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a3d2c(); return;
}

void f_7a3d2c(void) {
  LOAD_REGS();
L_7a3d2c: /* 7a3d2c: push 0xa0b894 */
  { uint32_t v = 0xa0b894u; esp -= 4; W32(esp, v); }
/* 7a3d31: push 0xacd5c8 */
  { uint32_t v = 0xacd5c8u; esp -= 4; W32(esp, v); }
/* 7a3d36: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a3d3cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a3d3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a3d3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3d41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3d43: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3d48u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a3d48: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a3d4f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3d52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a3d59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a3d5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a3d5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a3d5c: mov esp, ebp */
  esp = ebp;
/* 7a3d5e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a3d5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a3e10(void) {
  LOAD_REGS();
L_7a3e10: /* 7a3e10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a3e11: mov ebp, esp */
  ebp = esp;
/* 7a3e13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a3e15: push 0x9ce5d0 */
  { uint32_t v = 0x9ce5d0u; esp -= 4; W32(esp, v); }
/* 7a3e1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a3e20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3e21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a3e28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3e29: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a3e2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a3e2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a3e2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a3e2f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a3e32: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7a3e35: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a3e3c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e3f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e42: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 7a3e45: cmp edx, dword ptr [ecx + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a3e48: jae 0x7a3fbc */
  if (!cf) goto L_7a3fbc;
L_7a3e4e: /* 7a3e4e: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e51: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7a3e54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a3e55: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e58: call 0x6c4282 */
  esp -= 4; W32(esp, 0x7a3e5du); SPILL(); f_6c4282(); if (g_unwind) return; RELOAD();
/* 7a3e5d: mov esi, eax */
  esi = eax;
/* 7a3e5f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e62: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 7a3e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3e66: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e69: call 0x6c4282 */
  esp -= 4; W32(esp, 0x7a3e6eu); SPILL(); f_6c4282(); if (g_unwind) return; RELOAD();
/* 7a3e6e: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a3e70: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a3e73: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e76: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a3e79: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e7c: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7a3e7f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7a3e81: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e84: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 7a3e87: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e8a: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 7a3e8d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7a3e8f: sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a3e92: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a3e94: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e97: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 7a3e9a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3e9d: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 7a3ea0: movzx ecx, word ptr [edx] */
  ecx = (uint32_t)(R16((uint32_t)(edx)));
/* 7a3ea3: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 7a3ea6: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ea9: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 7a3eac: movzx edx, word ptr [edx] */
  edx = (uint32_t)(R16((uint32_t)(edx)));
/* 7a3eaf: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 7a3eb2: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 7a3eb5: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3eb8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a3ebb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ebe: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a3ec0: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ec3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a3ec6: movzx edx, word ptr [edx] */
  edx = (uint32_t)(R16((uint32_t)(edx)));
/* 7a3ec9: imul edx, dword ptr [eax] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(eax)));
  edx = (uint32_t)r;
  }
/* 7a3ecc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a3ece: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ed1: cmp dword ptr [eax + 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a3ed5: je 0x7a3f5b */
  if (zf) goto L_7a3f5b;
L_7a3edb: /* 7a3edb: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ede: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 7a3ee1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a3ee4: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ee7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7a3eea: movzx edx, word ptr [ecx] */
  edx = (uint32_t)(R16((uint32_t)(ecx)));
/* 7a3eed: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ef0: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 7a3ef3: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 7a3ef6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3ef9: xor edx, edx */
  edx = 0;
/* 7a3efb: div dword ptr [ecx + 0x38] */
  { uint32_t d = R32((uint32_t)(ecx + 0x38u)); if (!d) d = guest_divzero(0x7a3efb);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7a3efe: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7a3f01: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7a3f08: jmp 0x7a3f13 */
  goto L_7a3f13;
L_7a3f0a: /* 7a3f0a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a3f0d: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a3f10: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_7a3f13: /* 7a3f13: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3f16: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a3f19: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a3f1c: jge 0x7a3f5b */
  if ((sf == of)) goto L_7a3f5b;
L_7a3f1e: /* 7a3f1e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3f21: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3f24: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 7a3f27: imul ecx, dword ptr [eax + 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x14u)));
  ecx = (uint32_t)r;
  }
/* 7a3f2b: mov eax, ecx */
  eax = ecx;
/* 7a3f2d: xor edx, edx */
  edx = 0;
/* 7a3f2f: div dword ptr [ebp - 0x20] */
  { uint32_t d = R32((uint32_t)(ebp + 0xffffffe0u)); if (!d) d = guest_divzero(0x7a3f2f);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7a3f32: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3f35: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7a3f38: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3f3b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3f3e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 7a3f41: imul eax, dword ptr [ecx + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x14u)));
  eax = (uint32_t)r;
  }
/* 7a3f45: xor edx, edx */
  edx = 0;
/* 7a3f47: div dword ptr [ebp - 0x20] */
  { uint32_t d = R32((uint32_t)(ebp + 0xffffffe0u)); if (!d) d = guest_divzero(0x7a3f47);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7a3f4a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3f4d: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 7a3f50: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a3f53: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3f56: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7a3f59: jmp 0x7a3f0a */
  goto L_7a3f0a;
L_7a3f5b: /* 7a3f5b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3f5e: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 7a3f61: sub edx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a3f64: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7a3f67: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a3f6e: jmp 0x7a3f79 */
  goto L_7a3f79;
L_7a3f70: /* 7a3f70: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a3f73: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3f76: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_7a3f79: /* 7a3f79: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3f7c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3f7f: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7a3f82: sub eax, dword ptr [edx + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a3f85: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a3f88: jge 0x7a3fa0 */
  if ((sf == of)) goto L_7a3fa0;
L_7a3f8a: /* 7a3f8a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a3f8d: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 7a3f90: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a3f93: add eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a3f96: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a3f99: mov dl, byte ptr [edx + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx))) & 0xffu);
/* 7a3f9c: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 7a3f9e: jmp 0x7a3f70 */
  goto L_7a3f70;
L_7a3fa0: /* 7a3fa0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7a3fa3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a3fa6: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7a3fa9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a3fac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a3fad: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a3fb0: sub eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a3fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a3fb4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a3fb7: call 0x6c97cd */
  esp -= 4; W32(esp, 0x7a3fbcu); SPILL(); f_6c97cd(); if (g_unwind) return; RELOAD();
L_7a3fbc: /* 7a3fbc: mov eax, 1 */
  eax = 0x1u;
/* 7a3fc1: jmp 0x7a3ff3 */
  goto L_7a3ff3;
L_7a3ff3: /* 7a3ff3: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a3ffa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3ffd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4004: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4005: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4006: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4007: mov esp, ebp */
  esp = ebp;
/* 7a4009: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a400a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a3fc3(void) {
  LOAD_REGS();
L_7a3fc3: /* 7a3fc3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a3fc6: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7a3fc9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a3fce: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7a3fd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a3fd2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3fd7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a3fd7(); return;
}

void f_7a3fd7(void) {
  LOAD_REGS();
L_7a3fd7: /* 7a3fd7: push 0xa0b8d4 */
  { uint32_t v = 0xa0b8d4u; esp -= 4; W32(esp, v); }
/* 7a3fdc: push 0xacd5d0 */
  { uint32_t v = 0xacd5d0u; esp -= 4; W32(esp, v); }
/* 7a3fe1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a3fe7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a3fe7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a3fea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3fec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a3fee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a3ff3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a3ff3: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a3ffa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a3ffd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4004: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4005: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4006: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4007: mov esp, ebp */
  esp = ebp;
/* 7a4009: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a400a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a4090(void) {
  LOAD_REGS();
L_7a4090: /* 7a4090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a4091: mov ebp, esp */
  ebp = esp;
/* 7a4093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a4095: push 0x9ce5e0 */
  { uint32_t v = 0x9ce5e0u; esp -= 4; W32(esp, v); }
/* 7a409a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a40a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a40a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a40a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a40a9: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a40ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a40ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a40ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a40af: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a40b2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 7a40b5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a40bc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a40bf: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 7a40c2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a40c5: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a40c8: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a40cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a40cd: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7a40d0: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a40d3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a40d5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7a40d7: xor edx, edx */
  edx = 0;
/* 7a40d9: mov ecx, 0x2b11 */
  ecx = 0x2b11u;
/* 7a40de: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x7a40de);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7a40e0: imul eax, eax, 0x35c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x35cu);
  eax = (uint32_t)r;
  }
/* 7a40e6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7a40e9: mov dword ptr [ebp - 0x30], 0x12 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x12u);
/* 7a40f0: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a40f3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a40f5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7a40f7: xor edx, edx */
  edx = 0;
/* 7a40f9: mov ecx, 0x2b11 */
  ecx = 0x2b11u;
/* 7a40fe: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x7a40fe);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7a4100: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a4103: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a4106: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a410d: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7a4114: mov dword ptr [ebp - 0x24], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xffffffffu);
/* 7a411b: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7a4122: jmp 0x7a412d */
  goto L_7a412d;
L_7a412d: /* 7a412d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4130: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4133: jge 0x7a41fa */
  if ((sf == of)) goto L_7a41fa;
L_7a4139: /* 7a4139: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a413c: add ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a413f: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 7a4142: sub edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a4148: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4149: call 0x6cae5c */
  esp -= 4; W32(esp, 0x7a414eu); SPILL(); f_6cae5c(); if (g_unwind) return; RELOAD();
/* 7a414e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4151: cmp eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4154: jl 0x7a4177 */
  if ((sf != of)) goto L_7a4177;
L_7a4156: /* 7a4156: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 7a415d: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4161: jle 0x7a4175 */
  if ((zf || sf != of)) goto L_7a4175;
L_7a4163: /* 7a4163: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4166: sub eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a4169: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a416c: jge 0x7a4175 */
  if ((sf == of)) goto L_7a4175;
L_7a416e: /* 7a416e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
L_7a4175: /* 7a4175: jmp 0x7a417e */
  goto L_7a417e;
L_7a4177: /* 7a4177: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
L_7a417e: /* 7a417e: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4182: jne 0x7a4192 */
  if (!zf) goto L_7a4192;
L_7a4184: /* 7a4184: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4188: jne 0x7a4190 */
  if (!zf) goto L_7a4190;
L_7a418a: /* 7a418a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a418d: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_7a4190: /* 7a4190: jmp 0x7a41f5 */
  SPILL(); f_7a41f5(); return;
L_7a4192: /* 7a4192: cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4196: jne 0x7a419e */
  if (!zf) goto L_7a419e;
L_7a4198: /* 7a4198: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a419c: jne 0x7a41a9 */
  if (!zf) goto L_7a41a9;
L_7a419e: /* 7a419e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a41a1: sub edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a41a4: cmp dword ptr [ebp - 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a41a7: jne 0x7a41f5 */
  if (!zf) { SPILL(); f_7a41f5(); return; }
L_7a41a9: /* 7a41a9: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a41ac: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7a41af: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a41b2: sub ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a41b5: cmp ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a41b8: jl 0x7a41de */
  if ((sf != of)) goto L_7a41de;
L_7a41ba: /* 7a41ba: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a41bd: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a41c0: jmp 0x7a41cb */
  goto L_7a41cb;
L_7a41c2: /* 7a41c2: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a41c5: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a41c8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_7a41cb: /* 7a41cb: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a41ce: cmp ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a41d1: jge 0x7a41de */
  if ((sf == of)) goto L_7a41de;
L_7a41d3: /* 7a41d3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a41d6: add edx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a41d9: mov byte ptr [edx], 0x80 */
  W8((uint32_t)(edx), 0x80u);
/* 7a41dc: jmp 0x7a41c2 */
  goto L_7a41c2;
L_7a41de: /* 7a41de: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a41e1: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a41e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a41e7: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a41ee: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
  SPILL(); f_7a41f5(); return;
L_7a41fa: /* 7a41fa: jmp 0x7a422c */
  goto L_7a422c;
L_7a422c: /* 7a422c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4233: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4236: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a423d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a423e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a423f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4240: mov esp, ebp */
  esp = ebp;
/* 7a4242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4243: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4124(void) {
  LOAD_REGS();
L_7a4124: /* 7a4124: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4127: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a412a: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7a412d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4130: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4133: jge 0x7a41fa */
  if ((sf == of)) goto L_7a41fa;
L_7a4139: /* 7a4139: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a413c: add ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a413f: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 7a4142: sub edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a4148: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4149: call 0x6cae5c */
  esp -= 4; W32(esp, 0x7a414eu); SPILL(); f_6cae5c(); if (g_unwind) return; RELOAD();
/* 7a414e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4151: cmp eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4154: jl 0x7a4177 */
  if ((sf != of)) goto L_7a4177;
L_7a4156: /* 7a4156: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 7a415d: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4161: jle 0x7a4175 */
  if ((zf || sf != of)) goto L_7a4175;
L_7a4163: /* 7a4163: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4166: sub eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a4169: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a416c: jge 0x7a4175 */
  if ((sf == of)) goto L_7a4175;
L_7a416e: /* 7a416e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
L_7a4175: /* 7a4175: jmp 0x7a417e */
  goto L_7a417e;
L_7a4177: /* 7a4177: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
L_7a417e: /* 7a417e: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4182: jne 0x7a4192 */
  if (!zf) goto L_7a4192;
L_7a4184: /* 7a4184: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4188: jne 0x7a4190 */
  if (!zf) goto L_7a4190;
L_7a418a: /* 7a418a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a418d: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_7a4190: /* 7a4190: jmp 0x7a41f5 */
  SPILL(); f_7a41f5(); return;
L_7a4192: /* 7a4192: cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4196: jne 0x7a419e */
  if (!zf) goto L_7a419e;
L_7a4198: /* 7a4198: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a419c: jne 0x7a41a9 */
  if (!zf) goto L_7a41a9;
L_7a419e: /* 7a419e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a41a1: sub edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a41a4: cmp dword ptr [ebp - 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a41a7: jne 0x7a41f5 */
  if (!zf) { SPILL(); f_7a41f5(); return; }
L_7a41a9: /* 7a41a9: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a41ac: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7a41af: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a41b2: sub ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a41b5: cmp ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a41b8: jl 0x7a41de */
  if ((sf != of)) goto L_7a41de;
L_7a41ba: /* 7a41ba: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a41bd: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a41c0: jmp 0x7a41cb */
  goto L_7a41cb;
L_7a41c2: /* 7a41c2: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a41c5: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a41c8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_7a41cb: /* 7a41cb: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a41ce: cmp ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a41d1: jge 0x7a41de */
  if ((sf == of)) goto L_7a41de;
L_7a41d3: /* 7a41d3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a41d6: add edx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a41d9: mov byte ptr [edx], 0x80 */
  W8((uint32_t)(edx), 0x80u);
/* 7a41dc: jmp 0x7a41c2 */
  goto L_7a41c2;
L_7a41de: /* 7a41de: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a41e1: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a41e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a41e7: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a41ee: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
  SPILL(); f_7a41f5(); return;
L_7a41fa: /* 7a41fa: jmp 0x7a422c */
  goto L_7a422c;
L_7a422c: /* 7a422c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4233: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4236: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a423d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a423e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a423f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4240: mov esp, ebp */
  esp = ebp;
/* 7a4242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4243: ret  */
  esp += 4; SPILL(); return;
}

void f_7a41f5(void) {
  LOAD_REGS();
  goto L_7a41f5;
L_7a4124: /* 7a4124: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4127: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a412a: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7a412d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4130: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4133: jge 0x7a41fa */
  if ((sf == of)) goto L_7a41fa;
L_7a4139: /* 7a4139: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a413c: add ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a413f: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 7a4142: sub edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a4148: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4149: call 0x6cae5c */
  esp -= 4; W32(esp, 0x7a414eu); SPILL(); f_6cae5c(); if (g_unwind) return; RELOAD();
/* 7a414e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4151: cmp eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4154: jl 0x7a4177 */
  if ((sf != of)) goto L_7a4177;
L_7a4156: /* 7a4156: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 7a415d: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a4161: jle 0x7a4175 */
  if ((zf || sf != of)) goto L_7a4175;
L_7a4163: /* 7a4163: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a4166: sub eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a4169: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a416c: jge 0x7a4175 */
  if ((sf == of)) goto L_7a4175;
L_7a416e: /* 7a416e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
L_7a4175: /* 7a4175: jmp 0x7a417e */
  goto L_7a417e;
L_7a4177: /* 7a4177: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
L_7a417e: /* 7a417e: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4182: jne 0x7a4192 */
  if (!zf) goto L_7a4192;
L_7a4184: /* 7a4184: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4188: jne 0x7a4190 */
  if (!zf) goto L_7a4190;
L_7a418a: /* 7a418a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a418d: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_7a4190: /* 7a4190: jmp 0x7a41f5 */
  goto L_7a41f5;
L_7a4192: /* 7a4192: cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4196: jne 0x7a419e */
  if (!zf) goto L_7a419e;
L_7a4198: /* 7a4198: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a419c: jne 0x7a41a9 */
  if (!zf) goto L_7a41a9;
L_7a419e: /* 7a419e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a41a1: sub edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7a41a4: cmp dword ptr [ebp - 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a41a7: jne 0x7a41f5 */
  if (!zf) goto L_7a41f5;
L_7a41a9: /* 7a41a9: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a41ac: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7a41af: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a41b2: sub ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a41b5: cmp ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a41b8: jl 0x7a41de */
  if ((sf != of)) goto L_7a41de;
L_7a41ba: /* 7a41ba: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a41bd: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a41c0: jmp 0x7a41cb */
  goto L_7a41cb;
L_7a41c2: /* 7a41c2: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a41c5: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a41c8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_7a41cb: /* 7a41cb: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a41ce: cmp ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a41d1: jge 0x7a41de */
  if ((sf == of)) goto L_7a41de;
L_7a41d3: /* 7a41d3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a41d6: add edx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a41d9: mov byte ptr [edx], 0x80 */
  W8((uint32_t)(edx), 0x80u);
/* 7a41dc: jmp 0x7a41c2 */
  goto L_7a41c2;
L_7a41de: /* 7a41de: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a41e1: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a41e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a41e7: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a41ee: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
  SPILL(); f_7a41f5(); return;
L_7a41f5: /* 7a41f5: jmp 0x7a4124 */
  goto L_7a4124;
L_7a41fa: /* 7a41fa: jmp 0x7a422c */
  goto L_7a422c;
L_7a422c: /* 7a422c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4233: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4236: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a423d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a423e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a423f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4240: mov esp, ebp */
  esp = ebp;
/* 7a4242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4243: ret  */
  esp += 4; SPILL(); return;
}

void f_7a41fc(void) {
  LOAD_REGS();
L_7a41fc: /* 7a41fc: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7a41ff: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7a4202: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4207: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7a420a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a420b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4210u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4210(); return;
}

void f_7a4210(void) {
  LOAD_REGS();
L_7a4210: /* 7a4210: push 0xa0b91c */
  { uint32_t v = 0xa0b91cu; esp -= 4; W32(esp, v); }
/* 7a4215: push 0xacd5f0 */
  { uint32_t v = 0xacd5f0u; esp -= 4; W32(esp, v); }
/* 7a421a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4220u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4220: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4227: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a422cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a422c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4233: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4236: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a423d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a423e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a423f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4240: mov esp, ebp */
  esp = ebp;
/* 7a4242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4243: ret  */
  esp += 4; SPILL(); return;
}
