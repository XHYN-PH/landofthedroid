#include "recomp.h"
#include "rec_mod.h"

void f_86b682(void) {
  LOAD_REGS();
  goto L_86b682;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86b682: /* 86b682: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b687: je 0x86b7be */
  if (zf) goto L_86b7be;
L_86b68d: /* 86b68d: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86b693: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b695: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 86b69c: je 0x86b6b5 */
  if (zf) goto L_86b6b5;
L_86b69e: /* 86b69e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86b6a0: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86b6a3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86b6a6: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86b6ac: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6af: je 0x86be74 */
  if (zf) goto L_86be74;
L_86b6b5: /* 86b6b5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86b6b7: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b6bb: jge 0x86be74 */
  if ((sf == of)) goto L_86be74;
L_86b6c1: /* 86b6c1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86b6c4: mov al, byte ptr [edx + 0x150] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x150u))) & 0xffu);
/* 86b6ca: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6cc: je 0x86be74 */
  if (zf) goto L_86be74;
L_86b6d2: /* 86b6d2: mov edi, dword ptr [ebx + 0x32c] */
  edi = R32((uint32_t)(ebx + 0x32cu));
/* 86b6d8: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 86b6df: nop  */
L_86b6e0: /* 86b6e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6e2: je 0x86b712 */
  if (zf) goto L_86b712;
L_86b6e4: /* 86b6e4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86b6e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86b6e8: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x86b6ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86b6eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6ed: je 0x86b70d */
  if (zf) goto L_86b70d;
L_86b6ef: /* 86b6ef: mov ecx, dword ptr [eax + 0x1d4] */
  ecx = R32((uint32_t)(eax + 0x1d4u));
/* 86b6f5: cmp ecx, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b6f8: jne 0x86b70d */
  if (!zf) goto L_86b70d;
L_86b6fa: /* 86b6fa: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b6fd: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86b702: cmp dword ptr [eax + 0x1c8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1c8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b708: jne 0x86b70d */
  if (!zf) goto L_86b70d;
L_86b70a: /* 86b70a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_86b70d: /* 86b70d: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 86b710: jmp 0x86b6e0 */
  goto L_86b6e0;
L_86b712: /* 86b712: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b717: jne 0x86b7ad */
  if (!zf) goto L_86b7ad;
L_86b71d: /* 86b71d: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 86b723: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86b725: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86b727: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 86b72c: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* 86b731: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86b733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86b733: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86b736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b738: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86b73c: je 0x86b77c */
  if (zf) goto L_86b77c;
L_86b73e: /* 86b73e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86b741: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b744: movzx eax, byte ptr [edx + esi + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86b749: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b74a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b74b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b74e: mov eax, esp */
  eax = esp;
/* 86b750: mov ecx, esi */
  ecx = esi;
/* 86b752: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 86b754: mov edx, eax */
  edx = eax;
/* 86b756: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 86b758: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 86b75b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 86b75e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86b761: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86b764: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 86b767: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86b76a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 86b76d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86b76f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 86b772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b773: call 0x6cb136 */
  esp -= 4; W32(esp, 0x86b778u); SPILL(); f_6cb136(); if (g_unwind) return; RELOAD();
/* 86b778: mov edi, eax */
  edi = eax;
/* 86b77a: jmp 0x86b77e */
  goto L_86b77e;
L_86b77c: /* 86b77c: xor edi, edi */
  edi = 0;
L_86b77e: /* 86b77e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b780: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b782: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86b787: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86b78b: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 86b78e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86b794u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86b794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b796: je 0x86b7a5 */
  if (zf) goto L_86b7a5;
L_86b798: /* 86b798: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86b79e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86b7a0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86b7a3: jmp 0x86b7a7 */
  goto L_86b7a7;
L_86b7a5: /* 86b7a5: xor eax, eax */
  eax = 0;
L_86b7a7: /* 86b7a7: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86b7ad: /* 86b7ad: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b7b0: mov edx, dword ptr [ecx + 0x1d0] */
  edx = R32((uint32_t)(ecx + 0x1d0u));
/* 86b7b6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86b7b9: jmp 0x86be69 */
  goto L_86be69;
L_86b7be: /* 86b7be: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86b7c0: cmp dword ptr [ecx + 0x1c8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1c8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b7c6: je 0x86bf25 */
  if (zf) goto L_86bf25;
L_86b7cc: /* 86b7cc: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b7d1: je 0x86bf25 */
  if (zf) goto L_86bf25;
L_86b7d7: /* 86b7d7: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86b7dc: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b7de: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 86b7e5: je 0x86b7fc */
  if (zf) goto L_86b7fc;
L_86b7e7: /* 86b7e7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86b7ea: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86b7ed: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86b7f3: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b7f6: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b7fc: /* 86b7fc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b7ff: mov eax, esi */
  eax = esi;
/* 86b801: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86b803: movzx ecx, byte ptr [eax + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x55u)));
/* 86b807: add eax, 0x55 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x55u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b80a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b80b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86b80e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86b811: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86b816u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86b816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b817: call 0x6cb4ab */
  esp -= 4; W32(esp, 0x86b81cu); SPILL(); f_6cb4ab(); if (g_unwind) return; RELOAD();
/* 86b81c: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 86b81f: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 86b822: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86b825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b827: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b82d: /* 86b82d: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 86b833: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b835: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b83b: /* 86b83b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 86b83e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b840: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b846: /* 86b846: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86b849: mov esi, dword ptr [ebx + 0x328] */
  esi = R32((uint32_t)(ebx + 0x328u));
/* 86b84f: mov edx, ecx */
  edx = ecx;
/* 86b851: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86b854: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86b857: mov eax, 1 */
  eax = 0x1u;
/* 86b85c: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 86b85e: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86b861: mov cl, byte ptr [edx + esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi))) & 0xffu);
/* 86b864: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86b867: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b869: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b86c: jne 0x86bf19 */
  if (!zf) goto L_86bf19;
L_86b872: /* 86b872: mov cl, byte ptr [esi + 0x54] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x54u))) & 0xffu);
/* 86b875: cmp cl, byte ptr [esi + 0x55] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x55u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86b878: je 0x86bf19 */
  if (zf) goto L_86bf19;
L_86b87e: /* 86b87e: mov edx, dword ptr [eax + 0x280] */
  edx = R32((uint32_t)(eax + 0x280u));
/* 86b884: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 86b887: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86b88a: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 86b88d: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 86b890: imul edx, edx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x148u);
  edx = (uint32_t)r;
  }
/* 86b896: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86b898: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86b89d: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 86b8a3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86b8a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86b8a8: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 86b8ab: mov ecx, eax */
  ecx = eax;
/* 86b8ad: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 86b8b0: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86b8b5u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86b8b5: mov ecx, dword ptr [ebp - 0x1a0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe60u));
/* 86b8bb: mov edx, dword ptr [ebp - 0x19c] */
  edx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86b8c1: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b8c4: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86b8c7: mov eax, dword ptr [ebp - 0x1a4] */
  eax = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86b8cd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 86b8d0: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 86b8d3: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 86b8d6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86b8d9: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86b8e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86b8e3: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86b8e6: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b8e9: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86b8ec: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8ee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86b8f0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8f2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86b8f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8f7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86b8fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8fc: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86b8ff: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b902: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86b905: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b908: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86b90b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b90e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86b911: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b914: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86b917: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b919: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b91b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b91d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b91f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b921: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b924: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86b927: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b92a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86b92d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b930: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86b933: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b936: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86b939: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b93b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b93d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b93f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b941: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b943: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b946: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86b949: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b94c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86b94f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b952: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86b955: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b958: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86b95b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b95d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b95f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b961: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b963: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b965: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b967: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86b969: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86b96b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86b96e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86b971: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86b974: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86b977: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86b97a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86b97d: mov dword ptr [ebp - 0x1a4], ecx */
  W32((uint32_t)(ebp + 0xfffffe5cu), ecx);
/* 86b983: mov dword ptr [ebp - 0x1a0], edx */
  W32((uint32_t)(ebp + 0xfffffe60u), edx);
/* 86b989: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 86b98f: xor ecx, ecx */
  ecx = 0;
L_86b991: /* 86b991: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b997: jge 0x86ba76 */
  if ((sf == of)) goto L_86ba76;
L_86b99d: /* 86b99d: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86b9a0: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86b9a7: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86b9ae: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86b9b5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86b9b8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86b9bb: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86b9be: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86b9c1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86b9c4: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86b9cb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86b9ce: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86b9d1: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b9d4: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86b9d7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9d9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86b9db: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9dd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86b9e0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9e2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86b9e5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9e7: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86b9ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9ed: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86b9f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9f3: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86b9f6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9f9: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86b9fc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9ff: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86ba02: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba04: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba06: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba08: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba0c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba0f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86ba12: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba15: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86ba18: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba1b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86ba1e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba21: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86ba24: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba26: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba28: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba2a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba2c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba2e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba31: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86ba34: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba37: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86ba3a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba3d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86ba40: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba43: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86ba46: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba48: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba4a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba4c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba4e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba50: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba52: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86ba54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86ba56: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86ba59: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86ba5c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86ba5f: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86ba62: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86ba64: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86ba67: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86ba6a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86ba6d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86ba70: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86ba71: jmp 0x86b991 */
  goto L_86b991;
L_86ba76: /* 86ba76: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86ba79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba7b: jne 0x86ba88 */
  if (!zf) goto L_86ba88;
L_86ba7d: /* 86ba7d: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86ba83: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86ba88u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86ba88: /* 86ba88: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86ba8b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba8d: jne 0x86bd53 */
  if (!zf) goto L_86bd53;
L_86ba93: /* 86ba93: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86ba96: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 86ba99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ba9a: mov ecx, esi */
  ecx = esi;
/* 86ba9c: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86baa1u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86baa1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86baa3: mov edx, dword ptr [ecx + 0x1c8] */
  edx = R32((uint32_t)(ecx + 0x1c8u));
/* 86baa9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86baaa: mov ecx, esi */
  ecx = esi;
/* 86baac: mov edi, eax */
  edi = eax;
/* 86baae: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86bab3u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86bab3: test byte ptr [edi + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86baba: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bac0: /* 86bac0: test byte ptr [eax + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bac7: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bacd: /* 86bacd: xor ecx, ecx */
  ecx = 0;
/* 86bacf: nop  */
L_86bad0: /* 86bad0: cmp ecx, dword ptr [eax + 0x3a0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3a0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bad6: jge 0x86baea */
  if ((sf == of)) goto L_86baea;
L_86bad8: /* 86bad8: mov edx, dword ptr [eax + 0x39c] */
  edx = R32((uint32_t)(eax + 0x39cu));
/* 86bade: cmp edi, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bae1: je 0x86bd47 */
  if (zf) goto L_86bd47;
L_86bae7: /* 86bae7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86bae8: jmp 0x86bad0 */
  goto L_86bad0;
L_86baea: /* 86baea: xor eax, eax */
  eax = 0;
/* 86baec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86baee: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86baf4: /* 86baf4: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86bafa: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86baffu); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86baff: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86bb02: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bb05: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bb08: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86bb0b: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86bb0e: movzx eax, byte ptr [ecx + edx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx + 0x54u)));
/* 86bb13: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bb16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bb19: mov ecx, dword ptr [ebx + eax*4] */
  ecx = R32((uint32_t)(ebx + eax*4));
/* 86bb1c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86bb1f: nop  */
L_86bb20: /* 86bb20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb25: je 0x86bbb7 */
  if (zf) goto L_86bbb7;
L_86bb2b: /* 86bb2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bb31: mov edi, esp */
  edi = esp;
/* 86bb33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bb38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bb3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bb46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bb48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bb49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bb4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bb4e: lea ecx, [ebp - 0x2f8] */
  ecx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb54: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86bb59u); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86bb59: fcom dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
/* 86bb5c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 86bb5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb64: je 0x86bd45 */
  if (zf) goto L_86bd45;
L_86bb6a: /* 86bb6a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86bb70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb72: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb75: jne 0x86bba9 */
  if (!zf) goto L_86bba9;
L_86bb77: /* 86bb77: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb79: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb7b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bb80: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bb86u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bb86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb88: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bb8b: je 0x86bba0 */
  if (zf) goto L_86bba0;
L_86bb8d: /* 86bb8d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb90: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86bb92: lea edx, [ecx + ecx*2 + 9] */
  edx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bb96: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86bb99: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bb9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bb9e: jmp 0x86bba2 */
  goto L_86bba2;
L_86bba0: /* 86bba0: xor eax, eax */
  eax = 0;
L_86bba2: /* 86bba2: lea ecx, [ecx + ecx*2 + 9] */
  ecx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bba6: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
L_86bba9: /* 86bba9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bbac: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bbaf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bbb2: jmp 0x86bb20 */
  goto L_86bb20;
L_86bbb7: /* 86bbb7: xor eax, eax */
  eax = 0;
/* 86bbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbbb: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bbc1: /* 86bbc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bbc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bbc7: movzx eax, byte ptr [edx + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86bbcc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bbcf: mov ecx, dword ptr [ebx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 86bbd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd45: /* 86bd45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86bd53: /* 86bd53: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd5b: je 0x86bd67 */
  if (zf) goto L_86bd67;
L_86bd5d: /* 86bd5d: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd65: jne 0x86bd7c */
  if (!zf) goto L_86bd7c;
L_86bd67: /* 86bd67: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bd6a: mov dword ptr [ecx + 0x3f4], 0 */
  W32((uint32_t)(ecx + 0x3f4u), 0x0u);
/* 86bd74: call 0x6ca088 */
  esp -= 4; W32(esp, 0x86bd79u); SPILL(); f_6ca088(); if (g_unwind) return; RELOAD();
/* 86bd79: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
L_86bd7c: /* 86bd7c: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd84: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd8a: /* 86bd8a: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd92: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd98: /* 86bd98: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bd9a: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bd9e: jge 0x86be40 */
  if ((sf == of)) goto L_86be40;
L_86bda4: /* 86bda4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bda7: mov cl, byte ptr [eax + 0x150] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x150u))) & 0xffu);
/* 86bdad: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdaf: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bdb5: /* 86bdb5: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 86bdbb: xor esi, esi */
  esi = 0;
/* 86bdbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bdc0: /* 86bdc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdc2: je 0x86bddb */
  if (zf) goto L_86bddb;
L_86bdc4: /* 86bdc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bdc6: mov edi, dword ptr [ecx + 0x1c8] */
  edi = R32((uint32_t)(ecx + 0x1c8u));
/* 86bdcc: cmp edi, dword ptr [edx + 0x3bc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bdd2: jne 0x86bdd6 */
  if (!zf) goto L_86bdd6;
L_86bdd4: /* 86bdd4: mov esi, ecx */
  esi = ecx;
L_86bdd6: /* 86bdd6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bdd9: jmp 0x86bdc0 */
  goto L_86bdc0;
L_86bddb: /* 86bddb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bddd: jne 0x86be37 */
  if (!zf) goto L_86be37;
L_86bddf: /* 86bddf: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 86bde4: call 0x6c242d */
  esp -= 4; W32(esp, 0x86bde9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 86bde9: mov ecx, eax */
  ecx = eax;
/* 86bdeb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bdee: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86bdf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdf3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 86bdf7: je 0x86be09 */
  if (zf) goto L_86be09;
L_86bdf9: /* 86bdf9: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bdfc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bdfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bdff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86be00: call 0x6cc9dc */
  esp -= 4; W32(esp, 0x86be05u); SPILL(); f_6cc9dc(); if (g_unwind) return; RELOAD();
/* 86be05: mov esi, eax */
  esi = eax;
/* 86be07: jmp 0x86be0b */
  goto L_86be0b;
L_86be09: /* 86be09: xor esi, esi */
  esi = 0;
L_86be0b: /* 86be0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86be14: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86be18: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86be1eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86be1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be20: je 0x86be2f */
  if (zf) goto L_86be2f;
L_86be22: /* 86be22: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86be28: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86be2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86be2d: jmp 0x86be31 */
  goto L_86be31;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
L_86be31: /* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86be37: /* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
L_86be5d: /* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_86be60: /* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_86be63: /* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86bf19: /* 86bf19: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bf20: jmp 0x86be60 */
  goto L_86be60;
L_86bf25: /* 86bf25: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf2a: je 0x86c26a */
  if (zf) goto L_86c26a;
L_86bf30: /* 86bf30: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bf35: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf37: je 0x86bf4e */
  if (zf) goto L_86bf4e;
L_86bf39: /* 86bf39: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86bf3c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 86bf3f: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 86bf45: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf48: je 0x86be74 */
  if (zf) goto L_86be74;
L_86bf4e: /* 86bf4e: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 86bf51: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf53: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bf56: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf5c: /* 86bf5c: mov eax, dword ptr [eax + 0x280] */
  eax = R32((uint32_t)(eax + 0x280u));
/* 86bf62: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf64: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf6a: /* 86bf6a: cmp dword ptr [eax + 0x54], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x54u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf6d: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf73: /* 86bf73: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86bf76: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86bf7c: mov edx, ecx */
  edx = ecx;
/* 86bf7e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86bf81: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86bf84: mov ebx, 1 */
  ebx = 0x1u;
/* 86bf89: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 86bf8b: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86bf8e: test byte ptr [edx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf91: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bf94: jne 0x86be60 */
  if (!zf) goto L_86be60;
L_86bf9a: /* 86bf9a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bf9d: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 86bfa3: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 86bfa6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86bfa9: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86bfac: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 86bfaf: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 86bfb5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86bfb7: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bfbc: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bfc2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bfc4: mov ecx, eax */
  ecx = eax;
/* 86bfc6: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86bfcbu); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86bfcb: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86bfd1: mov ecx, dword ptr [ebp - 0x19c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86bfd7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bfda: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bfdd: mov eax, dword ptr [ebp - 0x1a0] */
  eax = R32((uint32_t)(ebp + 0xfffffe60u));
/* 86bfe3: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86bfe6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86bfe9: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 86bfec: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 86bfef: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86bff6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86bff9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bffc: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bfff: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c002: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c004: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c006: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c008: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c00b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c00d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c010: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c012: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c015: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c018: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c01b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c01e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c021: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c024: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c027: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c02a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c02d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c02f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c031: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c033: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c035: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c037: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c03a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c03d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c040: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c043: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c046: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c049: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c04c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c04f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c051: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c053: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c055: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c057: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c059: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c05c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c05f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c062: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c065: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c068: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c06b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c06e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c071: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c073: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c075: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c077: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c079: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c07b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c07d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c07f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c081: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c084: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c087: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c08a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c08d: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c090: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c093: mov dword ptr [ebp - 0x1a0], ecx */
  W32((uint32_t)(ebp + 0xfffffe60u), ecx);
/* 86c099: mov dword ptr [ebp - 0x1a4], eax */
  W32((uint32_t)(ebp + 0xfffffe5cu), eax);
/* 86c09f: mov dword ptr [ebp - 0x19c], edx */
  W32((uint32_t)(ebp + 0xfffffe64u), edx);
/* 86c0a5: xor ecx, ecx */
  ecx = 0;
/* 86c0a7: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c0b0: /* 86c0b0: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c0b6: jge 0x86c195 */
  if ((sf == of)) goto L_86c195;
L_86c0bc: /* 86c0bc: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86c0bf: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86c0c6: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86c0cd: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86c0d4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86c0d7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86c0da: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86c0dd: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86c0e0: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86c0e3: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86c0ea: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86c0ed: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c0f0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86c0f3: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c0f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c0fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0fc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c0ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c101: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c104: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c106: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c109: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c10c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c10f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c112: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c115: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c118: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c11b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c11e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c121: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c123: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c125: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c127: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c129: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c12b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c12e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c131: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c134: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c137: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c13a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c13d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c140: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c143: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c145: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c147: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c149: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c14b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c14d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c150: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c153: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c156: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c159: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c15c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c15f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c162: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c165: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c167: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c169: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c16f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c171: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c173: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c175: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c178: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c17b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c17e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c181: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c183: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c186: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c189: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c18c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86c18f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c190: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c195: /* 86c195: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c197: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 86c19d: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c1a2: fsub dword ptr [ebp - 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe88u)));
/* 86c1a8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 86c1ab: fsub dword ptr [ebp - 0x17c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe84u)));
/* 86c1b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86c1b3: fsub dword ptr [ebp - 0x180] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe80u)));
/* 86c1b9: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 86c1bf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86c1c1: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 86c1c7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 86c1c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c1cd: fmul dword ptr [ebp - 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 86c1d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86c1db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86c1dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86c1e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1e4: jp 0x86c1f1 */
  if (pf) goto L_86c1f1;
L_86c1e6: /* 86c1e6: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1ec: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86c1f1u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86c1f1: /* 86c1f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86c1f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86c1f4: lea eax, [ebp - 0x1b0] */
  eax = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1fa: call 0x86b060 */
  esp -= 4; W32(esp, 0x86c1ffu); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86c1ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c202: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c204: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c206: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c20b: mov esi, eax */
  esi = eax;
/* 86c20d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c213u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c213: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c215: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86c218: je 0x86c234 */
  if (zf) goto L_86c234;
L_86c21a: /* 86c21a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c21d: movzx edx, byte ptr [edx + ecx + 0x54] */
  edx = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86c222: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86c225: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 86c228: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86c22b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c22e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86c230: mov edx, eax */
  edx = eax;
/* 86c232: jmp 0x86c236 */
  goto L_86c236;
L_86c234: /* 86c234: xor edx, edx */
  edx = 0;
L_86c236: /* 86c236: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c239: movzx eax, byte ptr [eax + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx + 0x54u)));
/* 86c23e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86c244: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
/* 86c247: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 86c24a: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86c250: mov edx, ecx */
  edx = ecx;
/* 86c252: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86c255: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 86c258: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 86c25a: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86c25d: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86c25f: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86c261: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86c263: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 86c265: jmp 0x86be5d */
  goto L_86be5d;
L_86c26a: /* 86c26a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c26c: je 0x86be74 */
  if (zf) goto L_86be74;
L_86c272: /* 86c272: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c275: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86c278: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86c27e: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c281: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c287: /* 86c287: jmp 0x86be74 */
  goto L_86be74;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86b712(void) {
  LOAD_REGS();
  goto L_86b712;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86b712: /* 86b712: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b717: jne 0x86b7ad */
  if (!zf) goto L_86b7ad;
L_86b71d: /* 86b71d: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 86b723: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86b725: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86b727: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 86b72c: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* 86b731: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86b733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86b733: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86b736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b738: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86b73c: je 0x86b77c */
  if (zf) goto L_86b77c;
L_86b73e: /* 86b73e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86b741: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b744: movzx eax, byte ptr [edx + esi + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86b749: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b74a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b74b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b74e: mov eax, esp */
  eax = esp;
/* 86b750: mov ecx, esi */
  ecx = esi;
/* 86b752: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 86b754: mov edx, eax */
  edx = eax;
/* 86b756: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 86b758: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 86b75b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 86b75e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86b761: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86b764: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 86b767: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86b76a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 86b76d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86b76f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 86b772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b773: call 0x6cb136 */
  esp -= 4; W32(esp, 0x86b778u); SPILL(); f_6cb136(); if (g_unwind) return; RELOAD();
/* 86b778: mov edi, eax */
  edi = eax;
/* 86b77a: jmp 0x86b77e */
  goto L_86b77e;
L_86b77c: /* 86b77c: xor edi, edi */
  edi = 0;
L_86b77e: /* 86b77e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b780: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b782: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86b787: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86b78b: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 86b78e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86b794u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86b794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b796: je 0x86b7a5 */
  if (zf) goto L_86b7a5;
L_86b798: /* 86b798: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86b79e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86b7a0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86b7a3: jmp 0x86b7a7 */
  goto L_86b7a7;
L_86b7a5: /* 86b7a5: xor eax, eax */
  eax = 0;
L_86b7a7: /* 86b7a7: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86b7ad: /* 86b7ad: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b7b0: mov edx, dword ptr [ecx + 0x1d0] */
  edx = R32((uint32_t)(ecx + 0x1d0u));
/* 86b7b6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86b7b9: jmp 0x86be69 */
  goto L_86be69;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86b77c(void) {
  LOAD_REGS();
  goto L_86b77c;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86b77c: /* 86b77c: xor edi, edi */
  edi = 0;
/* 86b77e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b780: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b782: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86b787: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86b78b: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 86b78e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86b794u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86b794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b796: je 0x86b7a5 */
  if (zf) goto L_86b7a5;
L_86b798: /* 86b798: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86b79e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86b7a0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86b7a3: jmp 0x86b7a7 */
  goto L_86b7a7;
L_86b7a5: /* 86b7a5: xor eax, eax */
  eax = 0;
L_86b7a7: /* 86b7a7: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
/* 86b7ad: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b7b0: mov edx, dword ptr [ecx + 0x1d0] */
  edx = R32((uint32_t)(ecx + 0x1d0u));
/* 86b7b6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86b7b9: jmp 0x86be69 */
  goto L_86be69;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86b7a5(void) {
  LOAD_REGS();
  goto L_86b7a5;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86b7a5: /* 86b7a5: xor eax, eax */
  eax = 0;
/* 86b7a7: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
/* 86b7ad: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b7b0: mov edx, dword ptr [ecx + 0x1d0] */
  edx = R32((uint32_t)(ecx + 0x1d0u));
/* 86b7b6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86b7b9: jmp 0x86be69 */
  goto L_86be69;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86b7be(void) {
  LOAD_REGS();
  goto L_86b7be;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86b7be: /* 86b7be: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86b7c0: cmp dword ptr [ecx + 0x1c8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1c8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b7c6: je 0x86bf25 */
  if (zf) goto L_86bf25;
L_86b7cc: /* 86b7cc: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b7d1: je 0x86bf25 */
  if (zf) goto L_86bf25;
L_86b7d7: /* 86b7d7: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86b7dc: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b7de: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 86b7e5: je 0x86b7fc */
  if (zf) goto L_86b7fc;
L_86b7e7: /* 86b7e7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86b7ea: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86b7ed: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86b7f3: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b7f6: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b7fc: /* 86b7fc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b7ff: mov eax, esi */
  eax = esi;
/* 86b801: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86b803: movzx ecx, byte ptr [eax + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x55u)));
/* 86b807: add eax, 0x55 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x55u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b80a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b80b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86b80e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86b811: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86b816u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86b816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b817: call 0x6cb4ab */
  esp -= 4; W32(esp, 0x86b81cu); SPILL(); f_6cb4ab(); if (g_unwind) return; RELOAD();
/* 86b81c: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 86b81f: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 86b822: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86b825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b827: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b82d: /* 86b82d: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 86b833: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b835: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b83b: /* 86b83b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 86b83e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b840: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b846: /* 86b846: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86b849: mov esi, dword ptr [ebx + 0x328] */
  esi = R32((uint32_t)(ebx + 0x328u));
/* 86b84f: mov edx, ecx */
  edx = ecx;
/* 86b851: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86b854: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86b857: mov eax, 1 */
  eax = 0x1u;
/* 86b85c: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 86b85e: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86b861: mov cl, byte ptr [edx + esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi))) & 0xffu);
/* 86b864: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86b867: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b869: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b86c: jne 0x86bf19 */
  if (!zf) goto L_86bf19;
L_86b872: /* 86b872: mov cl, byte ptr [esi + 0x54] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x54u))) & 0xffu);
/* 86b875: cmp cl, byte ptr [esi + 0x55] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x55u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86b878: je 0x86bf19 */
  if (zf) goto L_86bf19;
L_86b87e: /* 86b87e: mov edx, dword ptr [eax + 0x280] */
  edx = R32((uint32_t)(eax + 0x280u));
/* 86b884: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 86b887: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86b88a: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 86b88d: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 86b890: imul edx, edx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x148u);
  edx = (uint32_t)r;
  }
/* 86b896: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86b898: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86b89d: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 86b8a3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86b8a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86b8a8: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 86b8ab: mov ecx, eax */
  ecx = eax;
/* 86b8ad: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 86b8b0: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86b8b5u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86b8b5: mov ecx, dword ptr [ebp - 0x1a0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe60u));
/* 86b8bb: mov edx, dword ptr [ebp - 0x19c] */
  edx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86b8c1: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b8c4: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86b8c7: mov eax, dword ptr [ebp - 0x1a4] */
  eax = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86b8cd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 86b8d0: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 86b8d3: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 86b8d6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86b8d9: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86b8e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86b8e3: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86b8e6: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b8e9: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86b8ec: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8ee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86b8f0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8f2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86b8f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8f7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86b8fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8fc: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86b8ff: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b902: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86b905: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b908: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86b90b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b90e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86b911: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b914: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86b917: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b919: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b91b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b91d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b91f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b921: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b924: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86b927: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b92a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86b92d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b930: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86b933: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b936: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86b939: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b93b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b93d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b93f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b941: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b943: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b946: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86b949: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b94c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86b94f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b952: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86b955: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b958: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86b95b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b95d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b95f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b961: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b963: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b965: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b967: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86b969: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86b96b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86b96e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86b971: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86b974: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86b977: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86b97a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86b97d: mov dword ptr [ebp - 0x1a4], ecx */
  W32((uint32_t)(ebp + 0xfffffe5cu), ecx);
/* 86b983: mov dword ptr [ebp - 0x1a0], edx */
  W32((uint32_t)(ebp + 0xfffffe60u), edx);
/* 86b989: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 86b98f: xor ecx, ecx */
  ecx = 0;
L_86b991: /* 86b991: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b997: jge 0x86ba76 */
  if ((sf == of)) goto L_86ba76;
L_86b99d: /* 86b99d: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86b9a0: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86b9a7: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86b9ae: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86b9b5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86b9b8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86b9bb: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86b9be: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86b9c1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86b9c4: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86b9cb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86b9ce: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86b9d1: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b9d4: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86b9d7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9d9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86b9db: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9dd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86b9e0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9e2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86b9e5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9e7: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86b9ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9ed: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86b9f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9f3: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86b9f6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9f9: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86b9fc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9ff: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86ba02: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba04: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba06: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba08: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba0c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba0f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86ba12: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba15: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86ba18: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba1b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86ba1e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba21: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86ba24: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba26: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba28: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba2a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba2c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba2e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba31: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86ba34: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba37: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86ba3a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba3d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86ba40: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba43: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86ba46: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba48: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba4a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba4c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba4e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba50: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba52: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86ba54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86ba56: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86ba59: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86ba5c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86ba5f: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86ba62: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86ba64: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86ba67: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86ba6a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86ba6d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86ba70: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86ba71: jmp 0x86b991 */
  goto L_86b991;
L_86ba76: /* 86ba76: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86ba79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba7b: jne 0x86ba88 */
  if (!zf) goto L_86ba88;
L_86ba7d: /* 86ba7d: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86ba83: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86ba88u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86ba88: /* 86ba88: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86ba8b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba8d: jne 0x86bd53 */
  if (!zf) goto L_86bd53;
L_86ba93: /* 86ba93: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86ba96: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 86ba99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ba9a: mov ecx, esi */
  ecx = esi;
/* 86ba9c: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86baa1u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86baa1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86baa3: mov edx, dword ptr [ecx + 0x1c8] */
  edx = R32((uint32_t)(ecx + 0x1c8u));
/* 86baa9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86baaa: mov ecx, esi */
  ecx = esi;
/* 86baac: mov edi, eax */
  edi = eax;
/* 86baae: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86bab3u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86bab3: test byte ptr [edi + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86baba: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bac0: /* 86bac0: test byte ptr [eax + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bac7: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bacd: /* 86bacd: xor ecx, ecx */
  ecx = 0;
/* 86bacf: nop  */
L_86bad0: /* 86bad0: cmp ecx, dword ptr [eax + 0x3a0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3a0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bad6: jge 0x86baea */
  if ((sf == of)) goto L_86baea;
L_86bad8: /* 86bad8: mov edx, dword ptr [eax + 0x39c] */
  edx = R32((uint32_t)(eax + 0x39cu));
/* 86bade: cmp edi, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bae1: je 0x86bd47 */
  if (zf) goto L_86bd47;
L_86bae7: /* 86bae7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86bae8: jmp 0x86bad0 */
  goto L_86bad0;
L_86baea: /* 86baea: xor eax, eax */
  eax = 0;
/* 86baec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86baee: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86baf4: /* 86baf4: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86bafa: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86baffu); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86baff: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86bb02: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bb05: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bb08: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86bb0b: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86bb0e: movzx eax, byte ptr [ecx + edx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx + 0x54u)));
/* 86bb13: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bb16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bb19: mov ecx, dword ptr [ebx + eax*4] */
  ecx = R32((uint32_t)(ebx + eax*4));
/* 86bb1c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86bb1f: nop  */
L_86bb20: /* 86bb20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb25: je 0x86bbb7 */
  if (zf) goto L_86bbb7;
L_86bb2b: /* 86bb2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bb31: mov edi, esp */
  edi = esp;
/* 86bb33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bb38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bb3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bb46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bb48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bb49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bb4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bb4e: lea ecx, [ebp - 0x2f8] */
  ecx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb54: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86bb59u); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86bb59: fcom dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
/* 86bb5c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 86bb5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb64: je 0x86bd45 */
  if (zf) goto L_86bd45;
L_86bb6a: /* 86bb6a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86bb70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb72: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb75: jne 0x86bba9 */
  if (!zf) goto L_86bba9;
L_86bb77: /* 86bb77: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb79: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb7b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bb80: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bb86u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bb86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb88: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bb8b: je 0x86bba0 */
  if (zf) goto L_86bba0;
L_86bb8d: /* 86bb8d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb90: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86bb92: lea edx, [ecx + ecx*2 + 9] */
  edx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bb96: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86bb99: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bb9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bb9e: jmp 0x86bba2 */
  goto L_86bba2;
L_86bba0: /* 86bba0: xor eax, eax */
  eax = 0;
L_86bba2: /* 86bba2: lea ecx, [ecx + ecx*2 + 9] */
  ecx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bba6: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
L_86bba9: /* 86bba9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bbac: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bbaf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bbb2: jmp 0x86bb20 */
  goto L_86bb20;
L_86bbb7: /* 86bbb7: xor eax, eax */
  eax = 0;
/* 86bbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbbb: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bbc1: /* 86bbc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bbc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bbc7: movzx eax, byte ptr [edx + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86bbcc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bbcf: mov ecx, dword ptr [ebx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 86bbd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd45: /* 86bd45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86bd53: /* 86bd53: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd5b: je 0x86bd67 */
  if (zf) goto L_86bd67;
L_86bd5d: /* 86bd5d: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd65: jne 0x86bd7c */
  if (!zf) goto L_86bd7c;
L_86bd67: /* 86bd67: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bd6a: mov dword ptr [ecx + 0x3f4], 0 */
  W32((uint32_t)(ecx + 0x3f4u), 0x0u);
/* 86bd74: call 0x6ca088 */
  esp -= 4; W32(esp, 0x86bd79u); SPILL(); f_6ca088(); if (g_unwind) return; RELOAD();
/* 86bd79: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
L_86bd7c: /* 86bd7c: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd84: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd8a: /* 86bd8a: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd92: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd98: /* 86bd98: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bd9a: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bd9e: jge 0x86be40 */
  if ((sf == of)) goto L_86be40;
L_86bda4: /* 86bda4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bda7: mov cl, byte ptr [eax + 0x150] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x150u))) & 0xffu);
/* 86bdad: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdaf: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bdb5: /* 86bdb5: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 86bdbb: xor esi, esi */
  esi = 0;
/* 86bdbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bdc0: /* 86bdc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdc2: je 0x86bddb */
  if (zf) goto L_86bddb;
L_86bdc4: /* 86bdc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bdc6: mov edi, dword ptr [ecx + 0x1c8] */
  edi = R32((uint32_t)(ecx + 0x1c8u));
/* 86bdcc: cmp edi, dword ptr [edx + 0x3bc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bdd2: jne 0x86bdd6 */
  if (!zf) goto L_86bdd6;
L_86bdd4: /* 86bdd4: mov esi, ecx */
  esi = ecx;
L_86bdd6: /* 86bdd6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bdd9: jmp 0x86bdc0 */
  goto L_86bdc0;
L_86bddb: /* 86bddb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bddd: jne 0x86be37 */
  if (!zf) goto L_86be37;
L_86bddf: /* 86bddf: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 86bde4: call 0x6c242d */
  esp -= 4; W32(esp, 0x86bde9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 86bde9: mov ecx, eax */
  ecx = eax;
/* 86bdeb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bdee: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86bdf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdf3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 86bdf7: je 0x86be09 */
  if (zf) goto L_86be09;
L_86bdf9: /* 86bdf9: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bdfc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bdfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bdff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86be00: call 0x6cc9dc */
  esp -= 4; W32(esp, 0x86be05u); SPILL(); f_6cc9dc(); if (g_unwind) return; RELOAD();
/* 86be05: mov esi, eax */
  esi = eax;
/* 86be07: jmp 0x86be0b */
  goto L_86be0b;
L_86be09: /* 86be09: xor esi, esi */
  esi = 0;
L_86be0b: /* 86be0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86be14: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86be18: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86be1eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86be1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be20: je 0x86be2f */
  if (zf) goto L_86be2f;
L_86be22: /* 86be22: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86be28: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86be2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86be2d: jmp 0x86be31 */
  goto L_86be31;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
L_86be31: /* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86be37: /* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
L_86be5d: /* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_86be60: /* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_86be63: /* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86bf19: /* 86bf19: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bf20: jmp 0x86be60 */
  goto L_86be60;
L_86bf25: /* 86bf25: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf2a: je 0x86c26a */
  if (zf) goto L_86c26a;
L_86bf30: /* 86bf30: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bf35: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf37: je 0x86bf4e */
  if (zf) goto L_86bf4e;
L_86bf39: /* 86bf39: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86bf3c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 86bf3f: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 86bf45: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf48: je 0x86be74 */
  if (zf) goto L_86be74;
L_86bf4e: /* 86bf4e: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 86bf51: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf53: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bf56: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf5c: /* 86bf5c: mov eax, dword ptr [eax + 0x280] */
  eax = R32((uint32_t)(eax + 0x280u));
/* 86bf62: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf64: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf6a: /* 86bf6a: cmp dword ptr [eax + 0x54], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x54u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf6d: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf73: /* 86bf73: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86bf76: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86bf7c: mov edx, ecx */
  edx = ecx;
/* 86bf7e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86bf81: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86bf84: mov ebx, 1 */
  ebx = 0x1u;
/* 86bf89: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 86bf8b: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86bf8e: test byte ptr [edx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf91: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bf94: jne 0x86be60 */
  if (!zf) goto L_86be60;
L_86bf9a: /* 86bf9a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bf9d: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 86bfa3: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 86bfa6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86bfa9: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86bfac: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 86bfaf: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 86bfb5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86bfb7: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bfbc: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bfc2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bfc4: mov ecx, eax */
  ecx = eax;
/* 86bfc6: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86bfcbu); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86bfcb: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86bfd1: mov ecx, dword ptr [ebp - 0x19c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86bfd7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bfda: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bfdd: mov eax, dword ptr [ebp - 0x1a0] */
  eax = R32((uint32_t)(ebp + 0xfffffe60u));
/* 86bfe3: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86bfe6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86bfe9: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 86bfec: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 86bfef: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86bff6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86bff9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bffc: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bfff: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c002: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c004: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c006: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c008: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c00b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c00d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c010: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c012: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c015: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c018: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c01b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c01e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c021: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c024: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c027: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c02a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c02d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c02f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c031: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c033: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c035: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c037: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c03a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c03d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c040: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c043: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c046: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c049: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c04c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c04f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c051: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c053: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c055: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c057: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c059: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c05c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c05f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c062: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c065: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c068: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c06b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c06e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c071: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c073: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c075: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c077: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c079: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c07b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c07d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c07f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c081: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c084: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c087: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c08a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c08d: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c090: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c093: mov dword ptr [ebp - 0x1a0], ecx */
  W32((uint32_t)(ebp + 0xfffffe60u), ecx);
/* 86c099: mov dword ptr [ebp - 0x1a4], eax */
  W32((uint32_t)(ebp + 0xfffffe5cu), eax);
/* 86c09f: mov dword ptr [ebp - 0x19c], edx */
  W32((uint32_t)(ebp + 0xfffffe64u), edx);
/* 86c0a5: xor ecx, ecx */
  ecx = 0;
/* 86c0a7: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c0b0: /* 86c0b0: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c0b6: jge 0x86c195 */
  if ((sf == of)) goto L_86c195;
L_86c0bc: /* 86c0bc: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86c0bf: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86c0c6: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86c0cd: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86c0d4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86c0d7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86c0da: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86c0dd: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86c0e0: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86c0e3: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86c0ea: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86c0ed: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c0f0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86c0f3: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c0f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c0fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0fc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c0ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c101: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c104: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c106: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c109: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c10c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c10f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c112: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c115: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c118: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c11b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c11e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c121: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c123: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c125: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c127: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c129: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c12b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c12e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c131: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c134: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c137: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c13a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c13d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c140: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c143: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c145: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c147: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c149: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c14b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c14d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c150: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c153: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c156: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c159: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c15c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c15f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c162: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c165: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c167: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c169: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c16f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c171: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c173: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c175: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c178: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c17b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c17e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c181: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c183: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c186: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c189: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c18c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86c18f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c190: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c195: /* 86c195: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c197: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 86c19d: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c1a2: fsub dword ptr [ebp - 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe88u)));
/* 86c1a8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 86c1ab: fsub dword ptr [ebp - 0x17c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe84u)));
/* 86c1b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86c1b3: fsub dword ptr [ebp - 0x180] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe80u)));
/* 86c1b9: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 86c1bf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86c1c1: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 86c1c7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 86c1c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c1cd: fmul dword ptr [ebp - 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 86c1d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86c1db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86c1dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86c1e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1e4: jp 0x86c1f1 */
  if (pf) goto L_86c1f1;
L_86c1e6: /* 86c1e6: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1ec: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86c1f1u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86c1f1: /* 86c1f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86c1f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86c1f4: lea eax, [ebp - 0x1b0] */
  eax = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1fa: call 0x86b060 */
  esp -= 4; W32(esp, 0x86c1ffu); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86c1ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c202: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c204: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c206: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c20b: mov esi, eax */
  esi = eax;
/* 86c20d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c213u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c213: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c215: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86c218: je 0x86c234 */
  if (zf) goto L_86c234;
L_86c21a: /* 86c21a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c21d: movzx edx, byte ptr [edx + ecx + 0x54] */
  edx = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86c222: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86c225: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 86c228: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86c22b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c22e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86c230: mov edx, eax */
  edx = eax;
/* 86c232: jmp 0x86c236 */
  goto L_86c236;
L_86c234: /* 86c234: xor edx, edx */
  edx = 0;
L_86c236: /* 86c236: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c239: movzx eax, byte ptr [eax + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx + 0x54u)));
/* 86c23e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86c244: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
/* 86c247: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 86c24a: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86c250: mov edx, ecx */
  edx = ecx;
/* 86c252: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86c255: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 86c258: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 86c25a: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86c25d: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86c25f: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86c261: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86c263: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 86c265: jmp 0x86be5d */
  goto L_86be5d;
L_86c26a: /* 86c26a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c26c: je 0x86be74 */
  if (zf) goto L_86be74;
L_86c272: /* 86c272: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c275: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86c278: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86c27e: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c281: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c287: /* 86c287: jmp 0x86be74 */
  goto L_86be74;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86ba76(void) {
  LOAD_REGS();
  goto L_86ba76;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86ba76: /* 86ba76: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86ba79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba7b: jne 0x86ba88 */
  if (!zf) goto L_86ba88;
L_86ba7d: /* 86ba7d: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86ba83: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86ba88u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86ba88: /* 86ba88: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86ba8b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba8d: jne 0x86bd53 */
  if (!zf) goto L_86bd53;
L_86ba93: /* 86ba93: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86ba96: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 86ba99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ba9a: mov ecx, esi */
  ecx = esi;
/* 86ba9c: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86baa1u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86baa1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86baa3: mov edx, dword ptr [ecx + 0x1c8] */
  edx = R32((uint32_t)(ecx + 0x1c8u));
/* 86baa9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86baaa: mov ecx, esi */
  ecx = esi;
/* 86baac: mov edi, eax */
  edi = eax;
/* 86baae: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86bab3u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86bab3: test byte ptr [edi + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86baba: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bac0: /* 86bac0: test byte ptr [eax + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bac7: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bacd: /* 86bacd: xor ecx, ecx */
  ecx = 0;
/* 86bacf: nop  */
L_86bad0: /* 86bad0: cmp ecx, dword ptr [eax + 0x3a0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3a0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bad6: jge 0x86baea */
  if ((sf == of)) goto L_86baea;
L_86bad8: /* 86bad8: mov edx, dword ptr [eax + 0x39c] */
  edx = R32((uint32_t)(eax + 0x39cu));
/* 86bade: cmp edi, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bae1: je 0x86bd47 */
  if (zf) goto L_86bd47;
L_86bae7: /* 86bae7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86bae8: jmp 0x86bad0 */
  goto L_86bad0;
L_86baea: /* 86baea: xor eax, eax */
  eax = 0;
/* 86baec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86baee: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86baf4: /* 86baf4: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86bafa: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86baffu); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86baff: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86bb02: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bb05: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bb08: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86bb0b: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86bb0e: movzx eax, byte ptr [ecx + edx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx + 0x54u)));
/* 86bb13: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bb16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bb19: mov ecx, dword ptr [ebx + eax*4] */
  ecx = R32((uint32_t)(ebx + eax*4));
/* 86bb1c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86bb1f: nop  */
L_86bb20: /* 86bb20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb25: je 0x86bbb7 */
  if (zf) goto L_86bbb7;
L_86bb2b: /* 86bb2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bb31: mov edi, esp */
  edi = esp;
/* 86bb33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bb38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bb3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bb46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bb48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bb49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bb4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bb4e: lea ecx, [ebp - 0x2f8] */
  ecx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb54: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86bb59u); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86bb59: fcom dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
/* 86bb5c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 86bb5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb64: je 0x86bd45 */
  if (zf) goto L_86bd45;
L_86bb6a: /* 86bb6a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86bb70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb72: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb75: jne 0x86bba9 */
  if (!zf) goto L_86bba9;
L_86bb77: /* 86bb77: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb79: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb7b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bb80: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bb86u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bb86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb88: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bb8b: je 0x86bba0 */
  if (zf) goto L_86bba0;
L_86bb8d: /* 86bb8d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb90: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86bb92: lea edx, [ecx + ecx*2 + 9] */
  edx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bb96: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86bb99: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bb9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bb9e: jmp 0x86bba2 */
  goto L_86bba2;
L_86bba0: /* 86bba0: xor eax, eax */
  eax = 0;
L_86bba2: /* 86bba2: lea ecx, [ecx + ecx*2 + 9] */
  ecx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bba6: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
L_86bba9: /* 86bba9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bbac: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bbaf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bbb2: jmp 0x86bb20 */
  goto L_86bb20;
L_86bbb7: /* 86bbb7: xor eax, eax */
  eax = 0;
/* 86bbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbbb: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bbc1: /* 86bbc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bbc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bbc7: movzx eax, byte ptr [edx + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86bbcc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bbcf: mov ecx, dword ptr [ebx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 86bbd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd45: /* 86bd45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86bd53: /* 86bd53: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd5b: je 0x86bd67 */
  if (zf) goto L_86bd67;
L_86bd5d: /* 86bd5d: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd65: jne 0x86bd7c */
  if (!zf) goto L_86bd7c;
L_86bd67: /* 86bd67: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bd6a: mov dword ptr [ecx + 0x3f4], 0 */
  W32((uint32_t)(ecx + 0x3f4u), 0x0u);
/* 86bd74: call 0x6ca088 */
  esp -= 4; W32(esp, 0x86bd79u); SPILL(); f_6ca088(); if (g_unwind) return; RELOAD();
/* 86bd79: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
L_86bd7c: /* 86bd7c: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd84: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd8a: /* 86bd8a: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd92: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd98: /* 86bd98: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bd9a: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bd9e: jge 0x86be40 */
  if ((sf == of)) goto L_86be40;
L_86bda4: /* 86bda4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bda7: mov cl, byte ptr [eax + 0x150] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x150u))) & 0xffu);
/* 86bdad: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdaf: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bdb5: /* 86bdb5: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 86bdbb: xor esi, esi */
  esi = 0;
/* 86bdbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bdc0: /* 86bdc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdc2: je 0x86bddb */
  if (zf) goto L_86bddb;
L_86bdc4: /* 86bdc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bdc6: mov edi, dword ptr [ecx + 0x1c8] */
  edi = R32((uint32_t)(ecx + 0x1c8u));
/* 86bdcc: cmp edi, dword ptr [edx + 0x3bc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bdd2: jne 0x86bdd6 */
  if (!zf) goto L_86bdd6;
L_86bdd4: /* 86bdd4: mov esi, ecx */
  esi = ecx;
L_86bdd6: /* 86bdd6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bdd9: jmp 0x86bdc0 */
  goto L_86bdc0;
L_86bddb: /* 86bddb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bddd: jne 0x86be37 */
  if (!zf) goto L_86be37;
L_86bddf: /* 86bddf: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 86bde4: call 0x6c242d */
  esp -= 4; W32(esp, 0x86bde9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 86bde9: mov ecx, eax */
  ecx = eax;
/* 86bdeb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bdee: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86bdf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdf3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 86bdf7: je 0x86be09 */
  if (zf) goto L_86be09;
L_86bdf9: /* 86bdf9: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bdfc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bdfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bdff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86be00: call 0x6cc9dc */
  esp -= 4; W32(esp, 0x86be05u); SPILL(); f_6cc9dc(); if (g_unwind) return; RELOAD();
/* 86be05: mov esi, eax */
  esi = eax;
/* 86be07: jmp 0x86be0b */
  goto L_86be0b;
L_86be09: /* 86be09: xor esi, esi */
  esi = 0;
L_86be0b: /* 86be0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86be14: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86be18: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86be1eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86be1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be20: je 0x86be2f */
  if (zf) goto L_86be2f;
L_86be22: /* 86be22: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86be28: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86be2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86be2d: jmp 0x86be31 */
  goto L_86be31;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
L_86be31: /* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86be37: /* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86baea(void) {
  LOAD_REGS();
  goto L_86baea;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86baea: /* 86baea: xor eax, eax */
  eax = 0;
/* 86baec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86baee: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86baf4: /* 86baf4: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86bafa: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86baffu); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86baff: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86bb02: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bb05: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bb08: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86bb0b: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86bb0e: movzx eax, byte ptr [ecx + edx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx + 0x54u)));
/* 86bb13: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bb16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bb19: mov ecx, dword ptr [ebx + eax*4] */
  ecx = R32((uint32_t)(ebx + eax*4));
/* 86bb1c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86bb1f: nop  */
L_86bb20: /* 86bb20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb25: je 0x86bbb7 */
  if (zf) goto L_86bbb7;
L_86bb2b: /* 86bb2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bb31: mov edi, esp */
  edi = esp;
/* 86bb33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bb38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bb3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bb46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bb48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bb49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bb4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bb4e: lea ecx, [ebp - 0x2f8] */
  ecx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb54: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86bb59u); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86bb59: fcom dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
/* 86bb5c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 86bb5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb64: je 0x86bd45 */
  if (zf) goto L_86bd45;
L_86bb6a: /* 86bb6a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86bb70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb72: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb75: jne 0x86bba9 */
  if (!zf) goto L_86bba9;
L_86bb77: /* 86bb77: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb79: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb7b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bb80: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bb86u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bb86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb88: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bb8b: je 0x86bba0 */
  if (zf) goto L_86bba0;
L_86bb8d: /* 86bb8d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb90: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86bb92: lea edx, [ecx + ecx*2 + 9] */
  edx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bb96: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86bb99: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bb9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bb9e: jmp 0x86bba2 */
  goto L_86bba2;
L_86bba0: /* 86bba0: xor eax, eax */
  eax = 0;
L_86bba2: /* 86bba2: lea ecx, [ecx + ecx*2 + 9] */
  ecx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bba6: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
L_86bba9: /* 86bba9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bbac: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bbaf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bbb2: jmp 0x86bb20 */
  goto L_86bb20;
L_86bbb7: /* 86bbb7: xor eax, eax */
  eax = 0;
/* 86bbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbbb: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bbc1: /* 86bbc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bbc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bbc7: movzx eax, byte ptr [edx + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86bbcc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bbcf: mov ecx, dword ptr [ebx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 86bbd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd45: /* 86bd45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bba0(void) {
  LOAD_REGS();
  goto L_86bba0;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bb20: /* 86bb20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb25: je 0x86bbb7 */
  if (zf) goto L_86bbb7;
L_86bb2b: /* 86bb2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bb31: mov edi, esp */
  edi = esp;
/* 86bb33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bb38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bb3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bb46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bb48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bb49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bb4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bb4e: lea ecx, [ebp - 0x2f8] */
  ecx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb54: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86bb59u); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86bb59: fcom dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
/* 86bb5c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 86bb5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb64: je 0x86bd45 */
  if (zf) goto L_86bd45;
L_86bb6a: /* 86bb6a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86bb70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb72: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb75: jne 0x86bba9 */
  if (!zf) goto L_86bba9;
L_86bb77: /* 86bb77: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb79: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb7b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bb80: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bb86u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bb86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb88: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bb8b: je 0x86bba0 */
  if (zf) goto L_86bba0;
L_86bb8d: /* 86bb8d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb90: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86bb92: lea edx, [ecx + ecx*2 + 9] */
  edx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bb96: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86bb99: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bb9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bb9e: jmp 0x86bba2 */
  goto L_86bba2;
L_86bba0: /* 86bba0: xor eax, eax */
  eax = 0;
L_86bba2: /* 86bba2: lea ecx, [ecx + ecx*2 + 9] */
  ecx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bba6: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
L_86bba9: /* 86bba9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bbac: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bbaf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bbb2: jmp 0x86bb20 */
  goto L_86bb20;
L_86bbb7: /* 86bbb7: xor eax, eax */
  eax = 0;
/* 86bbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbbb: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bbc1: /* 86bbc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bbc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bbc7: movzx eax, byte ptr [edx + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86bbcc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bbcf: mov ecx, dword ptr [ebx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 86bbd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd45: /* 86bd45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bbb7(void) {
  LOAD_REGS();
  goto L_86bbb7;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bbb7: /* 86bbb7: xor eax, eax */
  eax = 0;
/* 86bbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbbb: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bbc1: /* 86bbc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bbc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bbc7: movzx eax, byte ptr [edx + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86bbcc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bbcf: mov ecx, dword ptr [ebx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 86bbd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bc28(void) {
  LOAD_REGS();
  goto L_86bc28;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bc8f(void) {
  LOAD_REGS();
  goto L_86bc8f;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bca8(void) {
  LOAD_REGS();
  goto L_86bca8;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}
